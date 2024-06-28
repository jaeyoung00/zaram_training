`define CLKFREQ  	100
`define SIMCYCLE 	50

`include "dff.v"
`include "latch.v"

module latch_dff_tb;

	wire		o_q_dff;
	wire		o_q_latch;
	reg			i_d;
	reg			i_clk;

	dff
	u_dff(
		.o_q				(o_q_dff			),
		.i_d				(i_d				),
		.i_clk				(i_clk				)
	);
	
	latch
	u_latch(
		.o_q				(o_q_latch			),
		.i_d				(i_d				),
		.i_clk				(i_clk				)
	);

//---------------------------------------------------
// Clock 
//---------------------------------------------------

	always #(500/`CLKFREQ) i_clk = ~i_clk;

//---------------------------------------------------
// Task  
//---------------------------------------------------

	task init;
		begin 
			i_d   = 0;
			i_clk = 0;
		end
	endtask

//---------------------------------------------------
// Test Stimulus  
//---------------------------------------------------

	integer i, j;
	initial begin 
		init();

		for(i=0; i<`SIMCYCLE; i++) begin
			j = $urandom_range(0,10);
			#((	   (j*0.1)) * 1000/`CLKFREQ);
			i_d = $urandom;
			#((1 - (j*0.1)) * 1000/`CLKFREQ);
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
			$dumpfile("latch_dff_tb.vcd");
			$dumpvars;
		end
	end
endmodule


