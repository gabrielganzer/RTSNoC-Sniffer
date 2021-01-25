#include"flit_counter.h"

void flit_counter::prc_flit_count() {
	if (i_rst.read() == 1) {
		n_flit = 0;
		o_n_flit.write(n_flit);
	}
	else {
		switch (i_op.read())
		{
		case 0:
			o_n_flit.write(0);
			break;
		case 1:
			n_flit++;
			o_n_flit.write(0);
			break;
		case 2:
			n_flit = 0;
			o_n_flit.write(0);
			break;
		case 3:
			o_n_flit.write(n_flit);
			break;
		}
	}
}