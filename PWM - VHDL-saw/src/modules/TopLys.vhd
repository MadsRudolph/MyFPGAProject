----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:28:58 05/05/2025 
-- Design Name: 
-- Module Name:    TopLys - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity TopLys is
    Port ( BTN3 : in  STD_LOGIC;
           MClk : in  STD_LOGIC;
           LD : out  STD_LOGIC);
end TopLys;

architecture Behavioral of TopLys is
signal SigAmpl_S: STD_LOGIC_VECTOR(7 downto 0):= (others => '0');
signal PWMcnt: STD_LOGIC_VECTOR(7 downto 0) := (others => '0');

begin


LYSregul: entity work.LYSregul
port map (
Reset => BTN3,
MClk => MClk,
LD => LD,
Input => SigAmpl_S); 

Sawtooth: entity work.Sawtooth
port map (
Reset => BTN3,
Clk => MClk,
SigAmpl => SigAmpl_S);




end Behavioral;

