`define BW_DATA 	4
`include "mux2.v"

module mux2_tb;

//=========================================
// module instanciation
//=========================================
	parameter BW_DATA = 4;
	wire	[BW_DATA-1:0]  o_out_assign;
	wire	[BW_DATA-1:0]  o_out_if;
	wire	[BW_DATA-1:0]  o_out_case;
	reg 	[BW_DATA-1:0]  i_sel;
	reg		[BW_DATA-1:0]  i_in0;
	reg		[BW_DATA-1:0]  i_in1;

mux2_assign u_mux2_assign(
	 .o_out(o_out_assign),
	 .i_sel(i_sel),
	 .i_in0(i_in0),
	 .i_in1(i_in1)
);

mux2_if u_mux2_if(
	 .o_out(o_out_if),
	 .i_sel(i_sel),
	 .i_in0(i_in0),
	 .i_in1(i_in1)
);


mux2_case u_mux2_case(
	 .o_out(o_out_case),
	 .i_sel(i_sel),
	 .i_in0(i_in0),
	 .i_in1(i_in1)
);

//=========================================
// input Stimulus
//=========================================

	integer i;
    initial begin
		for(i=0; i<10; i++) begin
			{i_sel, i_in0, i_in1} = $urandom_range(0,7);
			#(100);
		end
	end

	reg [8*32-1:0] vcd_file;

	initial begin 
		if($value$plusargs("vcd_file=%s", vcd_file)) begin 
		   $dumpfile(vcd_file);
		   $dumpvars;
		end
	end 

endmodule

