// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top.h"
#include "Vriscv_top__Syms.h"

//==========

void Vriscv_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_top::eval\n"); );
    Vriscv_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/jylee/verilog_tutorials/RV32I/core/pipelined/riscv_top.v", 17, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_top::_eval_initial_loop(Vriscv_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/jylee/verilog_tutorials/RV32I/core/pipelined/riscv_top.v", 17, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vriscv_top::_sequent__TOP__2(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_sequent__TOP__2\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__riscv_top__DOT__o_PCD;
    IData/*31:0*/ __Vdly__riscv_top__DOT__o_PCPlus4D;
    // Body
    __Vdly__riscv_top__DOT__o_PCPlus4D = vlTOPp->riscv_top__DOT__o_PCPlus4D;
    __Vdly__riscv_top__DOT__o_PCD = vlTOPp->riscv_top__DOT__o_PCD;
    vlTOPp->__Vdly__riscv_top__DOT__o_instrD = vlTOPp->riscv_top__DOT__o_instrD;
    if (vlTOPp->i_rstn) {
        vlTOPp->riscv_top__DOT__mem_byte_selM = vlTOPp->riscv_top__DOT__o_dp_mem_byte_sel;
        vlTOPp->riscv_top__DOT__mem_byte_selE = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                                  ? 0U
                                                  : (IData)(vlTOPp->riscv_top__DOT__o_dp_mem_byte_sel));
        __Vdly__riscv_top__DOT__o_PCPlus4D = ((IData)(vlTOPp->riscv_top__DOT__FlushD)
                                               ? 0U
                                               : ((IData)(vlTOPp->riscv_top__DOT__StallD)
                                                   ? vlTOPp->riscv_top__DOT__o_PCPlus4D
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF)));
        __Vdly__riscv_top__DOT__o_PCD = ((IData)(vlTOPp->riscv_top__DOT__FlushD)
                                          ? 0U : ((IData)(vlTOPp->riscv_top__DOT__StallD)
                                                   ? vlTOPp->riscv_top__DOT__o_PCD
                                                   : vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF));
        vlTOPp->riscv_top__DOT__JumpE = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                          ? 0U : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->riscv_top__DOT__o_instrD))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->riscv_top__DOT__o_instrD))
                                                    ? 2U
                                                    : 0U)));
        vlTOPp->riscv_top__DOT__BranchE = (((~ (IData)(vlTOPp->riscv_top__DOT__FlushE)) 
                                            & (0x63U 
                                               == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD))) 
                                           & 1U);
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF 
            = ((IData)(vlTOPp->riscv_top__DOT__StallF)
                ? vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF
                : ((2U >= (IData)(vlTOPp->riscv_top__DOT__o_PCSrcE))
                    ? vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr
                   [vlTOPp->riscv_top__DOT__o_PCSrcE]
                    : 0U));
        vlTOPp->riscv_top__DOT__PCE = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                        ? 0U : vlTOPp->riscv_top__DOT__o_PCD);
        vlTOPp->__Vdly__riscv_top__DOT__o_instrD = 
            ((IData)(vlTOPp->riscv_top__DOT__FlushD)
              ? 0U : ((IData)(vlTOPp->riscv_top__DOT__StallD)
                       ? vlTOPp->riscv_top__DOT__o_instrD
                       : vlTOPp->riscv_top__DOT__o_dp_imem_RD));
        vlTOPp->riscv_top__DOT__mem_funct3 = vlTOPp->riscv_top__DOT__funct3E;
        vlTOPp->riscv_top__DOT__ALUContrlE = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                               ? 0U
                                               : (IData)(vlTOPp->riscv_top__DOT__o_dp_ALUControlD));
        vlTOPp->riscv_top__DOT__ALUSrcE = (((~ (IData)(vlTOPp->riscv_top__DOT__FlushE)) 
                                            & (IData)(vlTOPp->riscv_top__DOT__o_dp_ALUSrcD)) 
                                           & 1U);
        vlTOPp->riscv_top__DOT__Rs1E = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                         ? 0U : (0x1fU 
                                                 & (vlTOPp->riscv_top__DOT__o_instrD 
                                                    >> 0xfU)));
        vlTOPp->riscv_top__DOT__WriteDataM = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_c_RD2E;
        vlTOPp->riscv_top__DOT__RD1E = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                         ? 0U : vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers
                                        [(0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                                   >> 0xfU))]);
        vlTOPp->riscv_top__DOT__Rs2E = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                         ? 0U : (0x1fU 
                                                 & (vlTOPp->riscv_top__DOT__o_instrD 
                                                    >> 0x14U)));
        vlTOPp->riscv_top__DOT__RD2E = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                         ? 0U : vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers
                                        [(0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                                   >> 0x14U))]);
        vlTOPp->riscv_top__DOT__MUX_selM = vlTOPp->riscv_top__DOT__MUX_selE;
        vlTOPp->riscv_top__DOT__ResultSrcW = ((IData)(vlTOPp->riscv_top__DOT__ResultSrcM) 
                                              & 1U);
        vlTOPp->riscv_top__DOT__ReadDataW = vlTOPp->riscv_top__DOT__o_dp_dmem_RD;
        vlTOPp->riscv_top__DOT__o_dp_4to1muxW = vlTOPp->riscv_top__DOT__o_dp_4to1muxM;
        vlTOPp->riscv_top__DOT__PCPlus4M = vlTOPp->riscv_top__DOT__PCPlus4E;
        vlTOPp->riscv_top__DOT__PC_Plus_immM = vlTOPp->riscv_top__DOT__o_dp_PC_Plus_immE;
        vlTOPp->riscv_top__DOT__ExtImmM = vlTOPp->riscv_top__DOT__ExtImmE;
    } else {
        vlTOPp->riscv_top__DOT__mem_byte_selM = 0U;
        vlTOPp->riscv_top__DOT__mem_byte_selE = 0U;
        __Vdly__riscv_top__DOT__o_PCPlus4D = 0U;
        __Vdly__riscv_top__DOT__o_PCD = 0U;
        vlTOPp->riscv_top__DOT__JumpE = 0U;
        vlTOPp->riscv_top__DOT__BranchE = 0U;
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF = 0U;
        vlTOPp->riscv_top__DOT__PCE = 0U;
        vlTOPp->__Vdly__riscv_top__DOT__o_instrD = 0U;
        vlTOPp->riscv_top__DOT__mem_funct3 = 0U;
        vlTOPp->riscv_top__DOT__ALUContrlE = 0U;
        vlTOPp->riscv_top__DOT__ALUSrcE = 0U;
        vlTOPp->riscv_top__DOT__Rs1E = 0U;
        vlTOPp->riscv_top__DOT__WriteDataM = 0U;
        vlTOPp->riscv_top__DOT__RD1E = 0U;
        vlTOPp->riscv_top__DOT__Rs2E = 0U;
        vlTOPp->riscv_top__DOT__RD2E = 0U;
        vlTOPp->riscv_top__DOT__MUX_selM = 0U;
        vlTOPp->riscv_top__DOT__ResultSrcW = 0U;
        vlTOPp->riscv_top__DOT__ReadDataW = 0U;
        vlTOPp->riscv_top__DOT__o_dp_4to1muxW = 0U;
        vlTOPp->riscv_top__DOT__PCPlus4M = 0U;
        vlTOPp->riscv_top__DOT__PC_Plus_immM = 0U;
        vlTOPp->riscv_top__DOT__ExtImmM = 0U;
    }
    vlTOPp->riscv_top__DOT__o_PCD = __Vdly__riscv_top__DOT__o_PCD;
    vlTOPp->o_riscv_dmem_byte_sel = vlTOPp->riscv_top__DOT__mem_byte_selM;
    vlTOPp->o_riscv_imem_pc = vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF;
    vlTOPp->riscv_top__DOT__o_dp_imem_RD = vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__imem_arr
        [(0x3fffU & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF 
                     >> 2U))];
    vlTOPp->riscv_top__DOT__funct3E = ((IData)(vlTOPp->i_rstn)
                                        ? ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                            ? 0U : 
                                           (7U & (vlTOPp->riscv_top__DOT__o_instrD 
                                                  >> 0xcU)))
                                        : 0U);
    vlTOPp->__Vtableidx6 = vlTOPp->riscv_top__DOT__ALUContrlE;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP 
        = vlTOPp->__Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP
        [vlTOPp->__Vtableidx6];
    vlTOPp->o_riscv_dmem_wr_data = vlTOPp->riscv_top__DOT__WriteDataM;
    if (vlTOPp->i_rstn) {
        vlTOPp->riscv_top__DOT__MUX_selE = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                             ? 0U : (IData)(vlTOPp->riscv_top__DOT__o_MUX_selD));
        vlTOPp->riscv_top__DOT__ResultSrcM = ((IData)(vlTOPp->riscv_top__DOT__ResultSrcE) 
                                              & 1U);
    } else {
        vlTOPp->riscv_top__DOT__MUX_selE = 0U;
        vlTOPp->riscv_top__DOT__ResultSrcM = 0U;
    }
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd 
        = (((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_4to1muxW)) 
            << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__ReadDataW)));
    if (vlTOPp->i_rstn) {
        vlTOPp->riscv_top__DOT__PCPlus4E = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                             ? 0U : vlTOPp->riscv_top__DOT__o_PCPlus4D);
        vlTOPp->riscv_top__DOT__ExtImmE = ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                            ? 0U : vlTOPp->riscv_top__DOT__o_dp_ImmExtD);
    } else {
        vlTOPp->riscv_top__DOT__PCPlus4E = 0U;
        vlTOPp->riscv_top__DOT__ExtImmE = 0U;
    }
    vlTOPp->o_riscv_imem_instr = vlTOPp->riscv_top__DOT__o_dp_imem_RD;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__o_PCPlus4D = __Vdly__riscv_top__DOT__o_PCPlus4D;
    vlTOPp->riscv_top__DOT__ResultSrcE = ((IData)(vlTOPp->i_rstn) 
                                          & ((~ (IData)(vlTOPp->riscv_top__DOT__FlushE)) 
                                             & (3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instrD))));
    vlTOPp->riscv_top__DOT__o_dp_PC_Plus_immE = (vlTOPp->riscv_top__DOT__PCE 
                                                 + vlTOPp->riscv_top__DOT__ExtImmE);
}

