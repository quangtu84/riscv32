module wb_reg (
    input logic clk_i,
    input logic reset_ni,
    input logic enable_i,
    //imem
    input logic [31:0] instr_i,
    input logic [31:0] pc_i,
    //regfile
    input logic rd_wren_i,
    //immgen
    input logic [31:0] imm_i,
    //alu
    input logic [31:0] alu_data_i,
    //lsu
    input logic [31:0] ld_data_i,
    //wb
    input logic [1:0] wb_sel_i,

    //imem
    output logic [31:0] instr_o,
    output logic [31:0] pc_o,
    //regfile
    output logic rd_wren_o,
    //immgen
    output logic [31:0] imm_o,
    //alu
    output logic [31:0] alu_data_o,
    //lsu
    output logic [31:0] ld_data_o,
    //wb
    output logic [1:0] wb_sel_o
);

  //WB Pipepline Register
  always_ff @(posedge clk_i)
    if (!reset_ni) begin
      //instr
      instr_o   <= 32'h13;  //nop
      pc_o      <= 0;
      //regfile
      rd_wren_o <= 0;
    end else if (enable_i) begin
      //instr
      instr_o    <= instr_i;
      pc_o       <= pc_i;
      //regfile
      rd_wren_o  <= rd_wren_i;
      //immgen
      imm_o      <= imm_i;
      //alu
      alu_data_o <= alu_data_i;
      //lsu
      ld_data_o  <= ld_data_i;
      //wb
      wb_sel_o   <= wb_sel_i;
    end
endmodule : wb_reg
