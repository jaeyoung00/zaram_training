`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`include 	"../common/riscv_mux.v"
`include 	"../common/riscv_adder.v"
`include 	"../common/riscv_register.v"
`include 	"../common/riscv_imem.v"
`endif 

module pipe_datapath_Fetch
#(
	parameter 	REGISTER_INIT 	= 0
)
(
	output		[`XLEN-1:0]		o_dp_imem_RD,
	output 		[`XLEN-1:0]		o_dp_PCF,
	output 		[`XLEN-1:0]		o_dp_PCPlus4F,
	output 		[`XLEN-1:0]		o_dp_ALUF,
	input 		[`XLEN-1:0]		i_dp_PCPlus4F,
	input 		[`XLEN-1:0]		PCTargetE,
	input 						i_clk,
	input 						i_rstn,
	input 		[1:0]			i_PCSrcE
);

	wire 		[`XLEN-1:0]		PCFF;
	wire 		[`XLEN-1:0]		PCF;
	wire 		[(3*`XLEN)-1:0]	mux_concat_pc;
	assign 		mux_concat_pc	=	{i_dp_PCPlus4F, PCTargetE, o_dp_ALUF};


	riscv_adder
	u_riscv_adder(
		.o_adder_sum		(o_dp_PCPlus4F		),
		.i_adder_a			(PCF				),
		.i_adder_b			(32'd4				)
	);

	riscv_imem
	u_riscv_imem(
		.o_imem_data		(o_dp_imem_RD		),
		.i_imem_addr		(PCF[13:0]			),
		.i_clk				(i_clk		)
	);


	riscv_register
	#(
		.REGISTER_INIT		(REGISTER_INIT		)
	)
	u_riscv_register(
		.o_register_q		(PCF				),
		.i_register_d		(PCFF				),
		.i_register_en		(1'b1				),
		.i_clk				(i_clk		),
		.i_rstn				(i_rstn		)
	);

	riscv_mux
	#(
		.N_MUX_IN			(3					)
	)
	u_riscv_mux(
		.o_mux_data			(PCFF				),
		.i_mux_concat_data	(mux_concat_pc		),
		.i_mux_sel			(i_PCSrcE			)
	);
	
endmodule 

