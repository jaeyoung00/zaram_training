// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


void Vriscv_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vriscv_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgWData(oldp+0,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF),1024);
            tracep->chgWData(oldp+32,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF),1024);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+64,(vlTOPp->riscv_top__DOT__o_dp_imem_RD),32);
            tracep->chgIData(oldp+65,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF),32);
            tracep->chgIData(oldp+66,(((IData)(4U) 
                                       + vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF)),32);
            tracep->chgIData(oldp+67,(vlTOPp->riscv_top__DOT__o_PCPlus4D),32);
            tracep->chgIData(oldp+68,(vlTOPp->riscv_top__DOT__o_PCD),32);
            tracep->chgCData(oldp+69,(vlTOPp->riscv_top__DOT__MUX_selE),2);
            tracep->chgBit(oldp+70,(vlTOPp->riscv_top__DOT__ResultSrcE));
            tracep->chgCData(oldp+71,(vlTOPp->riscv_top__DOT__JumpE),2);
            tracep->chgBit(oldp+72,(vlTOPp->riscv_top__DOT__BranchE));
            tracep->chgCData(oldp+73,(vlTOPp->riscv_top__DOT__ALUContrlE),4);
            tracep->chgBit(oldp+74,(vlTOPp->riscv_top__DOT__ALUSrcE));
            tracep->chgCData(oldp+75,(vlTOPp->riscv_top__DOT__mem_byte_selE),4);
            tracep->chgIData(oldp+76,(vlTOPp->riscv_top__DOT__RD1E),32);
            tracep->chgIData(oldp+77,(vlTOPp->riscv_top__DOT__RD2E),32);
            tracep->chgIData(oldp+78,(vlTOPp->riscv_top__DOT__PCE),32);
            tracep->chgCData(oldp+79,(vlTOPp->riscv_top__DOT__Rs1E),5);
            tracep->chgCData(oldp+80,(vlTOPp->riscv_top__DOT__Rs2E),5);
            tracep->chgIData(oldp+81,(vlTOPp->riscv_top__DOT__ExtImmE),32);
            tracep->chgCData(oldp+82,(vlTOPp->riscv_top__DOT__funct3E),3);
            tracep->chgIData(oldp+83,(vlTOPp->riscv_top__DOT__PCPlus4E),32);
            tracep->chgIData(oldp+84,(vlTOPp->riscv_top__DOT__o_dp_PC_Plus_immE),32);
            tracep->chgCData(oldp+85,(vlTOPp->riscv_top__DOT__MUX_selM),2);
            tracep->chgBit(oldp+86,(vlTOPp->riscv_top__DOT__ResultSrcM));
            tracep->chgCData(oldp+87,(vlTOPp->riscv_top__DOT__mem_byte_selM),4);
            tracep->chgIData(oldp+88,(vlTOPp->riscv_top__DOT__WriteDataM),32);
            tracep->chgIData(oldp+89,(vlTOPp->riscv_top__DOT__PC_Plus_immM),32);
            tracep->chgIData(oldp+90,(vlTOPp->riscv_top__DOT__ExtImmM),32);
            tracep->chgIData(oldp+91,(vlTOPp->riscv_top__DOT__PCPlus4M),32);
            tracep->chgBit(oldp+92,(vlTOPp->riscv_top__DOT__ResultSrcW));
            tracep->chgIData(oldp+93,(vlTOPp->riscv_top__DOT__ReadDataW),32);
            tracep->chgIData(oldp+94,(vlTOPp->riscv_top__DOT__o_dp_4to1muxW),32);
            tracep->chgCData(oldp+95,(vlTOPp->riscv_top__DOT__mem_funct3),3);
            tracep->chgSData(oldp+96,((0x3fffU & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF 
                                                  >> 2U))),14);
            tracep->chgQData(oldp+97,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP),64);
            tracep->chgQData(oldp+99,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd),64);
            tracep->chgIData(oldp+101,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+102,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[1]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+103,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[0]),32);
            tracep->chgIData(oldp+104,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[1]),32);
            tracep->chgIData(oldp+105,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[2]),32);
            tracep->chgIData(oldp+106,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[3]),32);
            tracep->chgIData(oldp+107,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[4]),32);
            tracep->chgIData(oldp+108,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[5]),32);
            tracep->chgIData(oldp+109,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[6]),32);
            tracep->chgIData(oldp+110,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[7]),32);
            tracep->chgIData(oldp+111,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[8]),32);
            tracep->chgIData(oldp+112,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[9]),32);
            tracep->chgIData(oldp+113,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[10]),32);
            tracep->chgIData(oldp+114,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[11]),32);
            tracep->chgIData(oldp+115,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[12]),32);
            tracep->chgIData(oldp+116,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[13]),32);
            tracep->chgIData(oldp+117,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[14]),32);
            tracep->chgIData(oldp+118,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[15]),32);
            tracep->chgIData(oldp+119,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[16]),32);
            tracep->chgIData(oldp+120,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[17]),32);
            tracep->chgIData(oldp+121,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[18]),32);
            tracep->chgIData(oldp+122,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[19]),32);
            tracep->chgIData(oldp+123,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[20]),32);
            tracep->chgIData(oldp+124,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[21]),32);
            tracep->chgIData(oldp+125,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[22]),32);
            tracep->chgIData(oldp+126,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[23]),32);
            tracep->chgIData(oldp+127,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[24]),32);
            tracep->chgIData(oldp+128,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[25]),32);
            tracep->chgIData(oldp+129,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[26]),32);
            tracep->chgIData(oldp+130,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[27]),32);
            tracep->chgIData(oldp+131,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[28]),32);
            tracep->chgIData(oldp+132,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[29]),32);
            tracep->chgIData(oldp+133,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[30]),32);
            tracep->chgIData(oldp+134,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+135,(vlTOPp->riscv_top__DOT__o_instrD),32);
            tracep->chgBit(oldp+136,((1U & (~ ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instrD)) 
                                               | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)))))));
            tracep->chgBit(oldp+137,((3U != (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instrD))));
            tracep->chgBit(oldp+138,((0x23U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instrD))));
            tracep->chgCData(oldp+139,(((0x6fU == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD))
                                         ? 1U : ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD))
                                                  ? 2U
                                                  : 0U))),2);
            tracep->chgBit(oldp+140,((0x63U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instrD))));
            tracep->chgCData(oldp+141,(vlTOPp->riscv_top__DOT__o_dp_ALUControlD),4);
            tracep->chgBit(oldp+142,(vlTOPp->riscv_top__DOT__o_dp_ALUSrcD));
            tracep->chgCData(oldp+143,(vlTOPp->riscv_top__DOT__o_dp_mem_byte_sel),4);
            tracep->chgCData(oldp+144,(vlTOPp->riscv_top__DOT__o_MUX_selD),2);
            tracep->chgIData(oldp+145,(vlTOPp->riscv_top__DOT__o_dp_ImmExtD),32);
            tracep->chgCData(oldp+146,((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+147,((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+148,((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+149,((7U & (vlTOPp->riscv_top__DOT__o_instrD 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+150,(vlTOPp->riscv_top__DOT__RegWriteE));
            tracep->chgBit(oldp+151,(vlTOPp->riscv_top__DOT__MemWriteE));
            tracep->chgCData(oldp+152,(vlTOPp->riscv_top__DOT__RdE),5);
            tracep->chgIData(oldp+153,(vlTOPp->riscv_top__DOT__o_dp_ALU),32);
            tracep->chgIData(oldp+154,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_c_RD2E),32);
            tracep->chgCData(oldp+155,(vlTOPp->riscv_top__DOT__o_PCSrcE),2);
            tracep->chgBit(oldp+156,(vlTOPp->riscv_top__DOT__RegWriteM));
            tracep->chgBit(oldp+157,(vlTOPp->riscv_top__DOT__MemWriteM));
            tracep->chgIData(oldp+158,(vlTOPp->riscv_top__DOT__ALUResultM),32);
            tracep->chgCData(oldp+159,(vlTOPp->riscv_top__DOT__RdM),5);
            tracep->chgIData(oldp+160,(vlTOPp->riscv_top__DOT__o_dp_dmem_RD),32);
            tracep->chgIData(oldp+161,(vlTOPp->riscv_top__DOT__o_dp_4to1muxM),32);
            tracep->chgIData(oldp+162,(vlTOPp->riscv_top__DOT__o_dp_ResultW),32);
            tracep->chgBit(oldp+163,(vlTOPp->riscv_top__DOT__RegWriteW));
            tracep->chgCData(oldp+164,(vlTOPp->riscv_top__DOT__RdW),5);
            tracep->chgBit(oldp+165,(vlTOPp->riscv_top__DOT__StallF));
            tracep->chgBit(oldp+166,(vlTOPp->riscv_top__DOT__StallD));
            tracep->chgBit(oldp+167,(vlTOPp->riscv_top__DOT__FlushD));
            tracep->chgBit(oldp+168,(vlTOPp->riscv_top__DOT__FlushE));
            tracep->chgCData(oldp+169,(vlTOPp->riscv_top__DOT__ForwardAE),2);
            tracep->chgCData(oldp+170,(vlTOPp->riscv_top__DOT__ForwardBE),2);
            tracep->chgIData(oldp+171,(((2U >= (IData)(vlTOPp->riscv_top__DOT__o_PCSrcE))
                                         ? vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr
                                        [vlTOPp->riscv_top__DOT__o_PCSrcE]
                                         : 0U)),32);
            tracep->chgWData(oldp+172,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc),96);
            tracep->chgBit(oldp+175,((1U & (~ (IData)(vlTOPp->riscv_top__DOT__StallF)))));
            tracep->chgIData(oldp+176,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+177,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+178,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[2]),32);
            tracep->chgCData(oldp+179,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD),3);
            tracep->chgCData(oldp+180,((0x7fU & vlTOPp->riscv_top__DOT__o_instrD)),7);
            tracep->chgBit(oldp+181,((1U & (vlTOPp->riscv_top__DOT__o_instrD 
                                            >> 0x1eU))));
            tracep->chgWData(oldp+182,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR),256);
            tracep->chgBit(oldp+190,((0U == vlTOPp->riscv_top__DOT__o_dp_ALU)));
            tracep->chgBit(oldp+191,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch));
            tracep->chgIData(oldp+192,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE),32);
            tracep->chgIData(oldp+193,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE),32);
            tracep->chgWData(oldp+194,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a),96);
            tracep->chgWData(oldp+197,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b),96);
            tracep->chgQData(oldp+200,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_c),64);
            tracep->chgIData(oldp+202,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+203,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+204,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[2]),32);
            tracep->chgIData(oldp+205,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+206,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+207,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[2]),32);
            tracep->chgIData(oldp+208,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+209,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[1]),32);
            tracep->chgWData(oldp+210,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1),128);
            tracep->chgIData(oldp+214,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data),32);
            tracep->chgCData(oldp+215,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel),4);
            tracep->chgIData(oldp+216,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data),32);
            tracep->chgSData(oldp+217,((0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                                                   >> 2U))),14);
            tracep->chgIData(oldp+218,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+219,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+220,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[2]),32);
            tracep->chgIData(oldp+221,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[3]),32);
            tracep->chgBit(oldp+222,(vlTOPp->riscv_top__DOT__u_hazard_unit__DOT__lwStall));
        }
        tracep->chgIData(oldp+223,(vlTOPp->o_riscv_imem_pc),32);
        tracep->chgIData(oldp+224,(vlTOPp->o_riscv_imem_instr),32);
        tracep->chgIData(oldp+225,(vlTOPp->o_riscv_dmem_addr),32);
        tracep->chgBit(oldp+226,(vlTOPp->o_riscv_dmem_wr_en));
        tracep->chgCData(oldp+227,(vlTOPp->o_riscv_dmem_byte_sel),4);
        tracep->chgIData(oldp+228,(vlTOPp->o_riscv_dmem_wr_data),32);
        tracep->chgIData(oldp+229,(vlTOPp->o_riscv_dmem_rd_data),32);
        tracep->chgBit(oldp+230,(vlTOPp->i_clk));
        tracep->chgBit(oldp+231,(vlTOPp->i_rstn));
        tracep->chgIData(oldp+232,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers
                                   [(0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                              >> 0xfU))]),32);
        tracep->chgIData(oldp+233,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers
                                   [(0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                              >> 0x14U))]),32);
        tracep->chgBit(oldp+234,(((IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch) 
                                  & (IData)(vlTOPp->riscv_top__DOT__BranchE))));
        tracep->chgIData(oldp+235,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                   [(0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                                                >> 2U))]),32);
        tracep->chgIData(oldp+236,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__i),32);
    }
}

void Vriscv_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
