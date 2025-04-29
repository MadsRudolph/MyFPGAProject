----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:46:19 04/28/2025 
-- Design Name: 
-- Module Name:    Calc_Top - Behavioral 
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

entity Calc_Top is
    Port ( BTN3 : in  STD_LOGIC;
           MClk : in  STD_LOGIC;
           BTN0 : in  STD_LOGIC;
           BTN1 : in  STD_LOGIC;
           BTN2 : in  STD_LOGIC;
           SW : in  STD_LOGIC_VECTOR (7 downto 0);
           An : out  STD_LOGIC_VECTOR (3 downto 0);
           Cat : out  STD_LOGIC_VECTOR (6 downto 0);
           ld : out  STD_LOGIC_VECTOR (7 downto 0));
end Calc_Top;


architecture Behavioral of Calc_Top is



signal DispClk, BTN2d, BTN1d, start, Done: STD_LOGIC;
signal DispData,In1, calcval: STD_LOGIC_VECTOR (15 downto 0);
signal In2: STD_LOGIC_VECTOR (7 downto 0);
signal OPcode: STD_LOGIC_VECTOR (2 downto 0);

begin

    U1: entity work.DivClk 
        port map (
            Reset => BTN3,
            Clk   => MClk,
				TimeP => 50e6,
				Clk1 => dispclk 
        );
		  
	
    U2: entity work.SevenSeg4 
        port map (
            Reset => BTN3,
            Clk   => DispClk,
				Data => DispData,
				Cat => Cat,
				An => An
        );
		  
		  
    U3: entity work.Debounce
        port map (
            Reset => BTN3,
            Clk   => MClk,
				BTN => BTN2,
				BTNd => BTN2d
	        );
	
    U4: entity work.Debounce
        port map (
            Reset => BTN3,
            Clk   => MClk,
				BTN => BTN1,
				BTNd => BTN1d
	        );
			  
    U5: entity work.Calc_Menu
        port map (
            Reset => BTN3,
            Clk   => MClk,
				Enter => BTN0,
				Operation => BTN2d,
				Func => BTN1d,
				SW => SW,
				CalcVal => CalcVal,
				DispData => DispData,
				Tilstand => ld,
				Start => Start,
				Done => Done,
				OpCode => OpCode,
				In1 => In1,
				In2 => In2
	        );
			  
    --U6: entity work.Calc_Data
        --port map (
            --Reset => BTN3,
            --Clk   => MClk,
				--CalcVal => CalcVal,
				--Start => Start,
				--Done => Done,
				--OpCode => OpCode,
				--In1 => In1,
				--In2 => In2
	        --);
			 
end Behavioral;

