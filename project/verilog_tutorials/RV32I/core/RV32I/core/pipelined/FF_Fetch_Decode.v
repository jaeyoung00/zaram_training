`ifndef 	NOINC
`include 	"../common/riscv_configs.v"
`endif 

module FF_Fetch_Decode
(
	output  reg [`XLEN-1:0]	o_instrD,
	output 	reg [`XLEN-1:0]	o_PCPlus4D,
	output  reg [`XLEN-1:0]	o_PCD,
	input 					i_clk,
	input 					i_rstn,
	input 		[`XLEN-1:0] i_imem_RD,
	input 		[`XLEN-1:0]	i_PCF,
	input 		[`XLEN-1:0]	i_PCPlus4F,
	input 					i_StallD_en,
	input 					i_FlushD_CLR
);

	always @(posedge i_clk or negedge i_rstn) begin 
		if(!i_rstn) begin 
			o_instrD	<= 0;
			o_PCD		<= 0; 
			o_PCPlus4D 	<= 0;
		end 
		else if(i_FlushD_CLR) begin 
			o_instrD	<= 0;
			o_PCD		<= 0;
			o_PCPlus4D	<= 0;
		end 
		else if(!i_StallD_en) begin 
			o_instrD	<= i_imem_RD;
			o_PCD		<= i_PCF;
			o_PCPlus4D	<= i_PCPlus4F;
		end 
		else begin 	
			o_instrD	<=	o_instrD;
			o_PCD		<=	o_PCD;
			o_PCPlus4D	<=	o_PCPlus4D;
		end 
	end 

endmodule 
