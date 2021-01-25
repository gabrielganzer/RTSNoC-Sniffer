#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(counter_neg) {

	//Inputs
	sc_in<bool>					clk;
	sc_in<sc_uint<1> >			reset;
	sc_in<sc_uint<1> >			en;

	//Outputs
	sc_out<sc_uint<p_ADDR> >	output;

	//Process
	void prc_count();

	//Auxiliar
	sc_uint<p_ADDR> count;

	SC_CTOR(counter_neg) {
		SC_METHOD(prc_count);
		sensitive << clk.neg() << reset;
	}
};