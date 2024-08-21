`ifndef 	NOINC
`include 	"../common/riscv_mux.v"
`include 	"../common/riscv_configs.v"
`endif 

module 	pipe_datapath_Writeback
#(
	parameter 	REGISTER_INIT = 0
)
(
	output 		[`XLEN-1:0]	o_dp_ResultW,
	input 		[`XLEN-1:0]	i_dp_ALUResultM,
	input 		[`XLEN-1:0]	i_dp_ReadDataW,
	input 		[`XLEN-1:0]	i_dp_PCPlus4W,
	input 		[1:0]		i_dp_ResultSrcW
);

	wire 		[`XLEN-1:0]		i_dp_PCPlusImm;
	wire 		[(4*`XLEN)-1:0]	mux_concat_rd;

	assign 		mux_concat_rd	= {i_dp_ALUResultM, i_dp_ReadDataW, i_dp_PCPlus4W, i_dp_PCPlusImm};
	
	riscv_mux
	#(
		.N_MUX_IN			(4			)
	)
	u_riscv_mux(
		.o_mux_data			(o_dp_ResultW		),
		.i_mux_concat_data	(mux_concat_rd		),
		.i_mux_sel			(i_dp_ResultSrcW	)
	);

endmodule 

