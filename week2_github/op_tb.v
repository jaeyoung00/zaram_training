//----------------------------------------------------
// Define global variables 
//----------------------------------------------------

`define CLKFREQ		100
`define SIMCYCLE	2
`define NBIT		4

module op_tb;
	reg	[`NBIT-1:0] a;
	reg [`NBIT-1:0] b;

	integer 		i;

	initial begin 
		for(i=0; i<`SIMCYCLE; i++) begin 
			a = $urandom_range(0, 2**`NBIT-1);
			b = $urandom_range(0, 2**`NBIT-1);
			
			$display("====================================================");
			$display("Arithmetic Operators");
			$display("====================================================");
			$display("	a + b  =  %d(%b)  +   %d(%b) = %d(%b)", a, a, b, b, a+b ,  a+b);
			$display("	a - b  =  %d(%b)  -   %d(%b) = %d(%b)", a, a, b, b, a-b ,  a-b);
			$display("	a * b  =  %d(%b)  *   %d(%b) = %d(%b)", a, a, b, b, a*b ,  a*b);
			$display("	a / b  =  %d(%b)  /   %d(%b) = %d(%b)", a, a, b, b, a/b ,  a/b);
			$display("	a %% b =  %d(%b)  %%  %d(%b) = %d(%b)", a, a, b, b, a%b,   a%b);
			$display("	a ** 2 =  %d(%b)  **  %d(%b) = %d(%b)", a, a, b, b, a**2, a**2);
			#(1000/`CLKFREQ);
		end
		$finish;
	end

//----------------------------------------------------
// Dump VCD 
//----------------------------------------------------

	reg [8*32-1:0] vcd_file;
	initial begin 
		if ($value$plusargs("vcd_file=%s", vcd_file)) begin 
			$dumpfile(vcd_file);
			$dumpvars;
		end else begin 
			$dumpfile("op_tb.vcd");
			$dumpvars;
		end 
	end 
endmodule 
