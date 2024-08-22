`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`include 	"../common/riscv_alu.v"
`include 	"../common/riscv_mux.v"
`include 	"../common/riscv_adder.v"
//`include 	"../pipelined/pipe_ctrl.v"
`endif 

module pipe_datapath_Execute
#(
	parameter REGISTER_INIT = 0
)
(	
	output 	[`XLEN-1:0]		o_dp_ALU,
	output 					o_dp_ALU_Zero,  // o_dp_ALU_Zero
	output 	[`XLEN-1:0]		o_dp_WriteDataE,
	output 	[`XLEN-1:0]		o_dp_PC_Plus_immE,
	output reg [1:0]		o_PCSrcE,

	input 					i_clk,
	input 					i_rstn,
	input 	[`XLEN-1:0]		i_dp_RD1E,
	input 	[`XLEN-1:0]		i_dp_RD2E,
	input 	[`XLEN-1:0]		i_dp_PCE,
	input 	[`XLEN-1:0]		i_dp_ImmExtE,
	input 	[`XLEN-1:0]		i_dp_ResultW,
	input 	[`XLEN-1:0]		i_dp_4to1mux,
	input 		  [1:0]		ForWardAE,
	input 		  [1:0]		ForWardBE,
	input 					ALUSrcE,
	input 		  [3:0]		i_dp_ALUContrlE,
	input 		  [1:0]		i_dp_JumpE,
	input 					i_dp_BranchE,
	input		  [2:0]		i_dp_ctrl_funct3    // funct3E  connect 
);
	
	wire 	and_output;
	reg 	take_branch;
	always @(*) begin 
			case(i_dp_ctrl_funct3)
				`FUNCT3_BRANCH_BEQ	: take_branch =  o_dp_ALU_Zero; 
				`FUNCT3_BRANCH_BNE	: take_branch = !o_dp_ALU_Zero;
				`FUNCT3_BRANCH_BLT	: take_branch = !o_dp_ALU_Zero;
				`FUNCT3_BRANCH_BGE	: take_branch =  o_dp_ALU_Zero;
				`FUNCT3_BRANCH_BLTU	: take_branch = !o_dp_ALU_Zero;
				`FUNCT3_BRANCH_BGEU	: take_branch =  o_dp_ALU_Zero;
				default 			: take_branch = 1'b0; 
			endcase
	end
	
	wire 	[`XLEN-1:0]		SrcAE;
	wire 	[`XLEN-1:0]		SrcBE;
	wire 	[`XLEN-1:0]		mux_c_RD2E;
	wire 	[`XLEN-1:0]		mux_c_ExtImmE;
	wire 	[(3*`XLEN-1):0]	mux_concat_alu_a; 
	wire 	[(3*`XLEN-1):0]	mux_concat_alu_b;
	wire 	[(2*`XLEN-1):0]	mux_concat_alu_c;

	assign 	mux_c_RD2E			= o_dp_WriteDataE;
	assign 	mux_c_ExtImmE		= i_dp_ImmExtE;
	assign 	mux_concat_alu_a	= {i_dp_4to1mux, i_dp_ResultW, i_dp_RD1E};
	assign 	mux_concat_alu_b	= {i_dp_4to1mux, i_dp_ResultW, i_dp_RD2E};
	assign 	mux_concat_alu_c	= {mux_c_ExtImmE, mux_c_RD2E};

	assign and_output = take_branch & i_dp_BranchE;
	
	always @(*) begin 
		if (and_output) 
			o_PCSrcE = 2'b01;
		else if(i_dp_JumpE == 2'b01)
			o_PCSrcE = 2'b01;
		else if(i_dp_JumpE == 2'b10)
			o_PCSrcE = 2'b10;
		else 
			o_PCSrcE = 2'b00;
	end 
	
	riscv_alu
	u_riscv_alu(
		.o_alu_result		(o_dp_ALU			),
		.o_alu_zero			(o_dp_ALU_Zero		),
		.i_alu_a			(SrcAE				),
		.i_alu_b			(SrcBE				),
		.i_alu_ctrl			(i_dp_ALUContrlE	)   // 4bit
	);

	riscv_adder
	u_riscv_adder(
		.o_adder_sum		(o_dp_PC_Plus_immE	),
		.i_adder_a			(i_dp_PCE			),
		.i_adder_b			(i_dp_ImmExtE		)
	);

	riscv_mux
	#(
		.N_MUX_IN			(3					)
	)
	u_riscv_mux_a(
		.o_mux_data			(SrcAE				),
		.i_mux_concat_data	(mux_concat_alu_a	),
		.i_mux_sel			(ForWardAE			)
	);

	riscv_mux
	#(
		.N_MUX_IN			(3					)
	)
	u_riscv_mux_b(
		.o_mux_data			(mux_c_RD2E			),
		.i_mux_concat_data	(mux_concat_alu_b	),
		.i_mux_sel			(ForWardBE			)
	);

	riscv_mux
	#(
		.N_MUX_IN			(2					)
	)
	u_riscv_mux_c(
		.o_mux_data			(SrcBE				),
		.i_mux_concat_data	(mux_concat_alu_c	),
		.i_mux_sel			(ALUSrcE			)
	);

endmodule 
