----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:49:23 05/12/2025 
-- Design Name: 
-- Module Name:    ENT2 - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ENT2 is
    Port ( Reset : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           DUTY : in  STD_LOGIC_VECTOR (8 downto 0);
           PWMout : out  STD_LOGIC);
end ENT2;

architecture Behavioral of ENT2 is
signal PWMcnt: STD_LOGIC_VECTOR(8 downto 0);
signal SigAmpl: STD_LOGIC;

begin

Count_reg: process(Reset, Clk)
begin
if Reset = '1' then
PWMcnt <= "000000000";

elsif
Clk'event and Clk = '1' then
PWMcnt <= PWMcnt + 1;

elsif 
PWMcnt >= 512 then
PWMcnt <= "000000000";

end if;
end process;


PWMcompt: process (PWMcnt, DUTY)
begin
if 
PWMcnt <= DUTY then
PWMout <= '1';

else
PWMout <= '0';

end if;
end process;
end Behavioral;

-- PWM signalet regnes fra TPWM=TOPvalue/fclk
-- Indsætter vi de opgivede værdier får vi, 2^9/50*10^6 = 0,00001024s eller 10,24 mikrosekunder
