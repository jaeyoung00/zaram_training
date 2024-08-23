`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`include 	"../pipelined/FF_Decode_Execute.v"
`include	"../pipelined/FF_Execute_Memory.v"
`include	"../pipelined/FF_Fetch_Decode.v"
`include	"../pipelined/FF_Memory_Writeback.v"
`include	"../pipelined/hazard_unit.v"
//`include	"../pipelined/pipe_ctrl.v"
`include	"../pipelined/pipe_datapath_Decode.v"
`include	"../pipelined/pipe_datapath_Execute.v"
`include	"../pipelined/pipe_datapath_Fetch.v"
`include	"../pipelined/pipe_datapath_Memory.v"
`include	"../pipelined/pipe_datapath_Writeback.v"
`endif

module pipe_top2
#(
	parameter REGISTER_INIT = 0
)
(
	output [`XLEN-1:0]		o_riscv_imem_pc,
	output [`XLEN-1:0]		o_riscv_imem_instr,
	output [`XLEN-1:0]		o_riscv_dmem_addr,
	output 					o_riscv_dmem_wr_en,
	output [	  3:0]		o_riscv_dmem_byte_sel,
	output [`XLEN-1:0]		o_riscv_dmem_wr_data,
	output [`XLEN-1:0]		o_riscv_dmem_rd_data,
	input 					i_clk,
	input 					i_rstn

);

	wire		[`XLEN-1:0]		o_dp_imem_RD;
	wire 		[`XLEN-1:0]		o_dp_PCF;
	wire 		[`XLEN-1:0]		o_dp_PCPlus4F;
//	reg 						i_clk;
//	reg 						i_rstn;
//	reg 		[`XLEN-1:0]		i_dp_ALUF;
	reg 		[`XLEN-1:0]		PCTargetE;
//	reg 		[1:0]			i_PCSrcE;
	wire	 [`XLEN-1:0]	o_instrD;
	wire	 [`XLEN-1:0]	o_PCPlus4D;
	wire	 [`XLEN-1:0]	o_PCD;
//	reg 					i_clk;
//	reg 					i_rstn;
//	reg 		[`XLEN-1:0] i_imem_RD;
//	reg 		[`XLEN-1:0]	i_PCF;
//	reg 		[`XLEN-1:0]	i_PCPlus4F;
//	reg 					i_StallD_en;
//	reg 					i_FlushD_CLR;
	wire 					o_dp_RegWriteD;
	wire 		  			o_dp_ResultSrcD;
	wire 					o_dp_MemWriteD;
	wire 		[1:0]			o_dp_JumpD;
	wire 					o_dp_BranchD;
	wire  	  [3:0]		o_dp_ALUControlD;
	wire 					o_dp_ALUSrcD;
	wire 		  [3:0]		o_dp_mem_byte_sel;
	wire 		  [1:0]		o_MUX_selD;
	wire 	[`XLEN-1:0]		o_dp_RD1;
	wire 	[`XLEN-1:0]		o_dp_RD2;
	wire 	[`XLEN-1:0]		o_dp_ImmExtD;
	wire 		  [4:0]		o_dp_Rs1D;
	wire 	   	  [4:0]		o_dp_Rs2D;
	wire 		  [4:0]		o_dp_RdD;
	wire 		  [2:0]		o_funct3D;
//	reg 	[`XLEN-1:0]		i_dp_instrD;     
	reg 	[`XLEN-1:0] 	i_dp_dmem_WD3;
	reg 					i_dp_WE3;
	reg 		[4:0]		i_RdW;
//	reg 					i_clk;
//	reg 					i_rstn;
	wire		[1:0]			MUX_selE;
	wire	 				RegWriteE;
	wire	 				ResultSrcE;
	wire						MemWriteE;
	wire		[1:0]			JumpE;
	wire						BranchE;
	wire		[3:0]			ALUContrlE;
	wire						ALUSrcE;
	wire	 [`XLEN/8-1:0] 	mem_byte_selE;
	wire		[`XLEN-1:0]		RD1E;
	wire	 [`XLEN-1:0]		RD2E;
	wire	 [`XLEN-1:0]		PCE;
	wire	 [4:0]			Rs1E;
	wire	 [4:0]			Rs2E;
	wire	 [4:0]			RdE;
	wire	 [`XLEN-1:0]		ExtImmE;
	wire	 [2:0]			funct3E;
	wire	 [`XLEN-1:0] 	PCPlus4E; 
//	reg 	 [1:0]				o_ctrl_MUX_selD;
//	reg 	 					RegWriteD;
//	reg 	 		    		ResultSrcD;
//	reg 						MemWriteD;
//	reg    [1:0]				JumpD;
//	reg 						BranchD;
//	reg 	 [3:0]				ALUContrlD;
//	reg 						ALUSrcD;
//	reg 	[`XLEN/8-1:0]		o_dp_mem_byte_sel;
//	reg  	[`XLEN-1:0]			RD1;
//	reg   [`XLEN-1:0]			RD2;
//	reg   [`XLEN-1:0]			PCD;
//	reg   [4:0]				Rs1D;
//	reg   [4:0]				Rs2D;
//	reg   [4:0]				RdD;
//	reg   [`XLEN-1:0]			ExtImmD;
//	reg 	[2:0]				funct3D;
//	reg   [`XLEN-1:0]			PCPlus4D; 
//	reg 						i_clk;
//	reg 						i_rstn;
//	reg 						i_FlushE_CLR;
	wire 	[`XLEN-1:0]		o_dp_ALU;
//	wire 					o_dp_ALU_Zero;  
	wire 	[`XLEN-1:0]		o_dp_WriteDataE;
	wire 	[`XLEN-1:0]		o_dp_PC_Plus_immE;
	wire	 [1:0]		o_PCSrcE;
//	reg 					i_clk;
//	reg 					i_rstn;
//	reg 	[`XLEN-1:0]		i_dp_RD1E;
//	reg 	[`XLEN-1:0]		i_dp_RD2E;
//	reg 	[`XLEN-1:0]		i_dp_PCE;
//	reg 	[`XLEN-1:0]		i_dp_ImmExtE;
//	reg 	[`XLEN-1:0]		i_dp_ResultW;
//	reg 	[`XLEN-1:0]		i_dp_4to1mux;
	wire 		  [1:0]		ForWardAE;
	wire 		  [1:0]		ForWardBE;
//	reg 					ALUSrcE;
//	reg 		  [3:0]		i_dp_ALUContrlE;
//	reg 		  [1:0]		i_dp_JumpE;
//	reg 					i_dp_BranchE;
//	reg		  [2:0]		i_dp_ctrl_funct3     ;
	wire		[1:0]			MUX_selM;
	wire						RegWriteM;
	wire	 				ResultSrcM;
	wire	 				MemWriteM;
	wire	 [`XLEN/8-1:0] 	mem_byte_selM;
	wire	 [`XLEN-1:0]		ALUResultM;
	wire	 [`XLEN-1:0] 	WriteDataM;
	wire	 [`XLEN-1:0] 	PC_Plus_immM;
	wire	 [4:0]			RdM;
	wire	 [`XLEN-1:0]		ExtImmM;
	wire	 [`XLEN-1:0]		PCPlus4M;
//	reg 						i_clk;
//	reg 						i_rstn;
//	reg 		[1:0]			MUX_selE;
//	reg 						RegWriteE;
//	reg 						ResultSrcE;
//	reg 						MemWriteE;
//	reg 		[`XLEN/8-1:0] 	mem_byte_selE;
//	reg 		[`XLEN-1:0]		o_dp_ALU;
//	reg 		[`XLEN-1:0]		o_dp_WriteDataE;
//	reg		[`XLEN-1:0]		o_dp_PC_Plus_immE;
//	reg 		[4:0]			RdE;
//	reg 		[`XLEN-1:0]		ExtImmE;
//	reg 		[`XLEN-1:0] 	PCPlus4E;
	wire 		[`XLEN-1:0]				o_dp_dmem_RD;
	wire 		[`XLEN-1:0]				o_dp_4to1muxM;
	wire 		[`XLEN/8-1:0]			o_mem_byte_sel;
//	reg								i_clk;
//	reg								i_rstn;
//	reg 		[`XLEN-1:0]				i_dp_ALUResultM;   
//	reg		[`XLEN-1:0]				i_dp_WriteDataM;
//	reg 		[`XLEN-1:0]				i_dp_ExtImmM;
//	reg 		[`XLEN-1:0]				i_dp_PCPlus4M; 
//	reg 		[`XLEN-1:0]	 			i_dp_PCPlusImm;
//	reg 			  [1:0]				o_MUX_selM;
//	reg								i_dp_MemWriteM;
//	reg 		[`XLEN/8-1:0]			mem_byte_selM;
	wire 		[`XLEN-1:0]	o_dp_ResultW;
//	reg 		[`XLEN-1:0]	i_dp_ReadDataW;
//	reg 		[`XLEN-1:0]	i_dp_4to1muxW;
//	reg 					i_dp_ResultSrcW;
	wire	 				RegWriteW;
	wire			  		ResultSrcW;
	wire	 	[`XLEN-1:0]	ReadDataW;
	wire	 	[`XLEN-1:0]	o_dp_4to1muxW;
	wire	 	[4:0]		RdW;
//	reg 		    		RegWriteM;
//	reg 					ResultSrcM;
//	reg 		[`XLEN-1:0]	o_dp_dmem_RD;
//	reg 		[`XLEN-1:0]	o_dp_4to1muxM;
//	reg 		[4:0]		RdM;
//	reg 					i_clk;
//	reg 					i_rstn;
	wire				StallF;
	wire				StallD;
	wire				FlushD;
	wire				FlushE;
	wire	 [1:0]	ForwardAE;
	wire	 [1:0]	ForwardBE;
//	reg	   [4:0]	Rs1D;
//	reg	   [4:0]	Rs2D;
//	reg	   [4:0]	RdE;
//	reg	   [4:0]	Rs1E;
//	reg	   [4:0]	Rs2E;
//	reg	   [4:0]	RdM;
//	reg				RegWriteM;
//	reg	   [4:0]	RdW;
//	reg				RegWriteW;
//	reg				ResultSrcE;
//	reg		[1:0]		PCSrcE;


	pipe_datapath_Fetch
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Fetch(
		.o_dp_imem_RD		(o_dp_imem_RD		),
		.o_dp_PCF			(o_dp_PCF			),
		.o_dp_PCPlus4F		(o_dp_PCPlus4F		),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				),
		.i_dp_ALUF			(o_dp_ALU			),
		.PCTargetE			(o_dp_PC_Plus_immE	),
		.i_PCSrcE			(o_PCSrcE			)
	);


	FF_Fetch_Decode
	u_FF_Fetch_Decode(
		.o_instrD			(o_instrD			),
		.o_PCPlus4D			(o_PCPlus4D			),
		.o_PCD				(o_PCD				),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				),
		.i_imem_RD			(o_dp_imem_RD		),
		.i_PCF				(o_dp_PCF			),
		.i_PCPlus4F			(o_dp_PCPlus4F		),
		.i_StallD_en		(StallD				),
		.i_FlushD_CLR		(FlushD				)
	);



	pipe_datapath_Decode
	u_pipe_datapath_Decode(
		.o_dp_RegWriteD		(o_dp_RegWriteD		),
		.o_dp_ResultSrcD	(o_dp_ResultSrcD	),
		.o_dp_MemWriteD		(o_dp_MemWriteD		),
		.o_dp_JumpD			(o_dp_JumpD			),
		.o_dp_BranchD		(o_dp_BranchD		),
		.o_dp_ALUControlD	(o_dp_ALUControlD	),
		.o_dp_ALUSrcD		(o_dp_ALUSrcD		),
		.o_dp_mem_byte_sel	(o_dp_mem_byte_sel	),
		.o_MUX_selD			(o_MUX_selD			),
		.o_dp_RD1			(o_dp_RD1			),
		.o_dp_RD2			(o_dp_RD2			),
		.o_dp_ImmExtD		(o_dp_ImmExtD		),
		.o_dp_Rs1D			(o_dp_Rs1D			),
		.o_dp_Rs2D			(o_dp_Rs2D			),
		.o_dp_RdD			(o_dp_RdD			),
		.o_funct3D			(o_funct3D			),

		.i_dp_instrD		(o_instrD			),
		.i_dp_dmem_WD3		(o_dp_ResultW		),
		.i_dp_WE3			(RegWriteW			),
		.i_RdW				(RdW				),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				)
	);

	FF_Decode_Execute
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_FF_Decode_Execute(
		.MUX_selE			(MUX_selE			),  // output
		.RegWriteE			(RegWriteE			),  // output
		.ResultSrcE			(ResultSrcE			),  // output
		.MemWriteE			(MemWriteE			),  // output
		.JumpE				(JumpE				),  // output
		.BranchE			(BranchE			),  // output
		.ALUContrlE			(ALUContrlE			),  // output
		.ALUSrcE			(ALUSrcE			),  // output
		.mem_byte_selE		(mem_byte_selE		),  // output
		.RD1E				(RD1E				),  // output
		.RD2E				(RD2E				),  // output
		.PCE				(PCE				),  // output
		.Rs1E				(Rs1E				),  // output
		.Rs2E				(Rs2E				),  // output
		.RdE				(RdE				),  // output
		.ExtImmE			(ExtImmE			),  // output
		.funct3E			(funct3E			),  // output
		.PCPlus4E			(PCPlus4E			),  // output
		
		.o_ctrl_MUX_selD	(o_MUX_selD			),  // input 
		.RegWriteD			(o_dp_RegWriteD		),  // input
		.ResultSrcD			(o_dp_ResultSrcD	),  // input
		.MemWriteD			(o_dp_MemWriteD		),  // input
		.JumpD				(o_dp_JumpD			),  // input
		.BranchD			(o_dp_BranchD		),  // input
		.ALUContrlD			(o_dp_ALUControlD	),  // input
		.ALUSrcD			(o_dp_ALUSrcD		),  // input
		.o_dp_mem_byte_sel	(o_dp_mem_byte_sel	),  // input
		.RD1				(o_dp_RD1			),  // input
		.RD2				(o_dp_RD2			),  // input
		.PCD				(o_PCD				),  // input
		.Rs1D				(o_dp_Rs1D			),  // input
		.Rs2D				(o_dp_Rs2D			),  // input
		.RdD				(o_dp_RdD			),  // input
		.ExtImmD			(o_dp_ImmExtD		),  // input
		.funct3D			(o_funct3D			),  // input
		.PCPlus4D			(o_PCPlus4D			),  // input
		.i_clk				(i_clk				),  // input
		.i_rstn				(i_rstn				),  // input
		.i_FlushE_CLR		(FlushE				)  // input
	);


	pipe_datapath_Execute
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Execute(
		.o_dp_ALU			(o_dp_ALU			),
		.o_dp_WriteDataE	(o_dp_WriteDataE	),
		.o_dp_PC_Plus_immE	(o_dp_PC_Plus_immE	),
		.o_PCSrcE			(o_PCSrcE			),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				),
		.i_dp_RD1E			(RD1E				),
		.i_dp_RD2E			(RD2E				),
		.i_dp_PCE			(PCE				),
		.i_dp_ImmExtE		(ExtImmE			),
		.i_dp_ResultW		(o_dp_ResultW		),
		.i_dp_4to1mux		(o_dp_4to1muxM		),
		.ForWardAE			(ForwardAE			),
		.ForWardBE			(ForwardBE			),
		.ALUSrcE			(ALUSrcE			),
		.i_dp_ALUContrlE	(ALUContrlE			),
		.i_dp_JumpE			(JumpE			),
		.i_dp_BranchE		(BranchE		),
		.i_dp_ctrl_funct3	(funct3E			)
	);

	FF_Execute_Memory
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_FF_Execute_Memory(
		.MUX_selM			(MUX_selM			), // output
		.RegWriteM			(RegWriteM			), // output
		.ResultSrcM			(ResultSrcM			), // output
		.MemWriteM			(MemWriteM			), // output
		.mem_byte_selM		(mem_byte_selM		), // output
		.ALUResultM			(ALUResultM			), // output
		.WriteDataM			(WriteDataM			), // output
		.PC_Plus_immM		(PC_Plus_immM		), // output
		.RdM				(RdM				), // output
		.ExtImmM			(ExtImmM			), // output
		.PCPlus4M			(PCPlus4M			), // output 
		.i_clk				(i_clk				), // input 
		.i_rstn				(i_rstn				), // input 
		.MUX_selE			(MUX_selE			), // input 
		.RegWriteE			(RegWriteE			), // input 
		.ResultSrcE			(ResultSrcE			), // input 
		.MemWriteE			(MemWriteE			), // input 
		.mem_byte_selE		(mem_byte_selE		), // input 
		.o_dp_ALU			(o_dp_ALU			), // input 
		.o_dp_WriteDataE	(o_dp_WriteDataE	), // input 
		.o_dp_PC_Plus_immE	(o_dp_PC_Plus_immE	), // input 
		.RdE				(RdE				), // input 
		.ExtImmE			(ExtImmE			), // input 
		.PCPlus4E			(PCPlus4E			) // input 
	);

	pipe_datapath_Memory
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Memory(
		.o_dp_dmem_RD		(o_dp_dmem_RD		),
		.o_dp_4to1muxM		(o_dp_4to1muxM		),
		.o_mem_byte_sel		(o_mem_byte_sel		),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				),
		.i_dp_ALUResultM	(ALUResultM			),
		.i_dp_WriteDataM	(WriteDataM			),
		.i_dp_ExtImmM		(ExtImmM			),
		.i_dp_PCPlus4M		(PCPlus4M			),
		.i_dp_PCPlusImm		(PC_Plus_immM		),
		.o_MUX_selM			(MUX_selM			),
		.i_dp_MemWriteM		(MemWriteM			),
		.mem_byte_selM		(mem_byte_selM		)
	);


	FF_Memory_Writeback
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_FF_Memory_Writeback(
		.RegWriteW			(RegWriteW			),
		.ResultSrcW			(ResultSrcW			),
		.ReadDataW			(ReadDataW			),
		.o_dp_4to1muxW		(o_dp_4to1muxW		),
		.RdW				(RdW				),   // output
		.RegWriteM			(RegWriteM			),   // input 
		.ResultSrcM			(ResultSrcM			),
		.o_dp_dmem_RD		(o_dp_dmem_RD		),
		.o_dp_4to1muxM		(o_dp_4to1muxM		),
		.RdM				(RdM				),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				)
	);


	pipe_datapath_Writeback
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Writeback(
		.o_dp_ResultW		(o_dp_ResultW		),
		.i_dp_ReadDataW		(ReadDataW		),
		.i_dp_4to1muxW		(o_dp_4to1muxW		),
		.i_dp_ResultSrcW	(ResultSrcW	)
	);


	hazard_unit
	u_hazard_unit(
		.StallF				(StallF				),  // output
		.StallD				(StallD				),  // output
		.FlushD				(FlushD				),  // output
		.FlushE				(FlushE				),  // output
		.ForwardAE			(ForwardAE			),  // output
		.ForwardBE			(ForwardBE			),  // output 
		.Rs1D				(Rs1E				),  // input 
		.Rs2D				(Rs2E				),  // input 
		.RdE				(RdE				),  // input 
		.Rs1E				(Rs1E				),  // input 
		.Rs2E				(Rs2E				),  // input 
		.RdM				(RdM				),  // input 
		.RegWriteM			(RegWriteM			),  // input 
		.RdW				(RdW				),  // input 
		.RegWriteW			(RegWriteW			),  // input 
		.ResultSrcE			(ResultSrcE			),  // input 
		.PCSrcE				(o_PCSrcE			)  // input 
	);

	endmodule 
