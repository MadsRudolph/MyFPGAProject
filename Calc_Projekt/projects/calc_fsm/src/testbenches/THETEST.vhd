--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:48:34 04/30/2025
-- Design Name:   
-- Module Name:   C:/Users/s246132/Xilinx_Projects/MyFPGAProject/Calc_Projekt/THETEST.vhd
-- Project Name:  Calc_Projekt
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Calc_Top
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY THETEST IS
END THETEST;
 
ARCHITECTURE behavior OF THETEST IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Calc_Top
    PORT(
         BTN3 : IN  std_logic;
         MClk : IN  std_logic;
         BTN0 : IN  std_logic;
         BTN1 : IN  std_logic;
         BTN2 : IN  std_logic;
         SW : IN  std_logic_vector(7 downto 0);
         An : OUT  std_logic_vector(3 downto 0);
         Cat : OUT  std_logic_vector(6 downto 0);
         ld : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal BTN3 : std_logic := '0';
   signal MClk : std_logic := '0';
   signal BTN0 : std_logic := '0';
   signal BTN1 : std_logic := '0';
   signal BTN2 : std_logic := '0';
   signal SW : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal An : std_logic_vector(3 downto 0);
   signal Cat : std_logic_vector(6 downto 0);
   signal ld : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant MClk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Calc_Top PORT MAP (
          BTN3 => BTN3,
          MClk => MClk,
          BTN0 => BTN0,
          BTN1 => BTN1,
          BTN2 => BTN2,
          SW => SW,
          An => An,
          Cat => Cat,
          ld => ld
        );

   -- Clock process definitions
   MClk_process :process
   begin
		MClk <= '0';
		wait for 20 ns;
		MClk <= '1';
		wait for 20 ns;
   end process;
 

   -- Stimulus process
  stim_proc: process
    begin
        -- Initialize inputs
        BTN3 <= '1'; -- Start with a reset
        wait for 20 ns;
        BTN3 <= '0'; -- De-assert reset

        -- Test Case 1: State A (waiting for Val1 input)
        -- State A is active
        -- Step 1: Load Val1 value into the register
        SW <= "00000001";  -- Input value for Val1
		  wait for 20 ns;
        BTN0 <= '1';      -- Simulate pressing Enter to load Val1
        wait for 20 ns;
        BTN0 <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 2: Press Func to move to State B (set Op1)
        BTN1 <= '1';       -- Press Func to go to next state (State B)
        wait for 20 ns;
        BTN1 <= '0';       -- Release Func
        wait for 20 ns;

        -- Test Case 2: State B (setting Op1)
        -- State B is active
        -- Step 3: Load Op1 value (from SW input)
        SW <= "00000010";  -- Input value for Op1
		  wait for 20 ns;
        BTN0 <= '1';      -- Simulate pressing Enter to load Op1
        wait for 20 ns;
        BTN0 <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 4: Press Func to move to State C (set val2)
        BTN1 <= '1';       -- Press Func to go to next state (State C)
        wait for 20 ns;
        BTN1 <= '0';       -- Release Func
        wait for 20 ns;

        -- Test Case 3: State C (val2)
        -- State C is active
        -- Step 5: Load Op2 value (from SW input)
        SW <= "00000011";  -- Input value for val2
		  wait for 20 ns;
        BTN0 <= '1';      -- Simulate pressing Enter to load val2
        wait for 20 ns;
        BTN0 <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 6: Press Func to move to State D (set op2)
        BTN1 <= '1';       -- Press Func to go to next state (State D)
        wait for 20 ns;
        BTN1 <= '0';       -- Release Func
        wait for 20 ns;

        -- Test Case 4: State D (setting op2)
        -- State D is active
        -- Step 7: Load Val3 value (from SW input)
        SW <= "00000100";  -- Input value for op2
		  wait for 20 ns;
        BTN0 <= '1';      -- Simulate pressing Enter to load op2
        wait for 20 ns;
        BTN0 <= '0';      -- Release Enter
        wait for 20 ns;

        -- Step 8: Press fumc to go to state E (Setting Val3)
        BTN1 <= '1';       
        wait for 20 ns;
        BTN1 <= '0';       -- Release Func
        wait for 20 ns;

		  SW <= "00000100";  -- Input value for Val3
		  wait for 20 ns;
        BTN0 <= '1';      -- Simulate pressing Enter to load Val3
        wait for 20 ns;
        BTN0 <= '0';      -- Release Enter
        wait for 20 ns;
      
		
		 -- step 9 Going to state F by pressing operation
		 BTN2 <= '1';
		 wait for 20 ns;
		 BTN2 <='0';
		 
		wait;
    end process;

end behavior;
