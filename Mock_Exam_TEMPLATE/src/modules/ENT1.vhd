


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ENT1 is
    Port ( A, B, C : in STD_LOGIC;
           Z       : out STD_LOGIC );
end ENT1;

architecture Behavioral of ENT1 is
begin
    Z <= '1' when (A = '0' or B = '0' or C = '0') else '0';
end Behavioral;
