module XOR(
	input in1,
	input in2,
	output out
);

	wire Nin1;
	wire Nin2;
	wire Nin1ANDin2;
	wire in1ANDNin2;

	not n1 (Nin1, in1);
	not n2 (Nin2, in2);

	and and1 (Nin1ANDin2, Nin1, in2);
	and and2 (in1ANDNin2, in1, Nin2);

	or or1 (out, Nin1ANDin2, in1ANDNin2);
endmodule
