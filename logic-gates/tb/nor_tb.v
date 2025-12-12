// nor_tb.v - Testbench for NOR gate
module nor_tb;
	reg in1, in2;  // Test input
	wire out; // Test ouput


	// Instatiate the NOR module (DUT)
	
	NOR uut (.in1(in1), .in2(in2), .out(out));


	initial begin
		$dumpfile("vcd/nor.vcd");  // Waveform dump for GTKWave
		$dumpvars(0, not_tb);


		// Test cases with consistent delays
		in1 = 0; in2 = 0; #10  // Expected out = 1
		in1 = 0; in2 = 1; #10  // Expected out = 0
		in1 = 1; in2 = 0; #10  // Expected out = 0
		in1 = 1; in2 = 1; #10  // Expected out = 0 


		$finish;  // End simulation
	end


	// Monitor outputs
	initial $monitor("Time=%t | in1=%b, in2=%b, out=%b", $time, in1, in2, out);
endmodule
		
