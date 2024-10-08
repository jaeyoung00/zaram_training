// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top.h"
#include "Vriscv_top__Syms.h"

//==========
CData/*1:0*/ Vriscv_top::__Vtable1_riscv_top__DOT__o_MUX_selD[128];
CData/*0:0*/ Vriscv_top::__Vtable2_riscv_top__DOT__o_dp_ALUSrcD[128];
CData/*2:0*/ Vriscv_top::__Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[128];
WData/*255:0*/ Vriscv_top::__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2048][8];
CData/*0:0*/ Vriscv_top::__Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[16];
QData/*63:0*/ Vriscv_top::__Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[16];

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

void Vriscv_top::_initial__TOP__1(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_initial__TOP__1\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    // Body
    __Vtemp1[0U] = 0x663d2573U;
    __Vtemp1[1U] = 0x745f6d69U;
    __Vtemp1[2U] = 0x746578U;
    (void)VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(3, __Vtemp1),
                               vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF);VL_READMEM_N(true
                                                                                , 32
                                                                                , 16384
                                                                                , 0
                                                                                , 
                                                                                VL_CVT_PACK_STR_NW(32, vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF)
                                                                                , vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__imem_arr
                                                                                , 0
                                                                                , ~0ULL);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[0U] = 0U;
    __Vtemp2[0U] = 0x663d2573U;
    __Vtemp2[1U] = 0x615f6d69U;
    __Vtemp2[2U] = 0x646174U;
    (void)VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(3, __Vtemp2),
                               vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF);VL_READMEM_N(true
                                                                                , 32
                                                                                , 16384
                                                                                , 0
                                                                                , 
                                                                                VL_CVT_PACK_STR_NW(32, vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF)
                                                                                , vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                                                                , 0
                                                                                , ~0ULL);
}

void Vriscv_top::_settle__TOP__5(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_settle__TOP__5\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_riscv_imem_pc = vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF;
    vlTOPp->o_riscv_dmem_byte_sel = vlTOPp->riscv_top__DOT__mem_byte_selM;
    vlTOPp->o_riscv_dmem_wr_data = vlTOPp->riscv_top__DOT__WriteDataM;
    vlTOPp->__Vtableidx6 = vlTOPp->riscv_top__DOT__ALUContrlE;
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP 
        = vlTOPp->__Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP
        [vlTOPp->__Vtableidx6];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd 
        = (((QData)((IData)(vlTOPp->riscv_top__DOT__o_dp_4to1muxW)) 
            << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__ReadDataW)));
    vlTOPp->o_riscv_dmem_addr = vlTOPp->riscv_top__DOT__ALUResultM;
    vlTOPp->o_riscv_dmem_wr_en = vlTOPp->riscv_top__DOT__MemWriteM;
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
    vlTOPp->riscv_top__DOT__o_dp_PC_Plus_immE = (vlTOPp->riscv_top__DOT__PCE 
                                                 + vlTOPp->riscv_top__DOT__ExtImmE);
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
    vlTOPp->riscv_top__DOT__o_dp_imem_RD = vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__imem_arr
        [(0x3fffU & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF 
                     >> 2U))];
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
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd);
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[0U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[1U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[2U];
    vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[3U] 
        = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1[3U];
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
    vlTOPp->o_riscv_imem_instr = vlTOPp->riscv_top__DOT__o_dp_imem_RD;
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
    vlTOPp->riscv_top__DOT__o_dp_ResultW = vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__ResultSrcW];
    vlTOPp->riscv_top__DOT__o_dp_4to1muxM = vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__MUX_selM];
    vlTOPp->o_riscv_dmem_rd_data = vlTOPp->riscv_top__DOT__o_dp_dmem_RD;
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

