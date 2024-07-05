# Carry Lookahead Adder 

## Curcuit diagram 

## Principle
- P(propagation) = A^B
- G(generation)  = A&B

- 4bit cla 
  - Ci = Gi ^ Pi & Ci
  - P = P[3] & P[2] & P[1] & P[0]
  - G = G[3] | (P[3] & G[2]) | (P[3] & P[2] & G[1]) | (P[3] & P[2] & P[1] & G[0]);

## DUT 
```
module cla_32bit(
	input [31:0] i_A,
	input [31:0] i_B,
	input 		 i_ci,
	output [31:0] o_SUM,
	output 		  o_Cout
);
	wire [7:0] 	 carry;

	cla_4bit u_cla_4bit0(.a(i_A[3:0]),    .b(i_B[3:0]),   .cin(i_ci),     .s(o_SUM[3:0]),   .cout(carry[0]));
	cla_4bit u_cla_4bit1(.a(i_A[7:4]),    .b(i_B[7:4]),   .cin(carry[0]), .s(o_SUM[7:4]),   .cout(carry[1]));
	cla_4bit u_cla_4bit2(.a(i_A[11:8]),   .b(i_B[11:8]),  .cin(carry[1]), .s(o_SUM[11:8]),  .cout(carry[2]));
	cla_4bit u_cla_4bit3(.a(i_A[15:12]),  .b(i_B[15:12]), .cin(carry[2]), .s(o_SUM[15:12]), .cout(carry[3]));
	cla_4bit u_cla_4bit4(.a(i_A[19:16]),  .b(i_B[19:16]), .cin(carry[3]), .s(o_SUM[19:16]), .cout(carry[4]));
	cla_4bit u_cla_4bit5(.a(i_A[23:20]),  .b(i_B[23:20]), .cin(carry[4]), .s(o_SUM[23:20]), .cout(carry[5]));
	cla_4bit u_cla_4bit6(.a(i_A[27:24]),  .b(i_B[27:24]), .cin(carry[5]), .s(o_SUM[27:24]), .cout(carry[6]));
	cla_4bit u_cla_4bit7(.a(i_A[31:28]),  .b(i_B[31:28]), .cin(carry[6]), .s(o_SUM[31:28]), .cout(o_Cout));
		
	endmodule

module cla_4bit(
	input [3:0]  a,
	input [3:0]  b,
	input 		 cin,
	output [3:0] s,
	output 		 cout
);
	
	wire [3:0] g;
	wire [3:0] p;
	wire [3:0] c;
		
	full_adder u_full_adder0(.a(a[0]), .b(b[0]), .ci(cin),  .sum(s[0]), .p(p[0]), .g(g[0]));
	full_adder u_full_adder1(.a(a[1]), .b(b[1]), .ci(c[0]), .sum(s[1]), .p(p[1]), .g(g[1]));
	full_adder u_full_adder2(.a(a[2]), .b(b[2]), .ci(c[1]), .sum(s[2]), .p(p[2]), .g(g[2]));
	full_adder u_full_adder3(.a(a[3]), .b(b[3]), .ci(c[2]), .sum(s[3]), .p(p[3]), .g(g[3]));
		
	cla_block u_cla_block(.g(g), .p(p), .ci(cin), .c(c), .cout(cout));
	
endmodule 

module full_adder(
	input a,
	input b, 
	input ci,
	output sum,
	output p, 
	output g
);

	assign p = a^b;  // propagation
	assign g = a&b;  // generation
	assign sum = p ^ ci;
endmodule 

module cla_block(
	input [3:0]  g,
	input [3:0]  p,
	input 		 ci,
	output		 cout,
	output [3:0] c
);
  	wire  		 pp;
	wire  		 gg;

	assign pp = p[3] & p[2] & p[1] & p[0];
	assign gg = g[3] | (p[3]&g[2]) | (p[3]&p[2]&g[1]) | (p[3]&p[2]&p[1]&g[0]);

	assign c[0] = g[0] || (p[0] && ci);  
	assign c[1] = g[1] || (p[1] && c[0]);
	assign c[2] = g[2] || (p[2] && c[1]);
	assign c[3] = g[3] || (p[3] && c[2]);
	
	assign cout = gg || (pp && ci);

endmodule
```

