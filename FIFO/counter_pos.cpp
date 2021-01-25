#include"counter_pos.h"

void counter_pos::prc_count() {
	if (reset.read() == 1)
		count = 0;
	else {
		if (en.read() == 1)
			count++;
	}
	output.write(count);
}