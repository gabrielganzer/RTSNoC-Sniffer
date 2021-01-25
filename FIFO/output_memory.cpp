#pragma once
#include"output_memory.h"

void output_memory::prc_read() {
	if (rst.read() == 1) {
		raddr = 0;
		d_out.write(0);
	}
	else {
		if (r_en.read() == 1) {
			raddr = r_addr.read();
			d_out.write(ram[raddr]);
		}
	}
}

void output_memory::prc_write() {
	if (rst.read() == 1)
		waddr = 0;
	else {
		if (w_en.read() == 1) {
			waddr = w_addr.read();
			ram[waddr] = d_in.read();
		}
	}
}