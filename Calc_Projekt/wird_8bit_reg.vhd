----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:25:34 04/28/2025 
-- Design Name: 
-- Module Name:    wird_8bit_reg - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity wird_8bit_reg is
    Port ( reset : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           enable : in  STD_LOGIC;
           data_in : in  STD_LOGIC_VECTOR (7 downto 0);
           data_out : out  STD_LOGIC_VECTOR (15 downto 0));
end wird_8bit_reg;

architecture Behavioral of wird_8bit_reg is
begin
    process (reset, clk)
    begin
        if reset = '1' then
            data_out <= (others => '0');  -- Reset the register to 0
        elsif rising_edge(clk) then
            if enable = '1' then
                data_out <= X"00" & data_in;  -- Load data_in into data_out on clock edge
            end if;
        end if;
    end process;
end Behavioral;
