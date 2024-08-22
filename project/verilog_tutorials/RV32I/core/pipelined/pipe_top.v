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

module pipe_top
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
	
	wire  		[`XLEN-1:0]		i_dp_ALUF;
	wire 		[`XLEN-1:0]		i_dp_PCPlus4F;	
	wire 		[`XLEN-1:0]		PCTargetE;
	wire 		[`XLEN-1:0]		i_imem_RD;
	wire 		[`XLEN-1:0]		i_PCF;
	wire 		[`XLEN-1:0]		i_PCPlus4F;
	wire 		[1:0]			i_PCSrcE;

	wire 	 	[`XLEN-1:0]				o_instrD;
	wire 		[`XLEN-1:0]		o_dp_imem_RD;
	wire 		[`XLEN-1:0]		o_dp_PCF;
	wire 		[`XLEN-1:0]		o_dp_PCPlus4F;
	wire 		[1:0]				o_MUX_selD;			
	wire 						o_dp_RegWriteD;		
	wire 		[1:0]				o_dp_ResultSrcD;
	wire 						o_dp_MemWriteD;		
	wire 		[1:0]				o_dp_JumpD;			
	wire 						o_dp_BranchD;		
	wire 	[3:0]					o_dp_ALUControlD;	
	wire 						o_dp_ALUSrcD;		
	wire 	[`XLEN/8-1:0]					o_dp_mem_byte_sel;
	wire 		[`XLEN-1:0]				o_dp_RD1;
	wire 		[`XLEN-1:0]				o_dp_RD2;
	wire 		[`XLEN-1:0]				o_dp_ImmExtD;
	wire 		[4:0]				o_dp_Rs1D;
	wire 		[4:0]				o_dp_Rs2D;
	wire 		[4:0]				o_dp_RdD;
	wire 		[2:0]				o_funct3D;
	wire 		[`XLEN-1:0]				RD1E;
	wire 		[(2*`XLEN)-1:0]				RD2E;
	wire 		[`XLEN-1:0]				PCE;
	wire	 	[3:0]				ALUContrlE;		 
	wire 					   		 ALUSrcE;
	wire 		[`XLEN-1:0]			o_dp_ALU;		  
	wire 				    o_dp_ALU_Zero;	  
	wire 		[`XLEN-1:0]		    o_dp_WriteDataE;  
	wire 		[`XLEN-1:0]		    o_dp_PC_Plus_immE;
	
	wire 		[`XLEN/8-1:0]			    mem_byte_selM;		
	wire 		[`XLEN-1:0]			    ALUResultM;			
	wire 		[`XLEN-1:0]			    WriteDataM;			
	wire 		[`XLEN-1:0]			    ExtImmM;			
	wire 	[`XLEN-1:0]				    PCPlus4M;			
	wire 		[`XLEN-1:0]			    PC_Plus_immM;		
	wire 		[1:0]			    MUX_selM;			
	wire 					    MemWriteM;			
	wire 		[`XLEN-1:0]				o_dp_dmem_RD;	
	wire 		[`XLEN-1:0]				o_dp_4to1muxM;
	wire 		[`XLEN-1:0]				ReadDataW;		
	wire 							    ResultSrcW;		
	wire 		[`XLEN-1:0]			    o_dp_4to1muxW;
	wire 			[`XLEN-1:0]			o_dp_ResultW;
	wire 						RegWriteW;
	wire 		[1:0]				JumpD;
	wire 						BranchD;
	
	wire		[`XLEN-1:0]				o_PCPlus4D;
	wire		[`XLEN-1:0]				o_PCD;
	wire		[1:0]					MUX_selE;
    wire						RegWriteE;	
    wire		[1:0]				ResultSrcE;	
    wire						MemWriteE;	
	wire		[`XLEN/8-1:0]				mem_byte_selE;
	wire		[`XLEN-1:0]				ExtImmE; 
	wire		[`XLEN-1:0]				PCPlus4E;
	wire 						RegWriteM;	
    wire        [1:0]                ResultSrcM;	
	wire		[4:0]				RdM;
 	wire 						funct3D;
	wire 	[1:0]					conn_PCSrcE;
	
	wire 			[1:0]			StallF;
	wire 			[1:0]			StallD;
	wire			[1:0]			FlushD;
	wire			[1:0]			FlushE;	
	wire 			[4:0]			Rs1E;	
    wire            [4:0]            Rs2E;	
    wire            [4:0]            RdE;	
	wire 			[1:0]		   	o_PCSrcE;	
	wire			[1:0]			ForWardAE;
	wire 			[1:0]			ForWardBE;
	wire 			[4:0]			RdW;
	wire 			[2:0]			funct3E;
	wire 			[1:0]				JumpE;
	wire 							BranchE;

	// Fetch 
	pipe_datapath_Fetch
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Fetch(
		.o_dp_imem_RD		(o_dp_imem_RD		),
		.o_dp_PCF			(o_dp_PCF			),
		.o_dp_PCPlus4F		(o_dp_PCPlus4F		),
		.i_dp_ALUF			(i_dp_ALUF			),
		.i_dp_PCPlus4F		(i_dp_PCPlus4F		),
		.PCTargetE			(PCTargetE			),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				),
		.i_PCSrcE			(i_PCSrcE			)
	);


	// Fetch - pipelined - Decode
	FF_Fetch_Decode
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_FF_Fetch_Decode(
		.o_instrD			(o_instrD			),
		.o_PCPlus4D			(o_PCPlus4D			),
		.o_PCD				(o_PCD				),
		.i_imem_RD			(o_dp_imem_RD		),
		.i_PCF				(o_dp_PCF			),
		.i_PCPlus4F			(o_dp_PCPlus4F		),
		.i_StallD_en		(StallD				),
		.i_FlushD_CLR		(FlushD				),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				)
	);

	// Decode
	pipe_datapath_Decode
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Decode(
		.o_dp_RegWriteD		(o_dp_RegWriteD		),
		.o_dp_ResultSrcD	(o_dp_ResultSrcD	),
		.o_dp_MemWriteD		(o_dp_MemWriteD		),
		.o_dp_JumpD			(o_dp_JumpD			),
		.o_dp_BranchD		(o_dp_BranchD		),
		.o_dp_ALUControlD	(o_dp_ALUControlD	),
		.o_dp_ALUSrcD		(o_dp_ALUSrcD		),
		.o_dp_RD1			(o_dp_RD1			),
		.o_dp_RD2			(o_dp_RD2			),
		.o_dp_ImmExtD		(o_dp_ImmExtD		),
		.o_dp_mem_byte_sel	(o_dp_mem_byte_sel	),
		.o_MUX_selD			(o_MUX_selD			),
		.o_dp_Rs1D			(o_dp_Rs1D			),
		.o_dp_Rs2D			(o_dp_Rs2D			),
		.o_dp_RdD			(o_dp_RdD			),
		.o_funct3D			(o_funct3D			),
		.i_dp_instrD		(o_instrD			),
		.i_dp_dmem_WD3		(o_dp_ResultW		),
		.i_dp_WE3			(RegWriteW			),
		.i_clk				(i_clk				),
		.i_rstn				(i_rstn				)
	);

	// Decode - pipelined - Execute
	FF_Decode_Execute
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_FF_Decode_Execute(
		.MUX_selE			(MUX_selE			),	// out
		.RegWriteE			(RegWriteE			),	// out
		.ResultSrcE			(ResultSrcE			),	// out
		.MemWriteE			(MemWriteE			),	// out
		.JumpE				(JumpE			),	// out
		.BranchE			(BranchE		),	// out
		.ALUContrlE			(ALUContrlE			),	// out
		.ALUSrcE			(ALUSrcE			),	// out
		.mem_byte_selE		(mem_byte_selE		),	// out
		.RD1E				(RD1E				),	// out
		.RD2E				(RD2E[31:0]			),	// out
		.PCE				(PCE				),	// out
		.Rs1E				(Rs1E				),	// out
		.Rs2E				(Rs2E				),	// out
		.RdE				(RdE				),	// out
		.ExtImmE			(ExtImmE			),	// out
		.funct3E			(funct3E			),	// out
		.PCPlus4E			(o_PCPlus4D			),  // output 
		.o_ctrl_MUX_selD	(o_MUX_selD			),  // input 
		.RegWriteD			(o_dp_RegWriteD		),  // in
		.ResultSrcD			(o_dp_ResultSrcD	),  // in
		.MemWriteD			(o_dp_MemWriteD		),  // in
		.JumpD				(o_dp_JumpD			),  // in
		.BranchD			(o_dp_BranchD		),  // in
		.ALUContrlD			(o_dp_ALUControlD	),  // in
		.ALUSrcD			(o_dp_ALUSrcD		),  // in
		.o_dp_mem_byte_sel	(o_dp_mem_byte_sel	),  // in
		.RD1				(o_dp_RD1			),  // in	
		.RD2				(o_dp_RD2			),  // in
		.PCD				(o_PCD				),  // in
		.Rs1D				(o_dp_Rs1D			),  // in
		.Rs2D				(o_dp_Rs2D			),  // in
		.RdD				(o_dp_RdD			),  // in
		.ExtImmD			(o_dp_ImmExtD		),  // in
		.funct3D			(o_funct3D			),  // in
		.PCPlus4D			(o_PCPlus4D			),  // in
		.InstrD				(o_instrD			),  // in
		.i_clk				(i_clk				),  // in
		.i_rstn				(i_rstn				),  // in
		.i_FlushE_CLR		(FlushE				)   // in
	);

	// Execute
	pipe_datapath_Execute
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Execute(
		.o_dp_ALU			(o_dp_ALU			),
		.o_dp_ALU_Zero		(o_dp_ALU_Zero		),
		.o_dp_WriteDataE	(o_dp_WriteDataE	),
		.o_dp_PC_Plus_immE	(o_dp_PC_Plus_immE	),
		.o_PCSrcE			(conn_PCSrcE		),
		.i_dp_RD1E			(RD1E				),
		.i_dp_RD2E			(RD2E				),
		.i_dp_PCE			(PCE				),
		.i_dp_ImmExtE		(ExtImmE			),
		.i_dp_ResultW		(o_dp_ResultW		),
		.i_dp_4to1mux		(o_dp_4to1muxM		),
		.ForWardAE			(ForWardAE			),
		.ForWardBE			(ForWardBE			),
		.ALUSrcE			(ALUSrcE			),
		.i_dp_ALUContrlE	(ALUContrlE			),
		.i_dp_JumpE			(JumpD				),
		.i_dp_BranchE		(BranchD			),
		.i_dp_ctrl_funct3	(funct3E			)
	);

	// Execute - pipelined - Memory
	FF_Execute_Memory
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_FF_Execute_Memory(
		.MUX_selM			(MUX_selM			), // out
		.RegWriteM			(RegWriteM			), // out
		.ResultSrcM			(ResultSrcM			), // out
		.MemWriteM			(MemWriteM			), // out
		.mem_byte_selM		(mem_byte_selE		), // out
		.ALUResultM			(ALUResultM			), // out
		.WriteDataM			(WriteDataM			), // out
		.PC_Plus_immM		(PC_Plus_immM		), // out
		.RdM				(RdM				), // out
		.ExtImmM			(ExtImmM			), // out
		.PCPlus4M			(PCPlus4M			), // output
		.MUX_selE			(MUX_selE			), // input
		.RegWriteE			(RegWriteE			), // in
		.ResultSrcE			(ResultSrcE			), // in
		.MemWriteE			(MemWriteE			), // in
		.mem_byte_selE		(mem_byte_selE		), // in
		.o_dp_ALU			(o_dp_ALU			), // in
		.o_dp_WriteDataE	(o_dp_WriteDataE	), // in
		.o_dp_PC_Plus_immE	(o_dp_PC_Plus_immE	), // in
		.RdE				(RdE				), // in
		.ExtImmE			(ExtImmE			), // in
		.PCPlus4E			(PCPlus4E			), // in
		.i_clk				(i_clk				), // in
		.i_rstn				(i_rstn				)  // in
	);

	// Memory
	pipe_datapath_Memory
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Memory(
		.o_dp_dmem_RD		(o_dp_dmem_RD		),
		.o_dp_4to1muxM		(o_dp_4to1muxM		),
		.o_mem_byte_sel		(mem_byte_selM		),
		.i_dp_ALUResultM	(ALUResultM			),
		.i_dp_WriteDataM	(WriteDataM			),
		.i_dp_ExtImmE		(ExtImmM			),
		.i_dp_PCPlus4M		(PCPlus4M			),
		.i_dp_PCPlusImm		(PC_Plus_immM		),
		.o_MUX_selM			(MUX_selM			),
		.i_clk				(i_clk				),
		.i_dp_MemWriteM		(MemWriteM			),
		.mem_byte_selM		(mem_byte_selM		)
	);

	// Memory - pipelined - Writeback
	FF_Memory_Writeback
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_FF_Memory_Writeback(
		.RegWriteW			(RegWriteM			), // out
		.ResultSrcW			(ResultSrcW			), // out
		.ReadDataW			(ReadDataW			), // out
		.o_dp_4to1muxW		(o_dp_4to1muxW		), // out
		.RdW				(RdM				), // out
		.PCPlus4W			(PCPlus4M			), // out
		.RegWriteM			(RegWriteM			), // in
		.ResultSrcM			(ResultSrcM			), // in
		.o_dp_dmem_RD		(o_dp_dmem_RD		), // in
		.o_dp_4to1muxM		(o_dp_4to1muxM		), // in
		.RdM				(RdM				), // in
		.PCPlus4M			(PCPlus4M			), // in
		.i_clk				(i_clk				), // in
		.i_rstn				(i_rstn				)  // in
	);

	// Writeback
	pipe_datapath_Writeback
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_pipe_datapath_Writeback(
		.o_dp_ResultW		(o_dp_ResultW		),
		.i_dp_ReadDataW		(ReadDataW			),
		.i_dp_ResultSrcW	(ResultSrcW			),
		.i_dp_4to1muxW		(o_dp_4to1muxW		)
	);

	// hazard
	hazard_unit
	u_hazard_unit(
		.StallF				(StallF				), // output
		.StallD				(StallD				), // output
		.FlushD				(FlushD				), // output
		.FlushE				(FlushE				), // output
		.ForwardAE			(ForWardAE			), // output
		.ForwardBE			(ForWardBE			), // output 
		.Rs1D				(o_dp_Rs1D			), // input 
		.Rs2D				(o_dp_Rs2D			), // input
		.RdE				(RdE				), // input
		.Rs1E				(Rs1E				), // input
		.Rs2E				(Rs2E				), // input
		.RdM				(RdM				), // input
		.RegWriteM			(RegWriteM			), // input
		.RdW				(RdW				), // input
		.RegWriteW			(RegWriteW			), // input
		.ResultSrcE			(ResultSrcE			), // input
		.PCSrcE				(o_PCSrcE			)  // input
	);


	endmodule 