VL_INLINE_OPT void Vriscv_top::_sequent__TOP__3(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_sequent__TOP__3\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers__v0;
    // Body
    __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers__v0 
        = (((IData)(vlTOPp->riscv_top__DOT__RegWriteW) 
            & (0U != (IData)(vlTOPp->riscv_top__DOT__RdW)))
            ? vlTOPp->riscv_top__DOT__o_dp_ResultW : 
           vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers
           [vlTOPp->riscv_top__DOT__RdW]);
    __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers__v0 
        = vlTOPp->riscv_top__DOT__RdW;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers__v0] 
        = __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers__v0;
}

VL_INLINE_OPT void Vriscv_top::_sequent__TOP__4(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_sequent__TOP__4\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    CData/*7:0*/ __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    CData/*0:0*/ __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    CData/*4:0*/ __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    CData/*7:0*/ __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    CData/*0:0*/ __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    CData/*4:0*/ __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    CData/*7:0*/ __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    CData/*0:0*/ __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    CData/*4:0*/ __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    CData/*7:0*/ __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    CData/*0:0*/ __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    CData/*0:0*/ __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    SData/*13:0*/ __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    SData/*13:0*/ __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    SData/*13:0*/ __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    SData/*13:0*/ __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    SData/*13:0*/ __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    IData/*31:0*/ __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    // Body
    if (vlTOPp->riscv_top__DOT__MemWriteM) {
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__i = 4U;
    }
    __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0 = 0U;
    __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1 = 0U;
    __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2 = 0U;
    __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3 = 0U;
    __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4 = 0U;
    if (vlTOPp->riscv_top__DOT__MemWriteM) {
        if ((1U & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel))) {
            __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0 
                = (0xffU & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data);
            __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0 = 1U;
            __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0 = 0U;
            __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0 
                = (0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                              >> 2U));
        }
        if ((2U & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel))) {
            __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1 
                = (0xffU & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data 
                            >> 8U));
            __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1 = 1U;
            __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1 = 8U;
            __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1 
                = (0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                              >> 2U));
        }
        if ((4U & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel))) {
            __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2 
                = (0xffU & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data 
                            >> 0x10U));
            __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2 = 1U;
            __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2 = 0x10U;
            __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2 
                = (0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                              >> 2U));
        }
        if ((8U & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel))) {
            __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3 
                = (0xffU & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data 
                            >> 0x18U));
            __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3 = 1U;
            __Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3 = 0x18U;
            __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3 
                = (0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                              >> 2U));
        }
    } else {
        __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4 
            = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
            [(0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                         >> 2U))];
        __Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4 = 1U;
        __Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4 
            = (0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                          >> 2U));
    }
    if (__Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0) {
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0))) 
                & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0]) 
               | ((IData)(__Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0) 
                  << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v0)));
    }
    if (__Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1) {
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1))) 
                & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1]) 
               | ((IData)(__Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1) 
                  << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v1)));
    }
    if (__Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2) {
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2))) 
                & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2]) 
               | ((IData)(__Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2) 
                  << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v2)));
    }
    if (__Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3) {
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3))) 
                & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3]) 
               | ((IData)(__Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3) 
                  << (IData)(__Vdlyvlsb__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v3)));
    }
    if (__Vdlyvset__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4) {
        vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4] 
            = __Vdlyvval__riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    }
}

