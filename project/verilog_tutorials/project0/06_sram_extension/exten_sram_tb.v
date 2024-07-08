`define CLKFREQ		100
`define SIMCYCLE	32

`define BW_DATA		64
`define BW_ADDR		6

`define SPSRAM_ASYNC

`include "exten_sram.v"


module exten_sram_tb;


	reg 	[`BW_DATA-1:0] i_data;   
	reg 	[`BW_ADDR-1:0] i_addr;   
	reg 			       i_wen; 
	reg 				   i_cen;
	reg 			   	   i_oen;
	reg 				   i_clk;
	wire 	[`BW_DATA-1:0] o_data;

	exten_sram
	#(
		.BW_DATA			(`BW_DATA			),
		.BW_ADDR			(`BW_ADDR			)
	)
	u_exten_sram(
		.i_data				(i_data				),
		.i_addr				(i_addr				),
		.i_wen				(i_wen				),
		.i_cen				(i_cen				),
		.i_oen				(i_oen				),
		.i_clk				(i_clk				),
		.o_data				(o_data				)
	);

//--------------------------------------------
// Clock
//--------------------------------------------

	always #(500/`CLKFREQ) i_clk = ~i_clk;
	
//--------------------------------------------
// Task
//--------------------------------------------

	reg [4*32-1:0] taskState;

	task init;
		begin 
			i_data = 0;	
            i_addr = 0;	
            i_wen  = 0;  
            i_cen  = 0;  
            i_oen  = 0;  
            i_clk  = 0; 
		end
	endtask

	task memWR;
			input [63:0] testi_addr;
			input [5:0] testi_data;
			begin 
				@(negedge i_clk) begin 
					taskState	= "WR";
					i_data		= testi_data;
					i_addr		= testi_addr;
					i_wen		= 1;
					i_cen		= 1;
					i_oen		= 0;
				end
			end
	endtask

	task memRD;
			input [63:0] testi_addr;
			begin 
				@(negedge i_clk) begin 
					taskState	= "RD";
					i_addr		= testi_addr;
					i_wen		= 0;
					i_cen		= 1;
					i_oen		= 1;
				end
			end
	endtask

//--------------------------------------------
// Test stimulus 
//--------------------------------------------
	integer i, j;
	initial begin
		init();
		#(4*1000/`CLKFREQ);

		for(i=0; i<2**6; i++) begin
			memWR(i, i);
		end
		for(i=0; i<2**6; i++) begin
			memRD(i);
		end
		#(1000/`CLKFREQ);
		$finish;
	end

//---------------------------------------------
// Dump VCD  
//---------------------------------------------

    reg [8*32-1:0] vcd_file;
    initial begin
        if($value$plusargs("vcd_file=%s", vcd_file)) begin
            $dumpfile(vcd_file);
            $dumpvars;
        end else begin
            $dumpfile("exten_sram_tb.vcd");
            $dumpvars;
        end
    end
endmodule

