`include "../common/riscv_configs.v"

module riscv_adder
(
	output 	[`XLEN-1:0]		o_adder_sum,
	input 	[`XLEN-1:0] 	i_adder_a,
	input 	[`XLEN-1:0] 	i_adder_b
);

	assign 	o_adder_sum = i_adder_a + i_adder_b;

endmodule 

