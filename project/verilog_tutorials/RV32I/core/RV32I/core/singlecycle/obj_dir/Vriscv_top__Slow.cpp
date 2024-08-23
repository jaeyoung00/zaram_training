// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top.h"
#include "Vriscv_top__Syms.h"

//==========
CData/*2:0*/ Vriscv_top::__Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[128];
CData/*1:0*/ Vriscv_top::__Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[128];
CData/*0:0*/ Vriscv_top::__Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[128];

VL_CTOR_IMP(Vriscv_top) {
    Vriscv_top__Syms* __restrict vlSymsp = __VlSymsp = new Vriscv_top__Syms(this, name());
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_top::__Vconfigure(Vriscv_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vriscv_top::~Vriscv_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vriscv_top::_initial__TOP__3(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_initial__TOP__3\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_regfile__DOT__registers[0U] = 0U;
}

void Vriscv_top::_settle__TOP__4(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_settle__TOP__4\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_riscv_imem_instr = vlTOPp->riscv_top__DOT__u_riscv_imem__DOT__imem_arr
        [(0xffU & (vlTOPp->o_riscv_imem_pc >> 2U))];
    vlTOPp->o_riscv_dmem_wr_en = (0x23U == (0x7fU & vlTOPp->o_riscv_imem_instr));
    vlTOPp->__Vtableidx2 = (0x7fU & vlTOPp->o_riscv_imem_instr);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_rd 
        = vlTOPp->__Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd
        [vlTOPp->__Vtableidx2];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl 
        = (((0x33U == (0x7fU & vlTOPp->o_riscv_imem_instr)) 
            | (0x13U == (0x7fU & vlTOPp->o_riscv_imem_instr)))
            ? ((0x4000U & vlTOPp->o_riscv_imem_instr)
                ? ((0x2000U & vlTOPp->o_riscv_imem_instr)
                    ? ((0x1000U & vlTOPp->o_riscv_imem_instr)
                        ? 7U : 6U) : ((0x1000U & vlTOPp->o_riscv_imem_instr)
                                       ? ((0x40000000U 
                                           & vlTOPp->o_riscv_imem_instr)
                                           ? 0xdU : 5U)
                                       : 4U)) : ((0x2000U 
                                                  & vlTOPp->o_riscv_imem_instr)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlTOPp->o_riscv_imem_instr)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlTOPp->o_riscv_imem_instr)
                                                   ? 1U
                                                   : 
                                                  (((vlTOPp->o_riscv_imem_instr 
                                                     >> 0x1eU) 
                                                    & (0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->o_riscv_imem_instr)))
                                                    ? 8U
                                                    : 0U))))
            : ((0x63U == (0x7fU & vlTOPp->o_riscv_imem_instr))
                ? ((0x4000U & vlTOPp->o_riscv_imem_instr)
                    ? ((0x2000U & vlTOPp->o_riscv_imem_instr)
                        ? 3U : 2U) : ((0x2000U & vlTOPp->o_riscv_imem_instr)
                                       ? 0xfU : 8U))
                : 0U));
    vlTOPp->__Vtableidx3 = (0x7fU & vlTOPp->o_riscv_imem_instr);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b 
        = vlTOPp->__Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_a 
        = (((QData)((IData)(vlTOPp->o_riscv_imem_pc)) 
            << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_regfile__DOT__registers
                                        [(0x1fU & (vlTOPp->o_riscv_imem_instr 
                                                   >> 0xfU))])));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__regfile_rs2_data 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_regfile__DOT__registers
        [(0x1fU & (vlTOPp->o_riscv_imem_instr >> 0x14U))];
    vlTOPp->__Vtableidx1 = (0x7fU & vlTOPp->o_riscv_imem_instr);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_imm 
        = vlTOPp->__Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm
        [vlTOPp->__Vtableidx1];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_a__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_a);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_a__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_a 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate 
        = ((4U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_imm))
            ? ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_imm))
                ? 0U : ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_imm))
                         ? (0xfffff000U & vlTOPp->o_riscv_imem_instr)
                         : ((0xfff00000U & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->o_riscv_imem_instr 
                                                           >> 0x1fU)))) 
                                            << 0x14U)) 
                            | ((0xff000U & vlTOPp->o_riscv_imem_instr) 
                               | ((0x800U & (vlTOPp->o_riscv_imem_instr 
                                             >> 9U)) 
                                  | (0x7feU & (vlTOPp->o_riscv_imem_instr 
                                               >> 0x14U)))))))
            : ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_imm))
                ? ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_imm))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->o_riscv_imem_instr 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlTOPp->o_riscv_imem_instr 
                                   << 4U)) | ((0x7e0U 
                                               & (vlTOPp->o_riscv_imem_instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->o_riscv_imem_instr 
                                                    >> 7U)))))
                    : ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->o_riscv_imem_instr 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0xfe0U & (vlTOPp->o_riscv_imem_instr 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->o_riscv_imem_instr 
                                                    >> 7U)))))
                : ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_imm))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->o_riscv_imem_instr 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlTOPp->o_riscv_imem_instr 
                                  >> 0x14U))) : 0U)));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_a__DOT__mux_input_arr
        [(0x17U == (0x7fU & vlTOPp->o_riscv_imem_instr))];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_b 
        = (((QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate)) 
            << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__regfile_rs2_data)));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_b);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_b 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result 
        = ((8U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
            ? ((4U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                ? ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                    ? 0U : ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                             ? VL_SHIFTRS_III(32,32,5, vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a, 
                                              (0x1fU 
                                               & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b))
                             : 0U)) : ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                                        ? 0U : ((1U 
                                                 & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                                                 ? 0U
                                                 : 
                                                (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                                                 - vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b))))
            : ((4U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                ? ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                    ? ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                        ? (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                           & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b)
                        : (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                           | vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b))
                    : ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                        ? (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                           >> (0x1fU & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b))
                        : (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                           ^ vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b)))
                : ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                    ? ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                        ? ((vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                            < vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b)
                            ? 1U : 0U) : (VL_LTS_III(1,32,32, vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a, vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl))
                        ? (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                           << (0x1fU & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b))
                        : (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a 
                           + vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b)))));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__src_pc 
        = ((0x63U == (0x7fU & vlTOPp->o_riscv_imem_instr))
            ? (((0x63U == (0x7fU & vlTOPp->o_riscv_imem_instr)) 
                & ((0x4000U & vlTOPp->o_riscv_imem_instr)
                    ? ((0x2000U & vlTOPp->o_riscv_imem_instr)
                        ? ((0x1000U & vlTOPp->o_riscv_imem_instr)
                            ? (0U == vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)
                            : (0U != vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result))
                        : ((0x1000U & vlTOPp->o_riscv_imem_instr)
                            ? (0U == vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)
                            : (0U != vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)))
                    : ((~ (vlTOPp->o_riscv_imem_instr 
                           >> 0xdU)) & ((0x1000U & vlTOPp->o_riscv_imem_instr)
                                         ? (0U != vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)
                                         : (0U == vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)))))
                ? 1U : 0U) : ((0x6fU == (0x7fU & vlTOPp->o_riscv_imem_instr))
                               ? 1U : ((0x67U == (0x7fU 
                                                  & vlTOPp->o_riscv_imem_instr))
                                        ? 2U : 0U)));
    vlTOPp->o_riscv_dmem_wr_data = ((0x1fU >= (0x18U 
                                               & (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result 
                                                  << 3U)))
                                     ? (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__regfile_rs2_data 
                                        << (0x18U & 
                                            (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result 
                                             << 3U)))
                                     : 0U);
    vlTOPp->o_riscv_dmem_byte_sel = ((3U >= (3U & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result))
                                      ? (0xfU & (((
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->o_riscv_imem_instr)) 
                                                   | (0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->o_riscv_imem_instr)))
                                                   ? 
                                                  ((0x4000U 
                                                    & vlTOPp->o_riscv_imem_instr)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlTOPp->o_riscv_imem_instr)
                                                     ? 0xfU
                                                     : 
                                                    ((0x1000U 
                                                      & vlTOPp->o_riscv_imem_instr)
                                                      ? 3U
                                                      : 1U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlTOPp->o_riscv_imem_instr)
                                                     ? 0xfU
                                                     : 
                                                    ((0x1000U 
                                                      & vlTOPp->o_riscv_imem_instr)
                                                      ? 3U
                                                      : 1U)))
                                                   : 0xfU) 
                                                 << 
                                                 (3U 
                                                  & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)))
                                      : 0U);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc[0U] 
        = ((IData)(4U) + vlTOPp->o_riscv_imem_pc);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc[1U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)) 
                    << 0x20U) | (QData)((IData)((vlTOPp->o_riscv_imem_pc 
                                                 + vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate)))));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result)) 
                     << 0x20U) | (QData)((IData)((vlTOPp->o_riscv_imem_pc 
                                                  + vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate)))) 
                   >> 0x20U));
    vlTOPp->o_riscv_dmem_addr = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result;
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_pc__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc[0U];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_pc__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc[1U];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_pc__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc[2U];
    vlTOPp->o_riscv_dmem_rd_data = vlTOPp->riscv_top__DOT__u_riscv_dmem__DOT__dmem_arr
        [(0xffU & (vlTOPp->o_riscv_dmem_addr >> 2U))];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
        = ((0x1fU >= (0x18U & (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result 
                               << 3U))) ? (vlTOPp->o_riscv_dmem_rd_data 
                                           >> (0x18U 
                                               & (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result 
                                                  << 3U)))
            : 0U);
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[0U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result;
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[1U] 
        = ((0x4000U & vlTOPp->o_riscv_imem_instr) ? 
           ((0x2000U & vlTOPp->o_riscv_imem_instr) ? 0U
             : ((0x1000U & vlTOPp->o_riscv_imem_instr)
                 ? (0xffffU & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)
                 : (0xffU & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)))
            : ((0x2000U & vlTOPp->o_riscv_imem_instr)
                ? ((0x1000U & vlTOPp->o_riscv_imem_instr)
                    ? 0U : vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)
                : ((0x1000U & vlTOPp->o_riscv_imem_instr)
                    ? ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data))
                    : ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
                                                      >> 7U)))) 
                                       << 8U)) | (0xffU 
                                                  & vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)))));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[2U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate)) 
                    << 0x20U) | (QData)((IData)(((IData)(4U) 
                                                 + vlTOPp->o_riscv_imem_pc)))));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate)) 
                     << 0x20U) | (QData)((IData)(((IData)(4U) 
                                                  + vlTOPp->o_riscv_imem_pc)))) 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_regfile_rd_data__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[0U];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_regfile_rd_data__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[1U];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_regfile_rd_data__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[2U];
    vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_regfile_rd_data__DOT__mux_input_arr[3U] 
        = vlTOPp->riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd[3U];
}

