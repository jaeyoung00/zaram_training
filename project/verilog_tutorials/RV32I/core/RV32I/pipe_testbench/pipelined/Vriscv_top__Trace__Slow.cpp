// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


//======================

void Vriscv_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vriscv_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vriscv_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vriscv_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+224,"o_riscv_imem_pc", false,-1, 31,0);
        tracep->declBus(c+225,"o_riscv_imem_instr", false,-1, 31,0);
        tracep->declBus(c+226,"o_riscv_dmem_addr", false,-1, 31,0);
        tracep->declBit(c+227,"o_riscv_dmem_wr_en", false,-1);
        tracep->declBus(c+228,"o_riscv_dmem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+229,"o_riscv_dmem_wr_data", false,-1, 31,0);
        tracep->declBus(c+230,"o_riscv_dmem_rd_data", false,-1, 31,0);
        tracep->declBit(c+231,"i_clk", false,-1);
        tracep->declBit(c+232,"i_rstn", false,-1);
        tracep->declBus(c+238,"riscv_top REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+224,"riscv_top o_riscv_imem_pc", false,-1, 31,0);
        tracep->declBus(c+225,"riscv_top o_riscv_imem_instr", false,-1, 31,0);
        tracep->declBus(c+226,"riscv_top o_riscv_dmem_addr", false,-1, 31,0);
        tracep->declBit(c+227,"riscv_top o_riscv_dmem_wr_en", false,-1);
        tracep->declBus(c+228,"riscv_top o_riscv_dmem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+229,"riscv_top o_riscv_dmem_wr_data", false,-1, 31,0);
        tracep->declBus(c+230,"riscv_top o_riscv_dmem_rd_data", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_top i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top i_rstn", false,-1);
        tracep->declBus(c+65,"riscv_top o_dp_imem_RD", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top o_dp_PCF", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top o_dp_PCPlus4F", false,-1, 31,0);
        tracep->declBus(c+239,"riscv_top PCTargetE", false,-1, 31,0);
        tracep->declBus(c+136,"riscv_top o_instrD", false,-1, 31,0);
        tracep->declBus(c+68,"riscv_top o_PCPlus4D", false,-1, 31,0);
        tracep->declBus(c+69,"riscv_top o_PCD", false,-1, 31,0);
        tracep->declBit(c+137,"riscv_top o_dp_RegWriteD", false,-1);
        tracep->declBit(c+138,"riscv_top o_dp_ResultSrcD", false,-1);
        tracep->declBit(c+139,"riscv_top o_dp_MemWriteD", false,-1);
        tracep->declBus(c+140,"riscv_top o_dp_JumpD", false,-1, 1,0);
        tracep->declBit(c+141,"riscv_top o_dp_BranchD", false,-1);
        tracep->declBus(c+142,"riscv_top o_dp_ALUControlD", false,-1, 3,0);
        tracep->declBit(c+143,"riscv_top o_dp_ALUSrcD", false,-1);
        tracep->declBus(c+144,"riscv_top o_dp_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+145,"riscv_top o_MUX_selD", false,-1, 1,0);
        tracep->declBus(c+233,"riscv_top o_dp_RD1", false,-1, 31,0);
        tracep->declBus(c+234,"riscv_top o_dp_RD2", false,-1, 31,0);
        tracep->declBus(c+146,"riscv_top o_dp_ImmExtD", false,-1, 31,0);
        tracep->declBus(c+147,"riscv_top o_dp_Rs1D", false,-1, 4,0);
        tracep->declBus(c+148,"riscv_top o_dp_Rs2D", false,-1, 4,0);
        tracep->declBus(c+149,"riscv_top o_dp_RdD", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_top o_funct3D", false,-1, 2,0);
        tracep->declBus(c+240,"riscv_top i_dp_dmem_WD3", false,-1, 31,0);
        tracep->declBit(c+241,"riscv_top i_dp_WE3", false,-1);
        tracep->declBus(c+242,"riscv_top i_RdW", false,-1, 4,0);
        tracep->declBus(c+70,"riscv_top MUX_selE", false,-1, 1,0);
        tracep->declBit(c+151,"riscv_top RegWriteE", false,-1);
        tracep->declBit(c+71,"riscv_top ResultSrcE", false,-1);
        tracep->declBit(c+152,"riscv_top MemWriteE", false,-1);
        tracep->declBus(c+72,"riscv_top JumpE", false,-1, 1,0);
        tracep->declBit(c+73,"riscv_top BranchE", false,-1);
        tracep->declBus(c+74,"riscv_top ALUContrlE", false,-1, 3,0);
        tracep->declBit(c+75,"riscv_top ALUSrcE", false,-1);
        tracep->declBus(c+76,"riscv_top mem_byte_selE", false,-1, 3,0);
        tracep->declBus(c+77,"riscv_top RD1E", false,-1, 31,0);
        tracep->declBus(c+78,"riscv_top RD2E", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top PCE", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top Rs1E", false,-1, 4,0);
        tracep->declBus(c+81,"riscv_top Rs2E", false,-1, 4,0);
        tracep->declBus(c+153,"riscv_top RdE", false,-1, 4,0);
        tracep->declBus(c+82,"riscv_top ExtImmE", false,-1, 31,0);
        tracep->declBus(c+83,"riscv_top funct3E", false,-1, 2,0);
        tracep->declBus(c+84,"riscv_top PCPlus4E", false,-1, 31,0);
        tracep->declBus(c+154,"riscv_top o_dp_ALU", false,-1, 31,0);
        tracep->declBus(c+155,"riscv_top o_dp_WriteDataE", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top o_dp_PC_Plus_immE", false,-1, 31,0);
        tracep->declBus(c+156,"riscv_top o_PCSrcE", false,-1, 1,0);
        tracep->declBus(c+243,"riscv_top ForWardAE", false,-1, 1,0);
        tracep->declBus(c+244,"riscv_top ForWardBE", false,-1, 1,0);
        tracep->declBus(c+86,"riscv_top MUX_selM", false,-1, 1,0);
        tracep->declBit(c+157,"riscv_top RegWriteM", false,-1);
        tracep->declBit(c+87,"riscv_top ResultSrcM", false,-1);
        tracep->declBit(c+158,"riscv_top MemWriteM", false,-1);
        tracep->declBus(c+88,"riscv_top mem_byte_selM", false,-1, 3,0);
        tracep->declBus(c+159,"riscv_top ALUResultM", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top WriteDataM", false,-1, 31,0);
        tracep->declBus(c+90,"riscv_top PC_Plus_immM", false,-1, 31,0);
        tracep->declBus(c+160,"riscv_top RdM", false,-1, 4,0);
        tracep->declBus(c+91,"riscv_top ExtImmM", false,-1, 31,0);
        tracep->declBus(c+92,"riscv_top PCPlus4M", false,-1, 31,0);
        tracep->declBus(c+161,"riscv_top o_dp_dmem_RD", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top o_dp_4to1muxM", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_top o_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+163,"riscv_top o_dp_ResultW", false,-1, 31,0);
        tracep->declBit(c+164,"riscv_top RegWriteW", false,-1);
        tracep->declBit(c+93,"riscv_top ResultSrcW", false,-1);
        tracep->declBus(c+94,"riscv_top ReadDataW", false,-1, 31,0);
        tracep->declBus(c+95,"riscv_top o_dp_4to1muxW", false,-1, 31,0);
        tracep->declBus(c+165,"riscv_top RdW", false,-1, 4,0);
        tracep->declBit(c+166,"riscv_top StallF", false,-1);
        tracep->declBit(c+167,"riscv_top StallD", false,-1);
        tracep->declBit(c+168,"riscv_top FlushD", false,-1);
        tracep->declBit(c+169,"riscv_top FlushE", false,-1);
        tracep->declBus(c+170,"riscv_top ForwardAE", false,-1, 1,0);
        tracep->declBus(c+171,"riscv_top ForwardBE", false,-1, 1,0);
        tracep->declBus(c+96,"riscv_top mem_funct3", false,-1, 2,0);
        tracep->declBus(c+238,"riscv_top u_pipe_datapath_Fetch REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+65,"riscv_top u_pipe_datapath_Fetch o_dp_imem_RD", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_pipe_datapath_Fetch o_dp_PCF", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_pipe_datapath_Fetch o_dp_PCPlus4F", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Fetch i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_pipe_datapath_Fetch i_rstn", false,-1);
        tracep->declBus(c+154,"riscv_top u_pipe_datapath_Fetch i_dp_ALUF", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top u_pipe_datapath_Fetch PCTargetE", false,-1, 31,0);
        tracep->declBus(c+156,"riscv_top u_pipe_datapath_Fetch i_PCSrcE", false,-1, 1,0);
        tracep->declBit(c+166,"riscv_top u_pipe_datapath_Fetch StallF", false,-1);
        tracep->declBus(c+172,"riscv_top u_pipe_datapath_Fetch PCFF", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_pipe_datapath_Fetch PCF", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_pipe_datapath_Fetch dp_PCPlus4F", false,-1, 31,0);
        tracep->declArray(c+173,"riscv_top u_pipe_datapath_Fetch mux_concat_pc", false,-1, 95,0);
        tracep->declBus(c+67,"riscv_top u_pipe_datapath_Fetch u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_pipe_datapath_Fetch u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+246,"riscv_top u_pipe_datapath_Fetch u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Fetch u_riscv_imem i_clk", false,-1);
        tracep->declBus(c+65,"riscv_top u_pipe_datapath_Fetch u_riscv_imem o_imem_data", false,-1, 31,0);
        tracep->declBus(c+97,"riscv_top u_pipe_datapath_Fetch u_riscv_imem i_imem_addr", false,-1, 13,0);
        tracep->declArray(c+1,"riscv_top u_pipe_datapath_Fetch u_riscv_imem FILE_TEXT_MIF", false,-1, 1023,0);
        tracep->declBus(c+238,"riscv_top u_pipe_datapath_Fetch u_riscv_register REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_pipe_datapath_Fetch u_riscv_register o_register_q", false,-1, 31,0);
        tracep->declBus(c+172,"riscv_top u_pipe_datapath_Fetch u_riscv_register i_register_d", false,-1, 31,0);
        tracep->declBit(c+176,"riscv_top u_pipe_datapath_Fetch u_riscv_register i_register_en", false,-1);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Fetch u_riscv_register i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_pipe_datapath_Fetch u_riscv_register i_rstn", false,-1);
        tracep->declBus(c+247,"riscv_top u_pipe_datapath_Fetch u_riscv_mux N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+172,"riscv_top u_pipe_datapath_Fetch u_riscv_mux o_mux_data", false,-1, 31,0);
        tracep->declArray(c+173,"riscv_top u_pipe_datapath_Fetch u_riscv_mux i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+156,"riscv_top u_pipe_datapath_Fetch u_riscv_mux i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+177+i*1,"riscv_top u_pipe_datapath_Fetch u_riscv_mux mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+136,"riscv_top u_FF_Fetch_Decode o_instrD", false,-1, 31,0);
        tracep->declBus(c+68,"riscv_top u_FF_Fetch_Decode o_PCPlus4D", false,-1, 31,0);
        tracep->declBus(c+69,"riscv_top u_FF_Fetch_Decode o_PCD", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_top u_FF_Fetch_Decode i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_FF_Fetch_Decode i_rstn", false,-1);
        tracep->declBus(c+65,"riscv_top u_FF_Fetch_Decode i_imem_RD", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_FF_Fetch_Decode i_PCF", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_FF_Fetch_Decode i_PCPlus4F", false,-1, 31,0);
        tracep->declBit(c+167,"riscv_top u_FF_Fetch_Decode i_StallD_en", false,-1);
        tracep->declBit(c+168,"riscv_top u_FF_Fetch_Decode i_FlushD_CLR", false,-1);
        tracep->declBit(c+137,"riscv_top u_pipe_datapath_Decode o_dp_RegWriteD", false,-1);
        tracep->declBit(c+138,"riscv_top u_pipe_datapath_Decode o_dp_ResultSrcD", false,-1);
        tracep->declBit(c+139,"riscv_top u_pipe_datapath_Decode o_dp_MemWriteD", false,-1);
        tracep->declBus(c+140,"riscv_top u_pipe_datapath_Decode o_dp_JumpD", false,-1, 1,0);
        tracep->declBit(c+141,"riscv_top u_pipe_datapath_Decode o_dp_BranchD", false,-1);
        tracep->declBus(c+142,"riscv_top u_pipe_datapath_Decode o_dp_ALUControlD", false,-1, 3,0);
        tracep->declBit(c+143,"riscv_top u_pipe_datapath_Decode o_dp_ALUSrcD", false,-1);
        tracep->declBus(c+144,"riscv_top u_pipe_datapath_Decode o_dp_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+145,"riscv_top u_pipe_datapath_Decode o_MUX_selD", false,-1, 1,0);
        tracep->declBus(c+233,"riscv_top u_pipe_datapath_Decode o_dp_RD1", false,-1, 31,0);
        tracep->declBus(c+234,"riscv_top u_pipe_datapath_Decode o_dp_RD2", false,-1, 31,0);
        tracep->declBus(c+146,"riscv_top u_pipe_datapath_Decode o_dp_ImmExtD", false,-1, 31,0);
        tracep->declBus(c+147,"riscv_top u_pipe_datapath_Decode o_dp_Rs1D", false,-1, 4,0);
        tracep->declBus(c+148,"riscv_top u_pipe_datapath_Decode o_dp_Rs2D", false,-1, 4,0);
        tracep->declBus(c+149,"riscv_top u_pipe_datapath_Decode o_dp_RdD", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_top u_pipe_datapath_Decode o_funct3D", false,-1, 2,0);
        tracep->declBus(c+136,"riscv_top u_pipe_datapath_Decode i_dp_instrD", false,-1, 31,0);
        tracep->declBus(c+163,"riscv_top u_pipe_datapath_Decode i_dp_dmem_WD3", false,-1, 31,0);
        tracep->declBit(c+164,"riscv_top u_pipe_datapath_Decode i_dp_WE3", false,-1);
        tracep->declBus(c+165,"riscv_top u_pipe_datapath_Decode i_RdW", false,-1, 4,0);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Decode i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_pipe_datapath_Decode i_rstn", false,-1);
        tracep->declBus(c+180,"riscv_top u_pipe_datapath_Decode dp_ImmSrcD", false,-1, 2,0);
        tracep->declBus(c+233,"riscv_top u_pipe_datapath_Decode u_riscv_regfile o_regfile_rs1_data", false,-1, 31,0);
        tracep->declBus(c+234,"riscv_top u_pipe_datapath_Decode u_riscv_regfile o_regfile_rs2_data", false,-1, 31,0);
        tracep->declBus(c+147,"riscv_top u_pipe_datapath_Decode u_riscv_regfile i_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+148,"riscv_top u_pipe_datapath_Decode u_riscv_regfile i_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+163,"riscv_top u_pipe_datapath_Decode u_riscv_regfile i_regfile_rd_data", false,-1, 31,0);
        tracep->declBus(c+165,"riscv_top u_pipe_datapath_Decode u_riscv_regfile i_regfile_rd_addr", false,-1, 4,0);
        tracep->declBit(c+164,"riscv_top u_pipe_datapath_Decode u_riscv_regfile i_regfile_rd_wen", false,-1);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Decode u_riscv_regfile i_clk", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+104+i*1,"riscv_top u_pipe_datapath_Decode u_riscv_regfile registers", true,(i+0), 31,0);}}
        tracep->declBus(c+146,"riscv_top u_pipe_datapath_Decode u_riscv_immext o_imm_ext", false,-1, 31,0);
        tracep->declBus(c+136,"riscv_top u_pipe_datapath_Decode u_riscv_immext i_imm_instr", false,-1, 31,0);
        tracep->declBus(c+180,"riscv_top u_pipe_datapath_Decode u_riscv_immext i_imm_src", false,-1, 2,0);
        tracep->declBit(c+137,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_RegWriteD", false,-1);
        tracep->declBit(c+138,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_ResultSrcD", false,-1);
        tracep->declBit(c+139,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_MemWriteD", false,-1);
        tracep->declBus(c+140,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_JumpD", false,-1, 1,0);
        tracep->declBit(c+141,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_BranchD", false,-1);
        tracep->declBus(c+142,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_ALUControlD", false,-1, 3,0);
        tracep->declBit(c+143,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_ALUSrcD", false,-1);
        tracep->declBus(c+180,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_ImmSrcD", false,-1, 2,0);
        tracep->declBus(c+144,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+145,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl o_ctrl_MUX_selD", false,-1, 1,0);
        tracep->declBus(c+181,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl i_ctrl_op", false,-1, 6,0);
        tracep->declBus(c+150,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl i_ctrl_funct3", false,-1, 2,0);
        tracep->declBit(c+182,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl i_ctrl_funct7_5b", false,-1);
        tracep->declArray(c+183,"riscv_top u_pipe_datapath_Decode u_pipe_ctrl DEBUG_INSTR", false,-1, 255,0);
        tracep->declBus(c+238,"riscv_top u_FF_Decode_Execute REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+70,"riscv_top u_FF_Decode_Execute MUX_selE", false,-1, 1,0);
        tracep->declBit(c+151,"riscv_top u_FF_Decode_Execute RegWriteE", false,-1);
        tracep->declBit(c+71,"riscv_top u_FF_Decode_Execute ResultSrcE", false,-1);
        tracep->declBit(c+152,"riscv_top u_FF_Decode_Execute MemWriteE", false,-1);
        tracep->declBus(c+72,"riscv_top u_FF_Decode_Execute JumpE", false,-1, 1,0);
        tracep->declBit(c+73,"riscv_top u_FF_Decode_Execute BranchE", false,-1);
        tracep->declBus(c+74,"riscv_top u_FF_Decode_Execute ALUContrlE", false,-1, 3,0);
        tracep->declBit(c+75,"riscv_top u_FF_Decode_Execute ALUSrcE", false,-1);
        tracep->declBus(c+76,"riscv_top u_FF_Decode_Execute mem_byte_selE", false,-1, 3,0);
        tracep->declBus(c+77,"riscv_top u_FF_Decode_Execute RD1E", false,-1, 31,0);
        tracep->declBus(c+78,"riscv_top u_FF_Decode_Execute RD2E", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_FF_Decode_Execute PCE", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top u_FF_Decode_Execute Rs1E", false,-1, 4,0);
        tracep->declBus(c+81,"riscv_top u_FF_Decode_Execute Rs2E", false,-1, 4,0);
        tracep->declBus(c+153,"riscv_top u_FF_Decode_Execute RdE", false,-1, 4,0);
        tracep->declBus(c+82,"riscv_top u_FF_Decode_Execute ExtImmE", false,-1, 31,0);
        tracep->declBus(c+83,"riscv_top u_FF_Decode_Execute funct3E", false,-1, 2,0);
        tracep->declBus(c+84,"riscv_top u_FF_Decode_Execute PCPlus4E", false,-1, 31,0);
        tracep->declBus(c+145,"riscv_top u_FF_Decode_Execute o_ctrl_MUX_selD", false,-1, 1,0);
        tracep->declBit(c+137,"riscv_top u_FF_Decode_Execute RegWriteD", false,-1);
        tracep->declBit(c+138,"riscv_top u_FF_Decode_Execute ResultSrcD", false,-1);
        tracep->declBit(c+139,"riscv_top u_FF_Decode_Execute MemWriteD", false,-1);
        tracep->declBus(c+140,"riscv_top u_FF_Decode_Execute JumpD", false,-1, 1,0);
        tracep->declBit(c+141,"riscv_top u_FF_Decode_Execute BranchD", false,-1);
        tracep->declBus(c+142,"riscv_top u_FF_Decode_Execute ALUContrlD", false,-1, 3,0);
        tracep->declBit(c+143,"riscv_top u_FF_Decode_Execute ALUSrcD", false,-1);
        tracep->declBus(c+144,"riscv_top u_FF_Decode_Execute o_dp_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+233,"riscv_top u_FF_Decode_Execute RD1", false,-1, 31,0);
        tracep->declBus(c+234,"riscv_top u_FF_Decode_Execute RD2", false,-1, 31,0);
        tracep->declBus(c+69,"riscv_top u_FF_Decode_Execute PCD", false,-1, 31,0);
        tracep->declBus(c+147,"riscv_top u_FF_Decode_Execute Rs1D", false,-1, 4,0);
        tracep->declBus(c+148,"riscv_top u_FF_Decode_Execute Rs2D", false,-1, 4,0);
        tracep->declBus(c+149,"riscv_top u_FF_Decode_Execute RdD", false,-1, 4,0);
        tracep->declBus(c+146,"riscv_top u_FF_Decode_Execute ExtImmD", false,-1, 31,0);
        tracep->declBus(c+150,"riscv_top u_FF_Decode_Execute funct3D", false,-1, 2,0);
        tracep->declBus(c+68,"riscv_top u_FF_Decode_Execute PCPlus4D", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_top u_FF_Decode_Execute i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_FF_Decode_Execute i_rstn", false,-1);
        tracep->declBit(c+169,"riscv_top u_FF_Decode_Execute i_FlushE_CLR", false,-1);
        tracep->declBus(c+238,"riscv_top u_pipe_datapath_Execute REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+154,"riscv_top u_pipe_datapath_Execute o_dp_ALU", false,-1, 31,0);
        tracep->declBus(c+155,"riscv_top u_pipe_datapath_Execute o_dp_WriteDataE", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top u_pipe_datapath_Execute o_dp_PC_Plus_immE", false,-1, 31,0);
        tracep->declBus(c+156,"riscv_top u_pipe_datapath_Execute o_PCSrcE", false,-1, 1,0);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Execute i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_pipe_datapath_Execute i_rstn", false,-1);
        tracep->declBus(c+77,"riscv_top u_pipe_datapath_Execute i_dp_RD1E", false,-1, 31,0);
        tracep->declBus(c+78,"riscv_top u_pipe_datapath_Execute i_dp_RD2E", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_pipe_datapath_Execute i_dp_PCE", false,-1, 31,0);
        tracep->declBus(c+82,"riscv_top u_pipe_datapath_Execute i_dp_ImmExtE", false,-1, 31,0);
        tracep->declBus(c+163,"riscv_top u_pipe_datapath_Execute i_dp_ResultW", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_pipe_datapath_Execute i_dp_4to1mux", false,-1, 31,0);
        tracep->declBus(c+170,"riscv_top u_pipe_datapath_Execute ForWardAE", false,-1, 1,0);
        tracep->declBus(c+171,"riscv_top u_pipe_datapath_Execute ForWardBE", false,-1, 1,0);
        tracep->declBit(c+75,"riscv_top u_pipe_datapath_Execute ALUSrcE", false,-1);
        tracep->declBus(c+74,"riscv_top u_pipe_datapath_Execute i_dp_ALUContrlE", false,-1, 3,0);
        tracep->declBus(c+72,"riscv_top u_pipe_datapath_Execute i_dp_JumpE", false,-1, 1,0);
        tracep->declBit(c+73,"riscv_top u_pipe_datapath_Execute i_dp_BranchE", false,-1);
        tracep->declBus(c+83,"riscv_top u_pipe_datapath_Execute i_dp_ctrl_funct3", false,-1, 2,0);
        tracep->declBit(c+191,"riscv_top u_pipe_datapath_Execute o_dp_ALU_Zero", false,-1);
        tracep->declBit(c+235,"riscv_top u_pipe_datapath_Execute and_output", false,-1);
        tracep->declBit(c+192,"riscv_top u_pipe_datapath_Execute take_branch", false,-1);
        tracep->declBus(c+193,"riscv_top u_pipe_datapath_Execute SrcAE", false,-1, 31,0);
        tracep->declBus(c+194,"riscv_top u_pipe_datapath_Execute SrcBE", false,-1, 31,0);
        tracep->declBus(c+155,"riscv_top u_pipe_datapath_Execute mux_c_RD2E", false,-1, 31,0);
        tracep->declBus(c+82,"riscv_top u_pipe_datapath_Execute mux_c_ExtImmE", false,-1, 31,0);
        tracep->declArray(c+195,"riscv_top u_pipe_datapath_Execute mux_concat_alu_a", false,-1, 95,0);
        tracep->declArray(c+198,"riscv_top u_pipe_datapath_Execute mux_concat_alu_b", false,-1, 95,0);
        tracep->declQuad(c+201,"riscv_top u_pipe_datapath_Execute mux_concat_alu_c", false,-1, 63,0);
        tracep->declBus(c+154,"riscv_top u_pipe_datapath_Execute u_riscv_alu o_alu_result", false,-1, 31,0);
        tracep->declBit(c+191,"riscv_top u_pipe_datapath_Execute u_riscv_alu o_alu_zero", false,-1);
        tracep->declBus(c+193,"riscv_top u_pipe_datapath_Execute u_riscv_alu i_alu_a", false,-1, 31,0);
        tracep->declBus(c+194,"riscv_top u_pipe_datapath_Execute u_riscv_alu i_alu_b", false,-1, 31,0);
        tracep->declBus(c+74,"riscv_top u_pipe_datapath_Execute u_riscv_alu i_alu_ctrl", false,-1, 3,0);
        tracep->declQuad(c+98,"riscv_top u_pipe_datapath_Execute u_riscv_alu DEBUG_ALU_OP", false,-1, 63,0);
        tracep->declBus(c+85,"riscv_top u_pipe_datapath_Execute u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_pipe_datapath_Execute u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+82,"riscv_top u_pipe_datapath_Execute u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBus(c+247,"riscv_top u_pipe_datapath_Execute u_riscv_mux_a N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+193,"riscv_top u_pipe_datapath_Execute u_riscv_mux_a o_mux_data", false,-1, 31,0);
        tracep->declArray(c+195,"riscv_top u_pipe_datapath_Execute u_riscv_mux_a i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+170,"riscv_top u_pipe_datapath_Execute u_riscv_mux_a i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+203+i*1,"riscv_top u_pipe_datapath_Execute u_riscv_mux_a mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+247,"riscv_top u_pipe_datapath_Execute u_riscv_mux_b N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+155,"riscv_top u_pipe_datapath_Execute u_riscv_mux_b o_mux_data", false,-1, 31,0);
        tracep->declArray(c+198,"riscv_top u_pipe_datapath_Execute u_riscv_mux_b i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+171,"riscv_top u_pipe_datapath_Execute u_riscv_mux_b i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+206+i*1,"riscv_top u_pipe_datapath_Execute u_riscv_mux_b mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+248,"riscv_top u_pipe_datapath_Execute u_riscv_mux_c N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+194,"riscv_top u_pipe_datapath_Execute u_riscv_mux_c o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+201,"riscv_top u_pipe_datapath_Execute u_riscv_mux_c i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+75,"riscv_top u_pipe_datapath_Execute u_riscv_mux_c i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+209+i*1,"riscv_top u_pipe_datapath_Execute u_riscv_mux_c mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+238,"riscv_top u_FF_Execute_Memory REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top u_FF_Execute_Memory MUX_selM", false,-1, 1,0);
        tracep->declBit(c+157,"riscv_top u_FF_Execute_Memory RegWriteM", false,-1);
        tracep->declBit(c+87,"riscv_top u_FF_Execute_Memory ResultSrcM", false,-1);
        tracep->declBit(c+158,"riscv_top u_FF_Execute_Memory MemWriteM", false,-1);
        tracep->declBus(c+88,"riscv_top u_FF_Execute_Memory mem_byte_selM", false,-1, 3,0);
        tracep->declBus(c+159,"riscv_top u_FF_Execute_Memory ALUResultM", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top u_FF_Execute_Memory WriteDataM", false,-1, 31,0);
        tracep->declBus(c+90,"riscv_top u_FF_Execute_Memory PC_Plus_immM", false,-1, 31,0);
        tracep->declBus(c+160,"riscv_top u_FF_Execute_Memory RdM", false,-1, 4,0);
        tracep->declBus(c+91,"riscv_top u_FF_Execute_Memory ExtImmM", false,-1, 31,0);
        tracep->declBus(c+92,"riscv_top u_FF_Execute_Memory PCPlus4M", false,-1, 31,0);
        tracep->declBus(c+96,"riscv_top u_FF_Execute_Memory funct3M", false,-1, 2,0);
        tracep->declBus(c+83,"riscv_top u_FF_Execute_Memory funct3E", false,-1, 2,0);
        tracep->declBit(c+231,"riscv_top u_FF_Execute_Memory i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_FF_Execute_Memory i_rstn", false,-1);
        tracep->declBus(c+70,"riscv_top u_FF_Execute_Memory MUX_selE", false,-1, 1,0);
        tracep->declBit(c+151,"riscv_top u_FF_Execute_Memory RegWriteE", false,-1);
        tracep->declBit(c+71,"riscv_top u_FF_Execute_Memory ResultSrcE", false,-1);
        tracep->declBit(c+152,"riscv_top u_FF_Execute_Memory MemWriteE", false,-1);
        tracep->declBus(c+144,"riscv_top u_FF_Execute_Memory mem_byte_selE", false,-1, 3,0);
        tracep->declBus(c+154,"riscv_top u_FF_Execute_Memory o_dp_ALU", false,-1, 31,0);
        tracep->declBus(c+155,"riscv_top u_FF_Execute_Memory o_dp_WriteDataE", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top u_FF_Execute_Memory o_dp_PC_Plus_immE", false,-1, 31,0);
        tracep->declBus(c+153,"riscv_top u_FF_Execute_Memory RdE", false,-1, 4,0);
        tracep->declBus(c+82,"riscv_top u_FF_Execute_Memory ExtImmE", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top u_FF_Execute_Memory PCPlus4E", false,-1, 31,0);
        tracep->declBus(c+238,"riscv_top u_pipe_datapath_Memory REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+161,"riscv_top u_pipe_datapath_Memory o_dp_dmem_RD", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_pipe_datapath_Memory o_dp_4to1muxM", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Memory i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_pipe_datapath_Memory i_rstn", false,-1);
        tracep->declBus(c+96,"riscv_top u_pipe_datapath_Memory i_dp_mem_funct3", false,-1, 2,0);
        tracep->declBus(c+159,"riscv_top u_pipe_datapath_Memory i_dp_ALUResultM", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top u_pipe_datapath_Memory i_dp_WriteDataM", false,-1, 31,0);
        tracep->declBus(c+91,"riscv_top u_pipe_datapath_Memory i_dp_ExtImmM", false,-1, 31,0);
        tracep->declBus(c+92,"riscv_top u_pipe_datapath_Memory i_dp_PCPlus4M", false,-1, 31,0);
        tracep->declBus(c+90,"riscv_top u_pipe_datapath_Memory i_dp_PCPlusImm", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top u_pipe_datapath_Memory o_MUX_selM", false,-1, 1,0);
        tracep->declBit(c+158,"riscv_top u_pipe_datapath_Memory i_dp_MemWriteM", false,-1);
        tracep->declBus(c+88,"riscv_top u_pipe_datapath_Memory mem_byte_selM", false,-1, 3,0);
        tracep->declArray(c+211,"riscv_top u_pipe_datapath_Memory mux_concat_4to1", false,-1, 127,0);
        tracep->declBit(c+158,"riscv_top u_pipe_datapath_Memory dmem_wr_en", false,-1);
        tracep->declBus(c+159,"riscv_top u_pipe_datapath_Memory dmem_addr", false,-1, 31,0);
        tracep->declBus(c+236,"riscv_top u_pipe_datapath_Memory dmem_rd_data", false,-1, 31,0);
        tracep->declBus(c+215,"riscv_top u_pipe_datapath_Memory dmem_write_data", false,-1, 31,0);
        tracep->declBus(c+216,"riscv_top u_pipe_datapath_Memory dmem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+159,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface o_dmem_intf_addr", false,-1, 31,0);
        tracep->declBit(c+158,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface o_dmem_intf_wen", false,-1);
        tracep->declBus(c+159,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface i_dmem_intf_addr", false,-1, 31,0);
        tracep->declBit(c+158,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface i_dmem_intf_wen", false,-1);
        tracep->declBus(c+215,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface o_dmem_intf_wr_data", false,-1, 31,0);
        tracep->declBus(c+216,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface o_dmem_intf_byte_sel", false,-1, 3,0);
        tracep->declBus(c+161,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface o_dmem_intf_rd_data", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface i_dmem_intf_wr_data", false,-1, 31,0);
        tracep->declBus(c+88,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface i_dmem_intf_byte_sel", false,-1, 3,0);
        tracep->declBus(c+236,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface i_dmem_intf_rd_data", false,-1, 31,0);
        tracep->declBus(c+96,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface i_dmem_intf_func3", false,-1, 2,0);
        tracep->declBus(c+217,"riscv_top u_pipe_datapath_Memory u_riscv_dmem_interface byte_aligned_dmem_rd_data", false,-1, 31,0);
        tracep->declBus(c+236,"riscv_top u_pipe_datapath_Memory u_riscv_dmem o_dmem_data", false,-1, 31,0);
        tracep->declBus(c+215,"riscv_top u_pipe_datapath_Memory u_riscv_dmem i_dmem_data", false,-1, 31,0);
        tracep->declBus(c+218,"riscv_top u_pipe_datapath_Memory u_riscv_dmem i_dmem_addr", false,-1, 13,0);
        tracep->declBus(c+216,"riscv_top u_pipe_datapath_Memory u_riscv_dmem i_dmem_byte_sel", false,-1, 3,0);
        tracep->declBit(c+158,"riscv_top u_pipe_datapath_Memory u_riscv_dmem i_dmem_wr_en", false,-1);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Memory u_riscv_dmem i_clk", false,-1);
        tracep->declArray(c+33,"riscv_top u_pipe_datapath_Memory u_riscv_dmem FILE_DATA_MIF", false,-1, 1023,0);
        tracep->declBus(c+237,"riscv_top u_pipe_datapath_Memory u_riscv_dmem i", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_top u_pipe_datapath_Memory u_riscv_mux N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_pipe_datapath_Memory u_riscv_mux o_mux_data", false,-1, 31,0);
        tracep->declArray(c+211,"riscv_top u_pipe_datapath_Memory u_riscv_mux i_mux_concat_data", false,-1, 127,0);
        tracep->declBus(c+86,"riscv_top u_pipe_datapath_Memory u_riscv_mux i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+219+i*1,"riscv_top u_pipe_datapath_Memory u_riscv_mux mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+238,"riscv_top u_FF_Memory_Writeback REGISTER_INIT", false,-1, 31,0);
        tracep->declBit(c+164,"riscv_top u_FF_Memory_Writeback RegWriteW", false,-1);
        tracep->declBit(c+93,"riscv_top u_FF_Memory_Writeback ResultSrcW", false,-1);
        tracep->declBus(c+94,"riscv_top u_FF_Memory_Writeback ReadDataW", false,-1, 31,0);
        tracep->declBus(c+95,"riscv_top u_FF_Memory_Writeback o_dp_4to1muxW", false,-1, 31,0);
        tracep->declBus(c+165,"riscv_top u_FF_Memory_Writeback RdW", false,-1, 4,0);
        tracep->declBit(c+157,"riscv_top u_FF_Memory_Writeback RegWriteM", false,-1);
        tracep->declBit(c+87,"riscv_top u_FF_Memory_Writeback ResultSrcM", false,-1);
        tracep->declBus(c+161,"riscv_top u_FF_Memory_Writeback o_dp_dmem_RD", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_FF_Memory_Writeback o_dp_4to1muxM", false,-1, 31,0);
        tracep->declBus(c+160,"riscv_top u_FF_Memory_Writeback RdM", false,-1, 4,0);
        tracep->declBit(c+231,"riscv_top u_FF_Memory_Writeback i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_FF_Memory_Writeback i_rstn", false,-1);
        tracep->declBus(c+238,"riscv_top u_pipe_datapath_Writeback REGISTER_INIT", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_top u_pipe_datapath_Writeback i_clk", false,-1);
        tracep->declBit(c+232,"riscv_top u_pipe_datapath_Writeback i_rstn", false,-1);
        tracep->declBus(c+94,"riscv_top u_pipe_datapath_Writeback i_dp_ReadDataW", false,-1, 31,0);
        tracep->declBus(c+95,"riscv_top u_pipe_datapath_Writeback i_dp_4to1muxW", false,-1, 31,0);
        tracep->declBit(c+93,"riscv_top u_pipe_datapath_Writeback i_dp_ResultSrcW", false,-1);
        tracep->declBus(c+163,"riscv_top u_pipe_datapath_Writeback o_dp_ResultW", false,-1, 31,0);
        tracep->declQuad(c+100,"riscv_top u_pipe_datapath_Writeback mux_concat_rd", false,-1, 63,0);
        tracep->declBus(c+248,"riscv_top u_pipe_datapath_Writeback u_riscv_mux N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+163,"riscv_top u_pipe_datapath_Writeback u_riscv_mux o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+100,"riscv_top u_pipe_datapath_Writeback u_riscv_mux i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+93,"riscv_top u_pipe_datapath_Writeback u_riscv_mux i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+102+i*1,"riscv_top u_pipe_datapath_Writeback u_riscv_mux mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBit(c+166,"riscv_top u_hazard_unit StallF", false,-1);
        tracep->declBit(c+167,"riscv_top u_hazard_unit StallD", false,-1);
        tracep->declBit(c+168,"riscv_top u_hazard_unit FlushD", false,-1);
        tracep->declBit(c+169,"riscv_top u_hazard_unit FlushE", false,-1);
        tracep->declBus(c+170,"riscv_top u_hazard_unit ForwardAE", false,-1, 1,0);
        tracep->declBus(c+171,"riscv_top u_hazard_unit ForwardBE", false,-1, 1,0);
        tracep->declBus(c+147,"riscv_top u_hazard_unit Rs1D", false,-1, 4,0);
        tracep->declBus(c+148,"riscv_top u_hazard_unit Rs2D", false,-1, 4,0);
        tracep->declBus(c+153,"riscv_top u_hazard_unit RdE", false,-1, 4,0);
        tracep->declBus(c+80,"riscv_top u_hazard_unit Rs1E", false,-1, 4,0);
        tracep->declBus(c+81,"riscv_top u_hazard_unit Rs2E", false,-1, 4,0);
        tracep->declBus(c+160,"riscv_top u_hazard_unit RdM", false,-1, 4,0);
        tracep->declBit(c+157,"riscv_top u_hazard_unit RegWriteM", false,-1);
        tracep->declBus(c+165,"riscv_top u_hazard_unit RdW", false,-1, 4,0);
        tracep->declBit(c+164,"riscv_top u_hazard_unit RegWriteW", false,-1);
        tracep->declBit(c+71,"riscv_top u_hazard_unit ResultSrcE", false,-1);
        tracep->declBus(c+156,"riscv_top u_hazard_unit PCSrcE", false,-1, 1,0);
        tracep->declBit(c+223,"riscv_top u_hazard_unit lwStall", false,-1);
    }
}

void Vriscv_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vriscv_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vriscv_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullWData(oldp+1,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF),1024);
        tracep->fullWData(oldp+33,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF),1024);
        tracep->fullIData(oldp+65,(vlTOPp->riscv_top__DOT__o_dp_imem_RD),32);
        tracep->fullIData(oldp+66,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF),32);
        tracep->fullIData(oldp+67,(((IData)(4U) + vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF)),32);
        tracep->fullIData(oldp+68,(vlTOPp->riscv_top__DOT__o_PCPlus4D),32);
        tracep->fullIData(oldp+69,(vlTOPp->riscv_top__DOT__o_PCD),32);
        tracep->fullCData(oldp+70,(vlTOPp->riscv_top__DOT__MUX_selE),2);
        tracep->fullBit(oldp+71,(vlTOPp->riscv_top__DOT__ResultSrcE));
        tracep->fullCData(oldp+72,(vlTOPp->riscv_top__DOT__JumpE),2);
        tracep->fullBit(oldp+73,(vlTOPp->riscv_top__DOT__BranchE));
        tracep->fullCData(oldp+74,(vlTOPp->riscv_top__DOT__ALUContrlE),4);
        tracep->fullBit(oldp+75,(vlTOPp->riscv_top__DOT__ALUSrcE));
        tracep->fullCData(oldp+76,(vlTOPp->riscv_top__DOT__mem_byte_selE),4);
        tracep->fullIData(oldp+77,(vlTOPp->riscv_top__DOT__RD1E),32);
        tracep->fullIData(oldp+78,(vlTOPp->riscv_top__DOT__RD2E),32);
        tracep->fullIData(oldp+79,(vlTOPp->riscv_top__DOT__PCE),32);
        tracep->fullCData(oldp+80,(vlTOPp->riscv_top__DOT__Rs1E),5);
        tracep->fullCData(oldp+81,(vlTOPp->riscv_top__DOT__Rs2E),5);
        tracep->fullIData(oldp+82,(vlTOPp->riscv_top__DOT__ExtImmE),32);
        tracep->fullCData(oldp+83,(vlTOPp->riscv_top__DOT__funct3E),3);
        tracep->fullIData(oldp+84,(vlTOPp->riscv_top__DOT__PCPlus4E),32);
        tracep->fullIData(oldp+85,(vlTOPp->riscv_top__DOT__o_dp_PC_Plus_immE),32);
        tracep->fullCData(oldp+86,(vlTOPp->riscv_top__DOT__MUX_selM),2);
        tracep->fullBit(oldp+87,(vlTOPp->riscv_top__DOT__ResultSrcM));
        tracep->fullCData(oldp+88,(vlTOPp->riscv_top__DOT__mem_byte_selM),4);
        tracep->fullIData(oldp+89,(vlTOPp->riscv_top__DOT__WriteDataM),32);
        tracep->fullIData(oldp+90,(vlTOPp->riscv_top__DOT__PC_Plus_immM),32);
        tracep->fullIData(oldp+91,(vlTOPp->riscv_top__DOT__ExtImmM),32);
        tracep->fullIData(oldp+92,(vlTOPp->riscv_top__DOT__PCPlus4M),32);
        tracep->fullBit(oldp+93,(vlTOPp->riscv_top__DOT__ResultSrcW));
        tracep->fullIData(oldp+94,(vlTOPp->riscv_top__DOT__ReadDataW),32);
        tracep->fullIData(oldp+95,(vlTOPp->riscv_top__DOT__o_dp_4to1muxW),32);
        tracep->fullCData(oldp+96,(vlTOPp->riscv_top__DOT__mem_funct3),3);
        tracep->fullSData(oldp+97,((0x3fffU & (vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__PCF 
                                               >> 2U))),14);
        tracep->fullQData(oldp+98,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP),64);
        tracep->fullQData(oldp+100,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__mux_concat_rd),64);
        tracep->fullIData(oldp+102,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+103,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Writeback__DOT__u_riscv_mux__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+104,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[0]),32);
        tracep->fullIData(oldp+105,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[1]),32);
        tracep->fullIData(oldp+106,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[2]),32);
        tracep->fullIData(oldp+107,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[3]),32);
        tracep->fullIData(oldp+108,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[4]),32);
        tracep->fullIData(oldp+109,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[5]),32);
        tracep->fullIData(oldp+110,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[6]),32);
        tracep->fullIData(oldp+111,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[7]),32);
        tracep->fullIData(oldp+112,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[8]),32);
        tracep->fullIData(oldp+113,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[9]),32);
        tracep->fullIData(oldp+114,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[10]),32);
        tracep->fullIData(oldp+115,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[11]),32);
        tracep->fullIData(oldp+116,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[12]),32);
        tracep->fullIData(oldp+117,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[13]),32);
        tracep->fullIData(oldp+118,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[14]),32);
        tracep->fullIData(oldp+119,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[15]),32);
        tracep->fullIData(oldp+120,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[16]),32);
        tracep->fullIData(oldp+121,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[17]),32);
        tracep->fullIData(oldp+122,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[18]),32);
        tracep->fullIData(oldp+123,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[19]),32);
        tracep->fullIData(oldp+124,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[20]),32);
        tracep->fullIData(oldp+125,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[21]),32);
        tracep->fullIData(oldp+126,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[22]),32);
        tracep->fullIData(oldp+127,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[23]),32);
        tracep->fullIData(oldp+128,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[24]),32);
        tracep->fullIData(oldp+129,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[25]),32);
        tracep->fullIData(oldp+130,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[26]),32);
        tracep->fullIData(oldp+131,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[27]),32);
        tracep->fullIData(oldp+132,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[28]),32);
        tracep->fullIData(oldp+133,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[29]),32);
        tracep->fullIData(oldp+134,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[30]),32);
        tracep->fullIData(oldp+135,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers[31]),32);
        tracep->fullIData(oldp+136,(vlTOPp->riscv_top__DOT__o_instrD),32);
        tracep->fullBit(oldp+137,((1U & (~ ((0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instrD)) 
                                            | (0x63U 
                                               == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD)))))));
        tracep->fullBit(oldp+138,((3U != (0x7fU & vlTOPp->riscv_top__DOT__o_instrD))));
        tracep->fullBit(oldp+139,((0x23U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instrD))));
        tracep->fullCData(oldp+140,(((0x6fU == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instrD))
                                      ? 1U : ((0x67U 
                                               == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instrD))
                                               ? 2U
                                               : 0U))),2);
        tracep->fullBit(oldp+141,((0x63U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instrD))));
        tracep->fullCData(oldp+142,(vlTOPp->riscv_top__DOT__o_dp_ALUControlD),4);
        tracep->fullBit(oldp+143,(vlTOPp->riscv_top__DOT__o_dp_ALUSrcD));
        tracep->fullCData(oldp+144,(vlTOPp->riscv_top__DOT__o_dp_mem_byte_sel),4);
        tracep->fullCData(oldp+145,(vlTOPp->riscv_top__DOT__o_MUX_selD),2);
        tracep->fullIData(oldp+146,(vlTOPp->riscv_top__DOT__o_dp_ImmExtD),32);
        tracep->fullCData(oldp+147,((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+148,((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+149,((0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                              >> 7U))),5);
        tracep->fullCData(oldp+150,((7U & (vlTOPp->riscv_top__DOT__o_instrD 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+151,(vlTOPp->riscv_top__DOT__RegWriteE));
        tracep->fullBit(oldp+152,(vlTOPp->riscv_top__DOT__MemWriteE));
        tracep->fullCData(oldp+153,(vlTOPp->riscv_top__DOT__RdE),5);
        tracep->fullIData(oldp+154,(vlTOPp->riscv_top__DOT__o_dp_ALU),32);
        tracep->fullIData(oldp+155,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_c_RD2E),32);
        tracep->fullCData(oldp+156,(vlTOPp->riscv_top__DOT__o_PCSrcE),2);
        tracep->fullBit(oldp+157,(vlTOPp->riscv_top__DOT__RegWriteM));
        tracep->fullBit(oldp+158,(vlTOPp->riscv_top__DOT__MemWriteM));
        tracep->fullIData(oldp+159,(vlTOPp->riscv_top__DOT__ALUResultM),32);
        tracep->fullCData(oldp+160,(vlTOPp->riscv_top__DOT__RdM),5);
        tracep->fullIData(oldp+161,(vlTOPp->riscv_top__DOT__o_dp_dmem_RD),32);
        tracep->fullIData(oldp+162,(vlTOPp->riscv_top__DOT__o_dp_4to1muxM),32);
        tracep->fullIData(oldp+163,(vlTOPp->riscv_top__DOT__o_dp_ResultW),32);
        tracep->fullBit(oldp+164,(vlTOPp->riscv_top__DOT__RegWriteW));
        tracep->fullCData(oldp+165,(vlTOPp->riscv_top__DOT__RdW),5);
        tracep->fullBit(oldp+166,(vlTOPp->riscv_top__DOT__StallF));
        tracep->fullBit(oldp+167,(vlTOPp->riscv_top__DOT__StallD));
        tracep->fullBit(oldp+168,(vlTOPp->riscv_top__DOT__FlushD));
        tracep->fullBit(oldp+169,(vlTOPp->riscv_top__DOT__FlushE));
        tracep->fullCData(oldp+170,(vlTOPp->riscv_top__DOT__ForwardAE),2);
        tracep->fullCData(oldp+171,(vlTOPp->riscv_top__DOT__ForwardBE),2);
        tracep->fullIData(oldp+172,(((2U >= (IData)(vlTOPp->riscv_top__DOT__o_PCSrcE))
                                      ? vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr
                                     [vlTOPp->riscv_top__DOT__o_PCSrcE]
                                      : 0U)),32);
        tracep->fullWData(oldp+173,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__mux_concat_pc),96);
        tracep->fullBit(oldp+176,((1U & (~ (IData)(vlTOPp->riscv_top__DOT__StallF)))));
        tracep->fullIData(oldp+177,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+178,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+179,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Fetch__DOT__u_riscv_mux__DOT__mux_input_arr[2]),32);
        tracep->fullCData(oldp+180,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__dp_ImmSrcD),3);
        tracep->fullCData(oldp+181,((0x7fU & vlTOPp->riscv_top__DOT__o_instrD)),7);
        tracep->fullBit(oldp+182,((1U & (vlTOPp->riscv_top__DOT__o_instrD 
                                         >> 0x1eU))));
        tracep->fullWData(oldp+183,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_pipe_ctrl__DOT__DEBUG_INSTR),256);
        tracep->fullBit(oldp+191,((0U == vlTOPp->riscv_top__DOT__o_dp_ALU)));
        tracep->fullBit(oldp+192,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch));
        tracep->fullIData(oldp+193,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcAE),32);
        tracep->fullIData(oldp+194,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__SrcBE),32);
        tracep->fullWData(oldp+195,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_a),96);
        tracep->fullWData(oldp+198,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_b),96);
        tracep->fullQData(oldp+201,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__mux_concat_alu_c),64);
        tracep->fullIData(oldp+203,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+204,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+205,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_a__DOT__mux_input_arr[2]),32);
        tracep->fullIData(oldp+206,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+207,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+208,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_b__DOT__mux_input_arr[2]),32);
        tracep->fullIData(oldp+209,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+210,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__u_riscv_mux_c__DOT__mux_input_arr[1]),32);
        tracep->fullWData(oldp+211,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__mux_concat_4to1),128);
        tracep->fullIData(oldp+215,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_write_data),32);
        tracep->fullCData(oldp+216,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__dmem_byte_sel),4);
        tracep->fullIData(oldp+217,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data),32);
        tracep->fullSData(oldp+218,((0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                                                >> 2U))),14);
        tracep->fullIData(oldp+219,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+220,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+221,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[2]),32);
        tracep->fullIData(oldp+222,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_mux__DOT__mux_input_arr[3]),32);
        tracep->fullBit(oldp+223,(vlTOPp->riscv_top__DOT__u_hazard_unit__DOT__lwStall));
        tracep->fullIData(oldp+224,(vlTOPp->o_riscv_imem_pc),32);
        tracep->fullIData(oldp+225,(vlTOPp->o_riscv_imem_instr),32);
        tracep->fullIData(oldp+226,(vlTOPp->o_riscv_dmem_addr),32);
        tracep->fullBit(oldp+227,(vlTOPp->o_riscv_dmem_wr_en));
        tracep->fullCData(oldp+228,(vlTOPp->o_riscv_dmem_byte_sel),4);
        tracep->fullIData(oldp+229,(vlTOPp->o_riscv_dmem_wr_data),32);
        tracep->fullIData(oldp+230,(vlTOPp->o_riscv_dmem_rd_data),32);
        tracep->fullBit(oldp+231,(vlTOPp->i_clk));
        tracep->fullBit(oldp+232,(vlTOPp->i_rstn));
        tracep->fullIData(oldp+233,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                               >> 0xfU))]),32);
        tracep->fullIData(oldp+234,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top__DOT__o_instrD 
                                               >> 0x14U))]),32);
        tracep->fullBit(oldp+235,(((IData)(vlTOPp->riscv_top__DOT__u_pipe_datapath_Execute__DOT__take_branch) 
                                   & (IData)(vlTOPp->riscv_top__DOT__BranchE))));
        tracep->fullIData(oldp+236,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                    [(0x3fffU & (vlTOPp->riscv_top__DOT__ALUResultM 
                                                 >> 2U))]),32);
        tracep->fullIData(oldp+237,(vlTOPp->riscv_top__DOT__u_pipe_datapath_Memory__DOT__u_riscv_dmem__DOT__i),32);
        tracep->fullIData(oldp+238,(0U),32);
        tracep->fullIData(oldp+239,(vlTOPp->riscv_top__DOT__PCTargetE),32);
        tracep->fullIData(oldp+240,(vlTOPp->riscv_top__DOT__i_dp_dmem_WD3),32);
        tracep->fullBit(oldp+241,(vlTOPp->riscv_top__DOT__i_dp_WE3));
        tracep->fullCData(oldp+242,(vlTOPp->riscv_top__DOT__i_RdW),5);
        tracep->fullCData(oldp+243,(vlTOPp->riscv_top__DOT__ForWardAE),2);
        tracep->fullCData(oldp+244,(vlTOPp->riscv_top__DOT__ForWardBE),2);
        tracep->fullCData(oldp+245,(vlTOPp->riscv_top__DOT__o_mem_byte_sel),4);
        tracep->fullIData(oldp+246,(4U),32);
        tracep->fullIData(oldp+247,(3U),32);
        tracep->fullIData(oldp+248,(2U),32);
        tracep->fullIData(oldp+249,(4U),32);
    }
}
