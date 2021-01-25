#include"router_adapter.h"

void router_adapter::prc_sendFlitRouter() {
	if (i_rst.read() == 1) {
		o_pop_output_fifo.write(0);
		o_wr.write(0);
		o_data_router.write(0);
		st_STATE_SEND = st_IDLE;
	}
	else {
		switch (st_STATE_SEND) {
		case st_IDLE:
			o_pop_output_fifo.write(0);
			o_wr.write(0);
			if ((i_wait.read() == 0)&(i_empty_output_fifo.read() == 0)) {
				o_pop_output_fifo.write(1);
				st_STATE_SEND = st_POP;
			}
			else
				st_STATE_SEND = st_IDLE;
			break;
		case st_POP:
			o_data_router.write(i_data_output_fifo);
			o_pop_output_fifo.write(0);
			o_wr.write(1);
			st_STATE_SEND = st_IDLE;
			break;
		}
	}
}

void router_adapter::prc_receiveFlitRouter() {
	if (i_rst.read() == 1) {
		o_push_input_fifo.write(0);
		o_busy.write(0);
		o_data_input_fifo.write(0);
		st_STATE_RECEIVE = st_READY;
	}
	else {
		switch (st_STATE_RECEIVE) {
		case st_READY:
			o_push_input_fifo.write(0);
			if ((i_nd.read() == 1)&(i_full_input_fifo.read() == 0)) {
				o_busy.write(1);
				flit = (i_data_router.read().range(p_MSB, (p_MSB - p_SIZE_X - p_SIZE_Y - 3)), i_data_router.read().range((p_DATA-1), 0));
				o_data_input_fifo.write(flit);
				o_push_input_fifo.write(1);
				st_STATE_RECEIVE = st_PUSH;
			}
			else
				st_STATE_RECEIVE = st_READY;
			break;
		case st_PUSH:
			o_busy.write(0);
			o_push_input_fifo.write(0);
			st_STATE_RECEIVE = st_READY;
			break;
		}
	}
}