#pragma once
#include "definitions.h"
#include "systemc.h"

SC_MODULE(input_memory) {

	//Inputs
	sc_in<bool>														wclk;
	sc_in<bool>														rclk;
	sc_in<sc_uint<1> >												rst;
	sc_in<sc_uint<1> >												w_en;
	sc_in<sc_uint<1> >												r_en;
	sc_in<sc_uint<p_ADDR> >											w_addr;
	sc_in<sc_uint<p_ADDR> >											r_addr;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		d_in;

	//Outputs
	sc_out<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >	d_out;

	//Processes
	void prc_write();
	void prc_read();

	sc_uint<p_ADDR>													waddr;
	sc_uint<p_ADDR>													raddr;
	sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)>								ram[p_DEPTH-1];

	SC_CTOR(input_memory) {
		SC_METHOD(prc_write);
		sensitive << wclk.pos() << rst << w_en;
		SC_METHOD(prc_read);
		sensitive << rclk.pos() << rst << r_en;
	}
};
