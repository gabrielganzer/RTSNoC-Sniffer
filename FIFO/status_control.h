#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(status_control) {

	sc_in<sc_uint<1> >				rst;
	sc_in<sc_uint<p_ADDR> >			in_1;
	sc_in<sc_uint<p_ADDR> >			in_2;

	sc_out<sc_uint<1> >				empty;
	sc_out<sc_uint<1> >				full;
	sc_out<sc_uint<1> >				almost_full;

	sc_signal<sc_uint<p_ADDR> >		ptr_diff;

	void prc_subtrator();
	void prc_set_flag();

	SC_CTOR(status_control) {
		SC_METHOD(prc_subtrator);
		sensitive << rst << in_1 << in_2;
		SC_METHOD(prc_set_flag);
		sensitive << rst << ptr_diff;
	}
};