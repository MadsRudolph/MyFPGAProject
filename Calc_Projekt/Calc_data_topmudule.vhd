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
    Port (
        Clk       : in  STD_LOGIC;
        Opcode    : in  STD_LOGIC_VECTOR (2 downto 0);
        Inp1      : in  STD_LOGIC_VECTOR (15 downto 0);
        Inp2      : in  STD_LOGIC_VECTOR (7 downto 0);
        start     : in  STD_LOGIC;
        Calc_val  : out STD_LOGIC_VECTOR (15 downto 0);
        done      : out STD_LOGIC
    );
end Calc_data_topmudule;

architecture Behavioral of Calc_data_topmudule is

    -- Component for division
    component div_component is
        Port (
            Inp1    : in  STD_LOGIC_VECTOR (15 downto 0); -- dividend
            Inp2    : in  STD_LOGIC_VECTOR (7 downto 0);  -- divisor
            clk     : in  STD_LOGIC;
            start   : in  STD_LOGIC;                     -- start signal
            Resdiv  : out STD_LOGIC_VECTOR (15 downto 0); -- result (number of times divisor fits in dividend)
            doneDiv : out STD_LOGIC                      -- goes high when division is done
        );
    end component;

    -- Signals
    signal ResPlu   : std_logic_vector(15 downto 0);
    signal ResMin   : std_logic_vector(15 downto 0);
    signal ResGan   : std_logic_vector(15 downto 0);
    signal Resdiv   : std_logic_vector(15 downto 0);
    signal doneDiv  : STD_Logic;

begin

    u1 : div_component
        port map(
            Inp1    => Inp1,
            Inp2    => Inp2,
            start   => start,
            clk     => Clk,
            Resdiv  => Resdiv,
            doneDiv => doneDiv
        );

    -- Calculate +, -, *
    process(Clk)
    begin
        if rising_edge(Clk) then
            if start = '1' then
                ResPlu <= std_logic_vector(unsigned(Inp1) + unsigned("00000000" & Inp2)); -- Inp1 + Inp2 is loaded into ResPlu
                ResMin <= std_logic_vector(unsigned(Inp1) - unsigned("00000000" & Inp2)); -- Inp1 - Inp2 is loaded into ResMin
                ResGan <= std_logic_vector(resize(unsigned(Inp1) * unsigned("00000000" & Inp2), 16)); -- resize to ensure the result doesn't get too big
            end if;
        end if;
    end process;

    -- Result is loaded into Calc_val
    process(clk)
    begin
        if rising_edge(clk) then
            -- Inp1/Inp2 is loaded into Calc_val when doneDiv (division) is finished and opcode is "100"
            if Opcode = "100" then
                if doneDiv = '1' then
                    Calc_val <= Resdiv;
                end if;
            else
                case Opcode is
                    when "001"    => Calc_Val <= ResPlu; -- Calc_Val is assigned the value of ResPlu
                    when "010"    => Calc_Val <= ResMin; -- Calc_Val is assigned the value of ResMin
                    when "011"    => Calc_Val <= ResGan; -- Calc_Val is assigned the value of ResGan
                    when others   => Calc_Val <= (others => '0'); -- to cover all cases, Calc_val is set to '0' if the opcode is invalid
                end case;
            end if;
        end if;
    end process;

    -- Below, the done signal is set in a clocked process because otherwise it would arrive too quickly compared to Calc_val
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
