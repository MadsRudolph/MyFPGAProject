library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ENT3_tb is
end ENT3_tb;

architecture TB of ENT3_tb is
    signal Reset : STD_LOGIC := '1';
    signal Clk   : STD_LOGIC := '0';
    signal X     : STD_LOGIC_VECTOR(1 downto 0) := "00";
    signal Z     : STD_LOGIC_VECTOR(1 downto 0);

    component ENT3
        Port ( Reset : in STD_LOGIC;
               Clk   : in STD_LOGIC;
               X     : in STD_LOGIC_VECTOR(1 downto 0);
               Z     : out STD_LOGIC_VECTOR(1 downto 0) );
    end component;

begin
    uut: ENT3 port map (Reset => Reset, Clk => Clk, X => X, Z => Z);

    clk_proc: process
    begin
        Clk <= not Clk;
        wait for 10 ns;
    end process;

    stim_proc: process
    begin
        wait for 20 ns;
        Reset <= '0';

        X <= "11"; wait for 20 ns;
        X <= "00"; wait for 20 ns;
        X <= "10"; wait for 20 ns;
        X <= "11"; wait for 20 ns;
        X <= "01"; wait for 20 ns;
        wait;
    end process;
end TB;