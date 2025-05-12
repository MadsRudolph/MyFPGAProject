--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:57:24 04/29/2025
-- Design Name:   
-- Module Name:   /home/ise/vhdl/wetransfer_vhdl_2025-04-25_1403/Calc_data/TB5.vhd
-- Project Name:  Calc_data
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Calc_data_topmudule
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
 
ENTITY TB5 IS
END TB5;
 
ARCHITECTURE behavior OF TB5 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Calc_data_topmudule
    PORT(
         Clk : IN  std_logic;
         Opcode : IN  std_logic_vector(2 downto 0);
         Inp1 : IN  std_logic_vector(15 downto 0);
         Inp2 : IN  std_logic_vector(7 downto 0);
         start : IN  std_logic;
         Calc_val : OUT  std_logic_vector(15 downto 0);
         done : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Clk : std_logic := '0';
   signal Opcode : std_logic_vector(2 downto 0) := (others => '0');
   signal Inp1 : std_logic_vector(15 downto 0) := (others => '0');
   signal Inp2 : std_logic_vector(7 downto 0) := (others => '0');
   signal start : std_logic := '0';

 	--Outputs
   signal Calc_val : std_logic_vector(15 downto 0);
   signal done : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Calc_data_topmudule PORT MAP (
          Clk => Clk,
          Opcode => Opcode,
          Inp1 => Inp1,
          Inp2 => Inp2,
          start => start,
          Calc_val => Calc_val,
          done => done
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for Clk_period*10;

      -- insert stimulus here 
opcode <= "100";
wait for 10 ns;
Inp1 <= "0000000000100000";
Inp2 <= "00000011";
wait for 10 ns;
start <= '1'; 

wait for 20 ns; 

start <= '0';
wait for 20 ns;
      wait;
   end process;

END;
