#include"status_control.h"

void status_control::prc_subtrator() {
	if (rst.read() == 1)
		ptr_diff.write(0);
	else {

		if (in_1.read() > in_2.read())
			ptr_diff.write(in_1.read() - in_2.read());
		else if (in_1.read() < in_2.read())
			ptr_diff.write((p_DEPTH - in_2.read()) + in_1.read());
		else
			ptr_diff.write(0);
	}
}

void status_control::prc_set_flag() {
	if (rst.read() == 1) {
		almost_full.write(0);
		empty.write(1);
		full.write(0);
	}
	else {
		if ((ptr_diff.read() + 1) == p_DEPTH) {
			almost_full.write(0);
			empty.write(0);
			full.write(1);
		}
		else if (ptr_diff.read() == 0) {
			almost_full.write(0);
			empty.write(1);
			full.write(0);
		}
		else if ((ptr_diff.read() + 1) == p_THRESHOLD) {
			almost_full.write(1);
			empty.write(0);
			full.write(0);
		}
		else {
			almost_full.write(0);
			full.write(0);
			empty.write(0);
		}
	}
}