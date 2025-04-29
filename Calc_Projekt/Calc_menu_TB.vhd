library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Declare the testbench entity
entity Calc_Menu_tb is
end Calc_Menu_tb;

architecture behavior of Calc_Menu_tb is

    -- Component Declaration for the Unit Under Test (UUT)
    component Calc_Menu
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
               SW : in STD_LOGIC_VECTOR (7 downto 0));
    end component;

    -- Signals for the inputs of the UUT
    signal Reset : STD_LOGIC := '0';
    signal Clk : STD_LOGIC := '0';
    signal Enter : STD_LOGIC := '0';
    signal Operation : STD_LOGIC := '0';
    signal Func : STD_LOGIC := '0';
    signal CalcVal : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
    signal Done : STD_LOGIC := '0';
    signal SW : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');

    -- Signals for the outputs of the UUT
    signal DispData : STD_LOGIC_VECTOR(15 downto 0);
    signal Start : STD_LOGIC;
    signal OpCode : STD_LOGIC_VECTOR(2 downto 0);
    signal In1 : STD_LOGIC_VECTOR(15 downto 0);
    signal In2 : STD_LOGIC_VECTOR(7 downto 0);

begin
    -- Instantiate the Unit Under Test (UUT)
    uut: Calc_Menu
        Port map (
            Reset => Reset,
            Clk => Clk,
            Enter => Enter,
            Operation => Operation,
            Func => Func,
            CalcVal => CalcVal,
            DispData => DispData,
            Start => Start,
            Done => Done,
            OpCode => OpCode,
            In1 => In1,
            In2 => In2,
            SW => SW
        );

    -- Clock process (generates a clock signal)
    clk_process : process
    begin
        Clk <= '0';
        wait for 10 ns;
        Clk <= '1';
        wait for 10 ns;
    end process;

    -- Stimulus process (applies input values to the UUT)
    stim_proc: process
    begin
        -- Initialize inputs
        Reset <= '1'; -- Start with a reset
        wait for 20 ns;
        Reset <= '0'; -- De-assert reset

        -- Test Case 1: State A (waiting for Val1 input)
        -- State A is active
        -- Step 1: Load Val1 value into the register
        SW <= "00000001";  -- Input value for Val1
		  wait for 20 ns;
        Enter <= '1';      -- Simulate pressing Enter to load Val1
        wait for 20 ns;
        Enter <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 2: Press Func to move to State B (set Op1)
        Func <= '1';       -- Press Func to go to next state (State B)
        wait for 20 ns;
        Func <= '0';       -- Release Func
        wait for 20 ns;

        -- Test Case 2: State B (setting Op1)
        -- State B is active
        -- Step 3: Load Op1 value (from SW input)
        SW <= "00000010";  -- Input value for Op1
		  wait for 20 ns;
        Enter <= '1';      -- Simulate pressing Enter to load Op1
        wait for 20 ns;
        Enter <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 4: Press Func to move to State C (set val2)
        Func <= '1';       -- Press Func to go to next state (State C)
        wait for 20 ns;
        Func <= '0';       -- Release Func
        wait for 20 ns;

        -- Test Case 3: State C (val2)
        -- State C is active
        -- Step 5: Load Op2 value (from SW input)
        SW <= "00000011";  -- Input value for val2
		  wait for 20 ns;
        Enter <= '1';      -- Simulate pressing Enter to load val2
        wait for 20 ns;
        Enter <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 6: Press Func to move to State D (set op2)
        Func <= '1';       -- Press Func to go to next state (State D)
        wait for 20 ns;
        Func <= '0';       -- Release Func
        wait for 20 ns;

        -- Test Case 4: State D (setting op2)
        -- State D is active
        -- Step 7: Load Val3 value (from SW input)
        SW <= "00000100";  -- Input value for op2
		  wait for 20 ns;
        Enter <= '1';      -- Simulate pressing Enter to load op2
        wait for 20 ns;
        Enter <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 8: Press fumc to go to state E (Setting Val3)
        Func <= '1';       
        wait for 20 ns;
        Func <= '0';       -- Release Func
        wait for 20 ns;

		  SW <= "00000100";  -- Input value for Val3
		  wait for 20 ns;
        Enter <= '1';      -- Simulate pressing Enter to load Val3
        wait for 20 ns;
        Enter <= '0';      -- Release Enter
        wait for 20 ns;
      
		
		 -- step 9 Going to state F by pressing operation
		 operation <= '1';
		 wait for 20 ns;
		 operation <='0';
		 wait for 40 ns;
		--stepsis 10
		calcval <="0010010010010101";
		done <= '1';
		wait for 20 ns;
		done <= '0';
		wait for 20 ns;
		
		calcval <="1111111111111111";
		--step 11 going from j to k when done is high
		done <= '1';
		wait for 20 ns;
		done <='0';
		wait for 20 ns;
		
		--step 12 going back to State A
		enter <='1';
		wait for 20 ns;
		enter <='0';
		wait for 20 ns;
		enter <='1';
		wait for 20 ns;
		enter <='0';
		wait for 20 ns;
	
		
		wait;
    end process;

end behavior;
