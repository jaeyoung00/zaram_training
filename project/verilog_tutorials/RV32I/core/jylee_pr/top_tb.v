`define CLKFREQ 	100
`define SIMCYCLE	`NVEC
`define NVEC		100
`define IMEM_INIT
`define IMEM_INIT_FILE "/home/jylee/zaram_training/project/verilog_tutorials/RV32I/core/jylee_pr/riscv_program.mif"
`define NOINC	
`define DEBUG

// -----------------------------------------------
// Includes 
// -----------------------------------------------
`include	"../common/riscv_configs.v"
`include	"../common/riscv_adder.v"
`include	"../common/riscv_alu.v"
`include	"../common/riscv_dmem.v"
`include	"../common/riscv_dmem_interface.v"
`include	"../common/riscv_imem.v"
`include	"../common/riscv_immext.v"
`include	"../common/riscv_mux.v"
`include	"../common/riscv_regfile.v"
`include	"../common/riscv_register.v"
`include 	"top.v"
`include 	"cpu.v"
`include 	"riscv_ctrl.v"
`include 	"riscv_datapath.v"

module top_tb;

	wire 	[`XLEN-1:0]		o_riscv_imem_pc;
	wire 	[`XLEN-1:0]		o_riscv_imem_instr;
	wire	[`XLEN-1:0]		o_riscv_dmem_addr;
	wire 					o_riscv_dmem_wr_en;
	wire 	[`XLEN-1:0]		o_riscv_dmem_wr_data;
	wire  	[`XLEN-1:0]		o_riscv_dmem_rd_data;
	wire 		  [3:0]		o_riscv_dmem_byte_sel;
	reg 					i_clk;
	reg 					i_rstn;

	top
	#(
		.REGISTER_INIT			(0						)
	)
	u_top(
		.o_riscv_imem_pc		(o_riscv_imem_pc		),
		.o_riscv_imem_instr		(o_riscv_imem_instr		),
		.o_riscv_dmem_addr		(o_riscv_dmem_addr		),
		.o_riscv_dmem_wr_en		(o_riscv_dmem_wr_en		),
		.o_riscv_dmem_wr_data	(o_riscv_dmem_wr_data	),
		.o_riscv_dmem_rd_data	(o_riscv_dmem_rd_data	),
		.o_riscv_dmem_byte_sel	(o_riscv_dmem_byte_sel	),
		.i_clk					(i_clk					),
		.i_rstn					(i_rstn					)
	);

// -----------------------------------------------
// clock 
// -----------------------------------------------

	always #(500/`CLKFREQ) 	i_clk = ~i_clk;

// -----------------------------------------------
// Tasks
// -----------------------------------------------

	reg 	[8*32-1:0]	taskState;
	integer 			err = 0;

	task init;
		begin 
			taskState		= "init";
			i_clk			= 0;
			i_rstn			= 0;
		end 
	endtask

	task resetNCycle;
		input  [9:0]	 i;
		begin 
			taskState		= "Reset";
			i_rstn			= 1'b0;
			#(i*1000/`CLKFREQ);
			i_rstn = 1'b1;
		end 
	endtask

// -----------------------------------------------
// Test Stimulus 
// -----------------------------------------------
	integer 	i, j;
	initial begin 
		init();
		resetNCycle(4);

		for(i=0; i<`SIMCYCLE; i++) begin 
			#(1000/`CLKFREQ);
		end 
		#(1000/`CLKFREQ);
		$finish;
	end 

// -----------------------------------------------
// Dump Vcd  
// -----------------------------------------------

	reg [8*32-1:0]	vcd_file;
	initial begin 	
		if($value$plusargs("vcd_file=%s", vcd_file)) begin 
			$dumpfile(vcd_file);
			$dumpvars;
			for(i=0; i<2**(`DMEM_ADDR_BIT-2)-1; i++) begin 
				$dumpvars(0,u_top.u_riscv_dmem.dmem_arr[i]);
			end 
			for(i=0; i<32; i++) begin 
				$dumpvars(0, u_top.u_cpu.u_riscv_datapath.u_riscv_regfile.registers[i]);
			end 
		end else begin 
			$dumpfile("top_tb.vcd");
			$dumpvars;
		end 
	end 

endmodule 
