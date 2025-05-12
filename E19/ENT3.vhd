----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:26:04 05/12/2025 
-- Design Name: 
-- Module Name:    ENT3 - Behavioral 
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

entity ENT3 is
    Port ( Reset : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           X : in  STD_LOGIC_VECTOR (1 downto 0);
           Z : out  STD_LOGIC_VECTOR (1 downto 0));
end ENT3;

architecture Behavioral of ENT3 is

type Statetype is (S0, S1, S2, S3, S4, S5);

signal state, nextstate : Statetype;

begin
Statereg: process(reset, clk)
    begin 
        if reset = '1' then 
            state <= S0;  -- Reset state to S0
        elsif clk'event and clk = '1' then
            state <= nextstate;  -- Update state on clock edge
        end if;
    end process;
	 
StateDec: process (state, X)
    begin
        -- Default values for register enables and outputs
        Z <= "00";
		  
	case state is 
	
		when S0 =>
		if X = "00" then
			nextstate <= S1;
		else
			nextstate <= S0;
		end if;
		
		
		when S1 =>
		if X(0) = '1' then
			nextstate <= S2;
		else 
			nextstate <= S1;
		end if;
		
		when S2 =>
		if X = "10" then
			nextstate <= S3;
		elsif 
		X = "11" then
			nextstate <= S5;
		else 
			nextstate <= S2;
		end if;
		
		
		when S3 =>
			nextstate <= S4;
			
			
		when S4 =>
		Z(0) <= '1';
		if X = "11" then
			nextstate <= S0;
		elsif X(1) = '0' then
			nextstate <= S1;
		else
			nextstate <= S4;
		end if;

		when S5 =>
		Z <= "10";
			if X(0) = '0' then
			Z <= "11"; 
				nextstate <= S0;
			else
				nextstate <= S5;
			end if;
			
		end case;
	end process;
end Behavioral;

