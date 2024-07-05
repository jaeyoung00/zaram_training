`include "alu.v"
`define SIMCYCLE 100
`define CLKFREQ 50

module alu_tb;
	
   	reg 			clk;
	reg 	[31:0]	A;
	reg 	[31:0] 	B;
	reg 	[2:0]	alu_F;
	wire 	[31:0]	alu_out;
	reg 	[31:0] alu_out_task;

ALU u_ALU(
	.A 			(A),
	.B		 	(B),
	.alu_F		(alu_F),
	.alu_out	(alu_out)
);

//-----------------------------------------
// Clock 
//-----------------------------------------
	
	always #(500/`CLKFREQ) clk = ~clk;

//-----------------------------------------
// Tasks 
//-----------------------------------------
	
	task init_func;
		begin
			A		=	0;
			B		=	0;
			alu_F	=	0;
			clk		=   0;
			alu_out_task = 0;
		end
	endtask

	task and_func;
		input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin 
				Y = A & B;
			end 
	endtask

	task or_func;
		input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin 
				Y = A | B;
			end 
	endtask

	task add_func;
		input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin 
				Y = A + B;
			end 
	endtask

	task not_use;
		input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin 
				Y = 0;
			end 
	endtask

	task and_bar_func;
		input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin 
				Y = A & ~B;
			end 
	endtask

	task or_bar_func;
		input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin 
				Y = A | ~B;
			end 
	endtask
	
	task sub_func;
		input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin 
				Y = A - B;
			end 
	endtask

	task slt_func;
	    input [31:0] A;
		input [31:0] B;
		output [31:0] Y;
			begin
				if(A < B) begin 
					 Y = 1;
				end else begin 
					 Y = 0;
				end 
			end 
	endtask

//---------------------------------------------
// Test Stimulus 
//---------------------------------------------

	always @(alu_F) begin
		case(alu_F)
			3'b000 : and_func(A, B, alu_out_task);
			3'b001 : or_func(A, B, alu_out_task);
			3'b010 : add_func(A, B, alu_out_task);
			3'b100 : and_bar_func(A, B, alu_out_task);
			3'b101 : or_bar_func(A, B, alu_out_task);
			3'b110 : sub_func(A, B, alu_out_task);
			3'b111 : slt_func(A, B, alu_out_task);
			default : not_use(A, B, alu_out_task);
		endcase
	end

	initial begin
		init_func();
		
	 	@(posedge clk); 
		#100;

		A 		= 32'h0;
		B		= 32'h1;
		alu_F 	= 3'b100;

		@(posedge clk);
		#100;

		if(alu_out_task != alu_out) begin
			$display("ERROR! expected : %d, real : %d", alu_out_task, alu_out); 
		end
		
		@(posedge clk); 
		#100;
	
		$finish;

	end

//--------------------------------------------
// Dump VCD 
//--------------------------------------------
	reg [8*32-1:0] vcd_file;
	initial begin
		if($value$plusargs("vcd_file=%s", vcd_file)) begin
			$dumpfile(vcd_file);
			$dumpvars;
		end else begin 
			$dumpfile("ALU_tb.vcd");
			$dumpvars;
		end
	end

endmodule 

