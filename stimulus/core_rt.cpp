#include"core_rt.h"

void core_rt::prc_receive() {
	if (i_rst.read() == 1) {
		o_rq.write(0);
		st_STATE_REQUEST = st_IDLE_REQUEST;
	}
	else {
		switch (st_STATE_REQUEST) {

		case st_IDLE_REQUEST:
			o_rq.write(0);
			if (i_nd.read() == 0) {
				o_rq.write(1);
				st_STATE_REQUEST = st_REQUEST;
			}
			else
				st_STATE_REQUEST = st_IDLE_REQUEST;
			break;

		case st_REQUEST:
			o_rq.write(1);
			st_STATE_REQUEST = st_DISABLE;
			break;

		case st_DISABLE:
			o_rq.write(0);
			st_STATE_REQUEST = st_IDLE_REQUEST;
			break;
		}
	}
}

void core_rt::prc_send() {
	//srand(time(NULL));
	if (i_rst.read() == 1) {
		o_din_fc.write(0);
		o_sd.write(0);
		n_flit = 0;
		idle = 0;
		st_STATE_SEND = st_INIT;
	}
	else {
		switch (st_STATE_SEND) {

		case st_INIT:
			o_din_fc.write(0);
			o_sd.write(0);
			idle = 0;
			if (i_wait.read() == 0)
				st_STATE_SEND = st_HEADER;
			else
				st_STATE_SEND = st_INIT;
			break;

		case st_HEADER:
			//i = rand() % p_REAL_TIME + 1;
			c_dst_addr = (1, i_x_dst.read(), i_y_dst.read(), i_l_dst.read());
			data = 0b11110000000000000000000000000000;
			o_din_fc.write((c_dst_addr, data));
			o_sd.write(1);
			n_flit++;
			st_STATE_SEND = st_DISABLE_HEADER;
			break;

		case st_DISABLE_HEADER:
			o_sd.write(0);
			if (i_wait.read() == 0)
				st_STATE_SEND = st_BODY;
			else
				st_STATE_SEND = st_DISABLE_HEADER;
			break;

		case st_BODY:
			if (i_wait.read() == 0) {
				c_dst_addr = (0, i_x_dst.read(), i_y_dst.read(), i_l_dst.read());
				o_din_fc.write((c_dst_addr, n_flit));
				n_flit++;
				o_sd.write(1);
				st_STATE_SEND = st_DISABLE_BODY;
			}
			else
				st_STATE_SEND = st_BODY;
			break;

		case st_DISABLE_BODY:
			o_sd.write(0);
			//if ((i_wait.read() == 0)&(n_flit < i))
			if ((i_wait.read() == 0)&(n_flit < p_REAL_TIME + 1))
				st_STATE_SEND = st_BODY;
			//else if ((i_wait.read() == 0)&(n_flit == i))
			else if ((i_wait.read() == 0)&(n_flit == p_REAL_TIME + 1))
				st_STATE_SEND = st_TAIL;
			else
				st_STATE_SEND = st_DISABLE_BODY;
			break;

		case st_TAIL:
			if (i_wait.read() == 0) {
				n_flit = 0;
				c_dst_addr = (1, i_x_dst.read(), i_y_dst.read(), i_l_dst.read());
				data = 0b11111111000000000000000000000000;
				o_din_fc.write((c_dst_addr, data));
				o_sd.write(1);
				st_STATE_SEND = st_DISABLE_TAIL;
			}
			else
				st_STATE_SEND = st_TAIL;
			break;

		case st_DISABLE_TAIL:
			o_sd.write(0);
			st_STATE_SEND = st_IDLE_SEND;
			break;

		case st_IDLE_SEND:
			o_din_fc.write(0);
			o_sd.write(0);
			idle++;
			if (idle <= 2)
				st_STATE_SEND = st_IDLE_SEND;
			else
				//Alterado de INIT para IDLE
				//st_STATE_SEND = st_INIT;
				st_STATE_SEND = st_IDLE_SEND;
			break;
		}
	}
}