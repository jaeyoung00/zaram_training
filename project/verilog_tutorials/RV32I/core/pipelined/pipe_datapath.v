`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`include 	"../common/riscv_adder.v"
`include 	"../common/riscv_alu.v"
`include 	"../common/riscv_immext.v"
`include 	"../common/riscv_mux.v"
`include 	"../common/riscv_regfile.v"
`include 	"../common/riscv_register.v"
`endif

module pipe_datapath
#(
	parameter  REGISTER_INIT = 0
)
(
	output reg 				o_dp_PCF,
	output reg 				o_dp_mem_addr_ALUResultM,
	output reg 				o_dp_mem_WriteDataM,
	input 					i_dp_mem_ReadDataW,   // ResultW, WD3
	input 					i_dp_RegWriteD,
	input 		[1:0]		i_dp_ResultSrcD,
	input 					i_dp_MemWriteD,
	input 					i_dp_JumpD,
	input 					i_dp_BranchD,
	input 		[2:0]		i_dp_ALUControlD,
	input 					i_dp_ALUSrcD,
	input 		[1:0]		i_dp_ImmSrcD,
	input 					i_clk,
	input 					i_rstn
);

	// PC Register 
	wire	[`XLEN-1:0]		pc_next_PCF;
	wire 	[`XLEN-1:0]		PCF_plus_4;
	wire 	[`XLEN-1:0]		PCF_plus_ImmExtE;

	// Register file 
	wire 	[`XLEN-1:0]		regfile_RD1_data;
	wire 	[`XLEN-1:0]		regfile_RD2_data;
	wire 	[`XLEN-1:0]		regfile_WD3_data;

	// Immediate 
	wire 	[`XLEN-1:0]		immExtD;

	// ALU
	wire 	[`XLEN-1:0]		SrcAE;
	wire 	[`XLEN-1:0]		SrcBE;
	wire 	[`XLEN-1:0]		ALUResultM;

	assign 					o_dp_mem_addr_ALUResultM = ALUResultM;
	assign 					o_dp_mem_WriteDataM 	 = regfile_RD2_data;
	
	// mux concat
	wire	[(2*`XLEN)-1:0]	mux_concat_pc;
	wire	[(2*`XLEN)-1:0]	mux_concat_alu_b;
	wire	[(4*`XLEN)-1:0]	mux_concat_rd;
	
	assign 	mux_concat_pc		= 	{PCF_plus_4, PCF_plus_ImmExtE						};
	assign 	mux_concat_alu_b	=	{regfile_RD2_data, immExtD							};
	assign 	mux_concat_rd		=	{ALUResultM, i_dp_mem_ReadDataW, PCF_plus_4, immExtD};

	
