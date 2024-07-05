module mux(
	input	mux_Sin,
	input   mux_D,
	input   mux_load,
	output  mux_out
);
	assign mux_out = (mux_load == 0) ?  mux_Sin : mux_D;

endmodule

module ff(
	input  ff_clk,
	input  ff_Sin,
	output reg ff_out
);

	always @(posedge ff_clk) 
	begin 
		ff_out <= ff_Sin;
	end
endmodule

module shift_reg(
	input 			shift_load,
	input			shift_clk,

	input			shift_Sin,
	output  [7:0]	shift_Q,

	input   [7:0]	shift_D,
	output 	    	shift_Sout
);

	reg	  mux_Sin;
	reg   mux_D;
	reg   mux_load;
	wire  [7:0] mux_out;
	
	reg  ff_clk;
	reg  ff_Sin;
	reg  ff_out;   // wire 

	mux
	u_mux0(
		.mux_Sin			(shift_Sin			),
		.mux_D				(shift_D[0]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[0]			)
	);
	mux
	u_mux1(
		.mux_Sin			(shift_Q[0]			),
		.mux_D				(shift_D[1]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[1]			)
	);
	mux
	u_mux2(
		.mux_Sin			(shift_Q[1]			),
		.mux_D				(shift_D[2]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[2]			)
	);
	mux
	u_mux3(
		.mux_Sin			(shift_Q[2]			),
		.mux_D				(shift_D[3]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[3]			)
	);
	mux
	u_mux4(
		.mux_Sin			(shift_Q[3]			),
		.mux_D				(shift_D[4]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[4]			)
	);
	mux
	u_mux5(
		.mux_Sin			(shift_Q[4]			),
		.mux_D				(shift_D[5]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[5]			)
	);
	mux
	u_mux6(
		.mux_Sin			(shift_Q[5]			),
		.mux_D				(shift_D[6]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[6]			)
	);
	mux
	u_mux7(
		.mux_Sin			(shift_Q[6]			),
		.mux_D				(shift_D[7]			),
		.mux_load			(shift_load			),
		.mux_out			(mux_out[7]			)
	);

// ---------------------------------------------------FF 

	ff
	u_ff0(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[0] 		),
		.ff_out				(shift_Q[0]			)
	);
	ff
	u_ff1(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[1]			),
		.ff_out				(shift_Q[1]			)
	);
	ff
	u_ff2(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[2]			),
		.ff_out				(shift_Q[2]			)
	);
	ff
	u_ff3(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[3]			),
		.ff_out				(shift_Q[3]			)
	);
	ff
	u_ff4(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[4]			),
		.ff_out				(shift_Q[4]			)
	);
	ff
	u_ff5(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[5]			),
		.ff_out				(shift_Q[5]			)
	);
	ff
	u_ff6(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[6]			),
		.ff_out				(shift_Q[6]			)
	);
	ff
	u_ff7(
		.ff_clk				(shift_clk			),
		.ff_Sin				(mux_out[7]			),
		.ff_out				(shift_Q[7]			)
	);
			assign shift_Sout = shift_Q[7];
endmodule

