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

	input								i_clk,
	input								i_rstn,
	input		[2:0]					i_dp_mem_funct3,
	input 		[`XLEN-1:0]				i_dp_ALUResultM,   // 14bit
	input		[`XLEN-1:0]				i_dp_WriteDataM,
	input 		[`XLEN-1:0]				i_dp_ExtImmM,
	input 		[`XLEN-1:0]				i_dp_PCPlus4M, 
	input 		[`XLEN-1:0]	 			i_dp_PCPlusImm,
	input 			  [1:0]				o_MUX_selM,
	input								i_dp_MemWriteM,
	input 		[`XLEN/8-1:0]			mem_byte_selM
);

	wire 	[(4*`XLEN)-1:0]		   mux_concat_4to1;
	assign mux_concat_4to1	=	 {i_dp_PCPlus4M, i_dp_PCPlusImm, i_dp_ExtImmM, i_dp_ALUResultM};
	wire dmem_wr_en;
	wire [`XLEN-1:0] dmem_addr;
	wire [`XLEN-1:0] dmem_rd_data;
	wire [`XLEN-1:0] dmem_write_data;
	wire [3:0] dmem_byte_sel;

	riscv_dmem_interface
	u_riscv_dmem_interface(
		.o_dmem_intf_addr		(dmem_addr			),
		.o_dmem_intf_wen		(dmem_wr_en			),
		.i_dmem_intf_addr		(i_dp_ALUResultM	),
		.i_dmem_intf_wen		(i_dp_MemWriteM		),
		.o_dmem_intf_wr_data	(dmem_write_data	),
		.o_dmem_intf_byte_sel	(dmem_byte_sel		),
		.o_dmem_intf_rd_data	(o_dp_dmem_RD		),
		.i_dmem_intf_wr_data	(i_dp_WriteDataM	),
		.i_dmem_intf_byte_sel	(mem_byte_selM		),
		.i_dmem_intf_rd_data	(dmem_rd_data		),
		.i_dmem_intf_func3		(i_dp_mem_funct3	)
	);


	riscv_dmem
	u_riscv_dmem(
		.o_dmem_data		(dmem_rd_data		),
		.i_dmem_data		(dmem_write_data	),
		.i_dmem_addr		(dmem_addr[`DMEM_ADDR_BIT-1:2]),
		.i_dmem_byte_sel	(dmem_byte_sel		),
		.i_dmem_wr_en		(dmem_wr_en			),
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

