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

