library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ENT3 is
    Port (
        Reset : in  STD_LOGIC;
        Clk   : in  STD_LOGIC;
        X     : in  STD_LOGIC_VECTOR(1 downto 0);
        Z     : out STD_LOGIC_VECTOR(1 downto 0)
    );
end ENT3;

architecture Behavioral of ENT3 is
    type StateType is (S0, S1, S2, S3, S4);
    signal State, NextState : StateType;
begin

    -- State register
    process(Reset, Clk)
    begin
        if Reset = '1' then --Asynkron reset
            State <= S0;
        elsif rising_edge(Clk) then
            State <= NextState;
        end if;
    end process;

    -- Output and next-state logic
    process(State, X)
    begin
        Z <= "00";
        NextState <= State;

        case State is
            when S0 =>
                Z <= "11";
                if X(1) = '1' then
                    NextState <= S1;
                end if;

            when S1 =>
                Z(0) <= '1';
                if X = "10" then
						NextState <= S3;
						elsif X(1) = '0' then
						NextState <= S2;
						end if;


            when S2 =>
                Z(1) <= '1';
                if X(0) = '1' then
                    NextState <= S3;
                elsif X(0) = '0' then
                    NextState <= S1;
                end if;

            when S3 =>
                Z <= "11";
                NextState <= S4;

            when S4 =>
                if X = "00" then
                    NextState <= S1;
                end if;
        end case;
    end process;

end Behavioral;
