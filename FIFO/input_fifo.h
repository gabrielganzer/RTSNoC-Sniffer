#pragma once
#include"definitions.h"
#include"addr_control_pos.h"
#include"counter_pos.h"
#include"addr_control_neg.h"
#include"counter_neg.h"
#include"input_memory.h"
#include"status_control.h"
#include"systemc.h"

SC_MODULE(input_fifo) {

	//Inputs
	sc_in<bool>															i_wclk;
	sc_in<bool>															i_rclk;
	sc_in<sc_uint<1> >													i_rst;
	sc_in<sc_uint<1> >													i_push;
	sc_in<sc_uint<1> >													i_pop;
	sc_in<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >			i_din;

	//Outputs
	sc_out<sc_uint<1> >													o_empty;
	sc_out<sc_uint<1> >													o_full;
	sc_out<sc_uint<1> >													o_almost_full;
	sc_out<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		o_dout;

	//Internal signals
	sc_signal<sc_uint<1> >												w_wen;
	sc_signal<sc_uint<1> >												w_ren;
	sc_signal<sc_uint<p_ADDR> >											w_w_ptr;
	sc_signal<sc_uint<p_ADDR> >											w_r_ptr;
	sc_signal<sc_uint<p_ADDR> >											w_diff_ptr;
	sc_signal<sc_uint<1> >												w_empty;
	sc_signal<sc_uint<1> >												w_full;
	sc_signal<sc_uint<1> >												w_almost_full;

	//Components
	//Next read/write control logic
	addr_control_pos *rcl_unit;
	addr_control_pos *wcl_unit;
	//Binany read/write up-counter
	counter_pos *rcnt_unit;
	counter_pos *wcnt_unit;
	//Memory
	input_memory *mem_unit;
	//Fifo generator of status flag
	status_control *flag_unit;

	//Processes
	void prc_read_fifo();
	void prc_write_fifo();

	SC_CTOR(input_fifo) {

		rcl_unit = new addr_control_pos("read_control_logic");
		rcl_unit->clk(i_rclk);
		rcl_unit->flag(w_empty);
		rcl_unit->en(i_pop);
		rcl_unit->next_en(w_ren);

		wcl_unit = new addr_control_pos("write_control_logic");
		wcl_unit->clk(i_wclk);
		wcl_unit->flag(w_full);
		wcl_unit->en(i_push);
		wcl_unit->next_en(w_wen);

		rcnt_unit = new counter_pos("read_side_counter");
		rcnt_unit->clk(i_rclk);
		rcnt_unit->en(w_ren);
		rcnt_unit->reset(i_rst);
		rcnt_unit->output(w_r_ptr);

		wcnt_unit = new counter_pos("write_side_counter");
		wcnt_unit->clk(i_wclk);
		wcnt_unit->en(w_wen);
		wcnt_unit->reset(i_rst);
		wcnt_unit->output(w_w_ptr);

		mem_unit = new input_memory("dual_port_ram");
		mem_unit->wclk(i_wclk);
		mem_unit->rclk(i_rclk);
		mem_unit->rst(i_rst);
		mem_unit->w_en(w_wen);
		mem_unit->w_addr(w_w_ptr);
		mem_unit->r_en(w_ren);
		mem_unit->r_addr(w_r_ptr);
		mem_unit->d_in(i_din);
		mem_unit->d_out(o_dout);

		flag_unit = new status_control("fifo_status_flag_logic");
		flag_unit->rst(i_rst);
		flag_unit->in_1(w_w_ptr);
		flag_unit->in_2(w_r_ptr);
		flag_unit->full(w_full);
		flag_unit->empty(w_empty);
		flag_unit->almost_full(w_almost_full);

		SC_METHOD(prc_read_fifo);
		sensitive << i_rclk.pos() << i_rst << w_empty;
		SC_METHOD(prc_write_fifo);
		sensitive << i_wclk.pos() << i_rst << w_full << w_almost_full;
	}

	~input_fifo() {
		delete rcl_unit;
		delete wcl_unit;
		delete rcnt_unit;
		delete wcnt_unit;
		delete mem_unit;
		delete flag_unit;
	}
};