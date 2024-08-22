`ifndef NOINC
`include "../common/riscv_configs.v"
`endif

module FF_Memory_Writeback
#(
	parameter 	REGISTER_INIT = 0
)
(
	output reg 				RegWriteW,
	output reg		  		ResultSrcW,
	output reg 	[`XLEN-1:0]	ReadDataW,
	output reg 	[`XLEN-1:0]	o_dp_4to1muxW,
	output reg 	[4:0]		RdW,

	input 		    		RegWriteM,
	input 					ResultSrcM,
	input 		[`XLEN-1:0]	o_dp_dmem_RD,
	input 		[`XLEN-1:0]	o_dp_4to1muxM,
	input 		[4:0]		RdM,

	input 					i_clk,
	input 					i_rstn
);

	always @(posedge i_clk or negedge i_rstn) begin 
		if (!i_rstn) begin 
			RegWriteW		<= 0;
			ResultSrcW  	<= 0;
			ReadDataW   	<= 0;
			o_dp_4to1muxW	<= 0;
			RdW         	<= 0;
		end else begin
			RegWriteW		<= RegWriteM;
			ResultSrcW  	<= ResultSrcM;
			ReadDataW   	<= o_dp_dmem_RD;
			o_dp_4to1muxW	<= o_dp_4to1muxM;
			RdW         	<= RdM;
		end 
	end 
endmodule
