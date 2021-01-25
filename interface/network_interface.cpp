#include "network_interface.h"

void network_interface::prc_routerSide() {
	/*if (i_rst.read() == 1) {
		o_write.write(0);
		o_busy.write(0);
	}
	else {
		o_write.write(w_write);
		o_busy.write(w_busy);
	}*/
}

void network_interface::prc_coreSide() {
	/*if (i_rst.read() == 1) {
		o_nd_core.write(1);
		o_wait_core.write(0);
	}
	else {
		o_nd_core.write(w_nd_core);
		o_wait_core.write(w_wait_core);
	}*/
}