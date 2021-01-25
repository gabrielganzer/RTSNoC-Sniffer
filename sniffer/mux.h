#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(mux) {

	//Inputs
	sc_in<sc_uint<1> >																i_rst;
	sc_in<sc_uint<(1 * p_SIZE_X + 1 * p_SIZE_Y + 3)>>								i_sel;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_1;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_3;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_4;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_5;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_6;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_7;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_8;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_9;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_11;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_13;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_14;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_15;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_17;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_18;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_19;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_20;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_21;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_23;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_24;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_25;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_26;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_27;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_29;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_y_31;

	//Output
	sc_out<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>>		o_data;

	//Process
	void prc_mux();

	SC_CTOR(mux) {
		SC_METHOD(prc_mux);
		sensitive << i_rst << i_sel;
	}
};
