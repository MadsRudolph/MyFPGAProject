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
-- Description: Top-level module connecting display, debounce, menu, and data modules.
--
-- Dependencies: Debounce, DivClk, SevenSeg4, Calc_Menu, Calc_Data_topmodule
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
-- NOTE: For simulation, comment out Debounce components (U3, U4)
--       and use direct button signals in U5 instead of debounced ones.
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Calc_Top is
    Port (
        BTN3 : in  STD_LOGIC;                     -- Reset
        MClk : in  STD_LOGIC;                     -- Master Clock
        BTN0 : in  STD_LOGIC;                     -- Enter button
        BTN1 : in  STD_LOGIC;                     -- Func button
        BTN2 : in  STD_LOGIC;                     -- Operation button
        SW   : in  STD_LOGIC_VECTOR (7 downto 0); -- Switches
        An   : out STD_LOGIC_VECTOR (3 downto 0); -- 7-Segment anodes
        Cat  : out STD_LOGIC_VECTOR (6 downto 0); -- 7-Segment cathodes
        ld   : out STD_LOGIC_VECTOR (7 downto 0)  -- FSM state output to LEDs
    );
end Calc_Top;

architecture Behavioral of Calc_Top is

    -- Internal signals
    signal DispClk   : STD_LOGIC;                         -- Clock for display
    signal BTN2d     : STD_LOGIC;                         -- Debounced BTN2
    signal BTN1d     : STD_LOGIC;                         -- Debounced BTN1
    signal start     : STD_LOGIC;                         -- Start signal for calculation
    signal done      : STD_LOGIC;                         -- Done signal from datapath
    signal DispData  : STD_LOGIC_VECTOR (15 downto 0);    -- Displayed data
    signal In1       : STD_LOGIC_VECTOR (15 downto 0);    -- Input 1
    signal CalcVal   : STD_LOGIC_VECTOR (15 downto 0);    -- Result from datapath
    signal In2       : STD_LOGIC_VECTOR (7 downto 0);     -- Input 2
    signal OpCode    : STD_LOGIC_VECTOR (2 downto 0);     -- Operation code

begin

    -- Clock Divider to generate display-friendly clock
    U1: entity work.DivClk 
        port map (
            Reset  => BTN3,
            Clk    => MClk,
            TimeP  => 50e3,
            Clk1   => DispClk
        );

    --7-Segment Display Controller
    U2: entity work.SevenSeg4 
        port map (
            Reset => BTN3,
            Clk   => DispClk,
            Data  => DispData,
            Cat   => Cat,
            An    => An
        );

    ------------------------------------------------------------------
    -- Debounce modules (should be commented out in simulation/testbench)

    U3: entity work.Debounce
        port map (
            Reset => BTN3,
            Clk   => MClk,
            BTN   => BTN2,
            BTNd  => BTN2d
        );

    U4: entity work.Debounce
        port map (
            Reset => BTN3,
            Clk   => MClk,
            BTN   => BTN1,
            BTNd  => BTN1d
        );
    ------------------------------------------------------------------

    -- Calc_Menu Module: FSM and input handling

    -- For simulation:
    -- Use this version (with raw button inputs)
    --
    -- U5: entity work.Calc_Menu
    --     port map (
    --         Reset      => BTN3,
    --         Clk        => MClk,
    --         Enter      => BTN0,
    --         Operation  => BTN2,
    --         Func       => BTN1,
    --         SW         => SW,
    --         CalcVal    => CalcVal,
    --         DispData   => DispData,
    --         Tilstand   => ld,
    --         Start      => Start,
    --         Done       => Done,
    --         OpCode     => OpCode,
    --         In1        => In1,
    --         In2        => In2
    --     );

    -- For hardware implementation:
    -- Use this version (with debounced button inputs)

    U5: entity work.Calc_Menu
        port map (
            Reset      => BTN3,
            Clk        => MClk,
            Enter      => BTN0,
            Operation  => BTN2d,
            Func       => BTN1d,
            SW         => SW,
            CalcVal    => CalcVal,
            DispData   => DispData,
            Tilstand   => ld,
            Start      => Start,
            Done       => Done,
            OpCode     => OpCode,
            In1        => In1,
            In2        => In2
        );

    -- Datapath Module: Performs the actual calculations
    U6: entity work.Calc_Data_topmudule
        port map (
            Clk       => MClk,
            Calc_Val  => CalcVal,
            Start     => Start,
            Done      => Done,
            OpCode    => OpCode,
            Inp1      => In1,
            Inp2      => In2
        );

end Behavioral;
