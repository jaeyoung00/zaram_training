`define CLKFREQ		100
`define SIMCYCLE	32
`define BW_DATA		32
`define BW_ADDR		5

`define SPSRAM_ASYNC

`include "double_spsram.v"

module double_spsram_tb;

	wire				[31:0]	o_data;
	reg					[31:0]	i_data;
	reg					[4:0]	i_addr;
	reg 						i_wen;
	reg 						i_cen;
	reg 						i_oen;
	reg 						i_clk;

//	spsram
//	#(
//		.BW_DATA			(32			),
//		.BW_ADDR			(5			)
//	)
//	u_spsram_1(
//		.o_data				(o_data				),
//		.i_data				(i_data				),
//		.i_addr				(i_addr[3:0]		),
//		.i_wen				(i_wen				),
//		.i_cen				(~i_addr[4]			),
//		.i_oen				(~i_addr[4]			),
//		.i_clk				(i_clk				)
//	);
//	
//	spsram
//	#(
//		.BW_DATA			(32			),
//		.BW_ADDR			(5			)
//	)
//	u_spsram_2(
//		.o_data				(o_data				),
//		.i_data				(i_data				),
//		.i_addr				(i_addr[3:0]		),
//		.i_wen				(i_wen				),
//		.i_cen				(i_addr[4]			),
//		.i_oen				(i_addr[4]			),
//		.i_clk				(i_clk				)
//	);

	double_spsram
	u_double_spsram(
		.o_data				(o_data				),
		.i_data				(i_data				),
		.i_addr				(i_addr				),
		.i_wen				(i_wen				),
		.i_cen				(i_cen				),
		.i_oen				(i_oen				),
		.i_clk				(i_clk				)
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
			input [31:0] ti_addr;
			input [4:0] ti_data;
			begin 
				@(negedge i_clk) begin 
					taskState	= "WR";
					i_data		= ti_data;
					i_addr		= ti_addr;
					i_wen		= 1;
					i_cen		= 1;
					i_oen		= 0;
				end
			end
	endtask

	task memRD;
			input [31:0] ti_addr;
			begin 
				@(negedge i_clk) begin 
					taskState	= "RD";
					i_addr		= ti_addr;
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

		for(i=0; i<2**5; i++) begin
			memWR(i, i);
		end
		for(i=0; i<2**5; i++) begin
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
            $dumpfile("spsram_tb.vcd");
            $dumpvars;
        end
    end

endmodule 


