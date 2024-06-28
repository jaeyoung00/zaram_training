
`define  CLKFREQ	100
`define  SIMCYCLE   10

`include "block.v"
`include "nonblock.v"

module block_tb;

	wire	 		o_q_block;
	wire	 		o_q_nonblock;
	reg				i_d;
	reg				i_clk;

	block
	u_block(
		.o_q				(o_q_block			),
		.i_d				(i_d				),
		.i_clk				(i_clk				)
	);

	nonblock
	u_nonblock(
		.o_q				(o_q_nonblock		),
		.i_d				(i_d				),
		.i_clk				(i_clk				)
	);

// ---------------------------------------------------
// Clock
// ---------------------------------------------------
	always #(500/`CLKFREQ) i_clk = ~i_clk;

// ---------------------------------------------------
// Tasks
// ---------------------------------------------------

task init;
	begin 	
		i_d = 0;
		i_clk = 0;
	end 
endtask


// ---------------------------------------------------
// Test Stimulus
// ---------------------------------------------------
	
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
			$dumpfile("block_tb.vcd");
			$dumpvars;
		end
	end
endmodule



