module wrapper (
  // input
  input logic        CLOCK_50,
  input logic [2:0]  KEY,

  // output
  output logic [6:0] HEX0
);

  design_2 dut (
    .clk_i   (CLOCK_50),
    .rst_ni  (KEY[0]  ),
    .button_i(~KEY[2] ),
    .led_o   (HEX0    )
  );

endmodule : wrapper
