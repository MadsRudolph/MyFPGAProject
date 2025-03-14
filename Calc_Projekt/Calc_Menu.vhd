----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:51:28 03/10/2025 
-- Design Name: 
-- Module Name:    Calc_Menu - Behavioral 
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

entity Calc_Menu is
    Port ( Reset : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Enter : in  STD_LOGIC;
           Operation : in  STD_LOGIC;
           Func : in  STD_LOGIC;
           DataIn : in  STD_LOGIC_VECTOR (7 downto 0);
           CalcVal : in  STD_LOGIC_VECTOR (15 downto 0);
           DispData : out  STD_LOGIC_VECTOR (15 downto 0);
           Tilstand : out  STD_LOGIC_VECTOR (7 downto 0);
           Start : out  STD_LOGIC;
           Done : in  STD_LOGIC;
           OpCode : out  STD_LOGIC_VECTOR (2 downto 0);
           In1 : out  STD_LOGIC_VECTOR (7 downto 0);
           In2 : out  STD_LOGIC_VECTOR (7 downto 0));
end Calc_Menu;

architecture Behavioral of Calc_Menu is

begin


end Behavioral;

