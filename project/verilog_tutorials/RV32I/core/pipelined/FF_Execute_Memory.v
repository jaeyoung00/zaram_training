`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`include 	"../pipelined/pipe_ctrl.v"
`endif 

module FF_Execute_Memory
#(
	parameter 	REGISTER_INIT = 0
)
(
	output	reg	[1:0]		MUX_selM,
	output  reg				RegWriteM,
	output 	reg [1:0]		ResultSrcM,
	output 	reg 			MemWriteM,
	output 	reg [`XLEN-1:0]	ALUResultM,
	output 	reg [`XLEN-1:0] WriteDataM,
	output  reg [`XLEN-1:0] PC_Plus_immM,
	output  reg [`XLEN-1:0]	RdM,
	output  reg [`XLEN-1:0]	ExtImmM,
	output  reg [`XLEN-1:0]	PCPlus4M,

	input 		[1:0]		MUX_selE,
	input 					RegWriteE,
	input 		[1:0]		ResultSrcE,
	input 					MemWriteE,
	input 					o_dp_ALU,
	input 		[`XLEN-1:0]	o_dp_WriteDataE,
	input		[`XLEN-1:0]	o_dp_PC_Plus_immE,
	input 		[`XLEN-1:0]	RdE,
	input 		[`XLEN-1:0]	ExtImmE,
	input 		[`XLEN-1:0] PCPlus4E,

	input 					i_clk,
	input 					i_rstn
);

	always @(posedge i_clk or negedge i_rstn) begin 
		if(!i_rstn) begin 
			MUX_selM		<= 0;
            RegWriteM       <= 0;
	        ResultSrcM      <= 0;
            MemWriteM       <= 0;
            ALUResultM      <= 0;
            WriteDataM      <= 0;
            PC_Plus_immM    <= 0;
            RdM             <= 0;
            ExtImmM         <= 0;
            PCPlus4M        <= 0;
		end else begin
			MUX_selM		<= MUX_selE; 
            RegWriteM       <= RegWriteE;
            ResultSrcM      <= ResultSrcE;
            MemWriteM       <= MemWriteE;
            ALUResultM      <= o_dp_ALU;
            WriteDataM      <= o_dp_WriteDataE; 
            PC_Plus_immM    <= o_dp_PC_Plus_immE;
            RdM             <= RdE; 
            ExtImmM         <= ExtImmE;
            PCPlus4M        <= PCPlus4E;
		end 
	end 
endmodule 
