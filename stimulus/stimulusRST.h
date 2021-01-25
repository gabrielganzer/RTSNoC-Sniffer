/*
Gera sinais de estímulo para o teste da ULA.
*/
#pragma once
#include"systemc.h"
#include "definitions.h"

SC_MODULE(StimulusRST) {
	sc_out<sc_uint<1> >			 s_rst;
	//
	// router address.
	//
	sc_out <sc_uint<p_SIZE_X> >	 s_addr_x_00, s_addr_x_01, s_addr_x_10, s_addr_x_11;
	sc_out <sc_uint<p_SIZE_Y> >	 s_addr_y_00, s_addr_y_01, s_addr_y_10, s_addr_y_11;
	sc_out <sc_uint<3> >		 s_addr_nn_000, s_addr_ne_001, s_addr_ee_010, s_addr_se_011, s_addr_ss_100, s_addr_sw_101, s_addr_ww_110, s_addr_nw_111;

	void prc_RST();


	SC_CTOR(StimulusRST) {
		SC_THREAD(prc_RST);
		sensitive << s_rst;

	}
};
