module operators
#(
	parameter NBIT = 4
)
(
	output	[NBIT:0]	 sum,		// plus
	output	[NBIT:0]	 sub,		// minus	  
	output	[NBIT:0]	 multi,	
	output	[NBIT:0]	 div,	
	output	[NBIT:0]	 mod,		// remain
	output	[NBIT:0]	 square,	// square
	input	[NBIT-1:0]   a,
	input	[NBIT-1:0]   b
);

	assign sum 		= a + b;
	assign sub 		= a - b;
	assign multi 	= a * b;
	assign div 		= a / b;
	assign mod 		= a + b;
	assign square 	= a + b;

endmodule
