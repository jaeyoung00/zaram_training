// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV_TOP_H_
#define _VRISCV_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscv_top__Syms;
class Vriscv_top_VerilatedVcd;


//----------

VL_MODULE(Vriscv_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rstn,0,0);
    VL_OUT8(o_riscv_dmem_wr_en,0,0);
    VL_OUT8(o_riscv_dmem_byte_sel,3,0);
    VL_OUT(o_riscv_imem_pc,31,0);
    VL_OUT(o_riscv_imem_instr,31,0);
    VL_OUT(o_riscv_dmem_addr,31,0);
    VL_OUT(o_riscv_dmem_wr_data,31,0);
    VL_OUT(o_riscv_dmem_rd_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ riscv_top__DOT__o_dp_ALUControlD;
        CData/*0:0*/ riscv_top__DOT__o_dp_ALUSrcD;
        CData/*3:0*/ riscv_top__DOT__o_dp_mem_byte_sel;
        CData/*1:0*/ riscv_top__DOT__o_MUX_selD;
        CData/*0:0*/ riscv_top__DOT__i_dp_WE3;
        CData/*4:0*/ riscv_top__DOT__i_RdW;
        CData/*1:0*/ riscv_top__DOT__MUX_selE;
        CData/*0:0*/ riscv_top__DOT__RegWriteE;
        CData/*0:0*/ riscv_top__DOT__ResultSrcE;
        CData/*0:0*/ riscv_top__DOT__MemWriteE;
        CData/*1:0*/ riscv_top__DOT__JumpE;
        CData/*0:0*/ riscv_top__DOT__BranchE;
        CData/*3:0*/ riscv_top__DOT__ALUContrlE;
        CData/*0:0*/ riscv_top__DOT__ALUSrcE;
        CData/*3:0*/ riscv_top__DOT__mem_byte_selE;
        CData/*4:0*/ riscv_top__DOT__Rs1E;
        CData/*4:0*/ riscv_top__DOT__Rs2E;
        CData/*4:0*/ riscv_top__DOT__RdE;
        CData/*2:0*/ riscv_top__DOT__funct3E;
        CData/*1:0*/ riscv_top__DOT__o_PCSrcE;
        CData/*1:0*/ riscv_top__DOT__ForWardAE;
        CData/*1:0*/ riscv_top__DOT__ForWardBE;
        CData/*1:0*/ riscv_top__DOT__MUX_selM;
        CData/*0:0*/ riscv_top__DOT__RegWriteM;
        CData/*0:0*/ riscv_top__DOT__ResultSrcM;
        CData/*0:0*/ riscv_top__DOT__MemWriteM;
        CData/*3:0*/ riscv_top__DOT__mem_byte_selM;
        CData/*4:0*/ riscv_top__DOT__RdM;
        CData/*3:0*/ riscv_top__DOT__o_mem_byte_sel;
        CData/*0:0*/ riscv_top__DOT__RegWriteW;
        CData/*0:0*/ riscv_top__DOT__ResultSrcW;
        CData/*4:0*/ riscv_top__DOT__RdW;
        CData/*0:0*/ riscv_top__DOT__StallF;
        CData/*0:0*/ riscv_top__DOT__StallD;
        CData/*0:0*/ riscv_top__DOT__FlushD;
        CData/*0:0*/ riscv_top__DOT__FlushE;
        CData/*1:0*/ riscv_top__DOT__ForwardAE;
        CData/*1:0*/ riscv_top__DOT__ForwardBE;
        CData/*2:0*/ riscv_top__DOT__mem_funct3;
        CData/*2:0*/ riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD;
        CData/*0:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch;
        CData/*3:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel;
        CData/*0:0*/ riscv_top__DOT__u_hazard_unit__DOT__lwStall;
        IData/*31:0*/ riscv_top__DOT__o_dp_imem_RD;
        IData/*31:0*/ riscv_top__DOT__PCTargetE;
        IData/*31:0*/ riscv_top__DOT__o_instrD;
        IData/*31:0*/ riscv_top__DOT__o_PCPlus4D;
        IData/*31:0*/ riscv_top__DOT__o_PCD;
        IData/*31:0*/ riscv_top__DOT__o_dp_ImmExtD;
        IData/*31:0*/ riscv_top__DOT__i_dp_dmem_WD3;
        IData/*31:0*/ riscv_top__DOT__RD1E;
        IData/*31:0*/ riscv_top__DOT__RD2E;
        IData/*31:0*/ riscv_top__DOT__PCE;
        IData/*31:0*/ riscv_top__DOT__ExtImmE;
        IData/*31:0*/ riscv_top__DOT__PCPlus4E;
        IData/*31:0*/ riscv_top__DOT__o_dp_ALU;
        IData/*31:0*/ riscv_top__DOT__o_dp_PC_Plus_immE;
        IData/*31:0*/ riscv_top__DOT__ALUResultM;
        IData/*31:0*/ riscv_top__DOT__WriteDataM;
        IData/*31:0*/ riscv_top__DOT__PC_Plus_immM;
        IData/*31:0*/ riscv_top__DOT__ExtImmM;
        IData/*31:0*/ riscv_top__DOT__PCPlus4M;
        IData/*31:0*/ riscv_top__DOT__o_dp_dmem_RD;
        IData/*31:0*/ riscv_top__DOT__o_dp_4to1muxM;
    };
    struct {
        IData/*31:0*/ riscv_top__DOT__o_dp_ResultW;
        IData/*31:0*/ riscv_top__DOT__ReadDataW;
        IData/*31:0*/ riscv_top__DOT__o_dp_4to1muxW;
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF;
        WData/*95:0*/ riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc[3];
        WData/*1023:0*/ riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF[32];
        WData/*255:0*/ riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[8];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE;
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE;
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_c_RD2E;
        WData/*95:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a[3];
        WData/*95:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b[3];
        WData/*127:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[4];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data;
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data;
        WData/*1023:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF[32];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__i;
        QData/*63:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_c;
        QData/*63:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP;
        QData/*63:0*/ riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd;
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__imem_arr[16384];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[3];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[32];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[3];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[3];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[2];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr[16384];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[4];
        IData/*31:0*/ riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[2];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vclklast__TOP__i_rstn;
    SData/*10:0*/ __Vtableidx4;
    IData/*31:0*/ __Vdly__riscv_top__DOT__o_instrD;
    CData/*0:0*/ __Vm_traceActivity[4];
    static CData/*1:0*/ __Vtable1_riscv_top__DOT__o_MUX_selD[128];
    static CData/*0:0*/ __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[128];
    static CData/*2:0*/ __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[128];
    static WData/*255:0*/ __Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2048][8];
    static CData/*0:0*/ __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[16];
    static QData/*63:0*/ __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vriscv_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vriscv_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vriscv_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vriscv_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vriscv_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vriscv_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vriscv_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vriscv_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
