library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Calc_Menu_tb is
    -- No ports for a testbench
end Calc_Menu_tb;

architecture behavior of Calc_Menu_tb is

    -- Component Declaration for the Unit Under Test (UUT)
    component Calc_Menu
        Port ( 
            Reset : in  STD_LOGIC;
            Clk : in  STD_LOGIC;
            Enter : in  STD_LOGIC;
            Operation : in  STD_LOGIC;
            Func : in  STD_LOGIC;
            CalcVal : in  STD_LOGIC_VECTOR (15 downto 0);
            DispData : out  STD_LOGIC_VECTOR (15 downto 0);
            Start : out  STD_LOGIC;
            Done : in  STD_LOGIC;
            OpCode : out  STD_LOGIC_VECTOR (2 downto 0);
            In1 : out  STD_LOGIC_VECTOR (7 downto 0);
            In2 : out  STD_LOGIC_VECTOR (7 downto 0);
            SW : in STD_LOGIC_VECTOR (7 downto 0)
        );
    end component;

    -- Testbench signals
    signal Reset : STD_LOGIC := '0';
    signal Clk : STD_LOGIC := '0';
    signal Enter : STD_LOGIC := '0';
    signal Operation : STD_LOGIC := '0';
    signal Func : STD_LOGIC := '0';
    signal CalcVal : STD_LOGIC_VECTOR (15 downto 0) := (others => '0');
    signal DispData : STD_LOGIC_VECTOR (15 downto 0);
    signal Start : STD_LOGIC;
    signal Done : STD_LOGIC := '0';
    signal OpCode : STD_LOGIC_VECTOR (2 downto 0);
    signal In1 : STD_LOGIC_VECTOR (7 downto 0);
    signal In2 : STD_LOGIC_VECTOR (7 downto 0);
    signal SW : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');

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

    -- Clock generation process
    Clk_process : process
    begin
        Clk <= '0';
        wait for 10 ns;
        Clk <= '1';
        wait for 10 ns;
    end process;

    -- Stimulus process
    Stimulus: process
    begin
        -- Apply reset
        Reset <= '1';
        wait for 20 ns;
        Reset <= '0';
        wait for 20 ns;

        -- Test case 1: Set inputs and check outputs
        SW <= "00000001"; -- Set SW to some value
        Enter <= '1';
        wait for 20 ns;
        Enter <= '0';
        wait for 20 ns;

        -- Test case 2: Another test case
        SW <= "00000010";
        Operation <= '1';
        wait for 20 ns;

        -- Done testing
        Done <= '1';
        wait for 20 ns;
        Done <= '0';
        wait for 20 ns;

        -- End simulation
        wait for 100 ns;
		  wait;
    end process;

end behavior;
