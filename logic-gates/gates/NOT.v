// not.v - Structural NOT gate using NAND primitive
module NOT (
    input in1,
    output out
);

    nand n1 (out, in1, in1);  // Instantiate NAND with both inputs tied to in1

endmodule
