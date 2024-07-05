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
