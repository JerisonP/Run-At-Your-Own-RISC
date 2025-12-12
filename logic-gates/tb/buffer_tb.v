// buffer_tb.v - Testbench for buffer gate
module buffer_tb;
	reg in1;    // Test input
	wire out;   // Test output


	// Instantiate the Buffer module (DUT)

	Buffer uut (.in1(in1), .out(out));


	initial begin
		$dumpfile("vcd/buffer.vcd");  // Waveform dump for GTKWave
		$dumpvars(0, buffer_tb);


		// Test cases with consistent delays

		in1 = 0; #10;  // Expected out = 0
		in1 = 1; #10;  // Expected out = 1

		
		$finish;  //End simulation
	end


	// Monitor outputs
	initial $monitor("Time=%0t | in1=%b, out=%b", $time, in1, out);
endmodule
