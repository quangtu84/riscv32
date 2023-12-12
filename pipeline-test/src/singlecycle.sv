/*
5 stage: 
	1. IF (instruction fetch): PC, PC+4, IMEM, PC_sel_mux
	2. ID (instruction Decode): regfile,  control_unit
	3. EX (instruction excecute): brcomp, op_a_sel, op_b_sel, alu, immgen
	4. MEM (memory access): lsu
	5. WB (write back): wb_data, wb_sel_mux
*/
////`include "constants.sv"
`include "src/constants.sv"
/* verilator lint_off MULTITOP */
module singlecycle (
    input logic clk_i,
    input logic rst_ni,
    input logic [31:0] io_sw_i,

    output logic [31:0] io_lcd_o,
    output logic [31:0] io_ledg_o,
    output logic [31:0] io_ledr_o,
    output logic [31:0] io_hex0_o,
    output logic [31:0] io_hex1_o,
    output logic [31:0] io_hex2_o,
    output logic [31:0] io_hex3_o,
    output logic [31:0] io_hex4_o,
    output logic [31:0] io_hex5_o,
    output logic [31:0] io_hex6_o,
    output logic [31:0] io_hex7_o
);
	localparam PL_IF  = 0; //instruction fetch
	localparam PL_ID  = 1; //instruction decode
	localparam PL_EX  = 2; //instruction execute
	localparam PL_MEM = 3; //memory access
	localparam PL_WB  = 4; //write back
	//reset
	logic        id_reset_n, ex_reset_n, mem_reset_n, wb_reset_n;
  logic        enable      [PL_ID : PL_WB];
	//imem
	logic [31:0] instr       [PL_IF : PL_WB];
	logic [31:0] pc          [PL_IF : PL_WB];
	logic        pc_enable   [PL_IF : PL_IF];
	logic [31:0] pc_IF_four  [PL_IF : PL_IF];
  logic [31:0] pc_WB_four  [PL_WB : PL_WB];
  logic [31:0] nxt_pc      [PL_IF : PL_IF];  
	//regfile
	logic [31:0] rs1_data    [PL_ID : PL_EX];
	logic [31:0] rs2_data    [PL_ID : PL_MEM];
  logic [31:0] rs1_data_wb [PL_EX : PL_EX];
  logic [31:0] rs2_data_wb [PL_EX : PL_EX];
  logic [4:0]  rs1_addr    [PL_ID : PL_EX];
  logic [4:0]  rs2_addr    [PL_ID : PL_EX];
  logic [4:0]  rd_addr     [PL_EX : PL_WB];
	logic        rd_wren     [PL_ID : PL_WB];	
  //immgen
  logic [31:0] imm         [PL_EX : PL_WB];
	//alu
	logic [31:0] ex_alu_data, mem_alu_data, wb_alu_data;
	logic [3 :0] alu_op      [PL_ID : PL_EX];
	logic        op_a_sel    [PL_ID : PL_EX];
	logic        op_b_sel    [PL_ID : PL_EX];
  logic [31:0] operand_a   [PL_EX : PL_EX];
  logic [31:0] operand_b   [PL_EX : PL_EX];

	//lsu
	logic [2:0]  mem_op      [PL_ID : PL_MEM];
	logic        mem_wren    [PL_ID : PL_MEM];
	logic [31:0] ld_data     [PL_MEM: PL_WB];
	//wb
	logic [31:0] wb_data     [PL_WB : PL_WB];
	logic [1:0]  wb_sel      [PL_ID : PL_WB];
  //brcomp
  logic        br_sel      [PL_EX : PL_EX];
  //forward
  logic [1:0]  forward_rs1_data;
  logic [1:0]  forward_rs2_data;

  assign rs1_addr[PL_ID] = instr[PL_ID][19:15];
  assign rs2_addr[PL_ID] = instr[PL_ID][24:20];
  assign rs1_addr[PL_EX] = instr[PL_EX][19:15];
  assign rs2_addr[PL_EX] = instr[PL_EX][24:20];  
  assign rd_addr [PL_EX] = instr[PL_EX][11:7];
  assign rd_addr [PL_MEM]= instr[PL_MEM][11:7];
  assign rd_addr [PL_WB] = instr[PL_WB][11:7];

    //ID Pipeline Register
    id_reg id_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(id_reset_n),
      .enable_i(enable[PL_ID]),
    	.instr_i(instr[PL_IF]),
    	.pc_i (pc[PL_IF]),

    	.instr_o(instr[PL_ID]),
    	.pc_o(pc[PL_ID])
    );
    
    //EX Pipepline Register
    ex_reg ex_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(ex_reset_n),
      .enable_i(enable[PL_EX]),
    	//imem
    	.instr_i(instr[PL_ID]),
    	.pc_i (pc[PL_ID]),
      //regfile
      .rs1_data_i(rs1_data[PL_ID]),
      .rs2_data_i(rs2_data[PL_ID]),
      .rd_wren_i(rd_wren[PL_ID]),
      //alu
      .alu_op_i(alu_op[PL_ID]),
      .op_a_sel_i(op_a_sel[PL_ID]),
      .op_b_sel_i(op_b_sel[PL_ID]),
      //lsu
      .mem_op_i(mem_op[PL_ID]),
      .mem_wren_i(mem_wren[PL_ID]),
      //wb
      .wb_sel_i(wb_sel[PL_ID]),

    	//imem
    	.instr_o(instr[PL_EX]),
    	.pc_o (pc[PL_EX]),
      //regfile
      .rs1_data_o(rs1_data[PL_EX]),
      .rs2_data_o(rs2_data[PL_EX]),
      .rd_wren_o(rd_wren[PL_EX]),
      //alu
      .alu_op_o(alu_op[PL_EX]),
      .op_a_sel_o(op_a_sel[PL_EX]),
      .op_b_sel_o(op_b_sel[PL_EX]),
      //lsu
      .mem_op_o(mem_op[PL_EX]),
      .mem_wren_o(mem_wren[PL_EX]),
      //wb
      .wb_sel_o(wb_sel[PL_EX])
    );        
    
    //MEM Pipepline Register   
    mem_reg mem_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(mem_reset_n),  	
      .enable_i(enable[PL_MEM]),
    	//imem
    	.instr_i(instr[PL_EX]),
    	.pc_i (pc[PL_EX]),
      //regfile
      .rs2_data_i(rs2_data_wb[PL_EX]),
      .rd_wren_i(rd_wren[PL_EX]),
      //immgen
      .imm_i(imm[PL_EX]),
      //alu
      .alu_data_i(ex_alu_data),
      //lsu
      .mem_op_i(mem_op[PL_EX]),
      .mem_wren_i(mem_wren[PL_EX]),
      //wb
      .wb_sel_i(wb_sel[PL_EX]),

    	//imem
    	.instr_o(instr[PL_MEM]),
    	.pc_o (pc[PL_MEM]),
      //regfile
      .rs2_data_o(rs2_data[PL_MEM]),
      .rd_wren_o(rd_wren[PL_MEM]),
      //immgen
      .imm_o(imm[PL_MEM]),
      //alu
      .alu_data_o(mem_alu_data),
      //lsu
      .mem_op_o(mem_op[PL_MEM]),
      .mem_wren_o(mem_wren[PL_MEM]),
      //wb
      .wb_sel_o(wb_sel[PL_MEM])       
    );    
        
    //WB Pipepline Register
    wb_reg wb_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(wb_reset_n),
      .enable_i(enable[PL_WB]),	
    	//imem
    	.instr_i(instr[PL_MEM]),
    	.pc_i(pc[PL_MEM]),
      //regfile
      .rd_wren_i(rd_wren[PL_MEM]),
      //immgen
      .imm_i(imm[PL_MEM]),
      //alu
      .alu_data_i(mem_alu_data),
      //lsu
      .ld_data_i(ld_data[PL_MEM]),
      //wb
      .wb_sel_i(wb_sel[PL_MEM]),
        
    	//imem
    	.instr_o(instr[PL_WB]),
    	.pc_o(pc[PL_WB]),
      //regfile
      .rd_wren_o(rd_wren[PL_WB]), 
      //immgen
      .imm_o(imm[PL_WB]),
      //alu
      .alu_data_o(wb_alu_data),    
      //lsu
      .ld_data_o(ld_data[PL_WB]),
      //wb
      .wb_sel_o(wb_sel[PL_WB])      
    );
  
    hazard_detect hazard_detect1(
    .ex_instr_i(instr[PL_EX]),
    .ex_rd_wren_i (rd_wren[PL_EX]),
    .mem_rd_wren_i(rd_wren[PL_MEM]),
    .wb_rd_wren_i (rd_wren[PL_WB]),
    .ex_rd_addr_i (rd_addr[PL_EX]),
    .mem_rd_addr_i(rd_addr[PL_MEM]),
    .wb_rd_addr_i (rd_addr[PL_WB]),
    .id_rs1_addr_i(rs1_addr[PL_ID]),
    .id_rs2_addr_i(rs2_addr[PL_ID]),
    .br_sel_i     (br_sel[PL_EX]),

    .id_enable_o (enable  [PL_ID]),
    .ex_enable_o (enable  [PL_EX]),
    .mem_enable_o(enable  [PL_MEM]),
    .wb_enable_o (enable  [PL_WB]),
    .pc_enable_o (pc_enable[PL_IF]),
    
    .id_reset_no (id_reset_n),
    .ex_reset_no (ex_reset_n),
    .mem_reset_no(mem_reset_n),
    .wb_reset_no (wb_reset_n)
  );

  forwarding_unit forward_u1(
    .mem_rd_wren_i(rd_wren[PL_MEM]),
    .wb_rd_wren_i (rd_wren[PL_WB]),
    .mem_rd_addr_i(rd_addr[PL_MEM]),
    .wb_rd_addr_i (rd_addr[PL_WB]),
    .ex_rs1_addr_i(rs1_addr[PL_EX]),
    .ex_rs2_addr_i(rs2_addr[PL_EX]),
    .forward_a_o(forward_rs1_data),
    .forward_b_o(forward_rs2_data)
  );

  inst_memory inst_memory1 (
    .clk_i (clk_i),
    .addr_i(pc[PL_IF]),
    .rst_ni(rst_ni),

    .rdata_o(instr[PL_IF])
  );

  regfile regfile1 (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .rd_wren_i(rd_wren[PL_WB]),
    .rd_data_i(wb_data[PL_WB]),  
    .rd_addr_i(rd_addr[PL_WB]),  
    .rs1_addr_i(rs1_addr[PL_ID]),
    .rs2_addr_i(rs2_addr[PL_ID]),

    .rs1_data_o(rs1_data[PL_ID]),
    .rs2_data_o(rs2_data[PL_ID])
  );

  brcomp brcomp1 (
    .instr_i(instr[PL_EX]),
    .rs1_data_i(rs1_data_wb[PL_EX]),
    .rs2_data_i(rs2_data_wb[PL_EX]),
    .br_sel_o(br_sel[PL_EX])
);

  alu alu1 (
    .operand_a_i(operand_a[PL_EX]),
    .operand_b_i(operand_b[PL_EX]),
    .alu_op_i(alu_op[PL_EX]),

    .alu_data_o(ex_alu_data)
  );

  lsu lsu1 (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .st_en_i(mem_wren[PL_MEM]),
    .addr_i(mem_alu_data),
    .st_data_i(rs2_data[PL_MEM]),
    .io_sw_i(io_sw_i),
    .mem_op_i(mem_op[PL_MEM]),

    .ld_data_o(ld_data[PL_MEM]),
    .io_lcd_o (io_lcd_o),
    .io_ledg_o(io_ledg_o),
    .io_ledr_o(io_ledr_o),
    .io_hex0_o(io_hex0_o),
    .io_hex1_o(io_hex1_o),
    .io_hex2_o(io_hex2_o),
    .io_hex3_o(io_hex3_o),
    .io_hex4_o(io_hex4_o),
    .io_hex5_o(io_hex5_o),
    .io_hex6_o(io_hex6_o),
    .io_hex7_o(io_hex7_o)
  );

  ctrl_unit ctr_unit1 (
    .instr_i(instr[PL_ID]),
    .rd_wren_o(rd_wren[PL_ID]),
    .op_a_sel_o(op_a_sel[PL_ID]),
    .op_b_sel_o(op_b_sel[PL_ID]),
    .mem_wren_o(mem_wren[PL_ID]),
    .alu_op_o(alu_op[PL_ID]),
    .mem_op_o(mem_op[PL_ID]),
    .wb_sel_o(wb_sel[PL_ID])
  );

  immgen immgen1 (
    .instr_i(instr[PL_EX]),
    .imm_o(imm[PL_EX])
  );

  //pc_if_four = pc_if + 4
  adder #(
    .WIDTH(32)
  ) adder_pc_IF_four (
    .operand_a_i(pc[PL_IF]),
    .operand_b_i(32'h4),
    .result_o(pc_IF_four[PL_IF])
  );
  //pc_WB_four = pc_wb + 4
  adder #(
    .WIDTH(32)
  ) adder_pc_WB_four (
    .operand_a_i(pc[PL_WB]),
    .operand_b_i(32'h4),
    .result_o(pc_WB_four[PL_WB])
  );
  //pc
  register #(
    .WIDTH(32),
    .INITIAL_VALUE(0)
  ) pc_register (
    .clk_i(clk_i),
    .reset_ni(rst_ni),
    .wr_en_i(pc_enable[PL_IF]),
    .value_i(nxt_pc[PL_IF]),
    .value_o(pc[PL_IF])
  );
  //next pc select mux
  multiplexer2 #(
    .WIDTH(32)
  ) mul_nxt_pc (
    .in0_i(pc_IF_four[PL_IF]),
    .in1_i(ex_alu_data),
    .sel_i(br_sel[PL_EX]),
    .out_o(nxt_pc[PL_IF])
  );
  //rs1_data_wb mux
  multiplexer4 # (
    .WIDTH(32)
  ) rs1_data_wb_mux (
    .in0_i(rs1_data[PL_EX]), //no forward
    .in1_i(rs1_data[PL_EX]), //no forward
    .in2_i(mem_alu_data),   //forward from mem stage
    .in3_i(wb_data[PL_WB]), //forward from wb stage
    .sel_i(forward_rs1_data),
    .out_o(rs1_data_wb[PL_EX])
  );
  //rs2_data_wb mux
  multiplexer4 # (
    .WIDTH(32)
  ) rs2_data_wb_mux (
    .in0_i(rs2_data[PL_EX]), //no forward
    .in1_i(rs2_data[PL_EX]), //no forward
    .in2_i(mem_alu_data),   //forward from mem stage
    .in3_i(wb_data[PL_WB]), //forward from wb stage
    .sel_i(forward_rs2_data),
    .out_o(rs2_data_wb[PL_EX])
  );
  //operand_a_sel mux
  multiplexer2 #(
    .WIDTH(32)
  ) mult_operand_a (
    .in0_i(rs1_data_wb[PL_EX]),
    .in1_i(pc[PL_EX]),
    .sel_i(op_a_sel[PL_EX]),
    .out_o(operand_a[PL_EX])
  );
  //operand_b_sel mux 
  multiplexer2 #(
    .WIDTH(32)
  ) mult_operand_b (
    .in0_i(rs2_data_wb[PL_EX]),
    .in1_i(imm[PL_EX]),
    .sel_i(op_b_sel[PL_EX]),
    .out_o(operand_b[PL_EX])
  );
  //wb_data_sel mux
  multiplexer4 # (
    .WIDTH(32)
  ) mul_wb_data (
    .in0_i(wb_alu_data),
    .in1_i(ld_data[PL_WB]),
    .in2_i(pc_WB_four[PL_WB]),
    .in3_i(imm[PL_WB]),
    .sel_i(wb_sel[PL_WB]),
    .out_o(wb_data[PL_WB])
  );
endmodule : singlecycle
/* verilator lint_off MULTITOP */
