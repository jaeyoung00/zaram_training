`define CLKFREQ  	50
`define SIMCYCLE    5

`include "shift_reg.v"

module shift_reg_tb;

	reg 			shift_load;
	reg				shift_clk;
	reg				shift_Sin;
	wire  [7:0]		shift_Q;
	reg   [7:0]		shift_D;
	wire			shift_Sout;

	shift_reg
	u_shift_reg(
		.shift_load			(shift_load			),
		.shift_clk			(shift_clk			),
		.shift_Sin			(shift_Sin			),
		.shift_Q			(shift_Q			),
		.shift_D			(shift_D			),
		.shift_Sout			(shift_Sout			)
	);

//--------------------------------------------
// Clock
//--------------------------------------------

	always #(500/`CLKFREQ) shift_clk = ~shift_clk;
	
//--------------------------------------------
// Tasks
//--------------------------------------------

	task init;
		begin 
		 	shift_load = 1'b0;
			shift_clk  = 1'b0;
			shift_Sin  = 1'b0;
			shift_D	   = 8'b0;
		end 
	endtask

	task PtoS;
		begin
			shift_Sin  = 1'b0;
			shift_D	   = $urandom;
			shift_load = 1'b1;

			@(posedge shift_clk) 
			shift_load = 1'b0;
			repeat(8) @(posedge shift_clk);
		end
	endtask

	task StoP;
		begin 
			shift_D    = 8'b0;
			shift_load = 1'b0;
			
			// shift_Sin = 1F
		//	@(posedge shift_clk);
			shift_Sin = 1'b1;
			@(posedge shift_clk);
			shift_Sin = 1'b0;
			@(posedge shift_clk);
			shift_Sin = 1'b0;
			@(posedge shift_clk);
			shift_Sin = 1'b0;
			@(posedge shift_clk);
			shift_Sin = 1'b1;
			@(posedge shift_clk);
			shift_Sin = 1'b1;
			@(posedge shift_clk);
			shift_Sin = 1'b1;
			@(posedge shift_clk);
			shift_Sin = 1'b1;
			repeat (2) @(posedge shift_clk);
		end 
	endtask

//--------------------------------------------
// Test stimulus
//--------------------------------------------
	integer i;	
	initial begin
		for(i=0; i<`SIMCYCLE; i=i+1) begin

			init();
			@(posedge shift_clk);

			PtoS();

			StoP();
		end 
			$finish;
	end 



// ---------------------------------------------------
// Dump VCD
// ---------------------------------------------------

	reg [8*32-1:0] vcd_file;
	initial begin
		if($value$plusargs("vcd_file=%s", vcd_file)) begin
			$dumpfile(vcd_file);
			$dumpvars;
		end else begin 
			$dumpfile("shift_reg_tb.vcd");
			$dumpvars;
		end
	end
endmodule

