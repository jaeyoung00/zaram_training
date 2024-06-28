module adder_4bit_dataflow
(
	output [3:0] o_s,
	output 		 o_c,
	input  [3:0] i_a,
	input  [3:0] i_b,
	input 		 i_c
);

	assign {o_s, o_c} = i_a + i_b + i_c;

endmodule



