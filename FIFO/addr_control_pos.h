#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(addr_control_pos) {

	sc_in<bool>				clk;
	sc_in<sc_uint<1> >		en;
	sc_in<sc_uint<1> >		flag;

	sc_out<sc_uint<1> >		next_en;

	void prc_next_enable();

	SC_CTOR(addr_control_pos) {
		SC_METHOD(prc_next_enable);
		sensitive << clk.pos() << en << flag;
	}
};