#include "manager.h"

void manager::prc_manager() {
	if (i_rst.read() == 1) {
		o_sel.write(0b00000);
		st_STATE = st_IDLE;
	}
	else {
		switch (st_STATE)
		{
		case st_IDLE:
			o_sel.write(0);
			st_STATE = st_0NE;
			break;
		case st_0NE:
			o_sel.write(c_0NE);
			st_STATE = st_0SE;
			break;
		case st_0SE:
			o_sel.write(c_0SE);
			st_STATE = st_0SS;
			break;
		case st_0SS:
			o_sel.write(c_0SS);
			st_STATE = st_0SW;
			break;
		case st_0SW:
			o_sel.write(c_0SW);
			st_STATE = st_0WW;
			break;
		case st_0WW:
			o_sel.write(c_0WW);
			st_STATE = st_0NW;
			break;
		case st_0NW:
			o_sel.write(c_0NW);
			st_STATE = st_1NN;
			break;
		case st_1NN:
			o_sel.write(c_1NN);
			st_STATE = st_1NE;
			break;
		case st_1NE:
			o_sel.write(c_1NE);
			st_STATE = st_1SE;
			break;
		case st_1SE:
			o_sel.write(c_1SE);
			st_STATE = st_1SW;
			break;
		case st_1SW:
			o_sel.write(c_1SW);
			st_STATE = st_1WW;
			break;
		case st_1WW:
			o_sel.write(c_1WW);
			st_STATE = st_1NW;
			break;
		case st_1NW:
			o_sel.write(c_1NW);
			st_STATE = st_2NE;
			break;
		case st_2NE:
			o_sel.write(c_2NE);
			st_STATE = st_2EE;
			break;
		case st_2EE:
			o_sel.write(c_2EE);
			st_STATE = st_2SE;
			break;
		case st_2SE:
			o_sel.write(c_2SE);
			st_STATE = st_2SS;
			break;
		case st_2SS:
			o_sel.write(c_2SS);
			st_STATE = st_2SW;
			break;
		case st_2SW:
			o_sel.write(c_2SW);
			st_STATE = st_2NW;
			break;
		case st_2NW:
			o_sel.write(c_2NW);
			st_STATE = st_3NN;
			break;
		case st_3NN:
			o_sel.write(c_3NN);
			st_STATE = st_3NE;
			break;
		case st_3NE:
			o_sel.write(c_3NE);
			st_STATE = st_3EE;
			break;
		case st_3EE:
			o_sel.write(c_3EE);
			st_STATE = st_3SE;
			break;
		case st_3SE:
			o_sel.write(c_3SE);
			st_STATE = st_3SW;
			break;
		case st_3SW:
			o_sel.write(c_3SW);
			st_STATE = st_3NW;
			break;
		case st_3NW:
			o_sel.write(c_3NW);
			st_STATE = st_0NE;
			break;
		}
	}
}