module top (
  // input
  input logic        clk_i,
  input logic        rst_ni,

  input logic        button_i,

  // output
  output logic [6:0] led_o
);

  design_2 dut (
    .clk_i   (clk_i   ),
    .rst_ni  (rst_ni  ),
    .button_i(button_i),
    .led_o   (led_o   )
  );

endmodule : top