void Vriscv_top::_eval_initial(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_eval_initial\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_rstn = vlTOPp->i_rstn;
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void Vriscv_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::final\n"); );
    // Variables
    Vriscv_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vriscv_top::_eval_settle(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_eval_settle\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vriscv_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_ctor_var_reset\n"); );
    // Body
    o_riscv_imem_pc = VL_RAND_RESET_I(32);
    o_riscv_imem_instr = VL_RAND_RESET_I(32);
    o_riscv_dmem_addr = VL_RAND_RESET_I(32);
    o_riscv_dmem_wr_en = VL_RAND_RESET_I(1);
    o_riscv_dmem_byte_sel = VL_RAND_RESET_I(4);
    o_riscv_dmem_wr_data = VL_RAND_RESET_I(32);
    o_riscv_dmem_rd_data = VL_RAND_RESET_I(32);
    i_clk = VL_RAND_RESET_I(1);
    i_rstn = VL_RAND_RESET_I(1);
    riscv_top__DOT__u_riscv_cpu__DOT__src_imm = VL_RAND_RESET_I(3);
    riscv_top__DOT__u_riscv_cpu__DOT__src_pc = VL_RAND_RESET_I(2);
    riscv_top__DOT__u_riscv_cpu__DOT__src_rd = VL_RAND_RESET_I(2);
    riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b = VL_RAND_RESET_I(1);
    riscv_top__DOT__u_riscv_cpu__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__regfile_rs2_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__immediate = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_a = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_b = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__alu_result = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_pc);
    VL_RAND_RESET_W(128, riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_rd);
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_a = VL_RAND_RESET_Q(64);
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__mux_concat_alu_b = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_pc__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_a__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_datapath__DOT__u_riscv_mux_regfile_rd_data__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    riscv_top__DOT__u_riscv_cpu__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            riscv_top__DOT__u_riscv_imem__DOT__imem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            riscv_top__DOT__u_riscv_dmem__DOT__dmem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[0] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[1] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[2] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[3] = 1U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[4] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[5] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[6] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[7] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[8] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[9] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[10] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[11] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[12] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[13] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[14] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[15] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[16] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[17] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[18] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[19] = 1U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[20] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[21] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[22] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[23] = 5U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[24] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[25] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[26] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[27] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[28] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[29] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[30] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[31] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[32] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[33] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[34] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[35] = 2U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[36] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[37] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[38] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[39] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[40] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[41] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[42] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[43] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[44] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[45] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[46] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[47] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[48] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[49] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[50] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[51] = 0U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[52] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[53] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[54] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[55] = 5U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[56] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[57] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[58] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[59] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[60] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[61] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[62] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[63] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[64] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[65] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[66] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[67] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[68] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[69] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[70] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[71] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[72] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[73] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[74] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[75] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[76] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[77] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[78] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[79] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[80] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[81] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[82] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[83] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[84] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[85] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[86] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[87] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[88] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[89] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[90] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[91] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[92] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[93] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[94] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[95] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[96] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[97] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[98] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[99] = 3U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[100] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[101] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[102] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[103] = 1U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[104] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[105] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[106] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[107] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[108] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[109] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[110] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[111] = 4U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[112] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[113] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[114] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[115] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[116] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[117] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[118] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[119] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[120] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[121] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[122] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[123] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[124] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[125] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[126] = 7U;
    __Vtable1_riscv_top__DOT__u_riscv_cpu__DOT__src_imm[127] = 7U;
    __Vtableidx2 = 0;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[0] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[1] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[2] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[3] = 1U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[4] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[5] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[6] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[7] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[8] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[9] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[10] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[11] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[12] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[13] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[14] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[15] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[16] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[17] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[18] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[19] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[20] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[21] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[22] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[23] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[24] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[25] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[26] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[27] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[28] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[29] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[30] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[31] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[32] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[33] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[34] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[35] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[36] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[37] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[38] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[39] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[40] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[41] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[42] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[43] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[44] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[45] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[46] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[47] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[48] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[49] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[50] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[51] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[52] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[53] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[54] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[55] = 3U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[56] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[57] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[58] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[59] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[60] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[61] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[62] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[63] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[64] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[65] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[66] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[67] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[68] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[69] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[70] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[71] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[72] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[73] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[74] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[75] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[76] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[77] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[78] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[79] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[80] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[81] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[82] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[83] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[84] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[85] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[86] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[87] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[88] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[89] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[90] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[91] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[92] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[93] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[94] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[95] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[96] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[97] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[98] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[99] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[100] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[101] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[102] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[103] = 2U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[104] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[105] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[106] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[107] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[108] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[109] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[110] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[111] = 2U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[112] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[113] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[114] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[115] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[116] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[117] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[118] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[119] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[120] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[121] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[122] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[123] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[124] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[125] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[126] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_cpu__DOT__src_rd[127] = 0U;
    __Vtableidx3 = 0;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[0] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[1] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[2] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[3] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[4] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[5] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[6] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[7] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[8] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[9] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[10] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[11] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[12] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[13] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[14] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[15] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[16] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[17] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[18] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[19] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[20] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[21] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[22] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[23] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[24] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[25] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[26] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[27] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[28] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[29] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[30] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[31] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[32] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[33] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[34] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[35] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[36] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[37] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[38] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[39] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[40] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[41] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[42] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[43] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[44] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[45] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[46] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[47] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[48] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[49] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[50] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[51] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[52] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[53] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[54] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[55] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[56] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[57] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[58] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[59] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[60] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[61] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[62] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[63] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[64] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[65] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[66] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[67] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[68] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[69] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[70] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[71] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[72] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[73] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[74] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[75] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[76] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[77] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[78] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[79] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[80] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[81] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[82] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[83] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[84] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[85] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[86] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[87] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[88] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[89] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[90] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[91] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[92] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[93] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[94] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[95] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[96] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[97] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[98] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[99] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[100] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[101] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[102] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[103] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[104] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[105] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[106] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[107] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[108] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[109] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[110] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[111] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[112] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[113] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[114] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[115] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[116] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[117] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[118] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[119] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[120] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[121] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[122] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[123] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[124] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[125] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[126] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_cpu__DOT__src_alu_b[127] = 0U;
}
