#pragma once
#include"systemc.h"
#include "definitions.h"

SC_MODULE(router_adapter) {

	//-------------------------Inputs---------------------------------------------
	sc_in<bool>														i_clk_router;
	sc_in<sc_uint<1> >												i_rst;
	//Fifo Side
	sc_in<sc_uint<1> >												i_empty_output_fifo;
	sc_in<sc_uint<1> >												i_full_input_fifo;
	sc_in<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		i_data_output_fifo;
	//Router Side
	sc_in<sc_uint<1> >												i_wait;
	sc_in<sc_uint<1> >												i_nd;
	sc_in<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		i_data_router;

	//-------------------------Outputs--------------------------------------------
	//Fifo Side
	sc_out<sc_uint<1> >												o_push_input_fifo;
	sc_out<sc_uint<1> >												o_pop_output_fifo;
	sc_out<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >	o_data_input_fifo;
	//Router Side
	sc_out<sc_uint<1> >												o_wr;
	sc_out<sc_uint<1> >												o_busy;
	sc_out<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >	o_data_router;

	//-------------------------Signals--------------------------------------------
	enum state_type_send {
		st_IDLE, st_POP
	};
	sc_signal<state_type_send> st_STATE_SEND;
	enum state_type_receive {
		st_READY, st_PUSH
	};
	sc_signal<state_type_receive> st_STATE_RECEIVE;
	sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> flit;

	//-------------------------Processes------------------------------------------
	void prc_sendFlitRouter();
	void prc_receiveFlitRouter();

	SC_CTOR(router_adapter) {
		SC_METHOD(prc_sendFlitRouter);
		sensitive << i_clk_router.pos();
		SC_METHOD(prc_receiveFlitRouter);
		sensitive << i_clk_router.pos() << i_nd << i_data_router;
	}
};