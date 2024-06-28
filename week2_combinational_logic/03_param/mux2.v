module mux2_assign
#(
	parameter 	BW_DATA = 4
)
(
	output [BW_DATA-1:0] o_out,
	input  [BW_DATA-1:0] i_sel,
	input  [BW_DATA-1:0] i_in0,
	input  [BW_DATA-1:0] i_in1
);

	assign o_out = i_sel ? i_in0 : i_in1;

endmodule

module mux2_if
#(
	parameter 	BW_DATA = 4
)
(
	output reg [BW_DATA-1:0] o_out,
 	input      [BW_DATA-1:0] i_sel,
	input      [BW_DATA-1:0] i_in0,
	input	   [BW_DATA-1:0] i_in1
);

	always @(*) begin
		if(i_sel == 0) begin
			o_out = i_in0;
		end
		else begin 
			o_out = i_in1;
		end
	end
endmodule


module mux2_case
#(
	parameter 	BW_DATA = 4
)
(
	output reg [BW_DATA-1:0] o_out,
 	input      [BW_DATA-1:0] i_sel,
	input      [BW_DATA-1:0] i_in0,
	input	   [BW_DATA-1:0] i_in1
);

	always @(*) begin
		case(i_sel)
			0: 		o_out = i_in0;
			1: 		o_out = i_in1;
		endcase
	end
endmodule

