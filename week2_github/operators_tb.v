`include "operators.v"
`define NBIT 	4

module operators_tb;

	 wire	[`NBIT:0] sum;		// plus
	 wire	[`NBIT:0] sub;		// minus	  
	 wire	[`NBIT:0] multi;	
	 wire	[`NBIT:0] div;	
	 wire	[`NBIT:0] mod;		// remain
	 wire	[`NBIT:0] square;	// square
	 reg	[`NBIT-1:0] a;
	 reg	[`NBIT-1:0] b;
	
	 operators
	 #(
	 .NBIT				(`NBIT				)
	 )
	 u_operators(
	 .sum				(sum				),
	 .sub				(sub				),
	 .multi				(multi				),
	 .div				(div				),
	 .mod				(mod				),
	 .square			(square				),
	 .a					(a					),
	 .b					(b					)
	 );









endmodule 

