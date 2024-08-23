// ==================================================
//	[ VLSISYS Lab. ]
//	* Author		: Woong Choi (woongchoi@sm.ac.kr)
//	* Filename		: riscv_dmem_interface.v
//	* Description	: 
// ==================================================

`ifndef		NOINC
`include	"riscv_configs.v"
`endif

module riscv_dmem_interface
(	
	//	Bypass Signal
	output		[  `XLEN-1:0]	o_dmem_intf_addr,
	output						o_dmem_intf_wen,
	input		[  `XLEN-1:0]	i_dmem_intf_addr,
	input						i_dmem_intf_wen,

	//	To Data Memory
	output		[  `XLEN-1:0]	o_dmem_intf_wr_data,
	output		[`XLEN/8-1:0]	o_dmem_intf_byte_sel,
	//	To CPU
	output reg	[  `XLEN-1:0]	o_dmem_intf_rd_data,
	//	From CPU
	input		[  `XLEN-1:0]	i_dmem_intf_wr_data,
	input		[`XLEN/8-1:0]	i_dmem_intf_byte_sel,
	//	From Memory
	input		[  `XLEN-1:0]	i_dmem_intf_rd_data,
	//	Controll & Clock
	input		[        2:0]	i_dmem_intf_func3
);

	//	Bypass Signal
	assign		o_dmem_intf_addr	= i_dmem_intf_addr;
	assign		o_dmem_intf_wen		= i_dmem_intf_wen;

	//	To Data Memory
	assign		o_dmem_intf_wr_data		= i_dmem_intf_wr_data 	<< (8*i_dmem_intf_addr[1:0]);
	assign		o_dmem_intf_byte_sel	= i_dmem_intf_byte_sel	<< (1*i_dmem_intf_addr[1:0]);

	wire	[`XLEN-1:0]	byte_aligned_dmem_rd_data;
	assign		byte_aligned_dmem_rd_data = i_dmem_intf_rd_data >> (8*i_dmem_intf_addr[1:0]);

	always @(*) begin
		case (i_dmem_intf_func3)
			`FUNCT3_MEM_BYTE	: o_dmem_intf_rd_data	= {{24{byte_aligned_dmem_rd_data[ 7]}},	byte_aligned_dmem_rd_data[ 7:0]};
			`FUNCT3_MEM_HALF	: o_dmem_intf_rd_data	= {{16{byte_aligned_dmem_rd_data[15]}},	byte_aligned_dmem_rd_data[15:0]};
			`FUNCT3_MEM_WORD	: o_dmem_intf_rd_data	= {										byte_aligned_dmem_rd_data[31:0]};
			`FUNCT3_MEM_BYTEU	: o_dmem_intf_rd_data	= {{24{                         1'b0}},	byte_aligned_dmem_rd_data[ 7:0]};
			`FUNCT3_MEM_HALFU	: o_dmem_intf_rd_data	= {{16{                         1'b0}},	byte_aligned_dmem_rd_data[15:0]};
			default				: o_dmem_intf_rd_data	= 32'dx;
		endcase
	end

endmodule
