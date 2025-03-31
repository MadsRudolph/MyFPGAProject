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
           In2 : out  STD_LOGIC_VECTOR (7 downto 0);
			  SW: in STD_LOGIC_VECTOR (7 downto 0));
end Calc_Menu;

architecture Behavioral of Calc_Menu is

type Statetype is (A,B,C,D,E,F,G,H,I, Val1, Op1, Val2, Op2, Val3);

signal state, nextstate : Statetype;

    -- Internal signals
    signal Op1S, Op2S : STD_LOGIC_VECTOR (2 downto 0);
	 signal Val2S: STD_LOGIC_VECTOR (7 downto 0);
    signal Val1S, Val3S, DispSel : STD_LOGIC_VECTOR (15 downto 0);
    signal Val1En, Val2En, Val3En, Op1En, Op2En, RegSel : STD_LOGIC;

begin

Statereg: process(reset, clk)
begin 
        if reset = '1' then 
            state <= A;
        elsif clk'event and clk = '1' then
            state <= NextState;
        end if;
    end process;
	 
StateDec: process (state, func, enter, operation, done)
	begin
		val1EN <= '0';
		val2EN <= '0';
		val3EN <= '0';
		Op1EN <= '0';
		Op2EN <= '0';
		Start <= '0';
		
	case state is
		when A =>
		DispSel <= "001";
		if func = '1' then
			nextstate <= B;
			elsif enter = '1' then 
			nextstate <= Val1;
			elsif operation = '1' then
			nextstate <= F;
			else nextstate <= A;
			end if;
			
		when Val1 => 
				Val1EN <= '1';
				nextstate <= A;
				
			
		when B =>
		DispSel <= "010";
		if func = '1' then
			nextstate <= C;
			elsif enter = '1' then 
			nextstate <= Op1;
			elsif operation = '1' then
			nextstate <= F;
			else nextstate <= B;
			end if;
			
		when Op1 => 
				Op1EN <= '1';
				nextstate <= B;
				
		when C =>
		DispSel <= "011";
		if func = '1' then
			nextstate <= D;
			elsif enter = '1' then 
			nextstate <= Val2;
			elsif operation = '1' then
			nextstate <= F;
			else nextstate <= C;
			end if;
			
		when Val2 => 
				Val2EN <= '1';
				nextstate <= C;
				
	when D =>
		DispSel <= "100";
		if func = '1' then
			nextstate <= E;
			elsif enter = '1' then 
			nextstate <= Op2;
			elsif operation = '1' then
			nextstate <= F;
			else nextstate <= D;
			end if;
			
		when Op2 => 
				Op2EN <= '1';
				nextstate <= D;
				
	when E =>
		DispSel <= "101";
		if func = '1' then
			nextstate <= A;
			elsif enter = '1' then 
			nextstate <= Val3;
			elsif operation = '1' then
			nextstate <= F;
			else nextstate <= E;
			end if;
			
		when Val3 => 
				Val3EN <= '1';
				nextstate <= E;
				
		when F =>
				start <= '1';
				RegSel <= '0';
				if done = '1' then
				nextstate <= G;
				else nextsate <= F;
				end if
				
		when G =>
				start <= '0';
				nextstate <= H;
				
		when H =>
				start <= '1';
				RegSel <= '1';
				if done = '1' then
				nextstate <= I;
				else
				Nextstate <= H;
				end if;
				
		when I =>
				DispSel <= "110";
				if enter = '1' then
				nextstate <= A;
				else 
				nextstate <= I;
				end if;
			end case;
				
Val1Reg: entity work.std_8bit_reg port map(reset, clk, SW);
Val2Reg: entity work.std_8bit_reg port map(reset, clk, SW);
Val3Reg: entity work.std_8bit_reg port map(reset, clk, SW);
Op1Reg: entity work.std_8bit_reg port map(reset, clk, SW);
Op2Reg: entity work.std_8bit_reg port map(reset, clk, SW);
CalcValReg: entity work.std_8bit_reg port map(reset, clk);

end process;
end Behavioral;

