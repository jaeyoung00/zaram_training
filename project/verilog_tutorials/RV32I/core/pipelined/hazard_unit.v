`ifdef 		NOINC	
`include 	"../common/riscv_configs.v"
`endif 

module hazard_unit
(
	output reg	[1:0]		StallF,
	output reg	[1:0]		StallD,
	output reg	[1:0]		FlushD,
	output reg	[1:0]		FlushE,
	output reg [1:0]	ForwardAE,
	output reg [1:0]	ForwardBE,
	input	   [4:0]	Rs1D,
	input	   [4:0]	Rs2D,
	input	   [4:0]	RdE,
	input	   [4:0]	Rs1E,
	input	   [4:0]	Rs2E,
	input	   [4:0]	RdM,
	input				RegWriteM,
	input	   [4:0]	RdW,
	input				RegWriteW,
	input		[1:0]	ResultSrcE,
	input		[1:0]		PCSrcE
);

	// Data Forwarding 
	always @(*) begin 
		if		((Rs1E == RdM) & RegWriteM & (Rs1E != 0))
			ForwardAE = 2'b10;		 				 // SrcAE = ALUResultM
		else if	((Rs1E == RdW) & RegWriteW & (Rs1E != 0))
			ForwardAE = 2'b01;						 // SrcBE = ResultW
		else 
			ForwardAE = 2'b00;
	end

	// Data Forwarding 
	always @(*) begin 
		if		((Rs2E == RdM) & RegWriteM & (Rs2E != 0))
			ForwardBE = 2'b10;		 				 // SrcAE = ALUResultM
		else if	((Rs2E == RdW) & RegWriteW & (Rs2E != 0))
			ForwardBE = 2'b01;						 // SrcBE = ResultW
		else 
			ForwardBE = 2'b00;
	end
	
	// lw stall
	wire [1:0]	lwStall;
 	assign	lwStall = (((Rs1D == RdE) || (Rs2D == RdE)) & ResultSrcE);
	always @(*) begin	
		if (lwStall == 2'b1) begin  
			StallF = 2'b1;
			StallD = 2'b1;
			FlushE = 2'b1;
		end 
		else begin
			StallF = 2'b0;
			StallD = 2'b0;
			FlushE = 2'b0;
		end
	end 

	// Branch Flush
	always @(*) begin 
		if(PCSrcE == 2'b1)
			FlushD = 2'b1;   // CLR o
	end 

	always @(*) begin 
		if((PCSrcE | lwStall) == 2'b1)
			FlushE = 2'b1;   // CLR o
	end 

endmodule 
