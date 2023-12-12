module mem_reg (
    input logic clk_i,
    input logic reset_ni,
    input logic enable_i,
    //imem
    input logic [31:0] instr_i,
    input logic [31:0] pc_i,
    //regfile
    input logic [31:0] rs2_data_i,
    input logic rd_wren_i,
    //immgen
    input logic [31:0] imm_i,
    //alu
    input logic [31:0] alu_data_i,
    //lsu
    input logic [2:0] mem_op_i,
    input logic mem_wren_i,
    //wb
    input logic [1:0] wb_sel_i,

    //imem
    output logic [31:0] instr_o,
    output logic [31:0] pc_o,
    //regfile
    output logic [31:0] rs2_data_o,
    output logic rd_wren_o,
    //immgen
    output logic [31:0] imm_o,
    //alu
    output logic [31:0] alu_data_o,
    //lsu
    output logic [2:0] mem_op_o,
    output logic mem_wren_o,
    //wb
    output logic [1:0] wb_sel_o
);

  //MEM Pipepline Register
  always_ff @(posedge clk_i)
    if (!reset_ni) begin
      //instr & pc
      instr_o    <= 32'h13;  //nop
      pc_o       <= 0;
      //regfile
      rd_wren_o  <= 0;
      //lsu
      mem_wren_o <= 0;

    end else if (enable_i) begin
      //pc
      pc_o       <= pc_i;
      //instr
      instr_o    <= instr_i;
      //regfile
      rs2_data_o <= rs2_data_i;
      rd_wren_o  <= rd_wren_i;
      //immgen
      imm_o      <= imm_i;
      //alu
      alu_data_o <= alu_data_i;
      //lsu
      mem_wren_o <= mem_wren_i;
      mem_op_o   <= mem_op_i;
      //wb_sel
      wb_sel_o   <= wb_sel_i;
    end
endmodule : mem_reg
