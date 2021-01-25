#pragma once
#include "definitions.h"
#include "systemc.h"

SC_MODULE(output_memory) {

	//Inputs
	sc_in<bool>														wclk;
	sc_in<bool>														rclk;
	sc_in<sc_uint<1> >												rst;
	sc_in<sc_uint<1> >												w_en;
	sc_in<sc_uint<1> >												r_en;
	sc_in<sc_uint<p_ADDR> >											w_addr;
	sc_in<sc_uint<p_ADDR> >											r_addr;
	sc_in<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		d_in;

	//Outputs
	sc_out<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >	d_out;

	//Processes
	void prc_write();
	void prc_read();

	sc_uint<p_ADDR>													waddr;
	sc_uint<p_ADDR>													raddr;
	sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)>				ram[p_DEPTH];

	SC_CTOR(output_memory) {
		SC_METHOD(prc_write);
		sensitive << wclk.pos() << rst << w_en;
		SC_METHOD(prc_read);
		sensitive << rclk.neg() << rst << r_en;
	}
};
