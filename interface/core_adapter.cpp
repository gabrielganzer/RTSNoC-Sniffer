#include"core_adapter.h"

void core_adapter::prc_sendFlit() {
	if (i_rst.read() == 1) {
		o_full.write(0);
		o_push.write(0);
	}
	else {
		if ((i_send.read() == 0) & (i_fifo_full.read() == 0)) {
			o_full.write(0);
			o_push.write(0);
		}
		else if ((i_send.read() == 1) & (i_fifo_full.read() == 0)) {
			o_full.write(0);
			o_push.write(1);
		}
		else {
			o_full.write(1);
			o_push.write(0);
		}
	}
	flit = (i_din.read().range(p_MSB_CORE, p_MSB_CORE), p_addr_x.read(), p_addr_y.read(), p_addr_l.read(), i_din.read().range((p_MSB_CORE - 1), 0));
	o_data_output_fifo.write(flit);
}

void core_adapter::prc_receiveFlit() {

	if (i_rst.read() == 1) {
		o_pop.write(0);
		o_empty.write(1);
	}
	else{
		if ((i_request.read() == 0) & (i_fifo_empty.read() == 0)) {
			o_pop.write(0);
			o_empty.write(0);
		}
		else if ((i_request.read() == 1) & (i_fifo_empty.read() == 0)) {
			o_pop.write(1);
			o_empty.write(0);
		}
		else {
			o_pop.write(0);
			o_empty.write(1);
		}
	}
	o_dout.write(i_data_input_fifo.read());
}