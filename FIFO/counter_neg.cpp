#include"counter_neg.h"

void counter_neg::prc_count() {
	if (reset.read() == 1)
		count = 0;
	else {
		if (en.read() == 1)
			count++;
	}
	output.write(count);
}