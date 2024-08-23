`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`include 	"../pipelined/pipe_ctrl.v"
`endif 

module FF_Execute_Memory
#(
	parameter 	REGISTER_INIT = 0
)
(
	output	reg	[1:0]			MUX_selM,
	output  reg					RegWriteM,
	output 	reg 				ResultSrcM,
	output 	reg 				MemWriteM,
	output 	reg [`XLEN/8-1:0] 	mem_byte_selM,
	output 	reg [`XLEN-1:0]		ALUResultM,
	output 	reg [`XLEN-1:0] 	WriteDataM,
	output  reg [`XLEN-1:0] 	PC_Plus_immM,
	output  reg [4:0]			RdM,
	output  reg [`XLEN-1:0]		ExtImmM,
	output  reg [`XLEN-1:0]		PCPlus4M,
	output	reg [2:0]			funct3M,

	input		[2:0]			funct3E,
	input 						i_clk,
	input 						i_rstn,
	input 		[1:0]			MUX_selE,
	input 						RegWriteE,
	input 						ResultSrcE,
	input 						MemWriteE,
	input 		[`XLEN/8-1:0] 	mem_byte_selE,
	input 		[`XLEN-1:0]		o_dp_ALU,
	input 		[`XLEN-1:0]		o_dp_WriteDataE,
	input		[`XLEN-1:0]		o_dp_PC_Plus_immE,
	input 		[4:0]			RdE,
	input 		[`XLEN-1:0]		ExtImmE,
	input 		[`XLEN-1:0] 	PCPlus4E

);

	always @(posedge i_clk or negedge i_rstn) begin 
		if(!i_rstn) begin 
			MUX_selM		<= 0;
            RegWriteM       <= 0;
	        ResultSrcM      <= 0;
            MemWriteM       <= 0;
			mem_byte_selM	<= 0;
            ALUResultM      <= 0;
            WriteDataM      <= 0;
            PC_Plus_immM    <= 0;
            RdM             <= 0;
            ExtImmM         <= 0;
            PCPlus4M        <= 0;
			funct3M			<= 0;
		end else begin
			MUX_selM		<= MUX_selE; 
            RegWriteM       <= RegWriteE;
            ResultSrcM      <= ResultSrcE;
            MemWriteM       <= MemWriteE;
			mem_byte_selM	<= mem_byte_selE;
            ALUResultM      <= o_dp_ALU;
            WriteDataM      <= o_dp_WriteDataE; 
            PC_Plus_immM    <= o_dp_PC_Plus_immE;
            RdM             <= RdE; 
            ExtImmM         <= ExtImmE;
            PCPlus4M        <= PCPlus4E;
			funct3M			<= funct3E;
		end 
	end 
endmodule 
