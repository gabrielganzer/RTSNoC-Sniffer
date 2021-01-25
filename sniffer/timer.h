#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(timer) {

	//Inputs
	sc_in<bool>															i_clk;
	sc_in<sc_uint<1> >													i_rst;
	sc_in<sc_uint<2> >													i_op;
	//Outputs
	sc_out<sc_uint<p_TIMER> >											o_time;

	//Process
	void prc_time_count();

	sc_uint<p_TIMER>													time;

	SC_CTOR(timer) {
		SC_METHOD(prc_time_count);
		sensitive << i_clk.neg();
	}
};
