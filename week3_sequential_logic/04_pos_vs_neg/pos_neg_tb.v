`include "dff_neg.v"
`include "dff_pos.v"

`define CLKFREQ 100
`define SIMCYCLE 50

module pos_neg_tb;
	
	wire	    o_q_neg;
	wire	    o_q_pos;
	reg			i_d;
	reg			i_clk;
	reg 		i_rstn;
	reg 		i_rst;

	dff_neg
	u_dff_neg(
		.o_q				(o_q_neg			),
		.i_d				(i_d				),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				)
	);

	dff_pos
	u_dff_pos(
		.o_q				(o_q_pos			),
		.i_d				(i_d				),
		.i_clk				(i_clk				),
		.i_rst				(i_rst				)
	);

//--------------------------------------------------
// Clock 
//--------------------------------------------------

	always #(500/`CLKFREQ) i_clk = ~i_clk;

//--------------------------------------------------
// Task
//--------------------------------------------------	
	task init;
		begin
			i_d	  = 0;
			i_clk = 0;
			i_rst = 1;
			i_rstn = 0;
		end
	endtask

	task resetReleaseAfterNCycles;
		input [9:0] n;
		begin 
			#(n*1000/`CLKFREQ);
			i_rstn = ~i_rstn;
			i_rst = ~i_rst;
		end
	endtask

//--------------------------------------------------
// Test Stimulus
//--------------------------------------------------	
	
	integer i, j;
	initial begin
		init();
		resetReleaseAfterNCycles(4);
		resetReleaseAfterNCycles(4);
		resetReleaseAfterNCycles(4);
		
		
		for(i=0; i<`SIMCYCLE; i++) begin
			j	= $urandom_range(0,10);
			#((     (j*0.1)) * 1000 / `CLKFREQ);
			i_d 	= $urandom;
			#((1  - (j*0.1)) * 1000 / `CLKFREQ);
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
			$dumpfile("pos_neg_tb.vcd");
			$dumpvars;
		end
	end
endmodule 









