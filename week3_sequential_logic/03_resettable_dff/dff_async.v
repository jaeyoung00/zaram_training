module dff_async
(
	output reg		o_q,
	input 			i_d,
	input			i_clk,
	input			i_rstn
);

	always @(posedge i_clk or negedge i_rstn) begin
		if(!i_rstn) begin
			o_q <= 1'b0;
		end else begin
			o_q <= i_d;
		end 
	end
endmodule

