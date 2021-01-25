#pragma once
#include"definitions.h"
#include"systemc.h"
#include"plotter.h"

SC_MODULE(manager) {

	sc_in<bool>																		i_clk;
	sc_in<sc_uint<1> >																i_rst;
	sc_in<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		i_data;

	sc_out<sc_uint<(1 * p_SIZE_X + 1 * p_SIZE_Y + 3)>>								o_sel;

	enum state_type {
		st_IDLE, st_0NE, st_0SE, st_0SS, st_0SW, st_0WW, st_0NW, st_1NN , st_1NE, st_1SE, st_1SW, st_1WW, st_1NW, 
		st_2NE, st_2EE, st_2SE, st_2SS, st_2SW, st_2NW, st_3NN, st_3NE, st_3EE, st_3SE, st_3SW, st_3NW
	};
	sc_signal<state_type> st_STATE;

	plotter *plotter_unit;

	void prc_manager();

	SC_CTOR(manager) {

		plotter_unit = new plotter("plotter");
		plotter_unit->i_clk(i_clk);
		plotter_unit->i_rst(i_rst);
		plotter_unit->i_data(i_data);

		SC_METHOD(prc_manager);
		sensitive << i_clk.pos();
	}

	~manager() {
		delete plotter_unit;
	}
};