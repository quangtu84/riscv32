module design_2 (
  // input
  input logic        clk_i,
  input logic        rst_ni,

  input logic        button_i,

  // output
  output logic [6:0] led_o
);

  // local declaration
  logic       inc;
  logic [3:0] counter;

  button button0 (
    .clk_i   (clk_i   ),
    .rst_ni  (rst_ni  ),
    .button_i(button_i),
    .stable_o(inc     )
  );

  counter counter0 (
    .clk_i    (clk_i  ),
    .rst_ni   (rst_ni ),
    .inc_i    (inc    ),
    .counter_o(counter)
  );

  hexled hexled0 (
    .data_i(counter),
    .hex_o (led_o)
  );

`ifdef VERILATOR
  /*verilator lint_off UNUSED*/
  logic pastvld;
  always @(posedge clk_i) begin
    pastvld <= 1'b1;

    if (pastvld && $past(inc))
      assert(!inc);

    assert(counter <= 4'h9);
  end
  /*verilator lint_on UNUSED*/
`endif

endmodule : design_2
