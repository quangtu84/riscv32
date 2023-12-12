module top (
  // inputs
  input logic        clk_i,
  input logic [2:0]  data0_i,
  input logic [2:0]  data1_i,
  input logic [1:0]  sel_i  ,

  // outputs
  output logic [2:0] result_o
);

  design_1 dut (
    .data0_i (data0_i ),
    .data1_i (data1_i ),
    .sel_i   (sel_i   ),
    .result_o(result_o)
  );

  always @(posedge clk_i) begin : proc_assertions
    if (sel_i == 2'b00)
      assert (result_o == '0);
    if (sel_i == 2'b01)
      assert (result_o == (data0_i & data1_i));
    if (sel_i == 2'b10)
      assert (result_o == (data0_i | data1_i));
    if (sel_i == 2'b11)
      assert (result_o == (data0_i ^ data1_i));
  end

endmodule : top
