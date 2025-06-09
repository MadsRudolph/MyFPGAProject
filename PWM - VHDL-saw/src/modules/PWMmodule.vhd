
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;


entity PWMmodule is
port (
       Reset: IN STD_LOGIC;
       Clk: IN STD_LOGIC;
       SigAmpl: IN STD_LOGIC_VECTOR(7 downto 0);
		 PWMout: OUT STD_LOGIC);
end PWMmodule;




architecture Behavioral of PWMmodule is

signal PWMcnt: STD_LOGIC_VECTOR(7 downto 0):= (others => '0') ;

begin

PWMcount: process(Reset, Clk)
begin
if
Reset = '1' then
PWMcnt <= "00000000";

elsif
Clk'event and CLK = '1' then

if PWMcnt >= 256 then
PWMcnt <= "00000000";

else
PWMcnt <= PWMcnt + 1;

end if;
end if;
end process;


PWMcompt: process (SigAmpl, PWMcnt)
begin
if 
PWMcnt < SigAmpl then
PWMout <= '1';

else
PWMout <= '0';

end if;
end process;

end Behavioral;

