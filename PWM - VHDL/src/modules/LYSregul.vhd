library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity LYSregul is
    Port ( BTN3 : in  STD_LOGIC;
           MClk : in  STD_LOGIC;
           SW : in  STD_LOGIC_VECTOR (7 downto 0);
           LD : out  STD_LOGIC);
end LYSregul;

architecture Behavioral of LYSregul is
signal ClkS: STD_LOGIC;


begin
U1: entity work.DivClk
port map (
TimeP => 4,
Reset => BTN3,
Clk => MClk,
Clk1 => ClkS);


U2: entity work.PWMmodule
port map (
clk => ClkS,
SigAmpl => SW,
Reset => BTN3,
PWMout => LD);

end Behavioral;

