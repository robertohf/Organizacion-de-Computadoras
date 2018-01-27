TARGET=MIPS32SOC
.PHONY: $(TARGET) clean

TOP_MODULE=MIPS32SOC
VERILOG_SOURCES=$(TOP_MODULE).v
CPP_SOURCES=../Cpu_Test.cpp
VERILATOR_ROOT=/opt/verilator
VERILATOR=$(VERILATOR_ROOT)/bin/verilator
all: $(TARGET)

CFLAGS=-g -O2

$(TARGET): $(VERILOG_SOURCES)
	$(VERILATOR) -Wall -Wno-fatal --cc $^ --exe $(CPP_SOURCES) \
			--top-module $(TOP_MODULE) \
			-Mdir $(@) -CFLAGS "$(CFLAGS)"
	make -C $(@) -f V$(TOP_MODULE).mk

clean::
	rm -rf *.o $(TARGET)
distclean:: clean
	rm -rf *~ *.txt *.vcd *.mif *.orig