----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Andreas Jacobsen
-- 
-- Create Date:    14:13:23 03/31/2025 
-- Design Name: 
-- Module Name:    Calc_data_topmudule - Behavioral 
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
           reset : in std_logic;
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
           doneDiv : out  STD_LOGIC; -- sendes nr division er færdig
				reset: in STD_LOGIC);
end component;

--signaler 
signal ResPlu : std_logic_vector(15 downto 0);
signal ResMin : std_logic_vector(15 downto 0);
signal ResGan : std_logic_vector(15 downto 0);
signal Resdiv : std_logic_vector(15 downto 0);
signal doneDiv:  STD_Logic;
signal done_next : std_logic := '0';

begin

u1 : div_component 
port map(
reset => reset,
Inp1 => Inp1,
Inp2 => Inp2,
start => start,
clk => Clk,
Resdiv =>Resdiv,
doneDiv => doneDiv
);
 
-- Regn +, -, *
    process(Clk, reset)
    begin
	 if reset = '1' then 
	 resplu <= "0000000000000000";
	 resmin <="0000000000000000";
	 Resgan <= "0000000000000000";
	 
	 
        elsif rising_edge(Clk) then
            if start = '1' then
                ResPlu <= std_logic_vector(unsigned(Inp1) + unsigned("00000000" & Inp2));
                ResMin <= std_logic_vector(unsigned(Inp1) - unsigned("00000000" & Inp2));
               ResGan <= std_logic_vector(resize(unsigned(Inp1) * unsigned("00000000" & Inp2), 16));
            end if;
        end if;
    end process;


		process(clk, reset)
begin
    if reset = '1' then
        Calc_val <= (others => '0');
    elsif rising_edge(clk) then
        if Opcode = "100" then
            if doneDiv = '1' then
                Calc_val <= Resdiv;
            end if;
        else
            case Opcode is
                when "001" => Calc_val <= ResPlu;
                when "010" => Calc_val <= ResMin;
                when "011" => Calc_val <= ResGan;
                when others => Calc_val <= (others => '0');
            end case;
        end if;
    end if;
end process;


process(clk, reset)
begin
    if reset = '1' then
        done <= '0';
        done_next <= '0';
    elsif rising_edge(clk) then
        if Opcode = "100" and DoneDiv = '1' then
            done_next <= DoneDiv;
        elsif
		  Opcode /= "100" then
		  done <= '1';
		  else
		  done <='0';
        end if;

        done <= done_next; -- Actually set 'done' now
    end if;
end process;


end Behavioral;

