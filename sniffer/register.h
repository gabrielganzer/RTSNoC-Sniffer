#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(reg) {

	//Inputs
	sc_in<bool>																	i_clk;
	sc_in<sc_uint<1> >															i_rst;
	sc_in<sc_uint<p_SIZE_X> >													i_addr_x;
	sc_in<sc_uint<p_SIZE_Y> >													i_addr_y;
	sc_in<sc_uint<3> >															i_addr_l;
	sc_in<sc_uint<2> >															i_op;
	sc_in<sc_uint<(1 * p_SIZE_X + 1 * p_SIZE_Y + 3)> >							i_addr_ori;
	sc_in<sc_uint<p_COUNTER> >													i_n_flit;
	sc_in<sc_uint<p_TIMER> >													i_time;

	//Outputs
	sc_out<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >	o_data;

	//Process
	void prc_reg();

	//Auxiliar
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>			data;

	SC_CTOR(reg) {
		SC_METHOD(prc_reg);
		sensitive << i_clk.neg() << i_n_flit << i_time;
	}
};