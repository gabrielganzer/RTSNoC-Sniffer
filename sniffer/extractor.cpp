#include "extractor.h"

void extractor::prc_extract() {
	if (i_rst.read() == 1)
		o_op.write(0b10);
	else {
		if ((i_req.read() == 1)&(i_data.read() != 0)) {
			if (i_data.read().range(p_MSB_CORE, p_MSB_CORE) == 1) {
				if (i_data.read().range((p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 4), (p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 11)) == 0xF0)
					o_op.write(0b10);
				else if (i_data.read().range((p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 4), (p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 11)) == 0xFF)
					o_op.write(0b11);
			}
			else if (i_data.read().range(p_MSB_CORE, p_MSB_CORE) == 0)
				o_op.write(0b01);
		}
		else if ((i_req.read() == 0)&(i_data.read() != 0)) {
			if (i_data.read().range(p_MSB_CORE, p_MSB_CORE) == 1) {
				if (i_data.read().range((p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 4), (p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 11)) == 0xF0)
					o_op.write(0b10);
				else if (i_data.read().range((p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 4), (p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 11)) == 0xFF)
					o_op.write(0b11);
			}
			else if (i_data.read().range(p_MSB_CORE, p_MSB_CORE) == 0)
				o_op.write(0b00);
		}
		else
			o_op.write(0b10);
	}
}

void extractor::prc_addr() {
	if (i_rst.read() == 1)
		o_addr.write(0);
	else {
		if (i_data.read() != 0)
			o_addr.write(i_data.read().range((p_MSB_CORE-1), (p_MSB_CORE - 1 * p_SIZE_X - 1 * p_SIZE_Y - 3)));
	}
}