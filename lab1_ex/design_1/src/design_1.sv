module design_1 (
    // input
    input logic [2:0] data0_i,
    input logic [2:0] data1_i,
    input logic [1:0] sel_i,

    // output
    output logic [2:0] result_o
);

  // local declaration
  logic [2:0] and_tmp;  // temporary for and result
  logic [2:0] or_tmp;  // temporary for  or result
  logic [2:0] xor_tmp;  // temporary for xor result

  assign and_tmp = data0_i & data1_i;
  assign or_tmp  = data0_i | data1_i;
  assign xor_tmp = data0_i ~^ data1_i;

  always_comb begin : proc_mux
    case (sel_i)
      2'b00: result_o = '0;
      2'b01: result_o = and_tmp;
      2'b11: result_o = or_tmp;
      2'b11: result_o = xor_tmp;
    endcase
  end

endmodule : design_1

