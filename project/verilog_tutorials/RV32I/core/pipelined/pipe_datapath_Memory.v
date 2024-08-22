`ifndef 	NOINC
`include 	"../common/riscv_dmem.v"
`include 	"../common/riscv_configs.v"
`include 	"../common/riscv_mux.v"
`endif 

module pipe_datapath_Memory
#(
	parameter 	REGISTER_INIT	= 0
)
(
	output 		[`XLEN-1:0]				o_dp_dmem_RD,
	output 		[`XLEN-1:0]				o_dp_4to1muxM,
	output 		[`XLEN/8-1:0]			o_mem_byte_sel,

	input								i_clk,
	input								i_rstn,
	input 		[`XLEN-1:0]				i_dp_ALUResultM,   // 14bit
	input		[`XLEN-1:0]				i_dp_WriteDataM,
	input 		[`XLEN-1:0]				i_dp_ExtImmE,
	input 		[`XLEN-1:0]				i_dp_PCPlus4M, 
	input 		[`XLEN-1:0]	 			i_dp_PCPlusImm,
	input 			  [1:0]				o_MUX_selM,
	input								i_dp_MemWriteM,
	input 		[`XLEN/8-1:0]			mem_byte_selM
);

	wire 	[(4*`XLEN)-1:0]		   mux_concat_4to1;
	assign mux_concat_4to1	=	 {i_dp_PCPlus4M, i_dp_PCPlusImm, i_dp_ExtImmE, i_dp_ALUResultM};


	riscv_dmem
	u_riscv_dmem(
		.o_dmem_data		(o_dp_dmem_RD		),
		.i_dmem_data		(i_dp_WriteDataM	),
		.i_dmem_addr		(i_dp_ALUResultM[`DMEM_ADDR_BIT:2]),
		.i_dmem_byte_sel	(mem_byte_selM		),
		.i_dmem_wr_en		(i_dp_MemWriteM		),
		.i_clk				(i_clk				)
	);

	riscv_mux
	#(
		.N_MUX_IN			(4					)
	)
	u_riscv_mux(
		.o_mux_data			(o_dp_4to1muxM		),
		.i_mux_concat_data	(mux_concat_4to1	),
		.i_mux_sel			(o_MUX_selM			)
	);


endmodule 

