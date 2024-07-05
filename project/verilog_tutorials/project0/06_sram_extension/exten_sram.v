`include "sram.v"

module exten_sram 
#(
	parameter BW_DATA = 64,
	parameter BW_ADDR = 6
)
(
	input 	[BW_DATA-1:0] i_data,   
	input 	[BW_ADDR-1:0] i_addr,   
	input 			      i_wen, 
	input 				  i_cen,
	input 			   	  i_oen,
	input 				  i_clk,
	output 	[BW_DATA-1:0] o_data
);

	wire bit_00, bit_01, bit_10, bit_11;
	
	assign bit_00 = (i_addr[5:4] == 2'b00);
	assign bit_01 = (i_addr[5:4] == 2'b01);
	assign bit_10 = (i_addr[5:4] == 2'b10);
	assign bit_11 = (i_addr[5:4] == 2'b11);


	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram0(
		.i_data				(i_data[63:32] 		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_00		),
		.i_oen				(i_oen && bit_00		),
		.i_clk				(i_clk				),
		.o_data				(o_data[63:32]		)
	);

	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram1(
		.i_data				(i_data[31:0]		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_00		),
		.i_oen				(i_oen && bit_00		),
		.i_clk				(i_clk				),
		.o_data				(o_data[31:0]		)
	);

	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram2(
		.i_data				(i_data[63:32]		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_01		),
		.i_oen				(i_oen && bit_01 	),
		.i_clk				(i_clk				),
		.o_data				(o_data[63:32]		)
	);

	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram3(
		.i_data				(i_data[31:0]		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_01		),
		.i_oen				(i_oen && bit_01		),
		.i_clk				(i_clk				),
		.o_data				(o_data[31:0]		)
	);

	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram4(
		.i_data				(i_data[63:32]		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_10		),
		.i_oen				(i_oen && bit_10		),
		.i_clk				(i_clk				),
		.o_data				(o_data[63:32]		)
	);

	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram5(
		.i_data				(i_data[31:0]		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_10		),
		.i_oen				(i_oen && bit_10		),
		.i_clk				(i_clk				),
		.o_data				(o_data[31:0]		)
	);

	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram6(
		.i_data				(i_data[63:32]		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_11		),
		.i_oen				(i_oen && bit_11		),
		.i_clk				(i_clk				),
		.o_data				(o_data[63:32]		)
	);

	sram
	#(
		.BW_DATA			(32					),
		.BW_ADDR			(4					)
	)
	u_sram7(
		.i_data				(i_data[31:0]		),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_cen && bit_11		),
		.i_oen				(i_oen && bit_11		),
		.i_clk				(i_clk				),
		.o_data				(o_data[31:0]		)
	);
endmodule