VL_INLINE_OPT void Vriscv_top::_sequent__TOP__6(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_sequent__TOP__6\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->riscv_top__DOT__o_dp_ResultW = vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__ResultSrcW];
    vlTOPp->riscv_top__DOT__RegWriteW = ((IData)(vlTOPp->i_rstn) 
                                         & (IData)(vlTOPp->riscv_top__DOT__RegWriteM));
    if (vlTOPp->i_rstn) {
        vlTOPp->riscv_top__DOT__RdW = vlTOPp->riscv_top__DOT__RdM;
        vlTOPp->riscv_top__DOT__MemWriteM = ((IData)(vlTOPp->riscv_top__DOT__MemWriteE) 
                                             & 1U);
        vlTOPp->riscv_top__DOT__ALUResultM = vlTOPp->riscv_top__DOT__o_dp_ALU;
        vlTOPp->riscv_top__DOT__RegWriteM = ((IData)(vlTOPp->riscv_top__DOT__RegWriteE) 
                                             & 1U);
        vlTOPp->riscv_top__DOT__RdM = vlTOPp->riscv_top__DOT__RdE;
    } else {
        vlTOPp->riscv_top__DOT__RdW = 0U;
        vlTOPp->riscv_top__DOT__MemWriteM = 0U;
        vlTOPp->riscv_top__DOT__ALUResultM = 0U;
        vlTOPp->riscv_top__DOT__RegWriteM = 0U;
        vlTOPp->riscv_top__DOT__RdM = 0U;
    }
    vlTOPp->o_riscv_dmem_wr_en = vlTOPp->riscv_top__DOT__MemWriteM;
    vlTOPp->riscv_top__DOT__MemWriteE = ((IData)(vlTOPp->i_rstn) 
                                         & ((~ (IData)(vlTOPp->riscv_top__DOT__FlushE)) 
                                            & (0x23U 
                                               == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD))));
    vlTOPp->o_riscv_dmem_addr = vlTOPp->riscv_top__DOT__ALUResultM;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data 
        = ((0x1fU >= (0x18U & (vlTOPp->riscv_top__DOT__ALUResultM 
                               << 3U))) ? (vlTOPp->riscv_top__DOT__WriteDataM 
                                           << (0x18U 
                                               & (vlTOPp->riscv_top__DOT__ALUResultM 
                                                  << 3U)))
            : 0U);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel 
        = ((3U >= (3U & vlTOPp->riscv_top__DOT__ALUResultM))
            ? (0xfU & ((IData)(vlTOPp->riscv_top__DOT__mem_byte_selM) 
                       << (3U & vlTOPp->riscv_top__DOT__ALUResultM)))
            : 0U);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
        = ((0x1fU >= (0x18U & (vlTOPp->riscv_top__DOT__ALUResultM 
                               << 3U))) ? (vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                           [(0x3fffU 
                                             & (vlTOPp->riscv_top__DOT__ALUResultM 
                                                >> 2U))] 
                                           >> (0x18U 
                                               & (vlTOPp->riscv_top__DOT__ALUResultM 
                                                  << 3U)))
            : 0U);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[0U] 
        = vlTOPp->riscv_top__DOT__ALUResultM;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[1U] 
        = vlTOPp->riscv_top__DOT__ExtImmM;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[2U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__PCPlus4M)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__PC_Plus_immM))));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__PCPlus4M)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__PC_Plus_immM))) 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__o_dp_dmem_RD = ((4U & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                  ? 
                                                 (0xffffU 
                                                  & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)
                                                  : 
                                                 (0xffU 
                                                  & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)))
                                             : ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                  ? 0U
                                                  : vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
                                                                     >> 0xfU)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data))
                                                  : 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)))));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[0U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[1U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[2U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[3U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[3U];
    vlTOPp->riscv_top__DOT__RegWriteE = ((IData)(vlTOPp->i_rstn) 
                                         & ((~ (IData)(vlTOPp->riscv_top__DOT__FlushE)) 
                                            & (~ ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)) 
                                                  | (0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->riscv_top__DOT__o_instrD))))));
    vlTOPp->riscv_top__DOT__RdE = ((IData)(vlTOPp->i_rstn)
                                    ? ((IData)(vlTOPp->riscv_top__DOT__FlushE)
                                        ? 0U : (0x1fU 
                                                & (vlTOPp->riscv_top__DOT__o_instrD 
                                                   >> 7U)))
                                    : 0U);
    vlTOPp->riscv_top__DOT__ForwardAE = (((((IData)(vlTOPp->riscv_top__DOT__Rs1E) 
                                            == (IData)(vlTOPp->riscv_top__DOT__RdM)) 
                                           & (IData)(vlTOPp->riscv_top__DOT__RegWriteM)) 
                                          & (0U != (IData)(vlTOPp->riscv_top__DOT__Rs1E)))
                                          ? 2U : ((
                                                   (((IData)(vlTOPp->riscv_top__DOT__Rs1E) 
                                                     == (IData)(vlTOPp->riscv_top__DOT__RdW)) 
                                                    & (IData)(vlTOPp->riscv_top__DOT__RegWriteW)) 
                                                   & (0U 
                                                      != (IData)(vlTOPp->riscv_top__DOT__Rs1E)))
                                                   ? 1U
                                                   : 0U));
    vlTOPp->riscv_top__DOT__ForwardBE = (((((IData)(vlTOPp->riscv_top__DOT__Rs2E) 
                                            == (IData)(vlTOPp->riscv_top__DOT__RdM)) 
                                           & (IData)(vlTOPp->riscv_top__DOT__RegWriteM)) 
                                          & (0U != (IData)(vlTOPp->riscv_top__DOT__Rs2E)))
                                          ? 2U : ((
                                                   (((IData)(vlTOPp->riscv_top__DOT__Rs2E) 
                                                     == (IData)(vlTOPp->riscv_top__DOT__RdW)) 
                                                    & (IData)(vlTOPp->riscv_top__DOT__RegWriteW)) 
                                                   & (0U 
                                                      != (IData)(vlTOPp->riscv_top__DOT__Rs2E)))
                                                   ? 1U
                                                   : 0U));
    vlTOPp->o_riscv_dmem_rd_data = vlTOPp->riscv_top__DOT__o_dp_dmem_RD;
    vlTOPp->riscv_top__DOT__o_dp_4to1muxM = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__MUX_selM];
    vlTOPp->riscv_top__DOT__o_instrD = vlTOPp->__Vdly__riscv_top__DOT__o_instrD;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a[0U] 
        = vlTOPp->riscv_top__DOT__RD1E;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a[1U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_4to1muxM)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_ResultW))));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_4to1muxM)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_ResultW))) 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b[0U] 
        = vlTOPp->riscv_top__DOT__RD2E;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b[1U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_4to1muxM)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_ResultW))));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_4to1muxM)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_ResultW))) 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__o_dp_mem_byte_sel = (((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)) 
                                                  | (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->riscv_top__DOT__o_instrD)))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 0xfU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->riscv_top__DOT__o_instrD)
                                                     ? 3U
                                                     : 1U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 0xfU
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->riscv_top__DOT__o_instrD)
                                                     ? 3U
                                                     : 1U)))
                                                  : 0xfU);
    vlTOPp->riscv_top__DOT__o_dp_ALUControlD = (((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)) 
                                                 | (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->riscv_top__DOT__o_instrD)))
                                                 ? 
                                                ((0x4000U 
                                                  & vlTOPp->riscv_top__DOT__o_instrD)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 7U
                                                    : 6U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlTOPp->riscv_top__DOT__o_instrD)
                                                     ? 0xdU
                                                     : 5U)
                                                    : 4U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 1U
                                                    : 
                                                   (((vlTOPp->riscv_top__DOT__o_instrD 
                                                      >> 0x1eU) 
                                                     & (0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->riscv_top__DOT__o_instrD)))
                                                     ? 8U
                                                     : 0U))))
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((0x2000U 
                                                    & vlTOPp->riscv_top__DOT__o_instrD)
                                                    ? 0xfU
                                                    : 8U))
                                                  : 0U));
    vlTOPp->__Vtableidx1 = (0x7fU & vlTOPp->riscv_top__DOT__o_instrD);
    vlTOPp->riscv_top__DOT__o_MUX_selD = vlTOPp->__Vtable1_riscv_top__DOT__o_MUX_selD
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (0x7fU & vlTOPp->riscv_top__DOT__o_instrD);
    vlTOPp->riscv_top__DOT__o_dp_ALUSrcD = vlTOPp->__Vtable2_riscv_top__DOT__o_dp_ALUSrcD
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx4 = ((0x400U & (vlTOPp->riscv_top__DOT__o_instrD 
                                       >> 0x14U)) | 
                            ((0x380U & (vlTOPp->riscv_top__DOT__o_instrD 
                                        >> 5U)) | (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[0U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][0U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][1U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][2U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[3U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][3U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[4U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][4U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[5U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][5U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[6U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][6U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[7U] 
        = vlTOPp->__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR
        [vlTOPp->__Vtableidx4][7U];
    vlTOPp->__Vtableidx3 = (0x7fU & vlTOPp->riscv_top__DOT__o_instrD);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD 
        = vlTOPp->__Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_top__DOT__u_hazard_unit__DOT__lwStall 
        = ((((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                       >> 0xfU)) == (IData)(vlTOPp->riscv_top__DOT__RdE)) 
            | ((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                         >> 0x14U)) == (IData)(vlTOPp->riscv_top__DOT__RdE))) 
           & (~ (IData)(vlTOPp->riscv_top__DOT__ResultSrcE)));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a[0U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a[1U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a[2U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b[0U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b[1U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b[2U];
    vlTOPp->riscv_top__DOT__o_dp_ImmExtD = ((4U & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlTOPp->riscv_top__DOT__o_instrD)
                                                  : 
                                                 ((0xfff00000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__o_instrD 
                                                                     >> 0x1fU)))) 
                                                      << 0x14U)) 
                                                  | ((0xff000U 
                                                      & vlTOPp->riscv_top__DOT__o_instrD) 
                                                     | ((0x800U 
                                                         & (vlTOPp->riscv_top__DOT__o_instrD 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlTOPp->riscv_top__DOT__o_instrD 
                                                              >> 0x14U)))))))
                                             : ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD))
                                                  ? 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__o_instrD 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & (vlTOPp->riscv_top__DOT__o_instrD 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlTOPp->riscv_top__DOT__o_instrD 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlTOPp->riscv_top__DOT__o_instrD 
                                                              >> 7U)))))
                                                  : 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__o_instrD 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->riscv_top__DOT__o_instrD 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->riscv_top__DOT__o_instrD 
                                                           >> 7U)))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD))
                                                  ? 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__o_instrD 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->riscv_top__DOT__o_instrD 
                                                        >> 0x14U)))
                                                  : 0U)));
    vlTOPp->riscv_top__DOT__StallF = vlTOPp->riscv_top__DOT__u_hazard_unit__DOT__lwStall;
    vlTOPp->riscv_top__DOT__StallD = vlTOPp->riscv_top__DOT__u_hazard_unit__DOT__lwStall;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
        = ((2U >= (IData)(vlTOPp->riscv_top__DOT__ForwardAE))
            ? vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr
           [vlTOPp->riscv_top__DOT__ForwardAE] : 0U);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_c_RD2E 
        = ((2U >= (IData)(vlTOPp->riscv_top__DOT__ForwardBE))
            ? vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr
           [vlTOPp->riscv_top__DOT__ForwardBE] : 0U);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_c 
        = (((QData)((IData)(vlTOPp->riscv_top__DOT__ExtImmE)) 
            << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_c_RD2E)));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_c);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_c 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__ALUSrcE];
    vlTOPp->riscv_top__DOT__o_dp_ALU = ((8U & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                         ? ((4U & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE, 
                                                                (0x1fU 
                                                                 & vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE))
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                  ? 0U
                                                  : 
                                                 (vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                  - vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE))))
                                         : ((4U & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                  ? 
                                                 (vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                  & vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE)
                                                  : 
                                                 (vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                  | vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                  ? 
                                                 (vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                  >> 
                                                  (0x1fU 
                                                   & vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE))
                                                  : 
                                                 (vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                  ^ vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE)))
                                             : ((2U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                  ? 
                                                 ((vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                   < vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (VL_LTS_III(1,32,32, vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE, vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE)
                                                   ? 1U
                                                   : 0U))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ALUContrlE))
                                                  ? 
                                                 (vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE))
                                                  : 
                                                 (vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE 
                                                  + vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE)))));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc[0U] 
        = ((IData)(4U) + vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc[1U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_ALU)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_PC_Plus_immE))));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_ALU)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_PC_Plus_immE))) 
                   >> 0x20U));
    vlTOPp->__Vtableidx5 = (((0U == vlTOPp->riscv_top__DOT__o_dp_ALU) 
                             << 3U) | (IData)(vlTOPp->riscv_top__DOT__funct3E));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch 
        = vlTOPp->__Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch
        [vlTOPp->__Vtableidx5];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc[0U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc[1U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc[2U];
    vlTOPp->riscv_top__DOT__o_PCSrcE = (((IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch) 
                                         & (IData)(vlTOPp->riscv_top__DOT__BranchE))
                                         ? 1U : ((1U 
                                                  == (IData)(vlTOPp->riscv_top__DOT__JumpE))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->riscv_top__DOT__JumpE))
                                                   ? 2U
                                                   : 0U)));
    vlTOPp->riscv_top__DOT__FlushD = (0U != (IData)(vlTOPp->riscv_top__DOT__o_PCSrcE));
    vlTOPp->riscv_top__DOT__FlushE = (0U != (IData)(vlTOPp->riscv_top__DOT__o_PCSrcE));
}

void Vriscv_top::_eval(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_eval\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk))) 
         | ((~ (IData)(vlTOPp->i_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__i_rstn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlTOPp->i_clk)) & (IData)(vlTOPp->__Vclklast__TOP__i_clk))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk))) 
         | ((~ (IData)(vlTOPp->i_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__i_rstn)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_rstn = vlTOPp->i_rstn;
}

VL_INLINE_OPT QData Vriscv_top::_change_request(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_change_request\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vriscv_top::_change_request_1(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_change_request_1\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((i_rstn & 0xfeU))) {
        Verilated::overWidthError("i_rstn");}
}
#endif  // VL_DEBUG
