#include"register.h"

void reg::prc_reg() {
	if (i_rst.read() == 1) {
		o_data.write(0);
		data = 0;
	}
	else {
		if (i_op.read() == 0b11)
			data = (i_addr_x.read(), i_addr_y.read(), i_addr_l.read(), i_addr_ori.read(), i_n_flit.read(), i_time.read());
	}
	o_data.write(data);
}