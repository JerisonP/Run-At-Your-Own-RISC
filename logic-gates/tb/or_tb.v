module or_tb;
	reg in1, in2;
	wire out;

	OR uut (.in1(in1), .in2(in2), .out(out));

	initial begin
		$dumpfile("vcd/or.vcd");
		$dumpvars(0, or_tb);

		in1 = 0; in2 = 0; #10; // Expected out = 0
		
		in1 = 0; in2 = 1; #10; // Expected out = 1
		
		in1 = 1; in2 = 0; #10; // Expected out = 1
	
		in1 = 1; in2 = 1; #10; // Expected out = 1

		$finish;
	end

	initial $monitor("Time=%bt | in1=%b, in2=%b, out=%b", $time, in1, in2, out);
endmodule

