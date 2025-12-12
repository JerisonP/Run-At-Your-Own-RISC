// not_tb.v - Testbench for NOT gate
module not_tb;
    reg in1;   // Test input
    wire out;  // Test output

    // Instantiate the NOT module (DUT)
    NOT uut (.in1(in1), .out(out));

    initial begin
        $dumpfile("vcd/not.vcd");  // Waveform dump for GTKWave
        $dumpvars(0, not_tb);

        // Test cases with consistent delays
        in1 = 0; #10;  // Expected out = 1
        in1 = 1; #10;  // Expected out = 0
        in1 = 0; #10;  // Expected out = 1 (toggle back)

        $finish;  // End simulation
    end

    // Monitor outputs
    initial $monitor("Time=%0t | in1=%b, out=%b", $time, in1, out);
endmodule
