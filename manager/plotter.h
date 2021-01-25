#pragma once
#include"definitions.h"
#include"systemc.h"

SC_MODULE(plotter) {

	sc_in<bool>																		i_clk;
	sc_in<sc_uint<1> >																i_rst;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_data;

	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_1;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_3;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_4;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_5;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_6;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_7;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_8;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_9;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_11;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_13;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_14;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_15;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_17;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_18;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_19;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_20;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_21;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_23;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_24;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_25;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_26;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_27;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_29;
	sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)>		data_31;
	sc_uint<7>		pckt_1;
	sc_uint<7>		pckt_3;
	sc_uint<7>		pckt_4;
	sc_uint<7>		pckt_5;
	sc_uint<7>		pckt_6;
	sc_uint<7>		pckt_7;
	sc_uint<7>		pckt_8;
	sc_uint<7>		pckt_9;
	sc_uint<7>		pckt_11;
	sc_uint<7>		pckt_13;
	sc_uint<7>		pckt_14;
	sc_uint<7>		pckt_15;
	sc_uint<7>		pckt_17;
	sc_uint<7>		pckt_18;
	sc_uint<7>		pckt_19;
	sc_uint<7>		pckt_20;
	sc_uint<7>		pckt_21;
	sc_uint<7>		pckt_23;
	sc_uint<7>		pckt_24;
	sc_uint<7>		pckt_25;
	sc_uint<7>		pckt_26;
	sc_uint<7>		pckt_27;
	sc_uint<7>		pckt_29;
	sc_uint<7>		pckt_31;

	ofstream file;

	void prc_plotter();

	SC_CTOR(plotter) {
		SC_METHOD(prc_plotter);
		sensitive << i_clk.pos();
		file.open("out.txt");
	}

	~plotter() {
		file.close();
	}
};