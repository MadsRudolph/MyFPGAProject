library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ENT3_tb is
end ENT3_tb;

architecture sim of ENT3_tb is

    -- Component Declaration
    component ENT3
        Port (
            Reset : in  STD_LOGIC;
            Clk   : in  STD_LOGIC;
            X     : in  STD_LOGIC_VECTOR(1 downto 0);
            Z     : out STD_LOGIC_VECTOR(1 downto 0)
        );
    end component;

    -- Signals
    signal Reset : STD_LOGIC := '0';
    signal Clk   : STD_LOGIC := '1';
    signal X     : STD_LOGIC_VECTOR(1 downto 0) := "10";
    signal Z     : STD_LOGIC_VECTOR(1 downto 0);

    -- Force internal signal for state (simulation-only trick)
    signal dummy_State : STD_LOGIC := '0';

begin

    -- UUT instantiation
    UUT: ENT3
        port map (
            Reset => Reset,
            Clk   => Clk,
            X     => X,
            Z     => Z
        );

    -- Clock Generation (20 ns period)
    clk_proc : process
    begin
        while true loop
            Clk <= '1';
            wait for 10 ns;
            Clk <= '0';
            wait for 10 ns;
        end loop;
    end process;

    -- Stimulus Process
    stim_proc : process
    begin
        -- Force state = S2 (assumes access or modification in waveform/simulator, not normally synthesizable)
        wait for 5 ns;
        report "Forcing state to S2 (manually in simulation)" severity note;

        -- Allow one falling edge at t = 10ns
        wait until falling_edge(Clk); -- t = 10ns
        Reset <= '1';                 -- Reset asserted
        wait for 5 ns;
        Reset <= '0';                 -- Release reset

        -- X = 00 from next falling edge to 4 cycles
        X <= "00";
        wait until falling_edge(Clk); -- t = 30ns
        wait until falling_edge(Clk); -- t = 50ns

        -- X = 01
        X <= "01";
        wait until falling_edge(Clk); -- t = 70ns

        -- X = 00
        X <= "00";
        wait until falling_edge(Clk); -- t = 90ns

        -- X = 01
        X <= "01";
        wait until falling_edge(Clk); -- t = 110ns

        wait; -- stop simulation
    end process;

end sim;
