-----------  Driver to sevensegment display  --------------- 
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity SevenSeg4 is
    Port ( Reset,Clk: in  std_logic;    
	        Data :   in  std_logic_vector (15 downto 0); -- Binary data
           cat :    out std_logic_vector(6 downto 0);  -- Common cathodes
           an :     out std_logic_vector(3 downto 0)); -- Common Anodes
end SevenSeg4;

architecture SevenSeg_arch of SevenSeg4 is
signal DispCount: integer range 0 to 3;
signal DataN: std_logic_vector (3 downto 0);

begin
	

	DispCountReg: process(reset, Clk)
	begin
	 if Reset = '1' then
	 DispCount <= 0;
	 elsif Clk'event and Clk = '1' then
	   if DispCount = 3 
		  then DispCount <= 0;
		  else DispCount <= DispCount + 1; end if;
      end if;
	end process DispCountReg;

	DispCountDec: process(DispCount, Data)
	begin
	  case DispCount is
	    when 0 => 
		   an <= "1110";        --  Display 1 activated
			DataN <= Data(3 downto 0);
	    when 1 => 
		   an <= "1101";        --  Display 1 activated
			DataN <= Data(7 downto 4);
	    when 2 => 
		   an <= "1011";        --  Display 1 activated
			DataN <= Data(11 downto 8);
	    when others => 
		   an <= "0111";        --  Display 1 activated
			DataN <= Data(15 downto 12);
     end case;
    end process DispCountDec;

   with DataN SELect      --  Activate segments acc. to Data
     cat <= "0000001" when "0000",   --0
            "1001111" when "0001",   --1
            "0010010" when "0010",   --2
            "0000110" when "0011",   --3
         	"1001100" when "0100",   --4
         	"0100100" when "0101",   --5
         	"0100000" when "0110",   --6
         	"0001101" when "0111",   --7
				"0000000" when "1000",   --8
				"0001100" when "1001",   --9
				"0001000" when "1010",   --A
				"1100000" when "1011",   --b
				"0110001" when "1100",   --C
				"1000010" when "1101",   --d
				"0110000" when "1110",   --E
				"0111000" when "1111",   --F
         	"1111111" when others;  --blank

end SevenSeg_arch;
