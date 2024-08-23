// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV_TOP_H_
#define _VRISCV_TOP_H_  // guard

#include "verilated.h"

//==========

class Vriscv_top__Syms;

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
    CData/*2:0*/ riscv_top__DOT__u_riscv_cpu__DOT__src_imm;
    CData/*1:0*/ riscv_top__DOT__u_riscv_cpu__DOT__src_pc;
    CData/*1:0*/ riscv_top__DOT__u_riscv_cpu__DOT__src_rd;
    CData/*0:0*/ riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b;
    CData/*3:0*/ riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl;
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__regfile_rs2_data;
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate;
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a;
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b;
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result;
    WData/*95:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc[3];
    WData/*127:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[4];
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data;
    QData/*63:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_a;
    QData/*63:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_b;
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_pc__DOT__mux_input_arr[3];
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_regfile__DOT__registers[32];
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_a__DOT__mux_input_arr[2];
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr[2];
    IData/*31:0*/ riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_regfile_rd_data__DOT__mux_input_arr[4];
    IData/*31:0*/ riscv_top__DOT__u_riscv_imem__DOT__imem_arr[256];
    IData/*31:0*/ riscv_top__DOT__u_riscv_dmem__DOT__dmem_arr[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vclklast__TOP__i_rstn;
    static CData/*2:0*/ __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[128];
    static CData/*1:0*/ __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[128];
    static CData/*0:0*/ __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[128];
    
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
    static void _initial__TOP__3(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
