`include "spsram.v"

module double_spsram(
	output 		[31:0]			o_data,
	input 		[31:0]			i_data,
	input		[4:0]			i_addr,
	input 						i_wen,
	input 						i_cen,
	input 						i_oen,
	input 						i_clk
);

	spsram
	#(
		.BW_DATA			(32			),
		.BW_ADDR			(5			)
	)
	u_spsram_1(
		.o_data				(o_data				),
		.i_data				(i_data				),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(~i_addr[4]			),
		.i_oen				(~i_addr[4]			),
		.i_clk				(i_clk				)
	);
	
	spsram
	#(
		.BW_DATA			(32			),
		.BW_ADDR			(5			)
	)
	u_spsram_2(
		.o_data				(o_data				),
		.i_data				(i_data				),
		.i_addr				(i_addr[3:0]		),
		.i_wen				(i_wen				),
		.i_cen				(i_addr[4]			),
		.i_oen				(i_addr[4]			),
		.i_clk				(i_clk				)
	);

endmodule
