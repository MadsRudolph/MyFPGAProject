library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ENT2 is
    Port (
        Reset    : in  STD_LOGIC;
        Clk      : in  STD_LOGIC;
        Enable   : in  STD_LOGIC;
        Data_out : out STD_LOGIC_VECTOR (7 downto 0)
    );
end ENT2;

architecture Behavioral of ENT2 is
    signal Data_int : STD_LOGIC_VECTOR(7 downto 0);
begin
    process(Reset, Clk)
    begin
        if Reset = '1' then
            Data_int <= (others => '0');
        elsif rising_edge(Clk) then
            if Enable = '1' then
                if Data_int < X"C8" then
                    Data_int <= Data_int + 1;
                else
                    Data_int <= (others => '0');
                end if;
            end if;
        end if;
    end process;

    Data_out <= Data_int;
end Behavioral;