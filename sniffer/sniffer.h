#pragma once
#include"definitions.h"
#include"systemc.h"
#include"extractor.h"
#include"flit_counter.h"
#include"timer.h"
#include"register.h"

SC_MODULE(sniffer) {

	//Inputs
	sc_in<bool>															i_clk;
	sc_in<sc_uint<1> >													i_rst;
	sc_in<sc_uint<1> >													i_req;
	sc_in<sc_uint<p_SIZE_X> >											i_addr_x;
	sc_in<sc_uint<p_SIZE_Y> >											i_addr_y;
	sc_in<sc_uint<3> >													i_addr_l;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)>>			i_data;
	//Outputs
	sc_out<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >		o_data;

	//Signals
	sc_signal<sc_uint<2> >												w_op;
	sc_signal<sc_uint<(1 * p_SIZE_X + 1 * p_SIZE_Y + 3)>>				w_addr;
	sc_signal<sc_uint<p_TIMER> >	w_time;
	sc_signal<sc_uint<p_COUNTER> >	w_n_flit;

	//Process
	void prc_sniff();

	extractor *extract;
	flit_counter *fc_unit;
	timer *timer_unit;
	reg *reg_unit;

	SC_CTOR(sniffer) {

		extract = new extractor("extractor");
		extract->i_rst(i_rst);
		extract->i_req(i_req);
		extract->i_data(i_data);
		extract->o_op(w_op);
		extract->o_addr(w_addr);

		fc_unit = new flit_counter("flit_counter");
		fc_unit->i_clk(i_clk);
		fc_unit->i_rst(i_rst);
		fc_unit->i_op(w_op);
		fc_unit->o_n_flit(w_n_flit);

		timer_unit = new timer("timer");
		timer_unit->i_clk(i_clk);
		timer_unit->i_rst(i_rst);
		timer_unit->i_op(w_op);
		timer_unit->o_time(w_time);

		reg_unit = new reg("register");
		reg_unit->i_clk(i_clk);
		reg_unit->i_rst(i_rst);
		reg_unit->i_addr_x(i_addr_x);
		reg_unit->i_addr_y(i_addr_y);
		reg_unit->i_addr_l(i_addr_l);
		reg_unit->i_addr_ori(w_addr);
		reg_unit->i_op(w_op);
		reg_unit->i_n_flit(w_n_flit);
		reg_unit->i_time(w_time);
		reg_unit->o_data(o_data);

		SC_METHOD(prc_sniff);
		sensitive << i_clk.pos();
	}

	~sniffer() {
		delete extract;
		delete fc_unit;
		delete timer_unit;
		delete reg_unit;
	}
};