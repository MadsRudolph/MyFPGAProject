--------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
--
-- Create Date: 15:48:19 05/01/2025
-- Design Name: 
-- Module Name: Calc_Top_Uden_Debounce_TB - Testbench
-- Project Name: Calc_Projekt
-- Target Device:  
-- Description: Full simulation of FSM through all states.
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Calc_Top_Uden_Debounce_TB is
end Calc_Top_Uden_Debounce_TB;

architecture behavior of Calc_Top_Uden_Debounce_TB is

    -- Component declaration
    component Calc_Top
        Port(
            BTN3 : IN  std_logic;
            MClk : IN  std_logic;
            BTN0 : IN  std_logic;
            BTN1 : IN  std_logic;
            BTN2 : IN  std_logic;
            SW   : IN  std_logic_vector(7 downto 0);
            An   : OUT std_logic_vector(3 downto 0);
            Cat  : OUT std_logic_vector(6 downto 0);
            ld   : OUT std_logic_vector(7 downto 0)
        );
    end component;

    -- Input signals
    signal BTN3 : std_logic := '0';
    signal MClk : std_logic := '0';
    signal BTN0 : std_logic := '0';
    signal BTN1 : std_logic := '0';
    signal BTN2 : std_logic := '0';
    signal SW   : std_logic_vector(7 downto 0) := (others => '0');

    -- Output signals
    signal An  : std_logic_vector(3 downto 0);
    signal Cat : std_logic_vector(6 downto 0);
    signal ld  : std_logic_vector(7 downto 0);

    -- Clock period definition
    constant MClk_period : time := 10 ns;

begin

    -- Instantiate the Unit Under Test (UUT)
    uut: Calc_Top
        port map (
            BTN3 => BTN3,
            MClk => MClk,
            BTN0 => BTN0,
            BTN1 => BTN1,
            BTN2 => BTN2,
            SW   => SW,
            An   => An,
            Cat  => Cat,
            ld   => ld
        );

    -- Clock generation process
    MClk_process : process
    begin
        MClk <= '0';
        wait for MClk_period/2;
        MClk <= '1';
        wait for MClk_period/2;
    end process;

    -- Stimulus process: run through all FSM states, doing the calculation of ((8*2)/4)
    stim_proc: process
    begin
        -- Reset
        BTN3 <= '1';
        wait for MClk_period;
        BTN3 <= '0';

        -- State A - Load Val1
        SW <= "00001000";--8
        wait for MClk_period;
        BTN0 <= '1';
        wait for MClk_period;
        BTN0 <= '0';
        wait for MClk_period;

        -- Move to State B
        BTN1 <= '1';
        wait for MClk_period;
        BTN1 <= '0';
        wait for MClk_period;

        -- State B - Load Op1
        SW <= "00000011";--*
        wait for MClk_period;
        BTN0 <= '1';
        wait for MClk_period;
        BTN0 <= '0';
        wait for MClk_period;

        -- Move to State C
        BTN1 <= '1';
        wait for MClk_period;
        BTN1 <= '0';
        wait for 20 ns;

        -- State C - Load Val2
        SW <= "00000010";--2
        wait for MClk_period;
        BTN0 <= '1';
        wait for MClk_period;
        BTN0 <= '0';
        wait for MClk_period;

        -- Move to State D
        BTN1 <= '1';
        wait for MClk_period;
        BTN1 <= '0';
        wait for MClk_period;

        -- State D - Load Op2
        SW <= "00000100";--/
        wait for MClk_period;
        BTN0 <= '1';
        wait for MClk_period;
        BTN0 <= '0';
        wait for MClk_period;

        -- Move to State E - Load Val3
        BTN1 <= '1';
        wait for MClk_period;
        BTN1 <= '0';
        wait for MClk_period;

        SW <= "00000100";--4
        wait for MClk_period;
        BTN0 <= '1';
        wait for MClk_period;
        BTN0 <= '0';
        wait for MClk_period;

        -- Move to State F - Execute
        BTN2 <= '1';
        wait for MClk_period;
        BTN2 <= '0';
        wait for MClk_period;

        -- Wait for operation to complete
        wait for 40 * MClk_period;

        -- Return to State A
        BTN1 <= '1';
        wait for MClk_period;
        BTN1 <= '0';
        wait for MClk_period;

        wait;
    end process;

end behavior;
