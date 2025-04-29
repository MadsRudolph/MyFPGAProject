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
			  Tilstand: out std_logic_vector (7 downto 0));
			  
end Calc_Menu;

architecture Behavioral of Calc_Menu is

    type Statetype is (A,B,C,D,E,F,G,H,I,J, K, Val1,Val2,Val3,Op1,Op2);


    signal state, nextstate : Statetype;

    -- Internal signals
    signal Calcvals : std_logic_vector (15 downto 0);
    signal Op1S, Op2S,Val1S, Val3S, DispSel, Val2S : STD_LOGIC_VECTOR (7 downto 0);
    signal Val1En, Val2En, Val3En, Op1En, Op2En, RegSel : STD_LOGIC;

begin

    -- Sequential process for state machine
    Statereg: process(reset, clk)
    begin 
        if reset = '1' then 
            state <= A;
        elsif clk'event and clk = '1' then
            state <= nextstate;
        end if;
    end process;

    -- Next state logic and register enables
    StateDec: process (state, func, enter, operation, done)
    begin
        Val1En <= '0';
        Val2En <= '0';
        Val3En <= '0';
        Op1En <= '0';
        Op2En <= '0';
        Start <= '0';
        RegSel <= '0';
        DispSel <= "00000000";
		  Tilstand <= "00000000";

        case state is
            when A =>
                DispSel <= "00000001";
					 Tilstand <= "00000001";
                if func = '1' then
                    nextstate <= B;
                elsif enter = '1' then 
                    nextstate <= Val1;
                elsif operation = '1' then
                    nextstate <= F;
                else 
                    nextstate <= A;
                end if;

            when Val1 => 
                Val1En <= '1';
                nextstate <= A;

            when B =>
                DispSel <= "00000010";
					 Tilstand <= "00000010";					 
                if func = '1' then
                    nextstate <= C;
                elsif enter = '1' then 
                    nextstate <= Op1;
                elsif operation = '1' then
                    nextstate <= F;
                else 
                    nextstate <= B;
                end if;

            when Op1 => 
                Op1En <= '1';
                nextstate <= B;

            when C =>
                DispSel <= "00000011";
					 Tilstand <= "00000100";					 
                if func = '1' then
                    nextstate <= D;
                elsif enter = '1' then 
                    nextstate <= Val2;
                elsif operation = '1' then
                    nextstate <= F;
                else 
                    nextstate <= C;
                end if;

            when Val2 => 
                Val2En <= '1';
                nextstate <= C;

            when D =>
                DispSel <= "00000100";
					 Tilstand <= "00001000";					 
                if func = '1' then
                    nextstate <= E;
                elsif enter = '1' then 
                    nextstate <= Op2;
                elsif operation = '1' then
                    nextstate <= F;
                else 
                    nextstate <= D;
                end if;

            when Op2 => 
                Op2En <= '1';
                nextstate <= D;

            when E =>
                DispSel <= "00000101";
					 Tilstand <= "00010000";					 
                if func = '1' then
                    nextstate <= A;
                elsif enter = '1' then 
                    nextstate <= Val3;
                elsif operation = '1' then
                    nextstate <= F;
                else 
                    nextstate <= E;
                end if;

            when Val3 => 
                Val3En <= '1';
                nextstate <= E;

            when F =>
                Start <= '1';
                RegSel <= '0';
                    nextstate <= G;

            when G =>
					 Tilstand <= "00100000";
                Start <= '0';
						nextstate <= H;
						
            when H =>
                RegSel <= '1';
					 if done = '1'
					 then
                nextstate <= I;
					 else
						nextstate <= H;
						end if;					
            
				when I =>
					 RegSel <= '1';
                Start <= '1';
					 nextstate <= J;
					 
            when J =>
					 RegSel <= '1';
					 Tilstand <= "01000000";
                Start <= '0';
					 if done = '1'
					 then
                nextstate <= K;
					 else
						nextstate <= J;
						end if;
						
            when K =>
					 Tilstand <= "10000000";
                DispSel <= "00000110";  
                if enter = '1' then
                    nextstate <= A;
                else 
                    nextstate <= K;
                end if;
        end case;
    end process;

    -- Display data assignment based on DispSel value
    with DispSel select
        DispData <= 
            (others => '0')          when "00000000", 
            X"A0" & Val1S            when "00000001",
            X"B0" & Op1s             when "00000010",
            X"C0" & Val2S            when "00000011",
            X"d0" & Op2S             when "00000100",
            X"E0" & Val3s            when "00000101",
            CalcVals                 when "00000110",
            (others => '0')          when others;

    with RegSel select
        In1 <=  
             X"00" & Val1S       	 when '0',
            CalcVals						 when '1',
            (others => '0')          when others;

    with RegSel select
        In2 <=  
            Val2S            			when '0',
            Val3s							when '1',
            (others => '0')          when others;

    with RegSel select
        OpCode <=  
            op1s(2 downto 0)           when '0',
            op2s(2 downto 0)				 when '1',
            (others => '0')          when others;

    -- Register mappings
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

    CalcValReg: entity work.std_16bit_reg 
        port map (
            Reset => reset,
            Clk   => clk,
            Enable => RegSel,
            Data_in => CalcVal,
            Data_out => CalcVals
        );

end Behavioral;
