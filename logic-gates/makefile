# Makefile for automating Verilator simulations
# Usage:
#   make not    # For NOT gate
#   make and    # For AND gate
#   make clean  # Clean all generated files

# Common Verilator flags
VERILATOR_FLAGS = --timing --trace -cc --exe ../tb.cpp

# VCD output directory
VCD_DIR = vcd

# Clean command
clean:
	rm -rf obj_dir $(VCD_DIR)/*.vcd

# Generic rule for each gate (e.g., make not)
%:
	@echo "Building $@ gate simulation..."
	# Clean previous obj_dir
	rm -rf obj_dir
	# Create VCD directory if it doesn't exist
	mkdir -p $(VCD_DIR)
	# Verilate with proper macro expansion
	verilator $(VERILATOR_FLAGS) \
		gates/$(shell echo $@ | tr '[:lower:]' '[:upper:]').v \
		tb/$@_tb.v \
		--top-module $@_tb \
		--CFLAGS "-DTOP_HEADER=\\\"V$@_tb.h\\\" -DTOP_CLASS=V$@_tb -DVCD_FILENAME=\\\"$(VCD_DIR)/$@.vcd\\\""
	# Build the simulation
	make -j -C obj_dir -f V$@_tb.mk V$@_tb
	# Run simulation
	@echo "Running $@ simulation..."
	obj_dir/V$@_tb
	@echo "Simulation complete! VCD file: $(VCD_DIR)/$@.vcd"
	# Uncomment to auto-open GTKWave:
	# gtkwave $(VCD_DIR)/$@.vcd

.PHONY: clean
