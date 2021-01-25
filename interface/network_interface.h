#pragma once
#include"definitions.h"
#include"systemc.h"
#include"input_fifo.h"
#include"output_fifo.h"
#include"core_adapter.h"
#include"router_adapter.h"

SC_MODULE(network_interface) {
	
	//-------------------------Inputs---------------------------------------------
	sc_in<bool>														i_core_clk;
	sc_in<bool>														i_router_clk;
	sc_in<sc_uint<1> >												i_rst;
	sc_in<sc_uint<p_SIZE_X> >										i_addr_x;
	sc_in<sc_uint<p_SIZE_Y> >										i_addr_y;
	sc_in<sc_uint<3> >												i_addr_l;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		i_din_core;
	sc_in<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		i_din_router;
	sc_in<sc_uint<1> >												i_send;
	sc_in<sc_uint<1> >												i_request;
	sc_in<sc_uint<1> >												i_wait_router;
	sc_in<sc_uint<1> >												i_nd_router;

	//-------------------------Outputs--------------------------------------------
	sc_out<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >	o_dout_core;
	sc_out<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >	o_dout_router;
	sc_out<sc_uint<1> >												o_nd_core;
	sc_out<sc_uint<1> >												o_wait_core;
	sc_out<sc_uint<1> >												o_write;
	sc_out<sc_uint<1> >												o_busy;

	//-------------------------Internal Signals------------------------------------
	sc_signal<sc_uint<1> >											w_if_push;
	sc_signal<sc_uint<1> >											w_if_pop;
	sc_signal<sc_uint<1> >											w_if_full;
	sc_signal<sc_uint<1> >											w_if_almost_full;
	sc_signal<sc_uint<1> >											w_if_empty;
	sc_signal<sc_uint<1> >											w_of_push;
	sc_signal<sc_uint<1> >											w_of_pop;
	sc_signal<sc_uint<1> >											w_of_full;
	sc_signal<sc_uint<1> >											w_of_almost_full;
	sc_signal<sc_uint<1> >											w_of_empty;
	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >	w_if_din;
	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >	w_if_dout;
	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >	w_of_din;
	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >	w_of_dout;

	//-------------------------Components-------------------------------------------
	core_adapter *ca_unit;
	router_adapter *ra_unit;
	input_fifo *if_unit;
	output_fifo *of_unit;

	//-------------------------Process----------------------------------------------
	void prc_routerSide();
	void prc_coreSide();

	SC_CTOR(network_interface) {

		if_unit = new input_fifo("if");
		if_unit->i_rclk(i_core_clk);
		if_unit->i_wclk(i_router_clk);
		if_unit->i_rst(i_rst);
		if_unit->i_push(w_if_push);
		if_unit->i_pop(w_if_pop);
		if_unit->i_din(w_if_din);
		if_unit->o_full(w_if_full);
		if_unit->o_almost_full(w_if_almost_full);
		if_unit->o_empty(w_if_empty);
		if_unit->o_dout(w_if_dout);

		of_unit = new output_fifo("of");
		of_unit->i_rclk(i_router_clk);
		of_unit->i_wclk(i_core_clk);
		of_unit->i_rst(i_rst);
		of_unit->i_push(w_of_push);
		of_unit->i_pop(w_of_pop);
		of_unit->i_din(w_of_din);
		of_unit->o_full(w_of_full);
		of_unit->o_almost_full(w_of_almost_full);
		of_unit->o_empty(w_of_empty);
		of_unit->o_dout(w_of_dout);

		ca_unit = new core_adapter("ca");
		//Core connections
		ca_unit->i_clk_core(i_core_clk);
		ca_unit->i_rst(i_rst);
		ca_unit->i_send(i_send);
		ca_unit->i_request(i_request);
		ca_unit->p_addr_x(i_addr_x);
		ca_unit->p_addr_y(i_addr_y);
		ca_unit->p_addr_l(i_addr_l);
		ca_unit->i_din(i_din_core);
		ca_unit->o_full(o_wait_core);
		ca_unit->o_empty(o_nd_core);
		ca_unit->o_dout(o_dout_core);
		//FIFOs connections
		ca_unit->i_fifo_full(w_of_full);
		ca_unit->i_fifo_almost_full(w_of_almost_full);
		ca_unit->i_fifo_empty(w_if_empty);
		ca_unit->i_data_input_fifo(w_if_dout);
		ca_unit->o_pop(w_if_pop);
		ca_unit->o_push(w_of_push);
		ca_unit->o_data_output_fifo(w_of_din);

		ra_unit = new router_adapter("ra");
		//router connections
		ra_unit->i_clk_router(i_router_clk);
		ra_unit->i_rst(i_rst);
		ra_unit->i_wait(i_wait_router);
		ra_unit->i_nd(i_nd_router);
		ra_unit->i_data_router(i_din_router);
		ra_unit->o_wr(o_write);
		ra_unit->o_busy(o_busy);
		ra_unit->o_data_router(o_dout_router);
		//FIFOs connections
		ra_unit->i_full_input_fifo(w_if_full);
		ra_unit->i_empty_output_fifo(w_of_empty);
		ra_unit->i_data_output_fifo(w_of_dout);
		ra_unit->o_pop_output_fifo(w_of_pop);
		ra_unit->o_push_input_fifo(w_if_push);
		ra_unit->o_data_input_fifo(w_if_din);

		SC_METHOD(prc_routerSide);
		sensitive << i_rst;
		SC_METHOD(prc_coreSide);
		sensitive << i_rst;
	}

	~network_interface() {
		delete ca_unit;
		delete ra_unit;
		delete if_unit;
		delete of_unit;
	}
};