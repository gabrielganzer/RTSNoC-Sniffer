#include "mux.h"

void mux::prc_mux() {

	if (i_rst.read() == 1) {
		o_data.write(0);
	}
	else {
		if (i_sel.read() == c_0NE)
			o_data.write(i_y_1.read());

		else if (i_sel.read() == c_0SE)
			o_data.write(i_y_3.read());

		else if (i_sel.read() == c_0SS)
			o_data.write(i_y_4.read());

		else if (i_sel.read() == c_0SW)
			o_data.write(i_y_5.read());

		else if (i_sel.read() == c_0WW)
			o_data.write(i_y_6.read());

		else if (i_sel.read() == c_0NW)
			o_data.write(i_y_7.read());

		else if (i_sel.read() == c_1NN)
			o_data.write(i_y_8.read());

		else if (i_sel.read() == c_1NE)
			o_data.write(i_y_9.read());

		else if (i_sel.read() == c_1SE)
			o_data.write(i_y_11.read());

		else if (i_sel.read() == c_1SW)
			o_data.write(i_y_13.read());

		else if (i_sel.read() == c_1WW)
			o_data.write(i_y_14.read());

		else if (i_sel.read() == c_1NW)
			o_data.write(i_y_15.read());

		else if (i_sel.read() == c_2NE)
			o_data.write(i_y_17.read());

		else if (i_sel.read() == c_2EE)
			o_data.write(i_y_18.read());

		else if (i_sel.read() == c_2SE)
			o_data.write(i_y_19.read());

		else if (i_sel.read() == c_2SS)
			o_data.write(i_y_20.read());

		else if (i_sel.read() == c_2SW)
			o_data.write(i_y_21.read());

		else if (i_sel.read() == c_2NW)
			o_data.write(i_y_23.read());

		else if (i_sel.read() == c_3NN)
			o_data.write(i_y_24.read());

		else if (i_sel.read() == c_3NE)
			o_data.write(i_y_25.read());

		else if (i_sel.read() == c_3EE)
			o_data.write(i_y_26.read());

		else if (i_sel.read() == c_3SE)
			o_data.write(i_y_27.read());

		else if (i_sel.read() == c_3SW)
			o_data.write(i_y_29.read());

		else if (i_sel.read() == c_3NW)
			o_data.write(i_y_31.read());
		else
			o_data.write(0);
	}
}