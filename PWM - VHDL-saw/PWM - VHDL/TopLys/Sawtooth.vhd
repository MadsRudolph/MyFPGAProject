----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:32:05 05/05/2025 
-- Design Name: 
-- Module Name:    Sawtooth - Behavioral 
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
use IEEE.STD_LOGIC_unsigned.ALL;


entity Sawtooth is
    port ( Reset: in  STD_LOGIC;
           Clk: in  STD_LOGIC;
			  SigAmpl: out STD_LOGIC_VECTOR (7 downto 0));
end Sawtooth;

architecture Behavioral of Sawtooth is
signal ClkS: STD_LOGIC;
signal SigS: STD_LOGIC_VECTOR(7 downto 0):= (others => '0');
begin

SigCnt: entity work.DivClk
port map (
TimeP => 390625,
Reset => Reset,
Clk => Clk,
Clk1 => ClkS);

Saw: process(ClkS)
begin
if reset ='1' then
SigS <= "00000000";
elsif RISING_EDGE(ClkS) then
SigS <= SigS +'1';
end if;
end process;

SigAmpl <= SigS;

end Behavioral;

