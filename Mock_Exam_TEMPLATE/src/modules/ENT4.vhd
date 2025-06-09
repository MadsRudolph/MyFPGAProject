

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ENT4 is
    Port (
        Count : in  STD_LOGIC_VECTOR(3 downto 0);
        Inp1  : in  STD_LOGIC;
        Outp1 : out STD_LOGIC
    );
end ENT4;

architecture Behavioral of ENT4 is
begin
    process(Count, Inp1)
    begin
        Outp1 <= '0';
        if Count = "0000" then
            if Inp1 = '1' then
                Outp1 <= '1';
            end if;
        end if;
    end process;
end Behavioral;