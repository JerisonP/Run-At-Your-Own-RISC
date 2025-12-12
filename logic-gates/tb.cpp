// tb.cpp - Generic C++ wrapper for Verilator simulation (use -D flags to set macros)
#include TOP_HEADER  // e.g., "Vnot_tb.h" or "Vand_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"  // For waveform tracing

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Use context for time management
    VerilatedContext* contextp = new VerilatedContext;
    contextp->time(0);  // Start at time 0

    TOP_CLASS* top = new TOP_CLASS(contextp);  // e.g., Vnot_tb* or Vand_tb*

    // Enable tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // 99 hierarchy levels
    tfp->open(VCD_FILENAME);  // e.g., "not.vcd" or "and.vcd"

    // Simulation loop: Advance time until finish
    while (!contextp->gotFinish()) {
        contextp->timeInc(1);  // Increment time by 1 unit per eval
        top->eval();  // Evaluate model

        tfp->dump(contextp->time());  // Dump to VCD
    }

    tfp->close();
    delete top;
    delete contextp;
    return 0;
}
