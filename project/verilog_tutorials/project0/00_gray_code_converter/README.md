# GRAY CODE converter 
## operation principle 

- Bin -> Gray
	- G[N-1] = B[N-1]
	- G[i] = B[i] ^ B[i+1]
- Gray -> Bin
	- B[N-1] = G[N-1]
	- B[i] = B[i+1] ^ G[i]

## DUT - bin to gray 
```
module bin_to_gray
#(
	parameter NUM =	8
)
(
	input 	[NUM-1:0] Binary,
	output  [NUM-1:0] Gray
);

	assign Gray[NUM-1] = Binary[NUM-1];

	genvar i;
	generate
		for(i=0; i< NUM-1; i=i+1) begin 
			assign Gray[i] = (Binary[i] ^ Binary[i+1]);
		end 
	endgenerate
endmodule	
```
## DUT - Gray to Bin 
```
module gray_to_bin
#(
	parameter NUM  =  8	
)
(
	input  [NUM-1:0] Gray,
	output [NUM-1:0] Binary 
);

	assign Binary[NUM-1] = Gray[NUM-1];

	genvar i;
	generate 
		for(i=0; i<NUM-1; i=i+1) begin 
			assign Binary[i] = (Binary[i+1] ^ Gray[i]);
		end
	endgenerate
endmodule 
```

## Testbench
```
`define NUM 	8
`define SIMCYCLE 10

`include "bin_to_gray.v"
`include "gray_to_bin.v"

module graycode_tb;

	reg 	[`NUM-1:0] Binary_b2g;   
	wire 	[`NUM-1:0] Gray_b2g;     
	
	reg 	[`NUM-1:0] Gray_g2b;
	wire    [`NUM-1:0] Binary_original;   

	wire    [`NUM-1:0] Equal; 

	bin_to_gray
	#(
		.NUM				(`NUM				)
	)
	u_bin_to_gray(
		.Binary				(Binary_b2g			),
		.Gray				(Gray_b2g			)
	);
	
	gray_to_bin
	#(
		.NUM				(`NUM				)
	)
	u_gray_to_bin(
		.Gray				(Gray_b2g			),
		.Binary				(Binary_original	)
	);


//-------------------------------------
// Test Stimulus 
//-------------------------------------
	initial begin 
			Binary_b2g = 8'b0000_0000; #1;
			Binary_b2g = 8'b0000_0010; #1;
			Binary_b2g = 8'b0000_0100; #1;
			Binary_b2g = 8'b0000_1000; #1;
			Binary_b2g = 8'b0001_0000; #1;
			Binary_b2g = 8'b0010_0000; #1;
			Binary_b2g = 8'b0100_0000; #1;
			Binary_b2g = 8'b1000_0000; #1;
		end
		    assign Equal = (Binary_b2g != Binary_original) ? 0 : 1;
		

//-------------------------------------
// Dump VCD 
//-------------------------------------
	reg [8*32-1:0] vcd_file;
	initial begin 
		if($value$plusargs("vcd_file=%s", vcd_file)) begin 
		   $dumpfile(vcd_file);
		   $dumpvars;
	   end else begin
		   $dumpfile("graycode_tb.vcd");
		   $dumpvars;
	   end
   end
endmodule
```
## Simulation Results

- Binary_b2g == Binary_original --> equal = 1

![Waveform](./home/jylee/zaram_training/project/verilog_tutorials/project0/00_gray_code_converter/vcd/graycode.png)
