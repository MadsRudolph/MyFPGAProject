library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ENT1 is
    Port (
        A : in  STD_LOGIC;
        B : in  STD_LOGIC;
        C : in  STD_LOGIC;
        Z : out STD_LOGIC
    );
end ENT1;

architecture Behavioral of ENT1 is
begin
    Z <= (A XOR B) AND C;
end Behavioral;