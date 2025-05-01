----------------------------------------------------------------------------------
-- Company:
-- Engineer: Andreas Jacobsen
--
-- Create Date:	14:13:23 03/31/2025
-- Design Name:
-- Module Name:	Calc_data_topmudule - Behavioral
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
--library numeric_std;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values


-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Calc_data_topmudule is
	Port ( Clk : in STD_LOGIC;
         Opcode : in  STD_LOGIC_VECTOR (2 downto 0);
       	Inp1 : in  STD_LOGIC_VECTOR (15 downto 0);
       	Inp2 : in  STD_LOGIC_VECTOR (7 downto 0);
         start : in  STD_LOGIC;
       	Calc_val : out  STD_LOGIC_VECTOR (15 downto 0);
       	done : out  STD_LOGIC);
end Calc_data_topmudule;


architecture Behavioral of Calc_data_topmudule is

--komponent for division
component div_component is
	Port ( Inp1 : in  STD_LOGIC_VECTOR (15 downto 0); -- dividend
       	Inp2 : in  STD_LOGIC_VECTOR (7 downto 0); -- divisor
       	clk : in STD_LOGIC;
          	start : in  STD_LOGIC; -- startsignalet
          	Resdiv : out  STD_LOGIC_VECTOR (15 downto 0); -- resultat (antal gange divisoren gr op i dividenden )
       	doneDiv : out  STD_LOGIC); -- sendes nr division er frdig
end component;

--signaler
signal ResPlu : std_logic_vector(15 downto 0);
signal ResMin : std_logic_vector(15 downto 0);
signal ResGan : std_logic_vector(15 downto 0);
signal Resdiv : std_logic_vector(15 downto 0);
signal doneDiv:  STD_Logic;

begin

u1 : div_component
port map(
Inp1 => Inp1,
Inp2 => Inp2,
start => start,
clk => Clk,
Resdiv =>Resdiv,
doneDiv => doneDiv
);
 
-- Regn +, -, *
	process(Clk)
	begin
    	if rising_edge(Clk) then
        	if start = '1' then
            	ResPlu <= std_logic_vector(unsigned(Inp1) + unsigned("00000000" & Inp2));--Inp1 + Inp2 loades ind i ResPlu
            	ResMin <= std_logic_vector(unsigned(Inp1) - unsigned("00000000" & Inp2));--Inp1 - Inp2 loades ind i ResMin
           	ResGan <= std_logic_vector(resize(unsigned(Inp1) * unsigned("00000000" & Inp2), 16));-- resize for at sikre at tallet ikke bliver for
        	end if;
    	end if;
	end process;

-- resultat loades i Calcval
    	process(clk)
begin
  if rising_edge(clk) then -- der loades Inp1/Inp2 ind i Calc_val når doneDiv (divisionen) er færdig og opcode er "100"
	if Opcode = "100" then
  	if doneDiv = '1' then
    	Calc_val <= Resdiv;
  	end if;
	else
  	case Opcode is
    	when "001" => calc_Val <= ResPlu;-- Calc_Val assigneres ResPlu's værdi
    	when "010" => calc_Val <= ResMin;-- Calc_Val assigneres ResMin's værdi
    	when "011" => calc_Val <= ResGan;-- Calc_Val assigneres ResGan's værdi
    	when others => calc_Val <= (others => '0');-- for at have alle tilfælde med sættes Calcval til '0' hvis der kommer en kombination som ikke er
  	end case;
	end if;
  end if;
end process;

-- nedenfor er done signalet sat i en clocket process da den ellers ville komme for hurtigt
-- i forhold til calc val
 process(clk)
begin
	if rising_edge(clk) then
    	if Opcode = "100" and doneDiv = '1' then
    	done <= '1';
    	elsif Opcode /= "100" and start = '1' then
    	done <= '1';
    	else
    	done <= '0';
end if;
end if;
end process;


end Behavioral;
