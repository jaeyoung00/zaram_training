module dff_pos(
	output reg		o_q,
	input			i_d,
	input			i_clk,
	input 			i_rst
);

	always @(posedge i_clk or posedge i_rst) begin 
		if(i_rst) begin
			o_q <= 1'b0;
		end else begin
			o_q <= i_d;
		end
	end
endmodule
