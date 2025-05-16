library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FSM_TB is
end FSM_TB;

architecture sim of FSM_TB is

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
    signal Clk   : STD_LOGIC := '0';
    signal X     : STD_LOGIC_VECTOR(1 downto 0) := "10";
    signal Z     : STD_LOGIC_VECTOR(1 downto 0);

begin

    -- Instantiate the FSM
    DUT: ENT3
        port map (
            Reset => Reset,
            Clk   => Clk,
            X     => X,
            Z     => Z
        );

    -- Clock process: 20ns period
    clk_process : process
    begin
        while true loop
            Clk <= '0';
            wait for 10 ns;
            Clk <= '1';
            wait for 10 ns;
        end loop;
    end process;

    -- Stimulus process
    stim_process : process
    begin
        -- === Initial state ===
        wait for 5 ns;

        -- === t1: Falling edge: assert reset ===
        wait until falling_edge(Clk); -- ~10ns
        Reset <= '1';

        -- === t2: Falling edge: release reset ===
        wait until falling_edge(Clk); -- ~30ns
        Reset <= '0';
        X <= "00";

        -- === t3: X = 00 ===
        wait until falling_edge(Clk); -- ~50ns

        -- === t4: X = 01 ===
        X <= "01";
        wait until falling_edge(Clk); -- ~70ns

        -- === t5: X = 00 ===
        X <= "00";
        wait until falling_edge(Clk); -- ~90ns

        -- === t6: X = 01 ===
        X <= "01";
        wait until falling_edge(Clk); -- ~110ns

        wait; -- end of simulation
    end process;

end sim;
