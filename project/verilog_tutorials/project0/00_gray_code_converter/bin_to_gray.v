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
