#include"output_fifo.h"

void output_fifo::prc_read_fifo() {
	if (i_rst.read() == 1) {
		o_empty.write(1);
	}
	else
		o_empty.write(w_empty);
}

void output_fifo::prc_write_fifo() {
	if (i_rst.read() == 1) {
		o_full.write(0);
		o_almost_full.write(0);
	}
	else {
		o_full.write(w_full);
		o_almost_full.write(w_almost_full);
	}
}