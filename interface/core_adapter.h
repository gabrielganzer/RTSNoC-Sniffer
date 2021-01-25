#pragma once
#include"systemc.h"
#include "definitions.h"

SC_MODULE(core_adapter) {

	//-------------------------Inputs---------------------------------------------
	//Clock and reset
	sc_in<bool>														i_clk_core;
	sc_in<sc_uint<1> >												i_rst;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		i_din;
	sc_in<sc_uint<p_SIZE_X> >										p_addr_x;
	sc_in<sc_uint<p_SIZE_Y> >										p_addr_y;
	sc_in<sc_uint<3> >												p_addr_l;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		i_data_input_fifo;
	sc_in<sc_uint<1> >												i_fifo_empty;
	sc_in<sc_uint<1> >												i_fifo_full;
	sc_in<sc_uint<1> >												i_fifo_almost_full;
	sc_in<sc_uint<1> >												i_send;
	sc_in<sc_uint<1> >												i_request;

	//-------------------------Outputs--------------------------------------------
	sc_out<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >	o_dout;
	sc_out<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >	o_data_output_fifo;
	sc_out<sc_uint<1> >												o_push;
	sc_out<sc_uint<1> >												o_pop;
	sc_out<sc_uint<1> >												o_full;
	sc_out<sc_uint<1> >												o_empty;

	//-------------------------Signals--------------------------------------------
	sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> flit;

	//-------------------------Processes------------------------------------------
	void prc_sendFlit();
	void prc_receiveFlit();

	SC_CTOR(core_adapter) {
		SC_METHOD(prc_sendFlit);
		sensitive << i_clk_core.pos() << i_rst << i_send << i_fifo_full;
		SC_METHOD(prc_receiveFlit);
		sensitive << i_clk_core.pos() << i_rst << i_request << i_fifo_empty << i_data_input_fifo;
	}
};