----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:44:44 03/10/2025 
-- Design Name: 
-- Module Name:    Calc_top - Behavioral 
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

entity Calc_top is
    Port ( BTN3 : in  STD_LOGIC;
           MClk : in  STD_LOGIC;
           BTN0 : in  STD_LOGIC;
           BTN2 : in  STD_LOGIC;
           BTN1 : in  STD_LOGIC;
           SW : in  STD_LOGIC_VECTOR (7 downto 0);
           An : out  STD_LOGIC_VECTOR (3 downto 0);
           Cat : out  STD_LOGIC_VECTOR (6 downto 0);
           LD : out  STD_LOGIC_VECTOR (7 downto 0));
end Calc_top;

architecture Behavioral of Calc_top is

begin


end Behavioral;

