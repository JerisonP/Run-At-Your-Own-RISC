// xor_tb.v - Testbench for XOR gate
module xor_tb;
    reg in1, in2;  // Test inputs
    wire out;      // Test output

    // Instantiate the XOR module (DUT - Device Under Test) from and.v
    XOR uut (.in1(in1), .in2(in2), .out(out));

    initial begin
        $dumpfile("vcd/xor.vcd");  // Waveform dump for GTKWave
        $dumpvars(0, and_tb);

        // Initialize
        in1 = 0; in2 = 0; #10;  // Expected out = 0

        in1 = 0; in2 = 1; #10;  // Expected out = 0

        in1 = 1; in2 = 0; #10;  // Expected out = 0

        in1 = 1; in2 = 1; #10;  // Expected out = 1

        $finish;  // End simulation
    end

    // Monitor outputs (fixed formatting)
    initial $monitor("Time=%0t | in1=%b, in2=%b, out=%b", $time, in1, in2, out);
endmodule
