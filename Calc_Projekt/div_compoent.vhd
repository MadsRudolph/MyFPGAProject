----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Andreas & Sigurd
-- 
-- Create Date:    16:33:44 03/31/2025 
-- Design Name: 
-- Module Name:    div_component - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity div_component is
    Port ( Inp1 : in  STD_LOGIC_VECTOR (15 downto 0); -- dividend
           Inp2 : in  STD_LOGIC_VECTOR (7 downto 0); -- divisor
           clk : in STD_LOGIC;
			  start : in  STD_LOGIC; -- startsignalet 
           Resdiv : out  STD_LOGIC_VECTOR (15 downto 0); -- resultat (antal gange divisoren gr op i dividenden )
           doneDiv : out  STD_LOGIC; -- sendes nr division er frdig 
			  reset : in std_logic);
end div_component;

architecture Behavioral of div_component is

    signal ResLSB : std_logic;
    signal counter : integer range 0 to 18;   -- Tæller for clock cycles sat til 16+1 så der er en clock til at loade værdierne  
    signal Dividend :std_logic_vector(23 downto 0);
	 signal Divisor :std_logic_vector(23 downto 0);
	 signal Div_reg :std_logic_vector(23 downto 0);
	 signal Dsor_reg :std_logic_vector(23 downto 0);
	 signal Resultat : STD_LOGIC_VECTOR(15 downto 0); 
	 signal resets : std_logic;  -- reset signal
    signal intdone : std_logic; -- intern done signal	 
	 signal aktiv : std_logic; 	-- bruges til at holde divisionskomponenten aktiv indtil den har regnet færdig 
begin


-- reset? (måske)
 
-- dividendregister
process(clk, reset)
	begin 
		if rising_edge(clk) then
			if reset <= '1' then
	Div_reg <= (others => '0');
		elsif start = '1' then 
		Div_reg <=(23 downto 16 => '0') & Inp1; 
		elsif start = '0' then 
		Div_reg <= Div_reg;
		end if; 
		end if; 
end process; 

-- divisor register 
process(clk, reset)
	begin 
	        if reset = '1' then
            Dsor_reg <= (others => '0');  -- Reset divisor register
		elsif rising_edge(clk) then
        if start = '1' then
            Dsor_reg <= Inp2 & (15 downto 0 => '0');  -- Load divisor
		end if;
		end if; 
end process; 
 
process(clk, reset)
begin
		if reset = '1' then
            Dividend <= (others => '0');  -- Reset Dividend
            Divisor <= (others => '0');   -- Reset Divisor
            ResLSB <= '0';  -- Reset least significant bit
	elsif rising_edge(clk) then      
		if counter = 0 then 
			Dividend <= Div_reg; 
			Divisor <= Dsor_reg; 
		 
		elsif counter <= 18 then 
			Divisor <= '0' & Divisor(23 downto 1); --højreskift
			if unsigned(Dividend) < unsigned(Divisor) then 
				ResLSB <= '0';
					else
						Dividend <= std_logic_vector(unsigned(Dividend) - unsigned(Divisor));
						ResLSB <= '1'; 
						
				
			end if;
			else ResLSB <= '0';  -- fallback når counter > 16
			end if; 
			end if; 					
		end process; 
		
-- resultatblok
process(clk)
begin
			if rising_edge(clk) then 
        if reset = '1' then
            Resultat <= (others => '0');  -- Reset result			elsif aktiv = '1' then 
			if ResLSB = '1' then
			Resultat <= Resultat(14 downto 0) & '1'; 
			elsif ResLSB = '0' then -- hvis ResLSB = 0 
			Resultat <= Resultat(14 downto 0) & '0';
				else 
				Resultat <= (15 downto 0 => '0'); 
			end if; 
			end if;  
		end if;
end process; 

-- counter blok
process(clk)
begin
	if rising_edge(clk) then 
        if reset = '1' then
            counter <= 0;  -- Reset the counter
            intdone <= '0';  -- Reset done signal
            aktiv <= '0';  -- Reset aktiv flag
	elsif start = '1' then 
		counter <= 0;
		intdone <= '0';
		aktiv <= '1'; 
		elsif aktiv = '1' then  
			if counter < 18 then -- sat til 18 så der er en buffer og der kan ske overflow og så der kan loades og sendes værdier 
			counter <= counter + 1; 
			else
			intdone <= '1'; --interne done signal sendes 
			aktiv <= '0';  --færdig
		end if; 
		end if; 
		end if; 
	end process; 

Resdiv <= Resultat; -- vi forbinder resultatet til Resdiv som føres videre i topmodulet 
doneDiv <= intdone; -- det interne done forbindes til doneDiv som sendes videre i topmodulet 


end Behavioral;

	



					
	

