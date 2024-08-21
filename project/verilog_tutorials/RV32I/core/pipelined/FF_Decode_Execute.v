`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`include 	"../pipelined/pipe_ctrl.v"
`endif 

module FF_Decode_Execute
#(
	parameter 	REGISTER_INIT = 0
)
(
	output 	reg	[1:0]		MUX_selE,
	output 	reg 			RegWriteE,
	output 	reg [1:0]		ResultSrcE,
	output 	reg				MemWriteE,
	output 	reg				JumpE,
	output 	reg				BranchE,
	output 	reg	[2:0]		ALUContrlE,
	output 	reg				ALUSrcE,
	output  reg	[`XLEN-1:0]	RD1E,
	output  reg [`XLEN-1:0]	RD2E,
	output  reg [`XLEN-1:0]	PCE,
	output  reg [`XLEN-1:0]	Rs1E,
	output  reg [`XLEN-1:0]	Rs2E,
	output  reg [`XLEN-1:0]	RdE,
	output  reg [`XLEN-1:0]	ExtImmE,
	output  reg [`XLEN-1:0]	funct3E,
	output 	reg [`XLEN-1:0] PCPlus4E, 

	input 	 [1:0]			o_ctrl_MUX_selD,
	input 	 				RegWriteD,
	input 	 [1:0]	    	ResultSrcD,
	input 					MemWriteD,
	input 					JumpD,
	input 					BranchD,
	input 	 [2:0]			ALUContrlD,
	input 					ALUSrcD,
	input  	[`XLEN-1:0]		RD1,
	input   [`XLEN-1:0]		RD2,
	input   [`XLEN-1:0]		PCD,
	input   [`XLEN-1:0]		Rs1D,
	input   [`XLEN-1:0]		Rs2D,
	input   [`XLEN-1:0]		RdD,
	input   [`XLEN-1:0]		ExtImmD,
	input 	[`XLEN-1:0]		funct3D,
	input   [`XLEN-1:0]		PCPlus4D, 
	input 	[`XLEN-1:0]		InstrD,

	input 					i_clk,
	input 					i_rstn,
	input 					i_FlushE_CLR
);

	always @(posedge i_clk or negedge i_rstn) begin
		if(!i_rstn)	begin 
			MUX_selE		<= 0;
			RegWriteE		<= 0;
			ResultSrcE		<= 0;
			MemWriteE		<= 0;
			JumpE			<= 0;
			BranchE			<= 0;
			ALUContrlE		<= 0;
			ALUSrcE			<= 0;
			RD1E			<= 0;
			RD2E			<= 0;
			PCE				<= 0;
			Rs1E			<= 0;
			Rs2E			<= 0;
			RdE				<= 0;
			ExtImmE			<= 0;
			PCPlus4E 		<= 0;
			funct3E			<= 0;
		end else begin 
			if(!i_FlushE_CLR) begin 
				MUX_selE		<= o_ctrl_MUX_selD;
	            RegWriteE		<= RegWriteD;
                ResultSrcE		<= ResultSrcD;
                MemWriteE		<= MemWriteD;
                JumpE			<= JumpD;
                BranchE			<= BranchD;
                ALUContrlE		<= ALUContrlD;
                ALUSrcE			<= ALUSrcD;
                RD1E			<= RD1;
                RD2E			<= RD2;
                PCE				<= PCD;
                Rs1E			<= Rs1D;
                Rs2E			<= Rs2D;
                RdE				<= RdD;
                ExtImmE			<= ExtImmD;
                PCPlus4E 		<= PCPlus4D;
				funct3E			<= funct3D;
			end else begin 
				MUX_selE		<= 0;
                RegWriteE		<= 0;
                ResultSrcE		<= 0;
                MemWriteE		<= 0;
                JumpE			<= 0;
                BranchE			<= 0;
                ALUContrlE		<= 0;
                ALUSrcE			<= 0;
                RD1E			<= 0;
                RD2E			<= 0;
                PCE				<= 0;
                Rs1E			<= 0;
                Rs2E			<= 0;
                RdE				<= 0;
                ExtImmE			<= 0;
                PCPlus4E 		<= 0;
				funct3E			<= 0;
			end 
		end 
	end 
endmodule  
