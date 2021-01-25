//#pragma once
//#include "router.h"
//#include "network_interface.h"
//#include "sniffer.h"
//#include "mux.h"
//#include "manager.h"
//#include "core_var.h"
//#include "stimulusRST.h"
//
//
//
//int sc_main(int argc, char* argv[]) {
//	sc_clock i_clk("clock", 1, SC_NS, 0.5);
//	sc_signal<sc_uint<1> >												w_rst;
//	sc_signal<sc_uint<p_SIZE_X> >										w_addr_x_00, w_addr_x_01, w_addr_x_10, w_addr_x_11;
//	sc_signal<sc_uint<p_SIZE_Y> >										w_addr_y_00, w_addr_y_01, w_addr_y_10, w_addr_y_11;
//	sc_signal<sc_uint<3> >												w_addr_nn_000, w_addr_ne_001, w_addr_ee_010, w_addr_se_011, w_addr_ss_100, w_addr_sw_101, w_addr_ww_110, w_addr_nw_111;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_nn_00, w_din_router_nn_01, w_din_router_nn_10, w_din_router_nn_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_nn_00, w_dout_router_nn_01, w_dout_router_nn_10, w_dout_router_nn_11;
//	sc_signal<sc_uint<1> >												w_wr_nn_00, w_wr_nn_01, w_wr_nn_10, w_wr_nn_11;
//	sc_signal<sc_uint<1> >												w_busy_nn_00, w_busy_nn_01, w_busy_nn_10, w_busy_nn_11;
//	sc_signal<sc_uint<1> >												w_wait_nn_00, w_wait_nn_01, w_wait_nn_10, w_wait_nn_11;
//	sc_signal<sc_uint<1> >												w_nd_nn_00, w_nd_nn_01, w_nd_nn_10, w_nd_nn_11;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_ne_00, w_din_router_ne_01, w_din_router_ne_10, w_din_router_ne_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_ne_00, w_dout_router_ne_01, w_dout_router_ne_10, w_dout_router_ne_11;
//	sc_signal<sc_uint<1> >												w_wr_ne_00, w_wr_ne_01, w_wr_ne_10, w_wr_ne_11;
//	sc_signal<sc_uint<1> >												w_busy_ne_00, w_busy_ne_01, w_busy_ne_10, w_busy_ne_11;
//	sc_signal<sc_uint<1> >												w_wait_ne_00, w_wait_ne_01, w_wait_ne_10, w_wait_ne_11;
//	sc_signal<sc_uint<1> >												w_nd_ne_00, w_nd_ne_01, w_nd_ne_10, w_nd_ne_11;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_ee_00, w_din_router_ee_01, w_din_router_ee_10, w_din_router_ee_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_ee_00, w_dout_router_ee_01, w_dout_router_ee_10, w_dout_router_ee_11;
//	sc_signal<sc_uint<1> >												w_wr_ee_00, w_wr_ee_01, w_wr_ee_10, w_wr_ee_11;
//	sc_signal<sc_uint<1> >												w_busy_ee_00, w_busy_ee_01, w_busy_ee_10, w_busy_ee_11;
//	sc_signal<sc_uint<1> >												w_wait_ee_00, w_wait_ee_01, w_wait_ee_10, w_wait_ee_11;
//	sc_signal<sc_uint<1> >												w_nd_ee_00, w_nd_ee_01, w_nd_ee_10, w_nd_ee_11;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_se_00, w_din_router_se_01, w_din_router_se_10, w_din_router_se_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_se_00, w_dout_router_se_01, w_dout_router_se_10, w_dout_router_se_11;
//	sc_signal<sc_uint<1> >												w_wr_se_00, w_wr_se_01, w_wr_se_10, w_wr_se_11;
//	sc_signal<sc_uint<1> >												w_busy_se_00, w_busy_se_01, w_busy_se_10, w_busy_se_11;
//	sc_signal<sc_uint<1> >												w_wait_se_00, w_wait_se_01, w_wait_se_10, w_wait_se_11;
//	sc_signal<sc_uint<1> >												w_nd_se_00, w_nd_se_01, w_nd_se_10, w_nd_se_11;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_ss_00, w_din_router_ss_01, w_din_router_ss_10, w_din_router_ss_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_ss_00, w_dout_router_ss_01, w_dout_router_ss_10, w_dout_router_ss_11;
//	sc_signal<sc_uint<1> >												w_wr_ss_00, w_wr_ss_01, w_wr_ss_10, w_wr_ss_11;
//	sc_signal<sc_uint<1> >												w_busy_ss_00, w_busy_ss_01, w_busy_ss_10, w_busy_ss_11;
//	sc_signal<sc_uint<1> >												w_wait_ss_00, w_wait_ss_01, w_wait_ss_10, w_wait_ss_11;
//	sc_signal<sc_uint<1> >												w_nd_ss_00, w_nd_ss_01, w_nd_ss_10, w_nd_ss_11;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_sw_00, w_din_router_sw_01, w_din_router_sw_10, w_din_router_sw_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_sw_00, w_dout_router_sw_01, w_dout_router_sw_10, w_dout_router_sw_11;
//	sc_signal<sc_uint<1> >												w_wr_sw_00, w_wr_sw_01, w_wr_sw_10, w_wr_sw_11;
//	sc_signal<sc_uint<1> >												w_busy_sw_00, w_busy_sw_01, w_busy_sw_10, w_busy_sw_11;
//	sc_signal<sc_uint<1> >												w_wait_sw_00, w_wait_sw_01, w_wait_sw_10, w_wait_sw_11;
//	sc_signal<sc_uint<1> >												w_nd_sw_00, w_nd_sw_01, w_nd_sw_10, w_nd_sw_11;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_ww_00, w_din_router_ww_01, w_din_router_ww_10, w_din_router_ww_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_ww_00, w_dout_router_ww_01, w_dout_router_ww_10, w_dout_router_ww_11;
//	sc_signal<sc_uint<1> >												w_wr_ww_00, w_wr_ww_01, w_wr_ww_10, w_wr_ww_11;
//	sc_signal<sc_uint<1> >												w_busy_ww_00, w_busy_ww_01, w_busy_ww_10, w_busy_ww_11;
//	sc_signal<sc_uint<1> >												w_wait_ww_00, w_wait_ww_01, w_wait_ww_10, w_wait_ww_11;
//	sc_signal<sc_uint<1> >												w_nd_ww_00, w_nd_ww_01, w_nd_ww_10, w_nd_ww_11;
//
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_din_router_nw_00, w_din_router_nw_01, w_din_router_nw_10, w_din_router_nw_11;
//	sc_signal<sc_uint<(p_DATA + 2 * p_SIZE_X + 2 * p_SIZE_Y + 7)> >		w_dout_router_nw_00, w_dout_router_nw_01, w_dout_router_nw_10, w_dout_router_nw_11;
//	sc_signal<sc_uint<1> >												w_wr_nw_00, w_wr_nw_01, w_wr_nw_10, w_wr_nw_11;
//	sc_signal<sc_uint<1> >												w_busy_nw_00, w_busy_nw_01, w_busy_nw_10, w_busy_nw_11;
//	sc_signal<sc_uint<1> >												w_wait_nw_00, w_wait_nw_01, w_wait_nw_10, w_wait_nw_11;
//	sc_signal<sc_uint<1> >												w_nd_nw_00, w_nd_nw_01, w_nd_nw_10, w_nd_nw_11;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_nn_01, w_din_core_nn_11;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_nn_01, w_dout_core_nn_11;
//	sc_signal<sc_uint<1> >												w_send_nn_01, w_send_nn_11;
//	sc_signal<sc_uint<1> >												w_request_nn_01, w_request_nn_11;
//	sc_signal<sc_uint<1> >												w_wait_core_nn_01, w_wait_core_nn_11;
//	sc_signal<sc_uint<1> >												w_nd_core_nn_01, w_nd_core_nn_11;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_ne_00, w_din_core_ne_01, w_din_core_ne_10, w_din_core_ne_11;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_ne_00, w_dout_core_ne_01, w_dout_core_ne_10, w_dout_core_ne_11;
//	sc_signal<sc_uint<1> >												w_send_ne_00, w_send_ne_01, w_send_ne_10, w_send_ne_11;
//	sc_signal<sc_uint<1> >												w_request_ne_00, w_request_ne_01, w_request_ne_10, w_request_ne_11;
//	sc_signal<sc_uint<1> >												w_wait_core_ne_00, w_wait_core_ne_01, w_wait_core_ne_10, w_wait_core_ne_11;
//	sc_signal<sc_uint<1> >												w_nd_core_ne_00, w_nd_core_ne_01, w_nd_core_ne_10, w_nd_core_ne_11;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_ee_10, w_din_core_ee_11;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_ee_10, w_dout_core_ee_11;
//	sc_signal<sc_uint<1> >												w_send_ee_10, w_send_ee_11;
//	sc_signal<sc_uint<1> >												w_request_ee_10, w_request_ee_11;
//	sc_signal<sc_uint<1> >												w_wait_core_ee_10, w_wait_core_ee_11;
//	sc_signal<sc_uint<1> >												w_nd_core_ee_10, w_nd_core_ee_11;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_se_00, w_din_core_se_01, w_din_core_se_10, w_din_core_se_11;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_se_00, w_dout_core_se_01, w_dout_core_se_10, w_dout_core_se_11;
//	sc_signal<sc_uint<1> >												w_send_se_00, w_send_se_01, w_send_se_10, w_send_se_11;
//	sc_signal<sc_uint<1> >												w_request_se_00, w_request_se_01, w_request_se_10, w_request_se_11;
//	sc_signal<sc_uint<1> >												w_wait_core_se_00, w_wait_core_se_01, w_wait_core_se_10, w_wait_core_se_11;
//	sc_signal<sc_uint<1> >												w_nd_core_se_00, w_nd_core_se_01, w_nd_core_se_10, w_nd_core_se_11;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_ss_00, w_din_core_ss_10;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_ss_00, w_dout_core_ss_10;
//	sc_signal<sc_uint<1> >												w_send_ss_00, w_send_ss_10;
//	sc_signal<sc_uint<1> >												w_request_ss_00, w_request_ss_10;
//	sc_signal<sc_uint<1> >												w_wait_core_ss_00, w_wait_core_ss_10;
//	sc_signal<sc_uint<1> >												w_nd_core_ss_00, w_nd_core_ss_10;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_sw_00, w_din_core_sw_01, w_din_core_sw_10, w_din_core_sw_11;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_sw_00, w_dout_core_sw_01, w_dout_core_sw_10, w_dout_core_sw_11;
//	sc_signal<sc_uint<1> >												w_send_sw_00, w_send_sw_01, w_send_sw_10, w_send_sw_11;
//	sc_signal<sc_uint<1> >												w_request_sw_00, w_request_sw_01, w_request_sw_10, w_request_sw_11;
//	sc_signal<sc_uint<1> >												w_wait_core_sw_00, w_wait_core_sw_01, w_wait_core_sw_10, w_wait_core_sw_11;
//	sc_signal<sc_uint<1> >												w_nd_core_sw_00, w_nd_core_sw_01, w_nd_core_sw_10, w_nd_core_sw_11;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_ww_00, w_din_core_ww_01;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_ww_00, w_dout_core_ww_01;
//	sc_signal<sc_uint<1> >												w_send_ww_00, w_send_ww_01;
//	sc_signal<sc_uint<1> >												w_request_ww_00, w_request_ww_01;
//	sc_signal<sc_uint<1> >												w_wait_core_ww_00, w_wait_core_ww_01;
//	sc_signal<sc_uint<1> >												w_nd_core_ww_00, w_nd_core_ww_01;
//
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_din_core_nw_00, w_din_core_nw_01, w_din_core_nw_10, w_din_core_nw_11;
//	sc_signal<sc_uint<(p_DATA + 1 * p_SIZE_X + 1 * p_SIZE_Y + 4)> >		w_dout_core_nw_00, w_dout_core_nw_01, w_dout_core_nw_10, w_dout_core_nw_11;
//	sc_signal<sc_uint<1> >												w_send_nw_00, w_send_nw_01, w_send_nw_10, w_send_nw_11;
//	sc_signal<sc_uint<1> >												w_request_nw_00, w_request_nw_01, w_request_nw_10, w_request_nw_11;
//	sc_signal<sc_uint<1> >												w_wait_core_nw_00, w_wait_core_nw_01, w_wait_core_nw_10, w_wait_core_nw_11;
//	sc_signal<sc_uint<1> >												w_nd_core_nw_00, w_nd_core_nw_01, w_nd_core_nw_10, w_nd_core_nw_11;
//
//	sc_signal<sc_uint<(1 * p_SIZE_X + 1 * p_SIZE_Y + 3)> >				w_sel;
//
//	sc_signal<sc_uint<(p_COUNTER + p_TIMER + 2 * p_SIZE_X + 2 * p_SIZE_Y + 6)> >	w_data, w_data_1, w_data_3, w_data_4, w_data_5, w_data_6,
//		w_data_7, w_data_8, w_data_9, w_data_11, w_data_13, w_data_14, w_data_15, w_data_17, w_data_18, w_data_19, w_data_20, w_data_21,
//		w_data_23, w_data_24, w_data_25, w_data_26, w_data_27, w_data_29, w_data_31;
//
//	//----------------------------------- Router 00 -----------------------------------
//
//	router router_00("Router_00");
//
//	router_00.i_clk(i_clk);
//	router_00.i_rst(w_rst);
//	router_00.p_addr_x(w_addr_x_00);
//	router_00.p_addr_y(w_addr_y_00);
//
//	router_00.i_din_nn(w_dout_router_ss_01);
//	router_00.i_wr_nn(w_nd_ss_01);
//	router_00.o_wait_nn(w_wait_nn_00);
//	router_00.o_dout_nn(w_dout_router_nn_00);
//	router_00.o_nd_nn(w_nd_nn_00);
//	router_00.i_busy_nn(w_wait_ss_01);
//
//	router_00.i_din_ne(w_din_router_ne_00);
//	router_00.i_wr_ne(w_wr_ne_00);
//	router_00.o_wait_ne(w_wait_ne_00);
//	router_00.o_dout_ne(w_dout_router_ne_00);
//	router_00.o_nd_ne(w_nd_ne_00);
//	router_00.i_busy_ne(w_busy_ne_00);
//
//	router_00.i_din_ee(w_dout_router_ww_10);
//	router_00.i_wr_ee(w_nd_ww_10);
//	router_00.o_wait_ee(w_wait_ee_00);
//	router_00.o_dout_ee(w_dout_router_ee_00);
//	router_00.o_nd_ee(w_nd_ee_00);
//	router_00.i_busy_ee(w_wait_ww_10);
//
//	router_00.i_din_se(w_din_router_se_00);
//	router_00.i_wr_se(w_wr_se_00);
//	router_00.o_wait_se(w_wait_se_00);
//	router_00.o_dout_se(w_dout_router_se_00);
//	router_00.o_nd_se(w_nd_se_00);
//	router_00.i_busy_se(w_busy_se_00);
//
//	router_00.i_din_ss(w_din_router_ss_00);
//	router_00.i_wr_ss(w_wr_ss_00);
//	router_00.o_wait_ss(w_wait_ss_00);
//	router_00.o_dout_ss(w_dout_router_ss_00);
//	router_00.o_nd_ss(w_nd_ss_00);
//	router_00.i_busy_ss(w_busy_ss_00);
//
//	router_00.i_din_sw(w_din_router_sw_00);
//	router_00.i_wr_sw(w_wr_sw_00);
//	router_00.o_wait_sw(w_wait_sw_00);
//	router_00.o_dout_sw(w_dout_router_sw_00);
//	router_00.o_nd_sw(w_nd_sw_00);
//	router_00.i_busy_sw(w_busy_sw_00);
//
//	router_00.i_din_nw(w_din_router_nw_00);
//	router_00.i_wr_nw(w_wr_nw_00);
//	router_00.o_wait_nw(w_wait_nw_00);
//	router_00.o_dout_nw(w_dout_router_nw_00);
//	router_00.o_nd_nw(w_nd_nw_00);
//	router_00.i_busy_nw(w_busy_nw_00);
//
//	router_00.i_din_ww(w_din_router_ww_00);
//	router_00.i_wr_ww(w_wr_ww_00);
//	router_00.o_wait_ww(w_wait_ww_00);
//	router_00.o_dout_ww(w_dout_router_ww_00);
//	router_00.o_nd_ww(w_nd_ww_00);
//	router_00.i_busy_ww(w_busy_ww_00);
//
//	//----------------------------------- Router 01 -----------------------------------
//
//	router router_01("Router_01");
//
//	router_01.i_clk(i_clk);
//	router_01.i_rst(w_rst);
//	router_01.p_addr_x(w_addr_x_01);
//	router_01.p_addr_y(w_addr_y_01);
//
//	router_01.i_din_nn(w_din_router_nn_01);
//	router_01.i_wr_nn(w_wr_nn_01);
//	router_01.o_wait_nn(w_wait_nn_01);
//	router_01.o_dout_nn(w_dout_router_nn_01);
//	router_01.o_nd_nn(w_nd_nn_01);
//	router_01.i_busy_nn(w_busy_nn_01);
//
//	router_01.i_din_ne(w_din_router_ne_01);
//	router_01.i_wr_ne(w_wr_ne_01);
//	router_01.o_wait_ne(w_wait_ne_01);
//	router_01.o_dout_ne(w_dout_router_ne_01);
//	router_01.o_nd_ne(w_nd_ne_01);
//	router_01.i_busy_ne(w_busy_ne_01);
//
//	router_01.i_din_ee(w_dout_router_ww_11);
//	router_01.i_wr_ee(w_nd_ww_11);
//	router_01.o_wait_ee(w_wait_ee_01);
//	router_01.o_dout_ee(w_dout_router_ee_01);
//	router_01.o_nd_ee(w_nd_ee_01);
//	router_01.i_busy_ee(w_wait_ww_11);
//
//	router_01.i_din_se(w_din_router_se_01);
//	router_01.i_wr_se(w_wr_se_01);
//	router_01.o_wait_se(w_wait_se_01);
//	router_01.o_dout_se(w_dout_router_se_01);
//	router_01.o_nd_se(w_nd_se_01);
//	router_01.i_busy_se(w_busy_se_01);
//
//	router_01.i_din_ss(w_dout_router_nn_00);
//	router_01.i_wr_ss(w_nd_nn_00);
//	router_01.o_wait_ss(w_wait_ss_01);
//	router_01.o_dout_ss(w_dout_router_ss_01);
//	router_01.o_nd_ss(w_nd_ss_01);
//	router_01.i_busy_ss(w_wait_nn_00);
//
//	router_01.i_din_sw(w_din_router_sw_01);
//	router_01.i_wr_sw(w_wr_sw_01);
//	router_01.o_wait_sw(w_wait_sw_01);
//	router_01.o_dout_sw(w_dout_router_sw_01);
//	router_01.o_nd_sw(w_nd_sw_01);
//	router_01.i_busy_sw(w_busy_sw_01);
//
//	router_01.i_din_nw(w_din_router_nw_01);
//	router_01.i_wr_nw(w_wr_nw_01);
//	router_01.o_wait_nw(w_wait_nw_01);
//	router_01.o_dout_nw(w_dout_router_nw_01);
//	router_01.o_nd_nw(w_nd_nw_01);
//	router_01.i_busy_nw(w_busy_nw_01);
//
//	router_01.i_din_ww(w_din_router_ww_01);
//	router_01.i_wr_ww(w_wr_ww_01);
//	router_01.o_wait_ww(w_wait_ww_01);
//	router_01.o_dout_ww(w_dout_router_ww_01);
//	router_01.o_nd_ww(w_nd_ww_01);
//	router_01.i_busy_ww(w_busy_ww_01);
//
//	//----------------------------------- Router 10 -----------------------------------
//
//	router router_10("Router_10");
//
//	router_10.i_clk(i_clk);
//	router_10.i_rst(w_rst);
//	router_10.p_addr_x(w_addr_x_10);
//	router_10.p_addr_y(w_addr_y_10);
//
//	router_10.i_din_nn(w_dout_router_ss_11);
//	router_10.i_wr_nn(w_nd_ss_11);
//	router_10.o_wait_nn(w_wait_nn_10);
//	router_10.o_dout_nn(w_dout_router_nn_10);
//	router_10.o_nd_nn(w_nd_nn_10);
//	router_10.i_busy_nn(w_wait_ss_11);
//
//	router_10.i_din_ne(w_din_router_ne_10);
//	router_10.i_wr_ne(w_wr_ne_10);
//	router_10.o_wait_ne(w_wait_ne_10);
//	router_10.o_dout_ne(w_dout_router_ne_10);
//	router_10.o_nd_ne(w_nd_ne_10);
//	router_10.i_busy_ne(w_busy_ne_10);
//
//	router_10.i_din_ee(w_din_router_ee_10);
//	router_10.i_wr_ee(w_wr_ee_10);
//	router_10.o_wait_ee(w_wait_ee_10);
//	router_10.o_dout_ee(w_dout_router_ee_10);
//	router_10.o_nd_ee(w_nd_ee_10);
//	router_10.i_busy_ee(w_busy_ee_10);
//
//	router_10.i_din_se(w_din_router_se_10);
//	router_10.i_wr_se(w_wr_se_10);
//	router_10.o_wait_se(w_wait_se_10);
//	router_10.o_dout_se(w_dout_router_se_10);
//	router_10.o_nd_se(w_nd_se_10);
//	router_10.i_busy_se(w_busy_se_10);
//
//	router_10.i_din_ss(w_din_router_ss_10);
//	router_10.i_wr_ss(w_wr_ss_10);
//	router_10.o_wait_ss(w_wait_ss_10);
//	router_10.o_dout_ss(w_dout_router_ss_10);
//	router_10.o_nd_ss(w_nd_ss_10);
//	router_10.i_busy_ss(w_busy_ss_10);
//
//	router_10.i_din_sw(w_din_router_sw_10);
//	router_10.i_wr_sw(w_wr_sw_10);
//	router_10.o_wait_sw(w_wait_sw_10);
//	router_10.o_dout_sw(w_dout_router_sw_10);
//	router_10.o_nd_sw(w_nd_sw_10);
//	router_10.i_busy_sw(w_busy_sw_10);
//
//	router_10.i_din_nw(w_din_router_nw_10);
//	router_10.i_wr_nw(w_wr_nw_10);
//	router_10.o_wait_nw(w_wait_nw_10);
//	router_10.o_dout_nw(w_dout_router_nw_10);
//	router_10.o_nd_nw(w_nd_nw_10);
//	router_10.i_busy_nw(w_busy_nw_10);
//
//	router_10.i_din_ww(w_dout_router_ee_00);
//	router_10.i_wr_ww(w_nd_ee_00);
//	router_10.o_wait_ww(w_wait_ww_10);
//	router_10.o_dout_ww(w_dout_router_ww_10);
//	router_10.o_nd_ww(w_nd_ww_10);
//	router_10.i_busy_ww(w_wait_ee_00);
//
//	//----------------------------------- Router 11 -----------------------------------
//
//	router router_11("Router_11");
//
//	router_11.i_clk(i_clk);
//	router_11.i_rst(w_rst);
//	router_11.p_addr_x(w_addr_x_11);
//	router_11.p_addr_y(w_addr_y_11);
//
//	router_11.i_din_nn(w_din_router_nn_11);
//	router_11.i_wr_nn(w_wr_nn_11);
//	router_11.o_wait_nn(w_wait_nn_11);
//	router_11.o_dout_nn(w_dout_router_nn_11);
//	router_11.o_nd_nn(w_nd_nn_11);
//	router_11.i_busy_nn(w_busy_nn_11);
//
//	router_11.i_din_ne(w_din_router_ne_11);
//	router_11.i_wr_ne(w_wr_ne_11);
//	router_11.o_wait_ne(w_wait_ne_11);
//	router_11.o_dout_ne(w_dout_router_ne_11);
//	router_11.o_nd_ne(w_nd_ne_11);
//	router_11.i_busy_ne(w_busy_ne_11);
//
//	router_11.i_din_ee(w_din_router_ee_11);
//	router_11.i_wr_ee(w_wr_ee_11);
//	router_11.o_wait_ee(w_wait_ee_11);
//	router_11.o_dout_ee(w_dout_router_ee_11);
//	router_11.o_nd_ee(w_nd_ee_11);
//	router_11.i_busy_ee(w_busy_ee_11);
//
//	router_11.i_din_se(w_din_router_se_11);
//	router_11.i_wr_se(w_wr_se_11);
//	router_11.o_wait_se(w_wait_se_11);
//	router_11.o_dout_se(w_dout_router_se_11);
//	router_11.o_nd_se(w_nd_se_11);
//	router_11.i_busy_se(w_busy_se_11);
//
//	router_11.i_din_ss(w_dout_router_nn_10);
//	router_11.i_wr_ss(w_nd_nn_10);
//	router_11.o_wait_ss(w_wait_ss_11);
//	router_11.o_dout_ss(w_dout_router_ss_11);
//	router_11.o_nd_ss(w_nd_ss_11);
//	router_11.i_busy_ss(w_wait_nn_10);
//
//	router_11.i_din_sw(w_din_router_sw_11);
//	router_11.i_wr_sw(w_wr_sw_11);
//	router_11.o_wait_sw(w_wait_sw_11);
//	router_11.o_dout_sw(w_dout_router_sw_11);
//	router_11.o_nd_sw(w_nd_sw_11);
//	router_11.i_busy_sw(w_busy_sw_11);
//
//	router_11.i_din_nw(w_din_router_nw_11);
//	router_11.i_wr_nw(w_wr_nw_11);
//	router_11.o_wait_nw(w_wait_nw_11);
//	router_11.o_dout_nw(w_dout_router_nw_11);
//	router_11.o_nd_nw(w_nd_nw_11);
//	router_11.i_busy_nw(w_busy_nw_11);
//
//	router_11.i_din_ww(w_dout_router_ee_01);
//	router_11.i_wr_ww(w_nd_ee_01);
//	router_11.o_wait_ww(w_wait_ww_11);
//	router_11.o_dout_ww(w_dout_router_ww_11);
//	router_11.o_nd_ww(w_nd_ww_11);
//	router_11.i_busy_ww(w_wait_ee_01);
//
//	//----------------------------------- Router 00 Interfaces -----------------------------------
//
//	network_interface interface_00_ne("interface_00_ne");
//
//	interface_00_ne.i_rst(w_rst);
//	interface_00_ne.i_addr_x(w_addr_x_00);
//	interface_00_ne.i_addr_y(w_addr_y_00);
//	interface_00_ne.i_addr_l(w_addr_ne_001);
//	interface_00_ne.i_router_clk(i_clk);
//	interface_00_ne.i_wait_router(w_wait_ne_00);
//	interface_00_ne.i_nd_router(w_nd_ne_00);
//	interface_00_ne.i_din_router(w_dout_router_ne_00);
//	interface_00_ne.i_core_clk(i_clk);
//	interface_00_ne.i_send(w_send_ne_00);
//	interface_00_ne.i_request(w_request_ne_00);
//	interface_00_ne.i_din_core(w_din_core_ne_00);
//	interface_00_ne.o_write(w_wr_ne_00);
//	interface_00_ne.o_busy(w_busy_ne_00);
//	interface_00_ne.o_dout_router(w_din_router_ne_00);
//	interface_00_ne.o_nd_core(w_nd_core_ne_00);
//	interface_00_ne.o_wait_core(w_wait_core_ne_00);
//	interface_00_ne.o_dout_core(w_dout_core_ne_00);
//
//
//	network_interface interface_00_se("interface_00_se");
//
//	interface_00_se.i_rst(w_rst);
//	interface_00_se.i_addr_x(w_addr_x_00);
//	interface_00_se.i_addr_y(w_addr_y_00);
//	interface_00_se.i_addr_l(w_addr_se_011);
//	interface_00_se.i_router_clk(i_clk);
//	interface_00_se.i_wait_router(w_wait_se_00);
//	interface_00_se.i_nd_router(w_nd_se_00);
//	interface_00_se.i_din_router(w_dout_router_se_00);
//	interface_00_se.i_core_clk(i_clk);
//	interface_00_se.i_send(w_send_se_00);
//	interface_00_se.i_request(w_request_se_00);
//	interface_00_se.i_din_core(w_din_core_se_00);
//	interface_00_se.o_write(w_wr_se_00);
//	interface_00_se.o_busy(w_busy_se_00);
//	interface_00_se.o_dout_router(w_din_router_se_00);
//	interface_00_se.o_nd_core(w_nd_core_se_00);
//	interface_00_se.o_wait_core(w_wait_core_se_00);
//	interface_00_se.o_dout_core(w_dout_core_se_00);
//
//
//	network_interface interface_00_ss("interface_00_ss");
//
//	interface_00_ss.i_rst(w_rst);
//	interface_00_ss.i_addr_x(w_addr_x_00);
//	interface_00_ss.i_addr_y(w_addr_y_00);
//	interface_00_ss.i_addr_l(w_addr_ss_100);
//	interface_00_ss.i_router_clk(i_clk);
//	interface_00_ss.i_wait_router(w_wait_ss_00);
//	interface_00_ss.i_nd_router(w_nd_ss_00);
//	interface_00_ss.i_din_router(w_dout_router_ss_00);
//	interface_00_ss.i_core_clk(i_clk);
//	interface_00_ss.i_send(w_send_ss_00);
//	interface_00_ss.i_request(w_request_ss_00);
//	interface_00_ss.i_din_core(w_din_core_ss_00);
//	interface_00_ss.o_write(w_wr_ss_00);
//	interface_00_ss.o_busy(w_busy_ss_00);
//	interface_00_ss.o_dout_router(w_din_router_ss_00);
//	interface_00_ss.o_nd_core(w_nd_core_ss_00);
//	interface_00_ss.o_wait_core(w_wait_core_ss_00);
//	interface_00_ss.o_dout_core(w_dout_core_ss_00);
//
//
//	network_interface interface_00_sw("interface_00_sw");
//
//	interface_00_sw.i_rst(w_rst);
//	interface_00_sw.i_addr_x(w_addr_x_00);
//	interface_00_sw.i_addr_y(w_addr_y_00);
//	interface_00_sw.i_addr_l(w_addr_sw_101);
//	interface_00_sw.i_router_clk(i_clk);
//	interface_00_sw.i_wait_router(w_wait_sw_00);
//	interface_00_sw.i_nd_router(w_nd_sw_00);
//	interface_00_sw.i_din_router(w_dout_router_sw_00);
//	interface_00_sw.i_core_clk(i_clk);
//	interface_00_sw.i_send(w_send_sw_00);
//	interface_00_sw.i_request(w_request_sw_00);
//	interface_00_sw.i_din_core(w_din_core_sw_00);
//	interface_00_sw.o_write(w_wr_sw_00);
//	interface_00_sw.o_busy(w_busy_sw_00);
//	interface_00_sw.o_dout_router(w_din_router_sw_00);
//	interface_00_sw.o_nd_core(w_nd_core_sw_00);
//	interface_00_sw.o_wait_core(w_wait_core_sw_00);
//	interface_00_sw.o_dout_core(w_dout_core_sw_00);
//
//
//	network_interface interface_00_ww("interface_00_ww");
//
//	interface_00_ww.i_rst(w_rst);
//	interface_00_ww.i_addr_x(w_addr_x_00);
//	interface_00_ww.i_addr_y(w_addr_y_00);
//	interface_00_ww.i_addr_l(w_addr_ww_110);
//	interface_00_ww.i_router_clk(i_clk);
//	interface_00_ww.i_wait_router(w_wait_ww_00);
//	interface_00_ww.i_nd_router(w_nd_ww_00);
//	interface_00_ww.i_din_router(w_dout_router_ww_00);
//	interface_00_ww.i_core_clk(i_clk);
//	interface_00_ww.i_send(w_send_ww_00);
//	interface_00_ww.i_request(w_request_ww_00);
//	interface_00_ww.i_din_core(w_din_core_ww_00);
//	interface_00_ww.o_write(w_wr_ww_00);
//	interface_00_ww.o_busy(w_busy_ww_00);
//	interface_00_ww.o_dout_router(w_din_router_ww_00);
//	interface_00_ww.o_nd_core(w_nd_core_ww_00);
//	interface_00_ww.o_wait_core(w_wait_core_ww_00);
//	interface_00_ww.o_dout_core(w_dout_core_ww_00);
//
//
//	network_interface interface_00_nw("interface_00_nw");
//
//	interface_00_nw.i_rst(w_rst);
//	interface_00_nw.i_addr_x(w_addr_x_00);
//	interface_00_nw.i_addr_y(w_addr_y_00);
//	interface_00_nw.i_addr_l(w_addr_nw_111);
//	interface_00_nw.i_router_clk(i_clk);
//	interface_00_nw.i_wait_router(w_wait_nw_00);
//	interface_00_nw.i_nd_router(w_nd_nw_00);
//	interface_00_nw.i_din_router(w_dout_router_nw_00);
//	interface_00_nw.i_core_clk(i_clk);
//	interface_00_nw.i_send(w_send_nw_00);
//	interface_00_nw.i_request(w_request_nw_00);
//	interface_00_nw.i_din_core(w_din_core_nw_00);
//	interface_00_nw.o_write(w_wr_nw_00);
//	interface_00_nw.o_busy(w_busy_nw_00);
//	interface_00_nw.o_dout_router(w_din_router_nw_00);
//	interface_00_nw.o_nd_core(w_nd_core_nw_00);
//	interface_00_nw.o_wait_core(w_wait_core_nw_00);
//	interface_00_nw.o_dout_core(w_dout_core_nw_00);
//
//	//----------------------------------- Router 01 Interfaces -----------------------------------
//
//	network_interface interface_01_ne("interface_01_ne");
//
//	interface_01_ne.i_rst(w_rst);
//	interface_01_ne.i_addr_x(w_addr_x_01);
//	interface_01_ne.i_addr_y(w_addr_y_01);
//	interface_01_ne.i_addr_l(w_addr_ne_001);
//	interface_01_ne.i_router_clk(i_clk);
//	interface_01_ne.i_wait_router(w_wait_ne_01);
//	interface_01_ne.i_nd_router(w_nd_ne_01);
//	interface_01_ne.i_din_router(w_dout_router_ne_01);
//	interface_01_ne.i_core_clk(i_clk);
//	interface_01_ne.i_send(w_send_ne_01);
//	interface_01_ne.i_request(w_request_ne_01);
//	interface_01_ne.i_din_core(w_din_core_ne_01);
//	interface_01_ne.o_write(w_wr_ne_01);
//	interface_01_ne.o_busy(w_busy_ne_01);
//	interface_01_ne.o_dout_router(w_din_router_ne_01);
//	interface_01_ne.o_nd_core(w_nd_core_ne_01);
//	interface_01_ne.o_wait_core(w_wait_core_ne_01);
//	interface_01_ne.o_dout_core(w_dout_core_ne_01);
//
//
//	network_interface interface_01_se("interface_01_se");
//
//	interface_01_se.i_rst(w_rst);
//	interface_01_se.i_addr_x(w_addr_x_01);
//	interface_01_se.i_addr_y(w_addr_y_01);
//	interface_01_se.i_addr_l(w_addr_se_011);
//	interface_01_se.i_router_clk(i_clk);
//	interface_01_se.i_wait_router(w_wait_se_01);
//	interface_01_se.i_nd_router(w_nd_se_01);
//	interface_01_se.i_din_router(w_dout_router_se_01);
//	interface_01_se.i_core_clk(i_clk);
//	interface_01_se.i_send(w_send_se_01);
//	interface_01_se.i_request(w_request_se_01);
//	interface_01_se.i_din_core(w_din_core_se_01);
//	interface_01_se.o_write(w_wr_se_01);
//	interface_01_se.o_busy(w_busy_se_01);
//	interface_01_se.o_dout_router(w_din_router_se_01);
//	interface_01_se.o_nd_core(w_nd_core_se_01);
//	interface_01_se.o_wait_core(w_wait_core_se_01);
//	interface_01_se.o_dout_core(w_dout_core_se_01);
//
//
//	network_interface interface_01_nn("interface_01_nn");
//
//	interface_01_nn.i_rst(w_rst);
//	interface_01_nn.i_addr_x(w_addr_x_01);
//	interface_01_nn.i_addr_y(w_addr_y_01);
//	interface_01_nn.i_addr_l(w_addr_nn_000);
//	interface_01_nn.i_router_clk(i_clk);
//	interface_01_nn.i_wait_router(w_wait_nn_01);
//	interface_01_nn.i_nd_router(w_nd_nn_01);
//	interface_01_nn.i_din_router(w_dout_router_nn_01);
//	interface_01_nn.i_core_clk(i_clk);
//	interface_01_nn.i_send(w_send_nn_01);
//	interface_01_nn.i_request(w_request_nn_01);
//	interface_01_nn.i_din_core(w_din_core_nn_01);
//	interface_01_nn.o_write(w_wr_nn_01);
//	interface_01_nn.o_busy(w_busy_nn_01);
//	interface_01_nn.o_dout_router(w_din_router_nn_01);
//	interface_01_nn.o_nd_core(w_nd_core_nn_01);
//	interface_01_nn.o_wait_core(w_wait_core_nn_01);
//	interface_01_nn.o_dout_core(w_dout_core_nn_01);
//
//
//	network_interface interface_01_sw("interface_01_sw");
//
//	interface_01_sw.i_rst(w_rst);
//	interface_01_sw.i_addr_x(w_addr_x_01);
//	interface_01_sw.i_addr_y(w_addr_y_01);
//	interface_01_sw.i_addr_l(w_addr_sw_101);
//	interface_01_sw.i_router_clk(i_clk);
//	interface_01_sw.i_wait_router(w_wait_sw_01);
//	interface_01_sw.i_nd_router(w_nd_sw_01);
//	interface_01_sw.i_din_router(w_dout_router_sw_01);
//	interface_01_sw.i_core_clk(i_clk);
//	interface_01_sw.i_send(w_send_sw_01);
//	interface_01_sw.i_request(w_request_sw_01);
//	interface_01_sw.i_din_core(w_din_core_sw_01);
//	interface_01_sw.o_write(w_wr_sw_01);
//	interface_01_sw.o_busy(w_busy_sw_01);
//	interface_01_sw.o_dout_router(w_din_router_sw_01);
//	interface_01_sw.o_nd_core(w_nd_core_sw_01);
//	interface_01_sw.o_wait_core(w_wait_core_sw_01);
//	interface_01_sw.o_dout_core(w_dout_core_sw_01);
//
//
//	network_interface interface_01_ww("interface_01_ww");
//
//	interface_01_ww.i_rst(w_rst);
//	interface_01_ww.i_addr_x(w_addr_x_01);
//	interface_01_ww.i_addr_y(w_addr_y_01);
//	interface_01_ww.i_addr_l(w_addr_ww_110);
//	interface_01_ww.i_router_clk(i_clk);
//	interface_01_ww.i_wait_router(w_wait_ww_01);
//	interface_01_ww.i_nd_router(w_nd_ww_01);
//	interface_01_ww.i_din_router(w_dout_router_ww_01);
//	interface_01_ww.i_core_clk(i_clk);
//	interface_01_ww.i_send(w_send_ww_01);
//	interface_01_ww.i_request(w_request_ww_01);
//	interface_01_ww.i_din_core(w_din_core_ww_01);
//	interface_01_ww.o_write(w_wr_ww_01);
//	interface_01_ww.o_busy(w_busy_ww_01);
//	interface_01_ww.o_dout_router(w_din_router_ww_01);
//	interface_01_ww.o_nd_core(w_nd_core_ww_01);
//	interface_01_ww.o_wait_core(w_wait_core_ww_01);
//	interface_01_ww.o_dout_core(w_dout_core_ww_01);
//
//
//	network_interface interface_01_nw("interface_01_nw");
//
//	interface_01_nw.i_rst(w_rst);
//	interface_01_nw.i_addr_x(w_addr_x_01);
//	interface_01_nw.i_addr_y(w_addr_y_01);
//	interface_01_nw.i_addr_l(w_addr_nw_111);
//	interface_01_nw.i_router_clk(i_clk);
//	interface_01_nw.i_wait_router(w_wait_nw_01);
//	interface_01_nw.i_nd_router(w_nd_nw_01);
//	interface_01_nw.i_din_router(w_dout_router_nw_01);
//	interface_01_nw.i_core_clk(i_clk);
//	interface_01_nw.i_send(w_send_nw_01);
//	interface_01_nw.i_request(w_request_nw_01);
//	interface_01_nw.i_din_core(w_din_core_nw_01);
//	interface_01_nw.o_write(w_wr_nw_01);
//	interface_01_nw.o_busy(w_busy_nw_01);
//	interface_01_nw.o_dout_router(w_din_router_nw_01);
//	interface_01_nw.o_nd_core(w_nd_core_nw_01);
//	interface_01_nw.o_wait_core(w_wait_core_nw_01);
//	interface_01_nw.o_dout_core(w_dout_core_nw_01);
//
//	//----------------------------------- Router 10 Interfaces -----------------------------------
//
//	network_interface interface_10_ne("interface_10_ne");
//
//	interface_10_ne.i_rst(w_rst);
//	interface_10_ne.i_addr_x(w_addr_x_10);
//	interface_10_ne.i_addr_y(w_addr_y_10);
//	interface_10_ne.i_addr_l(w_addr_ne_001);
//	interface_10_ne.i_router_clk(i_clk);
//	interface_10_ne.i_wait_router(w_wait_ne_10);
//	interface_10_ne.i_nd_router(w_nd_ne_10);
//	interface_10_ne.i_din_router(w_dout_router_ne_10);
//	interface_10_ne.i_core_clk(i_clk);
//	interface_10_ne.i_send(w_send_ne_10);
//	interface_10_ne.i_request(w_request_ne_10);
//	interface_10_ne.i_din_core(w_din_core_ne_10);
//	interface_10_ne.o_write(w_wr_ne_10);
//	interface_10_ne.o_busy(w_busy_ne_10);
//	interface_10_ne.o_dout_router(w_din_router_ne_10);
//	interface_10_ne.o_nd_core(w_nd_core_ne_10);
//	interface_10_ne.o_wait_core(w_wait_core_ne_10);
//	interface_10_ne.o_dout_core(w_dout_core_ne_10);
//
//
//	network_interface interface_10_se("interface_10_se");
//
//	interface_10_se.i_rst(w_rst);
//	interface_10_se.i_addr_x(w_addr_x_10);
//	interface_10_se.i_addr_y(w_addr_y_10);
//	interface_10_se.i_addr_l(w_addr_se_011);
//	interface_10_se.i_router_clk(i_clk);
//	interface_10_se.i_wait_router(w_wait_se_10);
//	interface_10_se.i_nd_router(w_nd_se_10);
//	interface_10_se.i_din_router(w_dout_router_se_10);
//	interface_10_se.i_core_clk(i_clk);
//	interface_10_se.i_send(w_send_se_10);
//	interface_10_se.i_request(w_request_se_10);
//	interface_10_se.i_din_core(w_din_core_se_10);
//	interface_10_se.o_write(w_wr_se_10);
//	interface_10_se.o_busy(w_busy_se_10);
//	interface_10_se.o_dout_router(w_din_router_se_10);
//	interface_10_se.o_nd_core(w_nd_core_se_10);
//	interface_10_se.o_wait_core(w_wait_core_se_10);
//	interface_10_se.o_dout_core(w_dout_core_se_10);
//
//
//	network_interface interface_10_ss("interface_10_ss");
//
//	interface_10_ss.i_rst(w_rst);
//	interface_10_ss.i_addr_x(w_addr_x_10);
//	interface_10_ss.i_addr_y(w_addr_y_10);
//	interface_10_ss.i_addr_l(w_addr_ss_100);
//	interface_10_ss.i_router_clk(i_clk);
//	interface_10_ss.i_wait_router(w_wait_ss_10);
//	interface_10_ss.i_nd_router(w_nd_ss_10);
//	interface_10_ss.i_din_router(w_dout_router_ss_10);
//	interface_10_ss.i_core_clk(i_clk);
//	interface_10_ss.i_send(w_send_ss_10);
//	interface_10_ss.i_request(w_request_ss_10);
//	interface_10_ss.i_din_core(w_din_core_ss_10);
//	interface_10_ss.o_write(w_wr_ss_10);
//	interface_10_ss.o_busy(w_busy_ss_10);
//	interface_10_ss.o_dout_router(w_din_router_ss_10);
//	interface_10_ss.o_nd_core(w_nd_core_ss_10);
//	interface_10_ss.o_wait_core(w_wait_core_ss_10);
//	interface_10_ss.o_dout_core(w_dout_core_ss_10);
//
//
//	network_interface interface_10_sw("interface_10_sw");
//
//	interface_10_sw.i_rst(w_rst);
//	interface_10_sw.i_addr_x(w_addr_x_10);
//	interface_10_sw.i_addr_y(w_addr_y_10);
//	interface_10_sw.i_addr_l(w_addr_sw_101);
//	interface_10_sw.i_router_clk(i_clk);
//	interface_10_sw.i_wait_router(w_wait_sw_10);
//	interface_10_sw.i_nd_router(w_nd_sw_10);
//	interface_10_sw.i_din_router(w_dout_router_sw_10);
//	interface_10_sw.i_core_clk(i_clk);
//	interface_10_sw.i_send(w_send_sw_10);
//	interface_10_sw.i_request(w_request_sw_10);
//	interface_10_sw.i_din_core(w_din_core_sw_10);
//	interface_10_sw.o_write(w_wr_sw_10);
//	interface_10_sw.o_busy(w_busy_sw_10);
//	interface_10_sw.o_dout_router(w_din_router_sw_10);
//	interface_10_sw.o_nd_core(w_nd_core_sw_10);
//	interface_10_sw.o_wait_core(w_wait_core_sw_10);
//	interface_10_sw.o_dout_core(w_dout_core_sw_10);
//
//
//	network_interface interface_10_ee("interface_10_ee");
//
//	interface_10_ee.i_rst(w_rst);
//	interface_10_ee.i_addr_x(w_addr_x_10);
//	interface_10_ee.i_addr_y(w_addr_y_10);
//	interface_10_ee.i_addr_l(w_addr_ee_010);
//	interface_10_ee.i_router_clk(i_clk);
//	interface_10_ee.i_wait_router(w_wait_ee_10);
//	interface_10_ee.i_nd_router(w_nd_ee_10);
//	interface_10_ee.i_din_router(w_dout_router_ee_10);
//	interface_10_ee.i_core_clk(i_clk);
//	interface_10_ee.i_send(w_send_ee_10);
//	interface_10_ee.i_request(w_request_ee_10);
//	interface_10_ee.i_din_core(w_din_core_ee_10);
//	interface_10_ee.o_write(w_wr_ee_10);
//	interface_10_ee.o_busy(w_busy_ee_10);
//	interface_10_ee.o_dout_router(w_din_router_ee_10);
//	interface_10_ee.o_nd_core(w_nd_core_ee_10);
//	interface_10_ee.o_wait_core(w_wait_core_ee_10);
//	interface_10_ee.o_dout_core(w_dout_core_ee_10);
//
//
//	network_interface interface_10_nw("interface_10_nw");
//
//	interface_10_nw.i_rst(w_rst);
//	interface_10_nw.i_addr_x(w_addr_x_10);
//	interface_10_nw.i_addr_y(w_addr_y_10);
//	interface_10_nw.i_addr_l(w_addr_nw_111);
//	interface_10_nw.i_router_clk(i_clk);
//	interface_10_nw.i_wait_router(w_wait_nw_10);
//	interface_10_nw.i_nd_router(w_nd_nw_10);
//	interface_10_nw.i_din_router(w_dout_router_nw_10);
//	interface_10_nw.i_core_clk(i_clk);
//	interface_10_nw.i_send(w_send_nw_10);
//	interface_10_nw.i_request(w_request_nw_10);
//	interface_10_nw.i_din_core(w_din_core_nw_10);
//	interface_10_nw.o_write(w_wr_nw_10);
//	interface_10_nw.o_busy(w_busy_nw_10);
//	interface_10_nw.o_dout_router(w_din_router_nw_10);
//	interface_10_nw.o_nd_core(w_nd_core_nw_10);
//	interface_10_nw.o_wait_core(w_wait_core_nw_10);
//	interface_10_nw.o_dout_core(w_dout_core_nw_10);
//
//	//----------------------------------- Router 11 Interfaces -----------------------------------
//
//	network_interface interface_11_ne("interface_11_ne");
//
//	interface_11_ne.i_rst(w_rst);
//	interface_11_ne.i_addr_x(w_addr_x_11);
//	interface_11_ne.i_addr_y(w_addr_y_11);
//	interface_11_ne.i_addr_l(w_addr_ne_001);
//	interface_11_ne.i_router_clk(i_clk);
//	interface_11_ne.i_wait_router(w_wait_ne_11);
//	interface_11_ne.i_nd_router(w_nd_ne_11);
//	interface_11_ne.i_din_router(w_dout_router_ne_11);
//	interface_11_ne.i_core_clk(i_clk);
//	interface_11_ne.i_send(w_send_ne_11);
//	interface_11_ne.i_request(w_request_ne_11);
//	interface_11_ne.i_din_core(w_din_core_ne_11);
//	interface_11_ne.o_write(w_wr_ne_11);
//	interface_11_ne.o_busy(w_busy_ne_11);
//	interface_11_ne.o_dout_router(w_din_router_ne_11);
//	interface_11_ne.o_nd_core(w_nd_core_ne_11);
//	interface_11_ne.o_wait_core(w_wait_core_ne_11);
//	interface_11_ne.o_dout_core(w_dout_core_ne_11);
//
//
//	network_interface interface_11_se("interface_11_se");
//
//	interface_11_se.i_rst(w_rst);
//	interface_11_se.i_addr_x(w_addr_x_11);
//	interface_11_se.i_addr_y(w_addr_y_11);
//	interface_11_se.i_addr_l(w_addr_se_011);
//	interface_11_se.i_router_clk(i_clk);
//	interface_11_se.i_wait_router(w_wait_se_11);
//	interface_11_se.i_nd_router(w_nd_se_11);
//	interface_11_se.i_din_router(w_dout_router_se_11);
//	interface_11_se.i_core_clk(i_clk);
//	interface_11_se.i_send(w_send_se_11);
//	interface_11_se.i_request(w_request_se_11);
//	interface_11_se.i_din_core(w_din_core_se_11);
//	interface_11_se.o_write(w_wr_se_11);
//	interface_11_se.o_busy(w_busy_se_11);
//	interface_11_se.o_dout_router(w_din_router_se_11);
//	interface_11_se.o_nd_core(w_nd_core_se_11);
//	interface_11_se.o_wait_core(w_wait_core_se_11);
//	interface_11_se.o_dout_core(w_dout_core_se_11);
//
//
//	network_interface interface_11_nn("interface_11_nn");
//
//	interface_11_nn.i_rst(w_rst);
//	interface_11_nn.i_addr_x(w_addr_x_11);
//	interface_11_nn.i_addr_y(w_addr_y_11);
//	interface_11_nn.i_addr_l(w_addr_nn_000);
//	interface_11_nn.i_router_clk(i_clk);
//	interface_11_nn.i_wait_router(w_wait_nn_11);
//	interface_11_nn.i_nd_router(w_nd_nn_11);
//	interface_11_nn.i_din_router(w_dout_router_nn_11);
//	interface_11_nn.i_core_clk(i_clk);
//	interface_11_nn.i_send(w_send_nn_11);
//	interface_11_nn.i_request(w_request_nn_11);
//	interface_11_nn.i_din_core(w_din_core_nn_11);
//	interface_11_nn.o_write(w_wr_nn_11);
//	interface_11_nn.o_busy(w_busy_nn_11);
//	interface_11_nn.o_dout_router(w_din_router_nn_11);
//	interface_11_nn.o_nd_core(w_nd_core_nn_11);
//	interface_11_nn.o_wait_core(w_wait_core_nn_11);
//	interface_11_nn.o_dout_core(w_dout_core_nn_11);
//
//
//	network_interface interface_11_sw("interface_11_sw");
//
//	interface_11_sw.i_rst(w_rst);
//	interface_11_sw.i_addr_x(w_addr_x_11);
//	interface_11_sw.i_addr_y(w_addr_y_11);
//	interface_11_sw.i_addr_l(w_addr_sw_101);
//	interface_11_sw.i_router_clk(i_clk);
//	interface_11_sw.i_wait_router(w_wait_sw_11);
//	interface_11_sw.i_nd_router(w_nd_sw_11);
//	interface_11_sw.i_din_router(w_dout_router_sw_11);
//	interface_11_sw.i_core_clk(i_clk);
//	interface_11_sw.i_send(w_send_sw_11);
//	interface_11_sw.i_request(w_request_sw_11);
//	interface_11_sw.i_din_core(w_din_core_sw_11);
//	interface_11_sw.o_write(w_wr_sw_11);
//	interface_11_sw.o_busy(w_busy_sw_11);
//	interface_11_sw.o_dout_router(w_din_router_sw_11);
//	interface_11_sw.o_nd_core(w_nd_core_sw_11);
//	interface_11_sw.o_wait_core(w_wait_core_sw_11);
//	interface_11_sw.o_dout_core(w_dout_core_sw_11);
//
//
//	network_interface interface_11_ee("interface_11_ee");
//
//	interface_11_ee.i_rst(w_rst);
//	interface_11_ee.i_addr_x(w_addr_x_11);
//	interface_11_ee.i_addr_y(w_addr_y_11);
//	interface_11_ee.i_addr_l(w_addr_ee_010);
//	interface_11_ee.i_router_clk(i_clk);
//	interface_11_ee.i_wait_router(w_wait_ee_11);
//	interface_11_ee.i_nd_router(w_nd_ee_11);
//	interface_11_ee.i_din_router(w_dout_router_ee_11);
//	interface_11_ee.i_core_clk(i_clk);
//	interface_11_ee.i_send(w_send_ee_11);
//	interface_11_ee.i_request(w_request_ee_11);
//	interface_11_ee.i_din_core(w_din_core_ee_11);
//	interface_11_ee.o_write(w_wr_ee_11);
//	interface_11_ee.o_busy(w_busy_ee_11);
//	interface_11_ee.o_dout_router(w_din_router_ee_11);
//	interface_11_ee.o_nd_core(w_nd_core_ee_11);
//	interface_11_ee.o_wait_core(w_wait_core_ee_11);
//	interface_11_ee.o_dout_core(w_dout_core_ee_11);
//
//
//	network_interface interface_11_nw("interface_11_nw");
//
//	interface_11_nw.i_rst(w_rst);
//	interface_11_nw.i_addr_x(w_addr_x_11);
//	interface_11_nw.i_addr_y(w_addr_y_11);
//	interface_11_nw.i_addr_l(w_addr_nw_111);
//	interface_11_nw.i_router_clk(i_clk);
//	interface_11_nw.i_wait_router(w_wait_nw_11);
//	interface_11_nw.i_nd_router(w_nd_nw_11);
//	interface_11_nw.i_din_router(w_dout_router_nw_11);
//	interface_11_nw.i_core_clk(i_clk);
//	interface_11_nw.i_send(w_send_nw_11);
//	interface_11_nw.i_request(w_request_nw_11);
//	interface_11_nw.i_din_core(w_din_core_nw_11);
//	interface_11_nw.o_write(w_wr_nw_11);
//	interface_11_nw.o_busy(w_busy_nw_11);
//	interface_11_nw.o_dout_router(w_din_router_nw_11);
//	interface_11_nw.o_nd_core(w_nd_core_nw_11);
//	interface_11_nw.o_wait_core(w_wait_core_nw_11);
//	interface_11_nw.o_dout_core(w_dout_core_nw_11);
//
//	//----------------------------------- Router 00 Cores -----------------------------------
//
//	core_var core_00_ne("core_00_ne");
//
//	core_00_ne.i_clk(i_clk);
//	core_00_ne.i_rst(w_rst);
//	core_00_ne.i_nd(w_nd_core_ne_00);
//	core_00_ne.i_wait(w_wait_core_ne_00);
//	core_00_ne.i_x_dst(w_addr_x_11);
//	core_00_ne.i_y_dst(w_addr_y_11);
//	core_00_ne.i_l_dst(w_addr_nw_111);
//	core_00_ne.i_dout_tc(w_dout_core_ne_00);
//	core_00_ne.o_rq(w_request_ne_00);
//	core_00_ne.o_sd(w_send_ne_00);
//	core_00_ne.o_din_fc(w_din_core_ne_00);
//
//	core_var core_00_se("core_00_se");
//
//	core_00_se.i_clk(i_clk);
//	core_00_se.i_rst(w_rst);
//	core_00_se.i_nd(w_nd_core_se_00);
//	core_00_se.i_wait(w_wait_core_se_00);
//	core_00_se.i_x_dst(w_addr_x_11);
//	core_00_se.i_y_dst(w_addr_y_11);
//	core_00_se.i_l_dst(w_addr_sw_101);
//	core_00_se.i_dout_tc(w_dout_core_se_00);
//	core_00_se.o_rq(w_request_se_00);
//	core_00_se.o_sd(w_send_se_00);
//	core_00_se.o_din_fc(w_din_core_se_00);
//
//	core_var core_00_ss("core_00_ss");
//
//	core_00_ss.i_clk(i_clk);
//	core_00_ss.i_rst(w_rst);
//	core_00_ss.i_nd(w_nd_core_ss_00);
//	core_00_ss.i_wait(w_wait_core_ss_00);
//	core_00_ss.i_x_dst(w_addr_x_11);
//	core_00_ss.i_y_dst(w_addr_y_11);
//	core_00_ss.i_l_dst(w_addr_se_011);
//	core_00_ss.i_dout_tc(w_dout_core_ss_00);
//	core_00_ss.o_rq(w_request_ss_00);
//	core_00_ss.o_sd(w_send_ss_00);
//	core_00_ss.o_din_fc(w_din_core_ss_00);
//
//	core_var core_00_sw("core_00_sw");
//
//	core_00_sw.i_clk(i_clk);
//	core_00_sw.i_rst(w_rst);
//	core_00_sw.i_nd(w_nd_core_sw_00);
//	core_00_sw.i_wait(w_wait_core_sw_00);
//	core_00_sw.i_x_dst(w_addr_x_11);
//	core_00_sw.i_y_dst(w_addr_y_11);
//	core_00_sw.i_l_dst(w_addr_ee_010);
//	core_00_sw.i_dout_tc(w_dout_core_sw_00);
//	core_00_sw.o_rq(w_request_sw_00);
//	core_00_sw.o_sd(w_send_sw_00);
//	core_00_sw.o_din_fc(w_din_core_sw_00);
//
//	core_var core_00_ww("core_00_ww");
//
//	core_00_ww.i_clk(i_clk);
//	core_00_ww.i_rst(w_rst);
//	core_00_ww.i_nd(w_nd_core_ww_00);
//	core_00_ww.i_wait(w_wait_core_ww_00);
//	core_00_ww.i_x_dst(w_addr_x_11);
//	core_00_ww.i_y_dst(w_addr_y_11);
//	core_00_ww.i_l_dst(w_addr_ne_001);
//	core_00_ww.i_dout_tc(w_dout_core_ww_00);
//	core_00_ww.o_rq(w_request_ww_00);
//	core_00_ww.o_sd(w_send_ww_00);
//	core_00_ww.o_din_fc(w_din_core_ww_00);
//
//	core_var core_00_nw("core_00_nw");
//
//	core_00_nw.i_clk(i_clk);
//	core_00_nw.i_rst(w_rst);
//	core_00_nw.i_nd(w_nd_core_nw_00);
//	core_00_nw.i_wait(w_wait_core_nw_00);
//	core_00_nw.i_x_dst(w_addr_x_11);
//	core_00_nw.i_y_dst(w_addr_y_11);
//	core_00_nw.i_l_dst(w_addr_nn_000);
//	core_00_nw.i_dout_tc(w_dout_core_nw_00);
//	core_00_nw.o_rq(w_request_nw_00);
//	core_00_nw.o_sd(w_send_nw_00);
//	core_00_nw.o_din_fc(w_din_core_nw_00);
//
//	//----------------------------------- Router 01 Cores -----------------------------------
//
//	core_var core_01_nn("core_01_nn");
//
//	core_01_nn.i_clk(i_clk);
//	core_01_nn.i_rst(w_rst);
//	core_01_nn.i_nd(w_nd_core_nn_01);
//	core_01_nn.i_wait(w_wait_core_nn_01);
//	core_01_nn.i_x_dst(w_addr_x_10);
//	core_01_nn.i_y_dst(w_addr_y_10);
//	core_01_nn.i_l_dst(w_addr_nw_111);
//	core_01_nn.i_dout_tc(w_dout_core_nn_01);
//	core_01_nn.o_rq(w_request_nn_01);
//	core_01_nn.o_sd(w_send_nn_01);
//	core_01_nn.o_din_fc(w_din_core_nn_01);
//
//	core_var core_01_ne("core_01_ne");
//
//	core_01_ne.i_clk(i_clk);
//	core_01_ne.i_rst(w_rst);
//	core_01_ne.i_nd(w_nd_core_ne_01);
//	core_01_ne.i_wait(w_wait_core_ne_01);
//	core_01_ne.i_x_dst(w_addr_x_10);
//	core_01_ne.i_y_dst(w_addr_y_10);
//	core_01_ne.i_l_dst(w_addr_sw_101);
//	core_01_ne.i_dout_tc(w_dout_core_ne_01);
//	core_01_ne.o_rq(w_request_ne_01);
//	core_01_ne.o_sd(w_send_ne_01);
//	core_01_ne.o_din_fc(w_din_core_ne_01);
//
//	core_var core_01_se("core_01_se");
//
//	core_01_se.i_clk(i_clk);
//	core_01_se.i_rst(w_rst);
//	core_01_se.i_nd(w_nd_core_se_01);
//	core_01_se.i_wait(w_wait_core_se_01);
//	core_01_se.i_x_dst(w_addr_x_10);
//	core_01_se.i_y_dst(w_addr_y_10);
//	core_01_se.i_l_dst(w_addr_ss_100);
//	core_01_se.i_dout_tc(w_dout_core_se_01);
//	core_01_se.o_rq(w_request_se_01);
//	core_01_se.o_sd(w_send_se_01);
//	core_01_se.o_din_fc(w_din_core_se_01);
//
//	core_var core_01_sw("core_01_sw");
//
//	core_01_sw.i_clk(i_clk);
//	core_01_sw.i_rst(w_rst);
//	core_01_sw.i_nd(w_nd_core_sw_01);
//	core_01_sw.i_wait(w_wait_core_sw_01);
//	core_01_sw.i_x_dst(w_addr_x_10);
//	core_01_sw.i_y_dst(w_addr_y_10);
//	core_01_sw.i_l_dst(w_addr_se_011);
//	core_01_sw.i_dout_tc(w_dout_core_sw_01);
//	core_01_sw.o_rq(w_request_sw_01);
//	core_01_sw.o_sd(w_send_sw_01);
//	core_01_sw.o_din_fc(w_din_core_sw_01);
//
//	core_var core_01_ww("core_01_ww");
//
//	core_01_ww.i_clk(i_clk);
//	core_01_ww.i_rst(w_rst);
//	core_01_ww.i_nd(w_nd_core_ww_01);
//	core_01_ww.i_wait(w_wait_core_ww_01);
//	core_01_ww.i_x_dst(w_addr_x_10);
//	core_01_ww.i_y_dst(w_addr_y_10);
//	core_01_ww.i_l_dst(w_addr_ee_010);
//	core_01_ww.i_dout_tc(w_dout_core_ww_01);
//	core_01_ww.o_rq(w_request_ww_01);
//	core_01_ww.o_sd(w_send_ww_01);
//	core_01_ww.o_din_fc(w_din_core_ww_01);
//
//	core_var core_01_nw("core_01_nw");
//
//	core_01_nw.i_clk(i_clk);
//	core_01_nw.i_rst(w_rst);
//	core_01_nw.i_nd(w_nd_core_nw_01);
//	core_01_nw.i_wait(w_wait_core_nw_01);
//	core_01_nw.i_x_dst(w_addr_x_10);
//	core_01_nw.i_y_dst(w_addr_y_10);
//	core_01_nw.i_l_dst(w_addr_ne_001);
//	core_01_nw.i_dout_tc(w_dout_core_nw_01);
//	core_01_nw.o_rq(w_request_nw_01);
//	core_01_nw.o_sd(w_send_nw_01);
//	core_01_nw.o_din_fc(w_din_core_nw_01);
//
//	//----------------------------------- Router 10 Cores -----------------------------------
//
//	core_var core_10_ne("core_10_ne");
//
//	core_10_ne.i_clk(i_clk);
//	core_10_ne.i_rst(w_rst);
//	core_10_ne.i_nd(w_nd_core_ne_10);
//	core_10_ne.i_wait(w_wait_core_ne_10);
//	core_10_ne.i_x_dst(w_addr_x_01);
//	core_10_ne.i_y_dst(w_addr_y_01);
//	core_10_ne.i_l_dst(w_addr_nw_111);
//	core_10_ne.i_dout_tc(w_dout_core_ne_10);
//	core_10_ne.o_rq(w_request_ne_10);
//	core_10_ne.o_sd(w_send_ne_10);
//	core_10_ne.o_din_fc(w_din_core_ne_10);
//
//	core_var core_10_ee("core_10_ee");
//
//	core_10_ee.i_clk(i_clk);
//	core_10_ee.i_rst(w_rst);
//	core_10_ee.i_nd(w_nd_core_ee_10);
//	core_10_ee.i_wait(w_wait_core_ee_10);
//	core_10_ee.i_x_dst(w_addr_x_01);
//	core_10_ee.i_y_dst(w_addr_y_01);
//	core_10_ee.i_l_dst(w_addr_ww_110);
//	core_10_ee.i_dout_tc(w_dout_core_ee_10);
//	core_10_ee.o_rq(w_request_ee_10);
//	core_10_ee.o_sd(w_send_ee_10);
//	core_10_ee.o_din_fc(w_din_core_ee_10);
//
//	core_var core_10_se("core_10_se");
//
//	core_10_se.i_clk(i_clk);
//	core_10_se.i_rst(w_rst);
//	core_10_se.i_nd(w_nd_core_se_10);
//	core_10_se.i_wait(w_wait_core_se_10);
//	core_10_se.i_x_dst(w_addr_x_01);
//	core_10_se.i_y_dst(w_addr_y_01);
//	core_10_se.i_l_dst(w_addr_sw_101);
//	core_10_se.i_dout_tc(w_dout_core_se_10);
//	core_10_se.o_rq(w_request_se_10);
//	core_10_se.o_sd(w_send_se_10);
//	core_10_se.o_din_fc(w_din_core_se_10);
//
//	core_var core_10_ss("core_10_ss");
//
//	core_10_ss.i_clk(i_clk);
//	core_10_ss.i_rst(w_rst);
//	core_10_ss.i_nd(w_nd_core_ss_10);
//	core_10_ss.i_wait(w_wait_core_ss_10);
//	core_10_ss.i_x_dst(w_addr_x_01);
//	core_10_ss.i_y_dst(w_addr_y_01);
//	core_10_ss.i_l_dst(w_addr_se_011);
//	core_10_ss.i_dout_tc(w_dout_core_ss_10);
//	core_10_ss.o_rq(w_request_ss_10);
//	core_10_ss.o_sd(w_send_ss_10);
//	core_10_ss.o_din_fc(w_din_core_ss_10);
//
//	core_var core_10_sw("core_10_sw");
//
//	core_10_sw.i_clk(i_clk);
//	core_10_sw.i_rst(w_rst);
//	core_10_sw.i_nd(w_nd_core_sw_10);
//	core_10_sw.i_wait(w_wait_core_sw_10);
//	core_10_sw.i_x_dst(w_addr_x_01);
//	core_10_sw.i_y_dst(w_addr_y_01);
//	core_10_sw.i_l_dst(w_addr_ne_001);
//	core_10_sw.i_dout_tc(w_dout_core_sw_10);
//	core_10_sw.o_rq(w_request_sw_10);
//	core_10_sw.o_sd(w_send_sw_10);
//	core_10_sw.o_din_fc(w_din_core_sw_10);
//
//	core_var core_10_nw("core_10_nw");
//
//	core_10_nw.i_clk(i_clk);
//	core_10_nw.i_rst(w_rst);
//	core_10_nw.i_nd(w_nd_core_nw_10);
//	core_10_nw.i_wait(w_wait_core_nw_10);
//	core_10_nw.i_x_dst(w_addr_x_01);
//	core_10_nw.i_y_dst(w_addr_y_01);
//	core_10_nw.i_l_dst(w_addr_nn_000);
//	core_10_nw.i_dout_tc(w_dout_core_nw_10);
//	core_10_nw.o_rq(w_request_nw_10);
//	core_10_nw.o_sd(w_send_nw_10);
//	core_10_nw.o_din_fc(w_din_core_nw_10);
//
//	//----------------------------------- Router 11 Cores -----------------------------------
//
//	core_var core_11_nn("core_11_nn");
//
//	core_11_nn.i_clk(i_clk);
//	core_11_nn.i_rst(w_rst);
//	core_11_nn.i_nd(w_nd_core_nn_11);
//	core_11_nn.i_wait(w_wait_core_nn_11);
//	core_11_nn.i_x_dst(w_addr_x_00);
//	core_11_nn.i_y_dst(w_addr_y_00);
//	core_11_nn.i_l_dst(w_addr_nw_111);
//	core_11_nn.i_dout_tc(w_dout_core_nn_11);
//	core_11_nn.o_rq(w_request_nn_11);
//	core_11_nn.o_sd(w_send_nn_11);
//	core_11_nn.o_din_fc(w_din_core_nn_11);
//
//	core_var core_11_ne("core_11_ne");
//
//	core_11_ne.i_clk(i_clk);
//	core_11_ne.i_rst(w_rst);
//	core_11_ne.i_nd(w_nd_core_ne_11);
//	core_11_ne.i_wait(w_wait_core_ne_11);
//	core_11_ne.i_x_dst(w_addr_x_00);
//	core_11_ne.i_y_dst(w_addr_y_00);
//	core_11_ne.i_l_dst(w_addr_ww_110);
//	core_11_ne.i_dout_tc(w_dout_core_ne_11);
//	core_11_ne.o_rq(w_request_ne_11);
//	core_11_ne.o_sd(w_send_ne_11);
//	core_11_ne.o_din_fc(w_din_core_ne_11);
//
//	core_var core_11_ee("core_11_ee");
//
//	core_11_ee.i_clk(i_clk);
//	core_11_ee.i_rst(w_rst);
//	core_11_ee.i_nd(w_nd_core_ee_11);
//	core_11_ee.i_wait(w_wait_core_ee_11);
//	core_11_ee.i_x_dst(w_addr_x_00);
//	core_11_ee.i_y_dst(w_addr_y_00);
//	core_11_ee.i_l_dst(w_addr_sw_101);
//	core_11_ee.i_dout_tc(w_dout_core_ee_11);
//	core_11_ee.o_rq(w_request_ee_11);
//	core_11_ee.o_sd(w_send_ee_11);
//	core_11_ee.o_din_fc(w_din_core_ee_11);
//
//	core_var core_11_se("core_11_se");
//
//	core_11_se.i_clk(i_clk);
//	core_11_se.i_rst(w_rst);
//	core_11_se.i_nd(w_nd_core_se_11);
//	core_11_se.i_wait(w_wait_core_se_11);
//	core_11_se.i_x_dst(w_addr_x_00);
//	core_11_se.i_y_dst(w_addr_y_00);
//	core_11_se.i_l_dst(w_addr_ss_100);
//	core_11_se.i_dout_tc(w_dout_core_se_11);
//	core_11_se.o_rq(w_request_se_11);
//	core_11_se.o_sd(w_send_se_11);
//	core_11_se.o_din_fc(w_din_core_se_11);
//
//	core_var core_11_sw("core_11_sw");
//
//	core_11_sw.i_clk(i_clk);
//	core_11_sw.i_rst(w_rst);
//	core_11_sw.i_nd(w_nd_core_sw_11);
//	core_11_sw.i_wait(w_wait_core_sw_11);
//	core_11_sw.i_x_dst(w_addr_x_00);
//	core_11_sw.i_y_dst(w_addr_y_00);
//	core_11_sw.i_l_dst(w_addr_se_011);
//	core_11_sw.i_dout_tc(w_dout_core_sw_11);
//	core_11_sw.o_rq(w_request_sw_11);
//	core_11_sw.o_sd(w_send_sw_11);
//	core_11_sw.o_din_fc(w_din_core_sw_11);
//
//	core_var core_11_nw("core_11_nw");
//
//	core_11_nw.i_clk(i_clk);
//	core_11_nw.i_rst(w_rst);
//	core_11_nw.i_nd(w_nd_core_nw_11);
//	core_11_nw.i_wait(w_wait_core_nw_11);
//	core_11_nw.i_x_dst(w_addr_x_00);
//	core_11_nw.i_y_dst(w_addr_y_00);
//	core_11_nw.i_l_dst(w_addr_ne_001);
//	core_11_nw.i_dout_tc(w_dout_core_nw_11);
//	core_11_nw.o_rq(w_request_nw_11);
//	core_11_nw.o_sd(w_send_nw_11);
//	core_11_nw.o_din_fc(w_din_core_nw_11);
//
//	//----------------------------------- Stimulus RST -----------------------------------
//
//	StimulusRST i_rst("i_rst");
//
//	i_rst.s_rst(w_rst);
//	i_rst.s_addr_x_00(w_addr_x_00);
//	i_rst.s_addr_y_00(w_addr_y_00);
//	i_rst.s_addr_x_01(w_addr_x_01);
//	i_rst.s_addr_y_01(w_addr_y_01);
//	i_rst.s_addr_x_10(w_addr_x_10);
//	i_rst.s_addr_y_10(w_addr_y_10);
//	i_rst.s_addr_x_11(w_addr_x_11);
//	i_rst.s_addr_y_11(w_addr_y_11);
//	i_rst.s_addr_nn_000(w_addr_nn_000);
//	i_rst.s_addr_ne_001(w_addr_ne_001);
//	i_rst.s_addr_ee_010(w_addr_ee_010);
//	i_rst.s_addr_se_011(w_addr_se_011);
//	i_rst.s_addr_ss_100(w_addr_ss_100);
//	i_rst.s_addr_sw_101(w_addr_sw_101);
//	i_rst.s_addr_ww_110(w_addr_ww_110);
//	i_rst.s_addr_nw_111(w_addr_nw_111);
//
//	//----------------------------------- Sniffers -----------------------------------
//
//	sniffer sniffer_00_ne("sniffer_00_ne");
//
//	sniffer_00_ne.i_clk(i_clk);
//	sniffer_00_ne.i_rst(w_rst);
//	sniffer_00_ne.i_addr_x(w_addr_x_00);
//	sniffer_00_ne.i_addr_y(w_addr_y_00);
//	sniffer_00_ne.i_addr_l(w_addr_ne_001);
//	sniffer_00_ne.i_req(w_request_ne_00);
//	sniffer_00_ne.i_data(w_dout_core_ne_00);
//	sniffer_00_ne.o_data(w_data_1);
//
//	sniffer sniffer_00_se("sniffer_00_se");
//
//	sniffer_00_se.i_clk(i_clk);
//	sniffer_00_se.i_rst(w_rst);
//	sniffer_00_se.i_addr_x(w_addr_x_00);
//	sniffer_00_se.i_addr_y(w_addr_y_00);
//	sniffer_00_se.i_addr_l(w_addr_se_011);
//	sniffer_00_se.i_req(w_request_se_00);
//	sniffer_00_se.i_data(w_dout_core_se_00);
//	sniffer_00_se.o_data(w_data_3);
//
//	sniffer sniffer_00_ss("sniffer_00_ss");
//
//	sniffer_00_ss.i_clk(i_clk);
//	sniffer_00_ss.i_rst(w_rst);
//	sniffer_00_ss.i_addr_x(w_addr_x_00);
//	sniffer_00_ss.i_addr_y(w_addr_y_00);
//	sniffer_00_ss.i_addr_l(w_addr_ss_100);
//	sniffer_00_ss.i_req(w_request_ss_00);
//	sniffer_00_ss.i_data(w_dout_core_ss_00);
//	sniffer_00_ss.o_data(w_data_4);
//
//	sniffer sniffer_00_sw("sniffer_00_sw");
//
//	sniffer_00_sw.i_clk(i_clk);
//	sniffer_00_sw.i_rst(w_rst);
//	sniffer_00_sw.i_addr_x(w_addr_x_00);
//	sniffer_00_sw.i_addr_y(w_addr_y_00);
//	sniffer_00_sw.i_addr_l(w_addr_sw_101);
//	sniffer_00_sw.i_req(w_request_sw_00);
//	sniffer_00_sw.i_data(w_dout_core_sw_00);
//	sniffer_00_sw.o_data(w_data_5);
//
//	sniffer sniffer_00_ww("sniffer_00_ww");
//
//	sniffer_00_ww.i_clk(i_clk);
//	sniffer_00_ww.i_rst(w_rst);
//	sniffer_00_ww.i_addr_x(w_addr_x_00);
//	sniffer_00_ww.i_addr_y(w_addr_y_00);
//	sniffer_00_ww.i_addr_l(w_addr_ww_110);
//	sniffer_00_ww.i_req(w_request_ww_00);
//	sniffer_00_ww.i_data(w_dout_core_ww_00);
//	sniffer_00_ww.o_data(w_data_6);
//
//	sniffer sniffer_00_nw("sniffer_00_nw");
//
//	sniffer_00_nw.i_clk(i_clk);
//	sniffer_00_nw.i_rst(w_rst);
//	sniffer_00_nw.i_addr_x(w_addr_x_00);
//	sniffer_00_nw.i_addr_y(w_addr_y_00);
//	sniffer_00_nw.i_addr_l(w_addr_nw_111);
//	sniffer_00_nw.i_req(w_request_nw_00);
//	sniffer_00_nw.i_data(w_dout_core_nw_00);
//	sniffer_00_nw.o_data(w_data_7);
//
//	sniffer sniffer_01_nn("sniffer_01_nn");
//
//	sniffer_01_nn.i_clk(i_clk);
//	sniffer_01_nn.i_rst(w_rst);
//	sniffer_01_nn.i_addr_x(w_addr_x_01);
//	sniffer_01_nn.i_addr_y(w_addr_y_01);
//	sniffer_01_nn.i_addr_l(w_addr_nn_000);
//	sniffer_01_nn.i_req(w_request_nn_01);
//	sniffer_01_nn.i_data(w_dout_core_nn_01);
//	sniffer_01_nn.o_data(w_data_8);
//
//	sniffer sniffer_01_ne("sniffer_01_ne");
//
//	sniffer_01_ne.i_clk(i_clk);
//	sniffer_01_ne.i_rst(w_rst);
//	sniffer_01_ne.i_addr_x(w_addr_x_01);
//	sniffer_01_ne.i_addr_y(w_addr_y_01);
//	sniffer_01_ne.i_addr_l(w_addr_ne_001);
//	sniffer_01_ne.i_req(w_request_ne_01);
//	sniffer_01_ne.i_data(w_dout_core_ne_01);
//	sniffer_01_ne.o_data(w_data_9);
//
//	sniffer sniffer_01_se("sniffer_01_se");
//
//	sniffer_01_se.i_clk(i_clk);
//	sniffer_01_se.i_rst(w_rst);
//	sniffer_01_se.i_addr_x(w_addr_x_01);
//	sniffer_01_se.i_addr_y(w_addr_y_01);
//	sniffer_01_se.i_addr_l(w_addr_se_011);
//	sniffer_01_se.i_req(w_request_se_01);
//	sniffer_01_se.i_data(w_dout_core_se_01);
//	sniffer_01_se.o_data(w_data_11);
//
//	sniffer sniffer_01_sw("sniffer_01_sw");
//
//	sniffer_01_sw.i_clk(i_clk);
//	sniffer_01_sw.i_rst(w_rst);
//	sniffer_01_sw.i_addr_x(w_addr_x_01);
//	sniffer_01_sw.i_addr_y(w_addr_y_01);
//	sniffer_01_sw.i_addr_l(w_addr_sw_101);
//	sniffer_01_sw.i_req(w_request_sw_01);
//	sniffer_01_sw.i_data(w_dout_core_sw_01);
//	sniffer_01_sw.o_data(w_data_13);
//
//	sniffer sniffer_01_ww("sniffer_01_ww");
//
//	sniffer_01_ww.i_clk(i_clk);
//	sniffer_01_ww.i_rst(w_rst);
//	sniffer_01_ww.i_addr_x(w_addr_x_01);
//	sniffer_01_ww.i_addr_y(w_addr_y_01);
//	sniffer_01_ww.i_addr_l(w_addr_ww_110);
//	sniffer_01_ww.i_req(w_request_ww_01);
//	sniffer_01_ww.i_data(w_dout_core_ww_01);
//	sniffer_01_ww.o_data(w_data_14);
//
//	sniffer sniffer_01_nw("sniffer_01_nw");
//
//	sniffer_01_nw.i_clk(i_clk);
//	sniffer_01_nw.i_rst(w_rst);
//	sniffer_01_nw.i_addr_x(w_addr_x_01);
//	sniffer_01_nw.i_addr_y(w_addr_y_01);
//	sniffer_01_nw.i_addr_l(w_addr_nw_111);
//	sniffer_01_nw.i_req(w_request_nw_01);
//	sniffer_01_nw.i_data(w_dout_core_nw_01);
//	sniffer_01_nw.o_data(w_data_15);
//
//	sniffer sniffer_10_ne("sniffer_10_ne");
//
//	sniffer_10_ne.i_clk(i_clk);
//	sniffer_10_ne.i_rst(w_rst);
//	sniffer_10_ne.i_addr_x(w_addr_x_10);
//	sniffer_10_ne.i_addr_y(w_addr_y_10);
//	sniffer_10_ne.i_addr_l(w_addr_ne_001);
//	sniffer_10_ne.i_req(w_request_ne_10);
//	sniffer_10_ne.i_data(w_dout_core_ne_10);
//	sniffer_10_ne.o_data(w_data_17);
//
//	sniffer sniffer_10_ee("sniffer_10_ee");
//
//	sniffer_10_ee.i_clk(i_clk);
//	sniffer_10_ee.i_rst(w_rst);
//	sniffer_10_ee.i_addr_x(w_addr_x_10);
//	sniffer_10_ee.i_addr_y(w_addr_y_10);
//	sniffer_10_ee.i_addr_l(w_addr_ee_010);
//	sniffer_10_ee.i_req(w_request_ee_10);
//	sniffer_10_ee.i_data(w_dout_core_ee_10);
//	sniffer_10_ee.o_data(w_data_18);
//
//	sniffer sniffer_10_se("sniffer_10_se");
//
//	sniffer_10_se.i_clk(i_clk);
//	sniffer_10_se.i_rst(w_rst);
//	sniffer_10_se.i_addr_x(w_addr_x_10);
//	sniffer_10_se.i_addr_y(w_addr_y_10);
//	sniffer_10_se.i_addr_l(w_addr_se_011);
//	sniffer_10_se.i_req(w_request_se_10);
//	sniffer_10_se.i_data(w_dout_core_se_10);
//	sniffer_10_se.o_data(w_data_19);
//	
//	sniffer sniffer_10_ss("sniffer_10_ss");
//
//	sniffer_10_ss.i_clk(i_clk);
//	sniffer_10_ss.i_rst(w_rst);
//	sniffer_10_ss.i_addr_x(w_addr_x_10);
//	sniffer_10_ss.i_addr_y(w_addr_y_10);
//	sniffer_10_ss.i_addr_l(w_addr_ss_100);
//	sniffer_10_ss.i_req(w_request_ss_10);
//	sniffer_10_ss.i_data(w_dout_core_ss_10);
//	sniffer_10_ss.o_data(w_data_20);
//
//	sniffer sniffer_10_sw("sniffer_10_sw");
//
//	sniffer_10_sw.i_clk(i_clk);
//	sniffer_10_sw.i_rst(w_rst);
//	sniffer_10_sw.i_addr_x(w_addr_x_10);
//	sniffer_10_sw.i_addr_y(w_addr_y_10);
//	sniffer_10_sw.i_addr_l(w_addr_sw_101);
//	sniffer_10_sw.i_req(w_request_sw_10);
//	sniffer_10_sw.i_data(w_dout_core_sw_10);
//	sniffer_10_sw.o_data(w_data_21);
//
//	sniffer sniffer_10_nw("sniffer_10_nw");
//
//	sniffer_10_nw.i_clk(i_clk);
//	sniffer_10_nw.i_rst(w_rst);
//	sniffer_10_nw.i_addr_x(w_addr_x_10);
//	sniffer_10_nw.i_addr_y(w_addr_y_10);
//	sniffer_10_nw.i_addr_l(w_addr_nw_111);
//	sniffer_10_nw.i_req(w_request_nw_10);
//	sniffer_10_nw.i_data(w_dout_core_nw_10);
//	sniffer_10_nw.o_data(w_data_23);
//
//	sniffer sniffer_11_nn("sniffer_11_nn");
//
//	sniffer_11_nn.i_clk(i_clk);
//	sniffer_11_nn.i_rst(w_rst);
//	sniffer_11_nn.i_addr_x(w_addr_x_11);
//	sniffer_11_nn.i_addr_y(w_addr_y_11);
//	sniffer_11_nn.i_addr_l(w_addr_nn_000);
//	sniffer_11_nn.i_req(w_request_nn_11);
//	sniffer_11_nn.i_data(w_dout_core_nn_11);
//	sniffer_11_nn.o_data(w_data_24);
//
//	sniffer sniffer_11_ne("sniffer_11_ne");
//
//	sniffer_11_ne.i_clk(i_clk);
//	sniffer_11_ne.i_rst(w_rst);
//	sniffer_11_ne.i_addr_x(w_addr_x_11);
//	sniffer_11_ne.i_addr_y(w_addr_y_11);
//	sniffer_11_ne.i_addr_l(w_addr_ne_001);
//	sniffer_11_ne.i_req(w_request_ne_11);
//	sniffer_11_ne.i_data(w_dout_core_ne_11);
//	sniffer_11_ne.o_data(w_data_25);
//
//	sniffer sniffer_11_ee("sniffer_11_ee");
//
//	sniffer_11_ee.i_clk(i_clk);
//	sniffer_11_ee.i_rst(w_rst);
//	sniffer_11_ee.i_addr_x(w_addr_x_11);
//	sniffer_11_ee.i_addr_y(w_addr_y_11);
//	sniffer_11_ee.i_addr_l(w_addr_ee_010);
//	sniffer_11_ee.i_req(w_request_ee_11);
//	sniffer_11_ee.i_data(w_dout_core_ee_11);
//	sniffer_11_ee.o_data(w_data_26);
//
//	sniffer sniffer_11_se("sniffer_11_se");
//
//	sniffer_11_se.i_clk(i_clk);
//	sniffer_11_se.i_rst(w_rst);
//	sniffer_11_se.i_addr_x(w_addr_x_11);
//	sniffer_11_se.i_addr_y(w_addr_y_11);
//	sniffer_11_se.i_addr_l(w_addr_se_011);
//	sniffer_11_se.i_req(w_request_se_11);
//	sniffer_11_se.i_data(w_dout_core_se_11);
//	sniffer_11_se.o_data(w_data_27);
//
//	sniffer sniffer_11_sw("sniffer_11_sw");
//
//	sniffer_11_sw.i_clk(i_clk);
//	sniffer_11_sw.i_rst(w_rst);
//	sniffer_11_sw.i_addr_x(w_addr_x_11);
//	sniffer_11_sw.i_addr_y(w_addr_y_11);
//	sniffer_11_sw.i_addr_l(w_addr_sw_101);
//	sniffer_11_sw.i_req(w_request_sw_11);
//	sniffer_11_sw.i_data(w_dout_core_sw_11);
//	sniffer_11_sw.o_data(w_data_29);
//
//	sniffer sniffer_11_nw("sniffer_11_nw");
//
//	sniffer_11_nw.i_clk(i_clk);
//	sniffer_11_nw.i_rst(w_rst);
//	sniffer_11_nw.i_addr_x(w_addr_x_11);
//	sniffer_11_nw.i_addr_y(w_addr_y_11);
//	sniffer_11_nw.i_addr_l(w_addr_nw_111);
//	sniffer_11_nw.i_req(w_request_nw_11);
//	sniffer_11_nw.i_data(w_dout_core_nw_11);
//	sniffer_11_nw.o_data(w_data_31);
//
//	//----------------------------------- Manager -----------------------------------
//	mux mux("mux");
//	mux.i_rst(w_rst);
//	mux.i_sel(w_sel);
//	mux.i_y_1(w_data_1);
//	mux.i_y_3(w_data_3);
//	mux.i_y_4(w_data_4);
//	mux.i_y_5(w_data_5);
//	mux.i_y_6(w_data_6);
//	mux.i_y_7(w_data_7);
//	mux.i_y_8(w_data_8);
//	mux.i_y_9(w_data_9);
//	mux.i_y_11(w_data_11);
//	mux.i_y_13(w_data_13);
//	mux.i_y_14(w_data_14);
//	mux.i_y_15(w_data_15);
//	mux.i_y_17(w_data_17);
//	mux.i_y_18(w_data_18);
//	mux.i_y_19(w_data_19);
//	mux.i_y_20(w_data_20);
//	mux.i_y_21(w_data_21);
//	mux.i_y_23(w_data_23);
//	mux.i_y_24(w_data_24);
//	mux.i_y_25(w_data_25);
//	mux.i_y_26(w_data_26);
//	mux.i_y_27(w_data_27);
//	mux.i_y_29(w_data_29);
//	mux.i_y_31(w_data_31);
//	mux.o_data(w_data);
//
//	manager manager("manager");
//
//	manager.i_clk(i_clk);
//	manager.i_rst(w_rst);
//	manager.i_data(w_data);
//	manager.o_sel(w_sel);
//
//	//----------------------------------- Trace -----------------------------------
//
//	//cout << "Arquivos de trace." << endl;
//
//	//sc_trace_file *wf = sc_create_vcd_trace_file("trace_RTSNoC");
//	//sc_trace(wf, i_clk, "clk");
//	//sc_trace(wf, i_rst.s_rst, "rst");
//
//	//sc_trace(wf, router_00.o_dout_ne, "o_dout_router_00_ne");
//	//sc_trace(wf, router_00.o_dout_se, "o_dout_router_00_se");
//	//sc_trace(wf, router_00.o_dout_ss, "o_dout_router_00_ss");
//	//sc_trace(wf, router_00.o_dout_sw, "o_dout_router_00_sw");
//	//sc_trace(wf, router_00.o_dout_ww, "o_dout_router_00_ww");
//	//sc_trace(wf, router_00.o_dout_nw, "o_dout_router_00_nw");
//	//sc_trace(wf, router_01.o_dout_nn, "o_dout_router_01_nn");
//	//sc_trace(wf, router_01.o_dout_ne, "o_dout_router_01_ne");
//	//sc_trace(wf, router_01.o_dout_se, "o_dout_router_01_se");
//	//sc_trace(wf, router_01.o_dout_sw, "o_dout_router_01_sw");
//	//sc_trace(wf, router_01.o_dout_ww, "o_dout_router_01_ww");
//	//sc_trace(wf, router_01.o_dout_nw, "o_dout_router_01_nw");
//	//sc_trace(wf, router_10.o_dout_ne, "o_dout_router_10_ne");
//	//sc_trace(wf, router_10.o_dout_ee, "o_dout_router_10_ee");
//	//sc_trace(wf, router_10.o_dout_se, "o_dout_router_10_se");
//	//sc_trace(wf, router_10.o_dout_ss, "o_dout_router_10_ss");
//	//sc_trace(wf, router_10.o_dout_sw, "o_dout_router_10_sw");
//	//sc_trace(wf, router_10.o_dout_nw, "o_dout_router_10_nw");
//	//sc_trace(wf, router_11.o_dout_nn, "o_dout_router_11_nn");
//	//sc_trace(wf, router_11.o_dout_ne, "o_dout_router_11_ne");
//	//sc_trace(wf, router_11.o_dout_ee, "o_dout_router_11_ee");
//	//sc_trace(wf, router_11.o_dout_se, "o_dout_router_11_se");
//	//sc_trace(wf, router_11.o_dout_sw, "o_dout_router_11_sw");
//	//sc_trace(wf, router_11.o_dout_nw, "o_dout_router_11_nw");
//
//
//	sc_start();
//	//sc_close_vcd_trace_file(wf);
//
//	cout << "Fim da execucao." << endl;
//	return(0);
//}