void Vriscv_top::_eval_initial(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_eval_initial\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_rstn = vlTOPp->i_rstn;
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
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
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
    riscv_top__DOT__o_dp_imem_RD = VL_RAND_RESET_I(32);
    riscv_top__DOT__PCTargetE = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_instrD = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_PCPlus4D = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_PCD = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_dp_ALUControlD = VL_RAND_RESET_I(4);
    riscv_top__DOT__o_dp_ALUSrcD = VL_RAND_RESET_I(1);
    riscv_top__DOT__o_dp_mem_byte_sel = VL_RAND_RESET_I(4);
    riscv_top__DOT__o_MUX_selD = VL_RAND_RESET_I(2);
    riscv_top__DOT__o_dp_ImmExtD = VL_RAND_RESET_I(32);
    riscv_top__DOT__i_dp_dmem_WD3 = VL_RAND_RESET_I(32);
    riscv_top__DOT__i_dp_WE3 = VL_RAND_RESET_I(1);
    riscv_top__DOT__i_RdW = VL_RAND_RESET_I(5);
    riscv_top__DOT__MUX_selE = VL_RAND_RESET_I(2);
    riscv_top__DOT__RegWriteE = VL_RAND_RESET_I(1);
    riscv_top__DOT__ResultSrcE = VL_RAND_RESET_I(1);
    riscv_top__DOT__MemWriteE = VL_RAND_RESET_I(1);
    riscv_top__DOT__JumpE = VL_RAND_RESET_I(2);
    riscv_top__DOT__BranchE = VL_RAND_RESET_I(1);
    riscv_top__DOT__ALUContrlE = VL_RAND_RESET_I(4);
    riscv_top__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    riscv_top__DOT__mem_byte_selE = VL_RAND_RESET_I(4);
    riscv_top__DOT__RD1E = VL_RAND_RESET_I(32);
    riscv_top__DOT__RD2E = VL_RAND_RESET_I(32);
    riscv_top__DOT__PCE = VL_RAND_RESET_I(32);
    riscv_top__DOT__Rs1E = VL_RAND_RESET_I(5);
    riscv_top__DOT__Rs2E = VL_RAND_RESET_I(5);
    riscv_top__DOT__RdE = VL_RAND_RESET_I(5);
    riscv_top__DOT__ExtImmE = VL_RAND_RESET_I(32);
    riscv_top__DOT__funct3E = VL_RAND_RESET_I(3);
    riscv_top__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_dp_ALU = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_dp_PC_Plus_immE = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_PCSrcE = VL_RAND_RESET_I(2);
    riscv_top__DOT__ForWardAE = VL_RAND_RESET_I(2);
    riscv_top__DOT__ForWardBE = VL_RAND_RESET_I(2);
    riscv_top__DOT__MUX_selM = VL_RAND_RESET_I(2);
    riscv_top__DOT__RegWriteM = VL_RAND_RESET_I(1);
    riscv_top__DOT__ResultSrcM = VL_RAND_RESET_I(1);
    riscv_top__DOT__MemWriteM = VL_RAND_RESET_I(1);
    riscv_top__DOT__mem_byte_selM = VL_RAND_RESET_I(4);
    riscv_top__DOT__ALUResultM = VL_RAND_RESET_I(32);
    riscv_top__DOT__WriteDataM = VL_RAND_RESET_I(32);
    riscv_top__DOT__PC_Plus_immM = VL_RAND_RESET_I(32);
    riscv_top__DOT__RdM = VL_RAND_RESET_I(5);
    riscv_top__DOT__ExtImmM = VL_RAND_RESET_I(32);
    riscv_top__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_dp_dmem_RD = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_dp_4to1muxM = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_mem_byte_sel = VL_RAND_RESET_I(4);
    riscv_top__DOT__o_dp_ResultW = VL_RAND_RESET_I(32);
    riscv_top__DOT__RegWriteW = VL_RAND_RESET_I(1);
    riscv_top__DOT__ResultSrcW = VL_RAND_RESET_I(1);
    riscv_top__DOT__ReadDataW = VL_RAND_RESET_I(32);
    riscv_top__DOT__o_dp_4to1muxW = VL_RAND_RESET_I(32);
    riscv_top__DOT__RdW = VL_RAND_RESET_I(5);
    riscv_top__DOT__StallF = VL_RAND_RESET_I(1);
    riscv_top__DOT__StallD = VL_RAND_RESET_I(1);
    riscv_top__DOT__FlushD = VL_RAND_RESET_I(1);
    riscv_top__DOT__FlushE = VL_RAND_RESET_I(1);
    riscv_top__DOT__ForwardAE = VL_RAND_RESET_I(2);
    riscv_top__DOT__ForwardBE = VL_RAND_RESET_I(2);
    riscv_top__DOT__mem_funct3 = VL_RAND_RESET_I(3);
    riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__imem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(1024, riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(256, riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR);
    riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch = VL_RAND_RESET_I(1);
    riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_c_RD2E = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a);
    VL_RAND_RESET_W(96, riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b);
    riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_c = VL_RAND_RESET_Q(64);
    riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(128, riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1);
    riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel = VL_RAND_RESET_I(4);
    riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(1024, riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF);
    riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    riscv_top__DOT__u_hazard_unit__DOT__lwStall = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_riscv_top__DOT__o_MUX_selD[0] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[1] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[2] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[3] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[4] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[5] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[6] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[7] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[8] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[9] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[10] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[11] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[12] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[13] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[14] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[15] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[16] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[17] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[18] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[19] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[20] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[21] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[22] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[23] = 2U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[24] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[25] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[26] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[27] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[28] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[29] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[30] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[31] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[32] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[33] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[34] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[35] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[36] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[37] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[38] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[39] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[40] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[41] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[42] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[43] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[44] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[45] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[46] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[47] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[48] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[49] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[50] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[51] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[52] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[53] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[54] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[55] = 1U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[56] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[57] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[58] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[59] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[60] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[61] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[62] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[63] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[64] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[65] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[66] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[67] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[68] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[69] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[70] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[71] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[72] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[73] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[74] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[75] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[76] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[77] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[78] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[79] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[80] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[81] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[82] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[83] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[84] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[85] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[86] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[87] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[88] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[89] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[90] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[91] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[92] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[93] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[94] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[95] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[96] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[97] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[98] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[99] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[100] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[101] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[102] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[103] = 3U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[104] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[105] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[106] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[107] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[108] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[109] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[110] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[111] = 3U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[112] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[113] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[114] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[115] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[116] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[117] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[118] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[119] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[120] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[121] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[122] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[123] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[124] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[125] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[126] = 0U;
    __Vtable1_riscv_top__DOT__o_MUX_selD[127] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[0] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[1] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[2] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[3] = 1U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[4] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[5] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[6] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[7] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[8] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[9] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[10] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[11] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[12] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[13] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[14] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[15] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[16] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[17] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[18] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[19] = 1U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[20] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[21] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[22] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[23] = 1U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[24] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[25] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[26] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[27] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[28] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[29] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[30] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[31] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[32] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[33] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[34] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[35] = 1U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[36] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[37] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[38] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[39] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[40] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[41] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[42] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[43] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[44] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[45] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[46] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[47] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[48] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[49] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[50] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[51] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[52] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[53] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[54] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[55] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[56] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[57] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[58] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[59] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[60] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[61] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[62] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[63] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[64] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[65] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[66] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[67] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[68] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[69] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[70] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[71] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[72] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[73] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[74] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[75] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[76] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[77] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[78] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[79] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[80] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[81] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[82] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[83] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[84] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[85] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[86] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[87] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[88] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[89] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[90] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[91] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[92] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[93] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[94] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[95] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[96] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[97] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[98] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[99] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[100] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[101] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[102] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[103] = 1U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[104] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[105] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[106] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[107] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[108] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[109] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[110] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[111] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[112] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[113] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[114] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[115] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[116] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[117] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[118] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[119] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[120] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[121] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[122] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[123] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[124] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[125] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[126] = 0U;
    __Vtable2_riscv_top__DOT__o_dp_ALUSrcD[127] = 0U;
    __Vtableidx3 = 0;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[0] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[1] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[2] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[3] = 1U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[4] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[5] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[6] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[7] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[8] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[9] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[10] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[11] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[12] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[13] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[14] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[15] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[16] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[17] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[18] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[19] = 1U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[20] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[21] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[22] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[23] = 5U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[24] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[25] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[26] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[27] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[28] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[29] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[30] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[31] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[32] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[33] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[34] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[35] = 2U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[36] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[37] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[38] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[39] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[40] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[41] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[42] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[43] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[44] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[45] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[46] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[47] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[48] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[49] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[50] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[51] = 0U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[52] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[53] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[54] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[55] = 5U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[56] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[57] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[58] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[59] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[60] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[61] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[62] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[63] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[64] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[65] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[66] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[67] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[68] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[69] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[70] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[71] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[72] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[73] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[74] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[75] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[76] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[77] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[78] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[79] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[80] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[81] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[82] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[83] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[84] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[85] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[86] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[87] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[88] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[89] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[90] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[91] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[92] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[93] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[94] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[95] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[96] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[97] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[98] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[99] = 3U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[100] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[101] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[102] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[103] = 1U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[104] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[105] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[106] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[107] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[108] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[109] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[110] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[111] = 4U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[112] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[113] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[114] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[115] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[116] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[117] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[118] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[119] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[120] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[121] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[122] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[123] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[124] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[125] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[126] = 7U;
    __Vtable3_riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD[127] = 7U;
    __Vtableidx4 = 0;
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[0],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[3],0x00006c62);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[4],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[5],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[6],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[7],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[8],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[9],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[10],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[11],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[12],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[13],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[14],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[15],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[16],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[17],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[18],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[19],0x61646469);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[20],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[21],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[22],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[23],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[24],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[25],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[26],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[27],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[28],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[29],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[30],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[31],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[32],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[33],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[34],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[35],0x00007362);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[36],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[37],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[38],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[39],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[40],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[41],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[42],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[43],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[44],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[45],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[46],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[47],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[48],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[49],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[50],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[51],0x00616464);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[52],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[53],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[54],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[55],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[56],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[57],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[58],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[59],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[60],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[61],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[62],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[63],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[64],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[65],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[66],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[67],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[68],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[69],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[70],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[71],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[72],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[73],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[74],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[75],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[76],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[77],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[78],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[79],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[80],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[81],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[82],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[83],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[84],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[85],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[86],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[87],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[88],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[89],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[90],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[91],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[92],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[93],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[94],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[95],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[96],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[97],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[98],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[99],0x00626571);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[100],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[101],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[102],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[103],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[104],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[105],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[106],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[107],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[108],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[109],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[110],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[111],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[112],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[113],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[114],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[115],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[116],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[117],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[118],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[119],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[120],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[121],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[122],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[123],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[124],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[125],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[126],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[127],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[128],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[129],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[130],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[131],0x00006c68);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[132],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[133],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[134],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[135],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[136],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[137],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[138],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[139],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[140],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[141],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[142],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[143],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[144],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[145],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[146],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[147],0x736c6c69);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[148],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[149],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[150],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[151],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[152],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[153],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[154],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[155],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[156],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[157],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[158],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[159],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[160],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[161],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[162],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[163],0x00007368);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[164],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[165],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[166],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[167],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[168],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[169],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[170],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[171],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[172],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[173],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[174],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[175],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[176],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[177],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[178],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[179],0x00736c6c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[180],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[181],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[182],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[183],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[184],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[185],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[186],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[187],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[188],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[189],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[190],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[191],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[192],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[193],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[194],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[195],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[196],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[197],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[198],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[199],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[200],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[201],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[202],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[203],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[204],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[205],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[206],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[207],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[208],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[209],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[210],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[211],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[212],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[213],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[214],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[215],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[216],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[217],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[218],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[219],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[220],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[221],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[222],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[223],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[224],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[225],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[226],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[227],0x00626e65);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[228],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[229],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[230],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[231],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[232],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[233],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[234],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[235],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[236],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[237],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[238],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[239],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[240],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[241],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[242],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[243],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[244],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[245],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[246],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[247],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[248],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[249],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[250],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[251],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[252],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[253],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[254],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[255],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[256],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[257],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[258],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[259],0x00006c77);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[260],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[261],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[262],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[263],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[264],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[265],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[266],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[267],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[268],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[269],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[270],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[271],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[272],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[273],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[274],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[275],0x736c7469);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[276],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[277],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[278],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[279],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[280],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[281],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[282],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[283],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[284],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[285],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[286],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[287],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[288],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[289],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[290],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[291],0x00007377);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[292],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[293],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[294],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[295],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[296],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[297],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[298],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[299],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[300],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[301],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[302],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[303],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[304],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[305],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[306],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[307],0x00736c74);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[308],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[309],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[310],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[311],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[312],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[313],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[314],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[315],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[316],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[317],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[318],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[319],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[320],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[321],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[322],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[323],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[324],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[325],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[326],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[327],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[328],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[329],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[330],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[331],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[332],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[333],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[334],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[335],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[336],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[337],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[338],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[339],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[340],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[341],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[342],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[343],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[344],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[345],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[346],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[347],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[348],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[349],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[350],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[351],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[352],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[353],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[354],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[355],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[356],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[357],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[358],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[359],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[360],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[361],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[362],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[363],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[364],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[365],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[366],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[367],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[368],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[369],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[370],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[371],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[372],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[373],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[374],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[375],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[376],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[377],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[378],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[379],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[380],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[381],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[382],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[383],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[384],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[385],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[386],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[387],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[388],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[389],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[390],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[391],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[392],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[393],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[394],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[395],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[396],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[397],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[398],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[399],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[400],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[401],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[402],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[403],0x00000073,0x6c747569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[404],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[405],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[406],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[407],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[408],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[409],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[410],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[411],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[412],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[413],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[414],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[415],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[416],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[417],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[418],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[419],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[420],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[421],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[422],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[423],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[424],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[425],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[426],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[427],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[428],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[429],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[430],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[431],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[432],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[433],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[434],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[435],0x736c7475);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[436],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[437],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[438],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[439],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[440],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[441],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[442],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[443],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[444],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[445],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[446],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[447],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[448],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[449],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[450],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[451],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[452],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[453],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[454],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[455],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[456],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[457],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[458],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[459],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[460],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[461],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[462],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[463],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[464],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[465],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[466],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[467],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[468],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[469],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[470],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[471],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[472],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[473],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[474],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[475],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[476],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[477],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[478],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[479],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[480],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[481],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[482],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[483],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[484],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[485],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[486],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[487],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[488],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[489],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[490],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[491],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[492],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[493],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[494],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[495],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[496],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[497],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[498],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[499],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[500],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[501],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[502],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[503],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[504],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[505],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[506],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[507],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[508],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[509],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[510],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[511],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[512],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[513],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[514],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[515],0x006c6275);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[516],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[517],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[518],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[519],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[520],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[521],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[522],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[523],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[524],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[525],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[526],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[527],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[528],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[529],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[530],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[531],0x786f7269);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[532],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[533],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[534],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[535],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[536],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[537],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[538],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[539],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[540],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[541],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[542],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[543],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[544],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[545],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[546],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[547],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[548],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[549],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[550],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[551],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[552],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[553],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[554],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[555],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[556],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[557],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[558],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[559],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[560],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[561],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[562],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[563],0x00786f72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[564],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[565],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[566],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[567],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[568],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[569],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[570],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[571],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[572],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[573],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[574],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[575],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[576],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[577],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[578],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[579],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[580],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[581],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[582],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[583],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[584],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[585],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[586],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[587],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[588],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[589],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[590],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[591],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[592],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[593],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[594],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[595],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[596],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[597],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[598],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[599],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[600],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[601],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[602],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[603],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[604],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[605],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[606],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[607],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[608],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[609],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[610],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[611],0x00626c74);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[612],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[613],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[614],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[615],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[616],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[617],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[618],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[619],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[620],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[621],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[622],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[623],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[624],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[625],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[626],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[627],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[628],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[629],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[630],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[631],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[632],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[633],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[634],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[635],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[636],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[637],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[638],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[639],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[640],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[641],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[642],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[643],0x006c6875);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[644],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[645],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[646],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[647],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[648],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[649],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[650],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[651],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[652],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[653],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[654],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[655],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[656],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[657],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[658],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[659],0x73726c69);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[660],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[661],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[662],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[663],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[664],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[665],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[666],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[667],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[668],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[669],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[670],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[671],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[672],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[673],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[674],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[675],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[676],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[677],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[678],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[679],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[680],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[681],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[682],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[683],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[684],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[685],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[686],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[687],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[688],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[689],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[690],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[691],0x0073726c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[692],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[693],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[694],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[695],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[696],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[697],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[698],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[699],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[700],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[701],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[702],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[703],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[704],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[705],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[706],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[707],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[708],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[709],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[710],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[711],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[712],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[713],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[714],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[715],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[716],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[717],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[718],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[719],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[720],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[721],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[722],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[723],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[724],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[725],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[726],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[727],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[728],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[729],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[730],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[731],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[732],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[733],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[734],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[735],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[736],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[737],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[738],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[739],0x00626765);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[740],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[741],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[742],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[743],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[744],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[745],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[746],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[747],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[748],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[749],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[750],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[751],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[752],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[753],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[754],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[755],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[756],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[757],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[758],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[759],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[760],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[761],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[762],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[763],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[764],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[765],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[766],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[767],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[768],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[769],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[770],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[771],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[772],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[773],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[774],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[775],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[776],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[777],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[778],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[779],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[780],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[781],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[782],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[783],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[784],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[785],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[786],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[787],0x006f7269);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[788],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[789],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[790],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[791],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[792],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[793],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[794],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[795],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[796],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[797],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[798],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[799],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[800],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[801],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[802],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[803],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[804],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[805],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[806],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[807],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[808],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[809],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[810],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[811],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[812],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[813],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[814],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[815],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[816],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[817],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[818],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[819],0x00006f72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[820],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[821],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[822],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[823],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[824],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[825],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[826],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[827],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[828],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[829],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[830],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[831],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[832],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[833],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[834],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[835],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[836],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[837],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[838],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[839],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[840],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[841],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[842],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[843],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[844],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[845],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[846],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[847],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[848],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[849],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[850],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[851],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[852],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[853],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[854],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[855],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[856],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[857],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[858],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[859],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[860],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[861],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[862],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[863],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[864],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[865],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[866],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[867],0x626c7475);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[868],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[869],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[870],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[871],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[872],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[873],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[874],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[875],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[876],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[877],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[878],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[879],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[880],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[881],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[882],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[883],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[884],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[885],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[886],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[887],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[888],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[889],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[890],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[891],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[892],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[893],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[894],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[895],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[896],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[897],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[898],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[899],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[900],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[901],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[902],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[903],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[904],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[905],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[906],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[907],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[908],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[909],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[910],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[911],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[912],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[913],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[914],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[915],0x616e6469);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[916],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[917],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[918],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[919],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[920],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[921],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[922],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[923],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[924],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[925],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[926],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[927],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[928],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[929],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[930],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[931],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[932],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[933],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[934],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[935],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[936],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[937],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[938],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[939],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[940],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[941],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[942],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[943],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[944],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[945],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[946],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[947],0x00616e64);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[948],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[949],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[950],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[951],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[952],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[953],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[954],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[955],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[956],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[957],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[958],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[959],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[960],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[961],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[962],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[963],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[964],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[965],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[966],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[967],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[968],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[969],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[970],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[971],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[972],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[973],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[974],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[975],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[976],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[977],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[978],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[979],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[980],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[981],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[982],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[983],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[984],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[985],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[986],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[987],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[988],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[989],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[990],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[991],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[992],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[993],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[994],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[995],0x62676575);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[996],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[997],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[998],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[999],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1000],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1001],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1002],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1003],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1004],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1005],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1006],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1007],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1008],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1009],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1010],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1011],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1012],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1013],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1014],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1015],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1016],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1017],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1018],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1019],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1020],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1021],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1022],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1023],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1024],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1025],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1026],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1027],0x00006c62);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1028],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1029],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1030],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1031],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1032],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1033],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1034],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1035],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1036],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1037],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1038],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1039],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1040],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1041],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1042],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1043],0x61646469);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1044],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1045],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1046],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1047],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1048],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1049],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1050],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1051],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1052],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1053],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1054],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1055],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1056],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1057],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1058],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1059],0x00007362);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1060],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1061],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1062],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1063],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1064],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1065],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1066],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1067],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1068],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1069],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1070],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1071],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1072],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1073],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1074],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1075],0x00737562);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1076],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1077],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1078],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1079],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1080],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1081],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1082],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1083],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1084],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1085],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1086],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1087],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1088],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1089],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1090],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1091],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1092],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1093],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1094],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1095],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1096],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1097],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1098],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1099],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1100],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1101],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1102],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1103],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1104],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1105],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1106],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1107],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1108],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1109],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1110],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1111],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1112],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1113],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1114],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1115],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1116],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1117],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1118],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1119],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1120],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1121],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1122],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1123],0x00626571);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1124],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1125],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1126],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1127],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1128],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1129],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1130],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1131],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1132],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1133],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1134],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1135],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1136],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1137],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1138],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1139],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1140],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1141],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1142],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1143],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1144],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1145],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1146],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1147],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1148],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1149],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1150],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1151],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1152],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1153],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1154],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1155],0x00006c68);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1156],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1157],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1158],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1159],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1160],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1161],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1162],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1163],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1164],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1165],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1166],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1167],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1168],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1169],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1170],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1171],0x736c6c69);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1172],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1173],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1174],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1175],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1176],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1177],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1178],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1179],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1180],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1181],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1182],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1183],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1184],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1185],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1186],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1187],0x00007368);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1188],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1189],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1190],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1191],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1192],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1193],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1194],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1195],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1196],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1197],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1198],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1199],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1200],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1201],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1202],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1203],0x00736c6c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1204],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1205],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1206],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1207],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1208],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1209],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1210],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1211],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1212],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1213],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1214],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1215],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1216],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1217],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1218],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1219],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1220],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1221],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1222],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1223],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1224],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1225],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1226],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1227],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1228],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1229],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1230],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1231],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1232],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1233],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1234],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1235],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1236],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1237],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1238],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1239],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1240],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1241],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1242],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1243],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1244],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1245],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1246],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1247],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1248],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1249],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1250],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1251],0x00626e65);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1252],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1253],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1254],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1255],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1256],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1257],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1258],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1259],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1260],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1261],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1262],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1263],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1264],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1265],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1266],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1267],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1268],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1269],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1270],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1271],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1272],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1273],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1274],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1275],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1276],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1277],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1278],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1279],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1280],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1281],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1282],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1283],0x00006c77);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1284],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1285],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1286],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1287],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1288],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1289],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1290],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1291],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1292],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1293],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1294],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1295],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1296],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1297],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1298],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1299],0x736c7469);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1300],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1301],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1302],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1303],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1304],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1305],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1306],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1307],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1308],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1309],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1310],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1311],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1312],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1313],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1314],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1315],0x00007377);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1316],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1317],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1318],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1319],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1320],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1321],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1322],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1323],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1324],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1325],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1326],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1327],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1328],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1329],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1330],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1331],0x00736c74);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1332],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1333],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1334],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1335],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1336],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1337],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1338],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1339],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1340],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1341],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1342],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1343],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1344],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1345],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1346],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1347],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1348],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1349],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1350],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1351],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1352],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1353],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1354],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1355],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1356],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1357],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1358],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1359],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1360],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1361],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1362],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1363],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1364],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1365],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1366],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1367],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1368],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1369],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1370],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1371],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1372],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1373],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1374],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1375],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1376],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1377],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1378],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1379],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1380],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1381],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1382],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1383],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1384],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1385],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1386],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1387],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1388],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1389],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1390],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1391],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1392],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1393],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1394],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1395],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1396],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1397],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1398],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1399],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1400],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1401],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1402],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1403],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1404],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1405],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1406],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1407],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1408],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1409],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1410],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1411],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1412],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1413],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1414],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1415],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1416],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1417],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1418],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1419],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1420],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1421],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1422],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1423],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1424],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1425],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1426],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1427],0x00000073,0x6c747569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1428],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1429],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1430],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1431],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1432],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1433],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1434],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1435],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1436],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1437],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1438],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1439],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1440],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1441],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1442],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1443],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1444],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1445],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1446],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1447],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1448],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1449],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1450],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1451],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1452],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1453],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1454],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1455],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1456],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1457],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1458],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1459],0x736c7475);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1460],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1461],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1462],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1463],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1464],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1465],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1466],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1467],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1468],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1469],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1470],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1471],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1472],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1473],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1474],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1475],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1476],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1477],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1478],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1479],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1480],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1481],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1482],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1483],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1484],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1485],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1486],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1487],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1488],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1489],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1490],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1491],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1492],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1493],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1494],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1495],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1496],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1497],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1498],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1499],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1500],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1501],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1502],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1503],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1504],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1505],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1506],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1507],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1508],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1509],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1510],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1511],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1512],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1513],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1514],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1515],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1516],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1517],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1518],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1519],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1520],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1521],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1522],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1523],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1524],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1525],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1526],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1527],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1528],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1529],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1530],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1531],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1532],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1533],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1534],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1535],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1536],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1537],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1538],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1539],0x006c6275);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1540],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1541],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1542],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1543],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1544],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1545],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1546],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1547],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1548],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1549],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1550],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1551],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1552],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1553],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1554],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1555],0x786f7269);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1556],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1557],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1558],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1559],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1560],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1561],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1562],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1563],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1564],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1565],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1566],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1567],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1568],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1569],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1570],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1571],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1572],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1573],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1574],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1575],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1576],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1577],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1578],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1579],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1580],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1581],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1582],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1583],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1584],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1585],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1586],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1587],0x00786f72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1588],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1589],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1590],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1591],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1592],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1593],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1594],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1595],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1596],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1597],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1598],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1599],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1600],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1601],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1602],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1603],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1604],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1605],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1606],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1607],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1608],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1609],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1610],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1611],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1612],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1613],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1614],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1615],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1616],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1617],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1618],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1619],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1620],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1621],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1622],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1623],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1624],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1625],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1626],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1627],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1628],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1629],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1630],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1631],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1632],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1633],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1634],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1635],0x00626c74);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1636],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1637],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1638],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1639],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1640],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1641],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1642],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1643],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1644],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1645],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1646],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1647],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1648],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1649],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1650],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1651],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1652],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1653],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1654],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1655],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1656],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1657],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1658],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1659],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1660],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1661],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1662],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1663],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1664],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1665],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1666],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1667],0x006c6875);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1668],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1669],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1670],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1671],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1672],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1673],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1674],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1675],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1676],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1677],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1678],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1679],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1680],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1681],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1682],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1683],0x73726169);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1684],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1685],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1686],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1687],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1688],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1689],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1690],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1691],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1692],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1693],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1694],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1695],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1696],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1697],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1698],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1699],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1700],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1701],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1702],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1703],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1704],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1705],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1706],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1707],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1708],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1709],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1710],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1711],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1712],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1713],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1714],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1715],0x00737261);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1716],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1717],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1718],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1719],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1720],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1721],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1722],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1723],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1724],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1725],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1726],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1727],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1728],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1729],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1730],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1731],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1732],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1733],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1734],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1735],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1736],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1737],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1738],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1739],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1740],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1741],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1742],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1743],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1744],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1745],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1746],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1747],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1748],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1749],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1750],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1751],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1752],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1753],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1754],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1755],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1756],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1757],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1758],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1759],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1760],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1761],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1762],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1763],0x00626765);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1764],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1765],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1766],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1767],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1768],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1769],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1770],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1771],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1772],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1773],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1774],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1775],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1776],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1777],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1778],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1779],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1780],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1781],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1782],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1783],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1784],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1785],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1786],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1787],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1788],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1789],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1790],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1791],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1792],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1793],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1794],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1795],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1796],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1797],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1798],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1799],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1800],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1801],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1802],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1803],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1804],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1805],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1806],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1807],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1808],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1809],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1810],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1811],0x006f7269);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1812],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1813],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1814],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1815],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1816],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1817],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1818],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1819],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1820],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1821],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1822],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1823],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1824],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1825],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1826],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1827],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1828],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1829],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1830],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1831],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1832],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1833],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1834],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1835],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1836],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1837],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1838],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1839],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1840],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1841],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1842],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1843],0x00006f72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1844],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1845],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1846],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1847],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1848],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1849],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1850],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1851],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1852],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1853],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1854],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1855],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1856],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1857],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1858],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1859],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1860],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1861],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1862],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1863],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1864],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1865],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1866],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1867],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1868],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1869],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1870],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1871],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1872],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1873],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1874],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1875],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1876],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1877],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1878],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1879],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1880],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1881],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1882],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1883],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1884],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1885],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1886],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1887],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1888],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1889],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1890],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1891],0x626c7475);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1892],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1893],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1894],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1895],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1896],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1897],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1898],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1899],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1900],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1901],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1902],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1903],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1904],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1905],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1906],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1907],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1908],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1909],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1910],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1911],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1912],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1913],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1914],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1915],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1916],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1917],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1918],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1919],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1920],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1921],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1922],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1923],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1924],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1925],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1926],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1927],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1928],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1929],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1930],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1931],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1932],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1933],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1934],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1935],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1936],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1937],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1938],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1939],0x616e6469);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1940],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1941],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1942],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1943],0x00000061,0x75697063);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1944],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1945],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1946],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1947],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1948],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1949],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1950],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1951],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1952],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1953],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1954],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1955],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1956],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1957],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1958],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1959],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1960],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1961],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1962],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1963],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1964],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1965],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1966],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1967],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1968],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1969],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1970],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1971],0x00616e64);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1972],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1973],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1974],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1975],0x006c7569);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1976],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1977],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1978],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1979],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1980],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1981],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1982],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1983],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1984],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1985],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1986],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1987],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1988],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1989],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1990],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1991],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1992],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1993],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1994],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1995],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1996],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1997],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1998],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[1999],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2000],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2001],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2002],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2003],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2004],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2005],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2006],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2007],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2008],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2009],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2010],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2011],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2012],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2013],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2014],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2015],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2016],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2017],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2018],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2019],0x62676575);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2020],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2021],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2022],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2023],0x6a616c72);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2024],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2025],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2026],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2027],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2028],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2029],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2030],0x0000006e,0x6f646566);
    VL_CONST_W_1X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2031],0x006a616c);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2032],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2033],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2034],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2035],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2036],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2037],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2038],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2039],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2040],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2041],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2042],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2043],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2044],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2045],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2046],0x0000006e,0x6f646566);
    VL_CONST_W_2X(256,__Vtable4_riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR[2047],0x0000006e,0x6f646566);
    __Vtableidx5 = 0;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[0] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[1] = 1U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[2] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[3] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[4] = 1U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[5] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[6] = 1U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[7] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[8] = 1U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[9] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[10] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[11] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[12] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[13] = 1U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[14] = 0U;
    __Vtable5_riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch[15] = 1U;
    __Vtableidx6 = 0;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[0] = 0x41444409ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[1] = 0x534c4c09ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[2] = 0x534c5409ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[3] = 0x534c545509ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[4] = 0x584f5209ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[5] = 0x53524c09ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[6] = 0x4f5209ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[7] = 0x414e4409ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[8] = 0x53554209ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[9] = 0x6e6f646566ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[10] = 0x6e6f646566ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[11] = 0x6e6f646566ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[12] = 0x6e6f646566ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[13] = 0x53524109ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[14] = 0x6e6f646566ULL;
    __Vtable6_riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[15] = 0x6e6f646566ULL;
    __Vdly__riscv_top__DOT__o_instrD = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
