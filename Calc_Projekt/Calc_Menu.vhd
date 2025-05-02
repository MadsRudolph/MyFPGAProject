library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Calc_Menu is
    Port ( Reset : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Enter : in  STD_LOGIC;
           Operation : in  STD_LOGIC;
           Func : in  STD_LOGIC;
           CalcVal : in  STD_LOGIC_VECTOR (15 downto 0);
           DispData : out  STD_LOGIC_VECTOR (15 downto 0);
           Start : out  STD_LOGIC;
           Done : in  STD_LOGIC;
           OpCode : out  STD_LOGIC_VECTOR (2 downto 0);
           In1 : out  STD_LOGIC_VECTOR (15 downto 0);
           In2 : out  STD_LOGIC_VECTOR (7 downto 0);
           SW : in STD_LOGIC_VECTOR (7 downto 0);
           Tilstand: out std_logic_vector (7 downto 0) -- State output for LED visualization
    );
end Calc_Menu;

architecture Behavioral of Calc_Menu is

    -- Define state type for the FSM
    type Statetype is (A, B, C, D, E, F, G, H, I, J, K, Val1, Val2, Val3, Op1, Op2);

    -- Signals for current and next state
    signal state, nextstate : Statetype;

    -- Internal signals for calculations and register enables
    signal Calcvals : std_logic_vector (15 downto 0);
    signal Op1S, Op2S, Val1S, Val3S, DispSel, Val2S : STD_LOGIC_VECTOR (7 downto 0);
    signal Val1En, Val2En, Val3En, Op1En, Op2En, RegSel : STD_LOGIC;

