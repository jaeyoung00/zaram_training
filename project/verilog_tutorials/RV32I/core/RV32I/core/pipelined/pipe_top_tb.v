`define 	CLKFREQ		100
`define 	SIMCYCLE	`NVEC
`define 	NVEC 		100
`define 	IMEM_INIT	
`define		IMEM_INIT_FILE		"/home/jylee/zaram_training/project/verilog_tutorials/RV32I/core/singlecycle/riscv_program.mif"
`define 	NOINC	
`define 	DEBUG	

`include 	"pipe_top.v"
`include	"../common/riscv_configs.v"

module pipe_top_tb;

//---------------------------------------------
// DUT signals & instantiate 
//---------------------------------------------

	wire [`XLEN-1:0]		o_riscv_imem_pc;
	wire [`XLEN-1:0]		o_riscv_imem_instr;
	wire [`XLEN-1:0]		o_riscv_dmem_addr;
	wire 					o_riscv_dmem_wr_en;
	wire [	  3:0]			o_riscv_dmem_byte_sel;
	wire [`XLEN-1:0]		o_riscv_dmem_wr_data;
	wire [`XLEN-1:0]		o_riscv_dmem_rd_data;
	reg 					i_clk;
	reg 					i_rstn;

	pipe_top
	#(
		.REGISTER_INIT			(0						)
	)
	u_pipe_top(
		.o_riscv_imem_pc		(o_riscv_imem_pc		),
		.o_riscv_imem_instr		(o_riscv_imem_instr		),
		.o_riscv_dmem_addr		(o_riscv_dmem_addr		),
		.o_riscv_dmem_wr_en		(o_riscv_dmem_wr_en		),
		.o_riscv_dmem_byte_sel	(o_riscv_dmem_byte_sel	),
		.o_riscv_dmem_wr_data	(o_riscv_dmem_wr_data	),
		.o_riscv_dmem_rd_data	(o_riscv_dmem_rd_data	),
		.i_clk					(i_clk					),
		.i_rstn					(i_rstn					)
	);

//---------------------------------------------
// Clock
//---------------------------------------------
	always #(500/`CLKFREQ)	i_clk = ~i_clk;

//---------------------------------------------
// Tasks
//---------------------------------------------

	reg 	[8*32-1:0]	taskState;
	integer 			err = 0;

	task init;
		begin 
			taskState	=	"Init";
			i_clk		=  		 0;
			i_rstn      =		 0;
		end 
	endtask 

	task resetNCycle;
		input 	[9:0]	i;
		begin 
			taskState		="Reset";
			i_rstn	= 1'b0;
			#(i*1000/`CLKFREQ);
			i_rstn	= 1'b1;
		end 
	endtask

//---------------------------------------------
// Test Stimulus
//---------------------------------------------
	
	integer 	i,j;
	initial begin 
		init();
		resetNCycle(4);

		for(i=0; i<`SIMCYCLE; i++) begin
			#(1000/`CLKFREQ);
		end
		#(1000/`CLKFREQ);
		$finish;
	end 

//---------------------------------------------
// Dump Vcd 
//---------------------------------------------
	
	reg 	[8*32-1:0]	vcd_file;
	initial begin 
		if($value$plusargs("vcd_file=%s", vcd_file)) begin 
			$dumpfile(vcd_file);
			$dumpvars;
			for(i=0; i<2**(`DMEM_ADDR_BIT-2)-1; i++) begin 
				$dumpvars(0, u_riscv_top.u_riscv_dmem.dmem_arr[i]);
			end 
			for(i=0; i<32; i++) begin
				$dumpvars(0,u_pipe_top.u_pipe_datapath_Fetch.u_pipe_datapath_Decode.u_pipe_datapath_Execute.u_pipe_datapath_Memory.u_pipe_datapath_Writeback.u_riscv_regfile.registers[i]);
			end 
		end else begin 
			$dumpfile("pipe_top_tb.vcd");
			$dumpvars;
		end 
	end 
	endmodule 

