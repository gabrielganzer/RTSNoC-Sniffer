#include"addr_control_neg.h"

void addr_control_neg::prc_next_enable() {
	if ((en.read() == 1)&(flag.read() == 0))
		next_en.write(1);
	else
		next_en.write(0);
}