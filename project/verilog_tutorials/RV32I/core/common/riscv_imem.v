`include "../common/riscv_configs.v"

module riscv_imem
(
	output 	[		  `XLEN-1:0]	o_imem_data,
	input 	[`IMEM_ADDR_BIT-3:0] 	i_imem_addr,
	input 							i_clk
);

	reg 	[`XLEN-1:0] imem_arr[0:2**(`IMEM_ADDR_BIT-2)-1];

	`ifdef	IMEM_INIT
		reg	[8*128-1:0] FILE_TEXT_MIF;
		initial	begin
			$value$plusargs("text_mif=%s", FILE_TEXT_MIF);
			$readmemh(FILE_TEXT_MIF, imem_arr);
		end
	`endif
	
	assign 		o_imem_data = imem_arr[i_imem_addr];

endmodule 