## Testbench
```
// --------------------------------------------------
//	Define Global Variables
// --------------------------------------------------
`define	CLKFREQ		100		// Clock Freq. (Unit: MHz)
`define	SIMCYCLE	`NVEC	// Sim. Cycles
`define BW_DATA		32		// Bitwidth of ~~
`define NVEC		10		// # of Test Vector

// --------------------------------------------------
//	Includes
// --------------------------------------------------
`include	"adder_cla.v"

module adder_tb;
// --------------------------------------------------
//	DUT Signals & Instantiate
// --------------------------------------------------

	reg [`BW_DATA-1:0]  i_A;
	reg [`BW_DATA-1:0]  i_B;
	reg 				i_ci;
	wire [`BW_DATA-1:0] o_SUM;
	wire 		  		o_Cout;

	cla_32bit
	u_cla_32bit(
		.i_A				(i_A				),
		.i_B				(i_B				),
		.i_ci				(i_ci				),
		.o_SUM				(o_SUM				),
		.o_Cout				(o_Cout				)
	);

// --------------------------------------------------
//	Test Vector Configuration
// --------------------------------------------------
	reg		[`BW_DATA-1:0]	vo_s[0:`NVEC-1];
	reg						vo_c[0:`NVEC-1];
	reg		[`BW_DATA-1:0]	vi_a[0:`NVEC-1];
	reg		[`BW_DATA-1:0]	vi_b[0:`NVEC-1];
	reg						vi_c[0:`NVEC-1];

	initial begin
		$readmemb("./vec/o_s.vec",			vo_s);
		$readmemb("./vec/o_c.vec",			vo_c);
		$readmemb("./vec/i_a.vec",			vi_a);
		$readmemb("./vec/i_b.vec",			vi_b);
		$readmemb("./vec/i_c.vec",			vi_c);
	end

// --------------------------------------------------
//	Tasks
// --------------------------------------------------
	reg		[4*32-1:0]	taskState;
	integer				err	= 0;

	task init;
		begin
			taskState		= "Init";
			i_A				= 0;
			i_B				= 0;
			i_ci			= 0;
		end
	endtask

	task vecInsert;
		input	[$clog2(`NVEC)-1:0]	i;
		begin
			$sformat(taskState,	"VEC[%3d]", i);
			i_A				= vi_a[i];
			i_B				= vi_b[i];
			i_ci			= vi_c[i];
		end
	endtask

	task vecVerify;
		input	[$clog2(`NVEC)-1:0]	i;
		begin
			#(0.1*1000/`CLKFREQ);
			if (o_SUM				!= vo_s[i]) begin $display("[Idx: %3d] Mismatched o_s", i); end
			if (o_Cout				!= vo_c[i]) begin $display("[Idx: %3d] Mismatched o_c", i); end
			if ((o_SUM != vo_s[i]) || (o_Cout != vo_c[i])) begin err++; end
			#(0.9*1000/`CLKFREQ);
		end
	endtask

// --------------------------------------------------
//	Test Stimulus
// --------------------------------------------------
	integer		i, j;
	initial begin
		init();
		for (i=0; i<`SIMCYCLE; i++) begin
			vecInsert(i);
			vecVerify(i);
		end
		#(1000/`CLKFREQ);
		$finish;
	end

// --------------------------------------------------
//	Dump VCD
// --------------------------------------------------
	reg	[8*32-1:0]	vcd_file;
	initial begin
		if ($value$plusargs("vcd_file=%s", vcd_file)) begin
			$dumpfile(vcd_file);
			$dumpvars;
		end else begin
			$dumpfile("adder_tb.vcd");
			$dumpvars;
		end
	end

endmodule
```

## Simulation results

- @10sec 
  - i_A = 32'h7338_8A45
  - i_B = 32'hEA68_2531
  - o_SUM = 32'h5DA0_AF76
    - 32bit_cla ==> no err

  
![Waveform](./vcd/adder.vcd)
