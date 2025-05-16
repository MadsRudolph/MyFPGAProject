

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ENT2 is
    Port (
        Reset     : in  STD_LOGIC;
        Clk       : in  STD_LOGIC;
        Data_in   : in  STD_LOGIC_VECTOR(7 downto 0);
        Enable    : in  STD_LOGIC;
        Load      : in  STD_LOGIC;
        Data_out  : out STD_LOGIC
    );
end ENT2;

architecture Behavioral of ENT2 is
    signal Reg_val : STD_LOGIC_VECTOR(7 downto 0);
begin
    process (Reset, Clk)
    begin
        if Reset = '1' then
            Reg_val <= (others => '0');
        elsif falling_edge(Clk) then
            if Load = '0' then
                Reg_val <= Data_in;
            elsif Enable = '1' then
                Reg_val <= '0' & Reg_val(7 downto 1); -- shift right
            end if;
        end if;
    end process;

    Data_out <= Reg_val(0); -- least significant bit
end Behavioral;
