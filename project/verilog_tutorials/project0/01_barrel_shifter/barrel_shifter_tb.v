`include "barrel_shifter.v"
`define  SIMCYCLE 10
`define  CLKFREQ  50

module barrel_shifter_tb;

	reg 		  clk;
	reg 	[7:0] a;
	reg 	[2:0] k;
	wire 	[7:0] y;

	barrel_shifter
	u_barrel_shifter(
		.a					(a					),
		.k					(k					),
		.y					(y					)
	);

//----------------------------------------------
// Clock 
//----------------------------------------------
	
 	always #(500/`CLKFREQ) clk = ~clk;

//----------------------------------------------
// Tasks  
//----------------------------------------------
	
	task init;
		begin 
			clk = 0;
			a 	= 0;
			k 	= 0; 
		end 
	endtask

//----------------------------------------------
// Test Stimulus   
//----------------------------------------------
	
	integer i;
	initial begin 
		init();
		
		for(i=0; i<`SIMCYCLE; i++) begin 
			
			a = 8'b0000_0100;
			k = 3'h1;

			@(posedge clk);
			#10;

			a = 8'b1111_0000;
			k = 3'h3;

			@(posedge clk);
			#10;
			
			a = 8'b0101_0101;
			k = 3'h1;

		end
	$finish;
	end 

//---------------------------------------------
// Dump VCD  
//---------------------------------------------

    reg [8*32-1:0] vcd_file;
    initial begin
        if($value$plusargs("vcd_file=%s", vcd_file)) begin
            $dumpfile(vcd_file);
            $dumpvars;
        end else begin
            $dumpfile("barrel_shifter_tb.vcd");
            $dumpvars;
        end
    end
endmodule 

