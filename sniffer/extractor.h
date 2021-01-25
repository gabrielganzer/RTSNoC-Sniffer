#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(extractor) {

	//Inputs
	sc_in<sc_uint<1> >													i_rst;
	sc_in<sc_uint<1> >													i_req;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)>>			i_data;
	//Outputs
	sc_out<sc_uint<2> >													o_op;
	sc_out<sc_uint<(1 * p_SIZE_X + 1 * p_SIZE_Y + 3)>>					o_addr;

	//Process
	void prc_extract();
	void prc_addr();

	SC_CTOR(extractor) {
		SC_METHOD(prc_extract);
		sensitive << i_rst << i_data << i_req;
		SC_METHOD(prc_addr);
		sensitive << i_rst << i_data << i_req;
	}
};