`include "adder_4bit.v"

module adder_4bit_tb;

//=========================================
// module instanciation
//=========================================

wire [3:0] o_s;
wire 	   o_c;
reg  [3:0] i_a;
reg  [3:0] i_b;
reg        i_c;
reg  [4:0] sum;
reg 	   CLK;

adder_4bit_dataflow u_adder_4bit_dataflow
(
	.o_s(o_s),
	.o_c(o_c),
	.i_a(i_a),
	.i_b(i_b),
	.i_c(i_c)
);

//=========================================
// input Stimulus
//=========================================

integer i;

initial begin
	for(i=0; i<10; i++) begin
		i_a = 4'h1;
		i_b = 4'h8;
		i_c = 1'h1;

		sum = i_a + i_b + i_c;
		$display("{o_c, o_s} = %h", sum);
		#100;
	end
	$finish;
end

reg [8*32-1:0] vcd_file;

initial begin 
	if($value$plusargs("vcd_file=%s", vcd_file)) begin 
	   $dumpfile(vcd_file);
	   $dumpvars;
	end
end 
endmodule
