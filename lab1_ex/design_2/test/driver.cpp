#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->rst_ni   = (sim_unit > 4) && (rand()%30 != 0);
  dut->button_i = (rand()%8 > 2);
}