begin

    -- Sequential process for updating the state
    Statereg: process(reset, clk)
    begin 
        if reset = '1' then 
            state <= A;  -- Reset state to A
        elsif clk'event and clk = '1' then
            state <= nextstate;  -- Update state on clock edge
        end if;
    end process;

    -- Next state logic and register enable control
    StateDec: process (state, func, enter, operation, done)
    begin
        -- Default values for register enables and outputs
        Val1En <= '0';
        Val2En <= '0';
        Val3En <= '0';
        Op1En <= '0';
        Op2En <= '0';
        Start <= '0';
        RegSel <= '0';
        DispSel <= "00000000";
        Tilstand <= "00000000";  -- Default state (no LEDs lit)

        case state is
            -- State A: Display Selection and Function Check
            when A =>
                DispSel <= "00000001";  -- Display selection for state A
                Tilstand <= "00000001"; -- Light up LEDs to show state A (binary 00000001)
                if func = '1' then
                    nextstate <= B;  -- Transition to state B if function is pressed
                elsif enter = '1' then 
                    nextstate <= Val1; -- Transition to Val1 state on Enter
                elsif operation = '1' then
                    nextstate <= F;   -- Transition to state F if operation is pressed
                else 
                    nextstate <= A;   -- Stay in state A
                end if;

            -- State Val1: Enable Value 1 Register
            when Val1 => 
                Val1En <= '1';  -- Enable Val1 register
                nextstate <= A;  -- Return to state A

            -- State B: Display Selection and Function Check
            when B =>
                DispSel <= "00000010";  -- Display selection for state B
                Tilstand <= "00000010"; -- Light up LEDs to show state B (binary 00000010)
                if func = '1' then
                    nextstate <= C;  -- Transition to state C if function is pressed
                elsif enter = '1' then 
                    nextstate <= Op1; -- Transition to Op1 state on Enter
                elsif operation = '1' then
                    nextstate <= F;   -- Transition to state F if operation is pressed
                else 
                    nextstate <= B;   -- Stay in state B
                end if;

            -- State Op1: Enable Op1 Register
            when Op1 => 
                Op1En <= '1';  -- Enable Op1 register
                nextstate <= B;  -- Return to state B

            -- State C: Display Selection and Function Check
            when C =>
                DispSel <= "00000011";  -- Display selection for state C
                Tilstand <= "00000100"; -- Light up LEDs to show state C (binary 00000100)
                if func = '1' then
                    nextstate <= D;  -- Transition to state D if function is pressed
                elsif enter = '1' then 
                    nextstate <= Val2; -- Transition to Val2 state on Enter
                elsif operation = '1' then
                    nextstate <= F;   -- Transition to state F if operation is pressed
                else 
                    nextstate <= C;   -- Stay in state C
                end if;

            -- State Val2: Enable Value 2 Register
            when Val2 => 
                Val2En <= '1';  -- Enable Val2 register
                nextstate <= C;  -- Return to state C

            -- State D: Display Selection and Function Check
            when D =>
                DispSel <= "00000100";  -- Display selection for state D
                Tilstand <= "00001000"; -- Light up LEDs to show state D (binary 00001000)
                if func = '1' then
                    nextstate <= E;  -- Transition to state E if function is pressed
                elsif enter = '1' then 
                    nextstate <= Op2; -- Transition to Op2 state on Enter
                elsif operation = '1' then
                    nextstate <= F;   -- Transition to state F if operation is pressed
                else 
                    nextstate <= D;   -- Stay in state D
                end if;

            -- State Op2: Enable Op2 Register
            when Op2 => 
                Op2En <= '1';  -- Enable Op2 register
                nextstate <= D;  -- Return to state D

            -- State E: Display Selection and Function Check
            when E =>
                DispSel <= "00000101";  -- Display selection for state E
                Tilstand <= "00010000"; -- Light up LEDs to show state E (binary 00010000)
                if func = '1' then
                    nextstate <= A;  -- Transition to state A if function is pressed
                elsif enter = '1' then 
                    nextstate <= Val3; -- Transition to Val3 state on Enter
                elsif operation = '1' then
                    nextstate <= F;   -- Transition to state F if operation is pressed
                else 
                    nextstate <= E;   -- Stay in state E
                end if;

            -- State Val3: Enable Value 3 Register
            when Val3 => 
                Val3En <= '1';  -- Enable Val3 register
                nextstate <= E;  -- Return to state E

            -- State F: Start Operation
            when F =>
                Start <= '1';  -- Set Start signal to 1 to begin operation
                RegSel <= '0';  -- Disable Register selection
                nextstate <= G; -- Transition to state G

            -- State G: Check for Done Signal
            when G =>
                Tilstand <= "00100000";  -- Light up LEDs to show state G (binary 00100000)
                Start <= '0';  -- Reset Start signal
                if done = '1' then
                    nextstate <= H;  -- Transition to state H if done signal is received
                else 
                    nextstate <= G;  -- Stay in state G
                end if;

            -- State H: Enable Register Selection
            when H =>
                RegSel <= '1';  -- Enable Register selection
                nextstate <= I; -- Transition to state I

            -- State I: Start Second Operation
            when I =>
                RegSel <= '1';  -- Keep Register selection enabled
                Start <= '1';   -- Set Start signal for operation
                nextstate <= J; -- Transition to state J

            -- State J: Check for Done Signal
            when J =>
                RegSel <= '1';  -- Keep Register selection enabled
                Tilstand <= "01000000";  -- Light up LEDs to show state J (binary 01000000)
                Start <= '0';   -- Reset Start signal
                if done = '1' then
                    nextstate <= K;  -- Transition to state K if done signal is received
                else 
                    nextstate <= J;  -- Stay in state J
                end if;

            -- State K: Final State and Display Selection
            when K =>
                RegSel <= '1';  -- Keep Register selection enabled
                Tilstand <= "10000000";  -- Light up LEDs to show state K (binary 10000000)
                DispSel <= "00000110";  -- Final display selection (Show Result)
                if func = '1' then
                    nextstate <= A;  -- Return to state A if function is pressed
                else 
                    nextstate <= K;  -- Stay in state K
                end if;
        end case;
    end process;

    -- Display data assignment based on DispSel value
    with DispSel select
        DispData <= 
            (others => '0')          when "00000000", 
            X"A0" & Val1S            when "00000001",
            X"B0" & Op1S             when "00000010",
            X"C0" & Val2S            when "00000011",
            X"D0" & Op2S             when "00000100",
            X"E0" & Val3S            when "00000101",
            Calcvals                 when "00000110",
            (others => '0')          when others;

    -- Register mappings for 8-bit registers (Val1, Val2, Val3, Op1, Op2)
    Val1Reg: entity work.std_8bit_reg
        port map (
            Reset => reset,
            Clk   => clk,
            Enable => Val1En,
            Data_in => SW,
            Data_out => Val1S
        );

    Val2Reg: entity work.std_8bit_reg 
        port map (
            Reset => reset,
            Clk   => clk,
            Enable => Val2En,
            Data_in => SW,
            Data_out => Val2S
        );

    Val3Reg: entity work.std_8bit_reg 
        port map (
            Reset => reset,
            Clk   => clk,
            Enable => Val3En,
            Data_in => SW,
            Data_out => Val3S
        );

    Op1Reg: entity work.std_8bit_reg 
        port map (
            Reset => reset,
            Clk   => clk,
            Enable => Op1En,
            Data_in => SW,
            Data_out => Op1S
        );

    Op2Reg: entity work.std_8bit_reg 
        port map (
            Reset => reset,
            Clk   => clk,
            Enable => Op2En,
            Data_in => SW,
            Data_out => Op2S
        );

    -- 16-bit register for storing calculation results
    CalcValReg: entity work.std_16bit_reg 
        port map (
            Reset => reset,
            Clk   => clk,
            Enable => RegSel,
            Data_in => CalcVal,
            Data_out => CalcVals
        );

end Behavioral;
