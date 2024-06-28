module nonblock(
	output reg 		o_q,
	input			i_d,
	input			i_clk
);

	reg 			n_1;
	always @(posedge i_clk) begin 
		n_1 <= i_d;
		o_q <= n_1;
	end
endmodule 

