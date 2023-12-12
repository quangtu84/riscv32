module button (
  // input
  input logic  clk_i,
  input logic  rst_ni,

  input logic  button_i,

  // output
  output logic stable_o
);

  // local declaration
  typedef enum logic [1:0] {
    IDLE,
    PRESS,
    HOLD
  } state_e;

  state_e state_d;
  state_e state_q;

  always_comb begin : proc_next_state
    case (state_q)
      IDLE:    state_d = button_i ? PRESS : IDLE;
      PRESS:   state_d = button_i ? PRESS : IDLE;
      HOLD:    state_d = button_i ? HOLD  : IDLE;
      default: state_d = IDLE;
    endcase
  end

  always_ff @(posedge clk_i) begin : proc_state_register
    if (!rst_ni)
      state_q <= IDLE;
    else
      state_q <= state_d;
  end

  // output combinational logic
  assign stable_o = (state_q == PRESS) ? 1'b1 : 1'b0;

endmodule : button
