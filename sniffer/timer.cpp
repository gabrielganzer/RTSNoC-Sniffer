#include"timer.h"

void timer::prc_time_count() {
	if (i_rst.read() == 1) {
		time = 0;
		o_time.write(time);
	}
	else {
		switch (i_op.read())
		{
		case 0:
			time++;
			o_time.write(0);
			break;
		case 1:
			time++;
			o_time.write(0);
			break;
		case 2:
			time = 0;
			o_time.write(0);
			break;
		case 3:
			o_time.write(time);
			break;
		}
	}
}