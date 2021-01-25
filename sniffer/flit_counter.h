#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(flit_counter) {

	//Inputs
	sc_in<bool>															i_clk;
	sc_in<sc_uint<1> >													i_rst;
	sc_in<sc_uint<2> >													i_op;
	//Outputs
	sc_out<sc_uint<p_COUNTER> >											o_n_flit;

	//Process
	void prc_flit_count();

	sc_uint<p_COUNTER>													n_flit;

	SC_CTOR(flit_counter) {
		SC_METHOD(prc_flit_count);
		sensitive << i_clk.neg();
	}
};