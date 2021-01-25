#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(core_rt) {

	sc_in<bool>														i_clk;
	sc_in<sc_uint<1> >												i_rst;
	sc_in<sc_uint<1> >												i_wait;
	sc_in<sc_uint<1> >												i_nd;
	sc_in<sc_uint<1> >												i_x_dst;
	sc_in<sc_uint<1> >												i_y_dst;
	sc_in<sc_uint<3> >												i_l_dst;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		i_dout_tc;

	sc_out<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >	o_din_fc;
	sc_out<sc_uint<1> >												o_sd;
	sc_out<sc_uint<1> >												o_rq;

	enum state_type_send {
		st_INIT, st_HEADER, st_BODY, st_TAIL, st_IDLE_SEND, st_DISABLE_HEADER, st_DISABLE_BODY, st_DISABLE_TAIL
	};
	sc_signal<state_type_send> st_STATE_SEND;

	enum state_type_request {
		st_IDLE_REQUEST, st_REQUEST, st_DISABLE
	};
	sc_signal<state_type_request> st_STATE_REQUEST;

	sc_uint<1 * p_SIZE_X + 1 * p_SIZE_Y + 4>						c_dst_addr;
	sc_uint<p_DATA>													n_flit;
	sc_uint<p_DATA>													data;
	sc_uint<p_TIMER>												idle;

	int i = 0;
	void prc_send();
	void prc_receive();

	SC_CTOR(core_rt) {
		SC_METHOD(prc_send);
		sensitive << i_clk.pos() << i_wait;
		SC_METHOD(prc_receive);
		sensitive << i_clk.pos() << i_nd;
	}
};