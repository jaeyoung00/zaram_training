`ifndef 	NOINC
`include 	"../common/riscv_regfile.v"
`include 	"../common/riscv_immext.v"
`include 	"../common/riscv_configs.v"
`include 	"../pipelined/pipe_ctrl.v"
`endif

module pipe_datapath_Decode
(
	output 					o_dp_RegWriteD,
	output 		  			o_dp_ResultSrcD,
	output 					o_dp_MemWriteD,
	output 		[1:0]			o_dp_JumpD,
	output 					o_dp_BranchD,
	output  	  [3:0]		o_dp_ALUControlD,
	output 					o_dp_ALUSrcD,
	output 		  [3:0]		o_dp_mem_byte_sel,
	output 		  [1:0]		o_MUX_selD,

	output 	[`XLEN-1:0]		o_dp_RD1,
	output 	[`XLEN-1:0]		o_dp_RD2,
	output 	[`XLEN-1:0]		o_dp_ImmExtD,
	output 		  [4:0]		o_dp_Rs1D,
	output 	   	  [4:0]		o_dp_Rs2D,
	output 		  [4:0]		o_dp_RdD,
	output 		  [2:0]		o_funct3D,

	input 	[`XLEN-1:0]		i_dp_instrD,     
	input 	[`XLEN-1:0] 	i_dp_dmem_WD3,
	input 					i_dp_WE3,
	input 		[4:0]			i_RdW,
	input 					i_clk,
	input 					i_rstn
);

	wire 		  [2:0]		dp_ImmSrcD;
	assign					o_dp_Rs1D 	= i_dp_instrD[19:15];
	assign					o_dp_Rs2D 	= i_dp_instrD[24:20];
	assign					o_dp_RdD 	= i_dp_instrD[11:7];
	assign					o_funct3D 	= i_dp_instrD[14:12];
	

	riscv_regfile
	u_riscv_regfile(
		.o_regfile_rs1_data	(o_dp_RD1),
		.o_regfile_rs2_data	(o_dp_RD2	),
		.i_regfile_rs1_addr	(i_dp_instrD[19:15]	),
		.i_regfile_rs2_addr	(i_dp_instrD[24:20]	),
		.i_regfile_rd_data	(i_dp_dmem_WD3		),
		.i_regfile_rd_addr	(i_RdW	),
		.i_regfile_rd_wen	(i_dp_WE3			),
		.i_clk				(i_clk				)
	);


	riscv_immext
	u_riscv_immext(
		.o_imm_ext			(o_dp_ImmExtD		),
		.i_imm_instr		(i_dp_instrD		),
		.i_imm_src			(dp_ImmSrcD			)
	);

	pipe_ctrl
	u_pipe_ctrl(
		.o_ctrl_RegWriteD	(o_dp_RegWriteD		),
		.o_ctrl_ResultSrcD	(o_dp_ResultSrcD	),
		.o_ctrl_MemWriteD	(o_dp_MemWriteD		),
		.o_ctrl_JumpD		(o_dp_JumpD			),
		.o_ctrl_BranchD		(o_dp_BranchD		),
		.o_ctrl_ALUControlD	(o_dp_ALUControlD	),
		.o_ctrl_ALUSrcD		(o_dp_ALUSrcD		),
		.o_ctrl_ImmSrcD		(dp_ImmSrcD		),
		.o_ctrl_mem_byte_sel(o_dp_mem_byte_sel	),
		.o_ctrl_MUX_selD	(o_MUX_selD			),
		.i_ctrl_op			(i_dp_instrD[6:0]	),
		.i_ctrl_funct3		(i_dp_instrD[14:12]	),
		.i_ctrl_funct7_5b	(i_dp_instrD[30]	)
	);


endmodule


