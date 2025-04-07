----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:10:17 04/07/2025 
-- Design Name: 
-- Module Name:    std_16bit_reg - Behavioral 
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

entity std_16bit_reg is
    Port ( reset : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           enable : in  STD_LOGIC;
           data_in : in  STD_LOGIC_VECTOR (15 downto 0);
           data_out : out  STD_LOGIC_VECTOR (15 downto 0));
end std_16bit_reg;

architecture Behavioral of std_16bit_reg is
begin
    process (reset, clk)
    begin
        if reset = '1' then
            data_out <= (others => '0');  -- Reset the register to 0
        elsif rising_edge(clk) then
            if enable = '1' then
                data_out <= data_in;  -- Load data_in into data_out on clock edge
            end if;
        end if;
    end process;
end Behavioral;

