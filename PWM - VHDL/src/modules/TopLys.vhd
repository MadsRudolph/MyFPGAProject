----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:28:58 05/05/2025 
-- Design Name: 
-- Module Name:    TopLys - Behavioral 
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

entity TopLys is
    Port ( Reset : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           VPWM : out  STD_LOGIC);
end TopLys;

architecture Behavioral of TopLys is
signal LD, SigAmpl: STD_LOGIC_VECTOR(7 downto 0);
begin

LYSregul: entity work.LYSregul
port map (
Reset <= Reset,
Clk <= Clk,
LD <= VPWM);

end Behavioral;

