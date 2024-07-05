// 2 to 1 MUX
module MUX_2to1(
	input  [31:0]  B,
	input  [31:0]  not_B,
	input  		   mux2_F,
	output [31:0]  mux2_out
);

	assign mux2_out = (mux2_F == 3'h1) ? not_B : B;

endmodule 

// multi-bit adder 
module adder(
	input  [31:0]  adder_A,
	input  [31:0]  adder_B,
	input  		   adder_F,
	output [31:0]  adder_sum,
	output 		   adder_cout
);
//	wire mux_out;

	assign {adder_cout, adder_sum} = adder_A + adder_B + adder_F;

endmodule

// AND 
module AND(
	input  [31:0] AND_A,
	input  [31:0] AND_B,
	output [31:0] and_out
);	

	assign and_out = AND_A & AND_B;

endmodule

// OR 
module OR(
	input  [31:0] OR_A,
	input  [31:0] OR_B,
	output [31:0] or_out
);
			
	assign or_out = OR_A | OR_B;

endmodule

// 4 to 1 MUX 
module MUX_4to1(
	input  [31:0] O,
	input  [31:0] P,
	input  [31:0] Q,
	input  [31:0] R,
	input  	[1:0] mux4_F,
	output [31:0] mux4_out
);
   	assign mux4_out = ((mux4_F) == (2'd0)) ? O  :
					  ((mux4_F) == (2'd1)) ? P 	:
					  ((mux4_F) == (2'd2)) ? Q	: 
				 	  						 R	; 
endmodule

module ALU(
	input  [31:0] 	A,
	input  [31:0]	B,
	input  [2:0]	alu_F,
	output [31:0]	alu_out
);

	wire [31:0] not_B;
	wire [31:0] mux2_out;

	assign not_B = ~B;

	wire [31:0] R;
	assign R = {31'b0, adder_sum[31]};   // zero extend 

	wire [31:0] mux4_out;
	wire [31:0] and_out;
	wire [31:0] or_out;
	wire [31:0] adder_sum;
	wire 		adder_cout;


	MUX_2to1
	u_MUX_2to1(
		.B					(B					),
		.not_B				(not_B				),
		.mux2_F				(alu_F[2]			),
		.mux2_out			(mux2_out			)
	);

	AND
	u_AND(
		.AND_A				(A					),
		.AND_B				(mux2_out			),
		.and_out			(and_out			)
	);

	OR
	u_OR(
		.OR_A				(A		  			),
		.OR_B				(mux2_out			),
		.or_out				(or_out				)
	);

	adder
	u_adder(
		.adder_A			(A					),
		.adder_B			(mux2_out			),
		.adder_F			(alu_F[2]			),
		.adder_sum			(adder_sum			),
		.adder_cout			(adder_cout			)
	);

	MUX_4to1
	u_MUX_4to1(
		.O					(and_out			),
		.P					(or_out				),
		.Q					(adder_sum			),
		.R					(R					),
		.mux4_F				(alu_F[1:0]			),
		.mux4_out			(mux4_out			)
	);

	assign alu_out = mux4_out;

endmodule


