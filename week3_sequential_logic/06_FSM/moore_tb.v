`include "seq_detect_moore.v"

`define S_IDLE  3'b000
`define S_H     3'b001
`define S_HL    3'b010
`define S_HLH   3'b011
`define S_HLHH  3'b100

`define CLKFREQ     100
`define SIMCYCLE     50
`define DEBUG

module moore_tb;

    wire o_out;
    reg  i_seq;
    reg  i_clk;
    reg  i_rstn;


    seq_detect_moore u_seq_detect_moore (
            .o_out  (o_out),
            .i_seq  (i_seq),
            .i_clk  (i_clk),
            .i_rstn (i_rstn)
    );

//---------------------------------------------
// Clock
//---------------------------------------------
   
    always #(500/`CLKFREQ) i_clk = ~i_clk;


//---------------------------------------------
// Tasks
//---------------------------------------------

    reg [8*16-1:0] taskState;

    task init;
        begin  
            taskState  = "Init";
            i_seq      = 0;
            i_clk      = 0;
            i_rstn     = 0;
        end
    endtask

    task resetNCycle;
        input [31:0] i;
        begin  
            taskState  = "Reset_On";
            #(i*1000/`CLKFREQ);
            taskState  = "Reset_Off";
            i_rstn     = 1;
        end
    endtask

//---------------------------------------------
// Test Stimulus
//---------------------------------------------
   
    integer i, j;
    initial begin
        init();
        resetNCycle(4);

        for(i=0; i<`SIMCYCLE; i++) begin
            i_seq   = $urandom;
            #(1000/`CLKFREQ);
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
            $dumpfile("FSM_tb.vcd");
            $dumpvars;
        end
    end

endmodule 
