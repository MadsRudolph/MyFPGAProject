----------------------------------------------------------------------------------
-- Company:
-- Engineer: Andreas & Sigurd
--
-- Create Date:	16:33:44 03/31/2025
-- Design Name:
-- Module Name:	div_component - Behavioral
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
    Port (
        Inp1     : in  STD_LOGIC_VECTOR (15 downto 0); -- dividend
        Inp2     : in  STD_LOGIC_VECTOR (7 downto 0);  -- divisor
        clk      : in  STD_LOGIC;
        start    : in  STD_LOGIC;                      -- the start signal
        Resdiv   : out STD_LOGIC_VECTOR (15 downto 0); -- result (number of times the divisor fits into the dividend)
        doneDiv  : out STD_LOGIC                       -- sent when division is finished
    );
end div_component;

architecture Behavioral of div_component is

    signal ResLSB   : std_logic;
    signal counter  : integer range 0 to 18;           -- Counter for clock cycles set to 16+1 so there's one clock to load values
    signal Dividend : std_logic_vector(31 downto 0);
    signal Divisor  : std_logic_vector(23 downto 0);
    signal Div_reg  : std_logic_vector(31 downto 0);
    signal Dsor_reg : std_logic_vector(23 downto 0);
    signal Resultat : STD_LOGIC_VECTOR(15 downto 0);
    signal intdone  : std_logic;                       -- internal done signal
    signal aktiv    : std_logic;                       -- used to keep the division component active until it's done

begin

    -- dividend register
    process(clk)
    begin
        if rising_edge(clk) then
            if start = '1' then
                Div_reg <= (31 downto 16 => '0') & Inp1;
            elsif start = '0' then
                Div_reg <= Div_reg;
            end if;
        end if;
    end process;

    -- divisor register
    process(clk)
    begin
        if rising_edge(clk) then
            if start = '1' then
                Dsor_reg <= Inp2 & (15 downto 0 => '0'); -- merges 16 lower bits on the right side of input 2 (the divisor)
            elsif start = '0' then
                Dsor_reg <= Dsor_reg; -- if start is low, the register should just stay the same (can optionally be set to 0 for reset)
            end if;
        end if;
    end process;

    -- Division block 
    process(clk)
    begin
        if rising_edge(clk) then
            if counter = 0 then
                Dividend <= Div_reg; -- Div register value is loaded into dividend
                Divisor  <= Dsor_reg; -- Dsor register value is loaded into divisor

            elsif counter <= 18 then -- until the counter reaches 18, the below runs
                Divisor <= '0' & Divisor(23 downto 1); -- right shift
                if unsigned(Dividend) < unsigned(Divisor) then
                    ResLSB <= '0'; -- if dividend is less than divisor, ResLSB goes low and this bit is left-shifted into result
                else
                    Dividend <= std_logic_vector(unsigned(Dividend) - unsigned(Divisor)); -- if dividend >= divisor, subtract divisor from dividend
                    ResLSB <= '1'; -- ResLSB is set high and ready to be shifted into result
                end if;
            else
                ResLSB <= '0'; -- fallback when counter > 18, safety for 'elsif counter <= 18 then'
            end if;
        end if;
    end process;

    -- result block
    process(clk)
    begin
        if rising_edge(clk) then
            if aktiv = '1' then -- if active is high, this process runs
                if ResLSB = '1' then
                    Resultat <= Resultat(14 downto 0) & '1'; -- if ResLSB is high, merge a '1' bit to the right of result
                elsif ResLSB = '0' then
                    Resultat <= Resultat(14 downto 0) & '0'; -- if ResLSB is low, merge a '0' bit to the right of result
                else
                    Resultat <= (15 downto 0 => '0');
                end if;
            end if;
        end if;
    end process;

    -- counter block
    process(clk)
    begin
        if rising_edge(clk) then
            if start = '1' then
                counter  <= 0;     -- counter initialized to 0
                intdone  <= '0';   -- intdone initialized to 0
                aktiv    <= '1';   -- active signal set when start goes high, keeps count going
            elsif aktiv = '1' then -- counting happens if active is high
                if counter < 18 then -- set to 18 for buffer, to allow overflow, and to load/send values
                    counter <= counter + 1;
                else
                    intdone <= '1'; -- internal done signal sent
                    aktiv   <= '0'; -- finished
                end if;
            end if;
        end if;
    end process;

    Resdiv  <= Resultat; -- we connect result to Resdiv which is passed on to the top module
    doneDiv <= intdone;  -- the internal done signal is connected to doneDiv which is passed to the top module

end Behavioral;
