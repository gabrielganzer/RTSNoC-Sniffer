#include "plotter.h"

void plotter::prc_plotter() {
	if (i_rst.read() == 1) {
		data_1 = 0;
		data_3 = 0;
		data_4 = 0;
		data_5 = 0;
		data_6 = 0;
		data_7 = 0;
		data_8 = 0;
		data_9 = 0;
		data_11 = 0;
		data_13 = 0;
		data_14 = 0;
		data_15 = 0;
		data_17 = 0;
		data_18 = 0;
		data_19 = 0;
		data_20 = 0;
		data_21 = 0;
		data_23 = 0;
		data_24 = 0;
		data_25 = 0;
		data_26 = 0;
		data_27 = 0;
		data_29 = 0;
		data_31 = 0;
		pckt_1 = 0;
		pckt_3 = 0;
		pckt_4 = 0;
		pckt_5 = 0;
		pckt_6 = 0;
		pckt_7 = 0;
		pckt_8 = 0;
		pckt_9 = 0;
		pckt_11 = 0;
		pckt_13 = 0;
		pckt_14 = 0;
		pckt_15 = 0;
		pckt_17 = 0;
		pckt_18 = 0;
		pckt_19 = 0;
		pckt_20 = 0;
		pckt_21 = 0;
		pckt_23 = 0;
		pckt_24 = 0;
		pckt_25 = 0;
		pckt_26 = 0;
		pckt_27 = 0;
		pckt_29 = 0;
		pckt_31 = 0;
		file << "packet, ori_addr -> dst_addr , n_flit , delivery_time , type, arrival_time"<< '\n';
	}
	else {
		if (i_data.read().range(32, 28) == c_0NE) {
			if ((i_data.read() != 0)&(i_data.read() != data_1)) {
					data_1 = i_data.read();
					file << pckt_1 << ", " << data_1.range(32, 28) << "->" << data_1.range(37, 33) << ", " << data_1.range(27, 17) + 2 << ", " << data_1.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_1++;
			}
		}

		else if (i_data.read().range(32, 28) == c_0SE) {
			if ((i_data.read() != 0)&(i_data.read() != data_3)) {
					data_3 = i_data.read();
					file << pckt_3 << ", " << data_3.range(32, 28) << "->" << data_3.range(37, 33) << ", " << data_3.range(27, 17) + 2 << ", " << data_3.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_3++;
			}
		}

		else if (i_data.read().range(32, 28) == c_0SS) {
			if ((i_data.read() != 0)&(i_data.read() != data_4)) {
					data_4 = i_data.read();
					file << pckt_4 << ", " << data_4.range(32, 28) << "->" << data_4.range(37, 33) << ", " << data_4.range(27, 17) + 2 << ", " << data_4.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_4++;
			}
		}

		else if (i_data.read().range(32, 28) == c_0SW) {
			if ((i_data.read() != 0)&(i_data.read() != data_5)) {
					data_5 = i_data.read();
					file << pckt_5 << ", " << data_5.range(32, 28) << "->" << data_5.range(37, 33) << ", " << data_5.range(27, 17) + 2 << ", " << data_5.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_5++;
			}
		}

		else if (i_data.read().range(32, 28) == c_0WW) {
			if ((i_data.read() != 0)&(i_data.read() != data_6)) {
					data_6 = i_data.read();
					file << pckt_6 << ", " << data_6.range(32, 28) << "->" << data_6.range(37, 33) << ", " << data_6.range(27, 17) + 2 << ", " << data_6.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_6++;
			}
		}

		else if (i_data.read().range(32, 28) == c_0NW) {
			if ((i_data.read() != 0)&(i_data.read() != data_7)) {
					data_7 = i_data.read();
					file << pckt_7 << ", " << data_7.range(32, 28) << "->" << data_7.range(37, 33) << ", " << data_7.range(27, 17) + 2 << ", " << data_7.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_7++;
			}
		}

		else if (i_data.read().range(32, 28) == c_1NN) {
			if ((i_data.read() != 0)&(i_data.read() != data_8)) {
					data_8 = i_data.read();
					file << pckt_8 << ", " << data_8.range(32, 28) << "->" << data_8.range(37, 33) << ", " << data_8.range(27, 17) + 2 << ", " << data_8.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_8++;
			}
		}

		else if (i_data.read().range(32, 28) == c_1NE) {
			if ((i_data.read() != 0)&(i_data.read() != data_9)) {
					data_9 = i_data.read();
					file << pckt_9 << ", " << data_9.range(32, 28) << "->" << data_9.range(37, 33) << ", " << data_9.range(27, 17) + 2 << ", " << data_9.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_9++;
			}
		}

		else if (i_data.read().range(32, 28) == c_1SE) {
			if ((i_data.read() != 0)&(i_data.read() != data_11)) {
					data_11 = i_data.read();
					file << pckt_11 << ", " << data_11.range(32, 28) << "->" << data_11.range(37, 33) << ", " << data_11.range(27, 17) + 2 << ", " << data_11.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_11++;
			}
		}

		else if (i_data.read().range(32, 28) == c_1SW) {
			if ((i_data.read() != 0)&(i_data.read() != data_13)) {
					data_13 = i_data.read();
					file << pckt_13 << ", " << data_13.range(32, 28) << "->" << data_13.range(37, 33) << ", " << data_13.range(27, 17) + 2 << ", " << data_13.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_13++;
			}
		}

		else if (i_data.read().range(32, 28) == c_1WW) {
			if ((i_data.read() != 0)&(i_data.read() != data_14)) {
					data_14 = i_data.read();
					file << pckt_14 << ", " << data_14.range(32, 28) << "->" << data_14.range(37, 33) << ", " << data_14.range(27, 17) + 2 << ", " << data_14.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_14++;
			}
		}

		else if (i_data.read().range(32, 28) == c_1NW) {
			if ((i_data.read() != 0)&(i_data.read() != data_15)) {
					data_15 = i_data.read();
					file << pckt_15 << ", " << data_15.range(32, 28) << "->" << data_15.range(37, 33) << ", " << data_15.range(27, 17) + 2 << ", " << data_15.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_15++;
			}
		}

		else if (i_data.read().range(32, 28) == c_2NE) {
			if ((i_data.read() != 0)&(i_data.read() != data_17)) {
					data_17 = i_data.read();
					file << pckt_17 << ", " << data_17.range(32, 28) << "->" << data_17.range(37, 33) << ", " << data_17.range(27, 17) + 2 << ", " << data_17.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_17++;
			}
		}

		else if (i_data.read().range(32, 28) == c_2EE) {
			if ((i_data.read() != 0)&(i_data.read() != data_18)) {
					data_18 = i_data.read();
					file << pckt_18 << ", " << data_18.range(32, 28) << "->" << data_18.range(37, 33) << ", " << data_18.range(27, 17) + 2 << ", " << data_18.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_18++;
			}
		}

		else if (i_data.read().range(32, 28) == c_2SE) {
			if ((i_data.read() != 0)&(i_data.read() != data_19)) {
					data_19 = i_data.read();
					file << pckt_19 << ", " << data_19.range(32, 28) << "->" << data_19.range(37, 33) << ", " << data_19.range(27, 17) + 2 << ", " << data_19.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_19++;
			}
		}

		else if (i_data.read().range(32, 28) == c_2SS) {
			if ((i_data.read() != 0)&(i_data.read() != data_20)) {
					data_20 = i_data.read();
					file << pckt_20 << ", " << data_20.range(32, 28) << "->" << data_20.range(37, 33) << ", " << data_20.range(27, 17) + 2 << ", " << data_20.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_20++;
			}
		}

		else if (i_data.read().range(32, 28) == c_2SW) {
			if ((i_data.read() != 0)&(i_data.read() != data_21)) {
					data_21 = i_data.read();
					file << pckt_21 << ", " << data_21.range(32, 28) << "->" << data_21.range(37, 33) << ", " << data_21.range(27, 17) + 2 << ", " << data_21.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_21++;
			}
		}

		else if (i_data.read().range(32, 28) == c_2NW) {
			if ((i_data.read() != 0)&(i_data.read() != data_23)) {
					data_23 = i_data.read();
					file << pckt_23 << ", " << data_23.range(32, 28) << "->" << data_23.range(37, 33) << ", " << data_23.range(27, 17) + 2 << ", " << data_23.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_23++;
			}
		}

		else if (i_data.read().range(32, 28) == c_3NN) {
			if ((i_data.read() != 0)&(i_data.read() != data_24)) {
					data_24 = i_data.read();
					file << pckt_24 << ", " << data_24.range(32, 28) << "->" << data_24.range(37, 33) << ", " << data_24.range(27, 17) + 2 << ", " << data_24.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_24++;
			}
		}

		else if (i_data.read().range(32, 28) == c_3NE) {
			if ((i_data.read() != 0)&(i_data.read() != data_25)) {
					data_25 = i_data.read();
					file << pckt_25 << ", " << data_25.range(32, 28) << "->" << data_25.range(37, 33) << ", " << data_25.range(27, 17) + 2 << ", " << data_25.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_25++;
			}
		}

		else if (i_data.read().range(32, 28) == c_3EE) {
			if ((i_data.read() != 0)&(i_data.read() != data_26)) {
					data_26 = i_data.read();
					file << pckt_26 << ", " << data_26.range(32, 28) << "->" << data_26.range(37, 33) << ", " << data_26.range(27, 17) + 2 << ", " << data_26.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_26++;
			}
		}

		else if (i_data.read().range(32, 28) == c_3SE) {
			if ((i_data.read() != 0)&(i_data.read() != data_27)) {
					data_27 = i_data.read();
					file << pckt_27 << ", " << data_27.range(32, 28) << "->" << data_27.range(37, 33) << ", " << data_27.range(27, 17) + 2 << ", " << data_27.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_27++;
			}
		}

		else if (i_data.read().range(32, 28) == c_3SW) {
			if ((i_data.read() != 0)&(i_data.read() != data_29)) {
					data_29 = i_data.read();
					file << pckt_29 << ", " << data_29.range(32, 28) << "->" << data_29.range(37, 33) << ", " << data_29.range(27, 17) + 2 << ", " << data_29.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_29++;
			}
		}

		else if (i_data.read().range(32, 28) == c_3NW) {
			if ((i_data.read() != 0)&(i_data.read() != data_31)) {
					data_31 = i_data.read();
					file << pckt_31 << ", " << data_31.range(32, 28) << "->" << data_31.range(37, 33) << ", " << data_31.range(27, 17) + 2 << ", " << data_31.range(16, 0) << " ns, ";
					if ((data_1.range(27, 17) <= 2) & (data_1.range(27, 17) > 1))
						file << "signaling" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 4) & (data_1.range(27, 17) > 2))
						file << "rd/wr" << ", " << sc_time_stamp() << '\n';
					else if ((data_1.range(27, 17) <= 40) & (data_1.range(27, 17) > 4))
						file << "real-time" << ", " << sc_time_stamp() << '\n';
					else
						file << "block-transfer" << ", " << sc_time_stamp() << '\n';
					pckt_31++;
			}
		}
		if (pckt_1 + pckt_3 + pckt_4 + pckt_5 + pckt_6 + pckt_7 + pckt_8 + pckt_9 + pckt_11 + pckt_13 + pckt_14 + pckt_15 + pckt_17 + pckt_18 + pckt_19 + pckt_20 + pckt_21 + pckt_23 + pckt_24 + pckt_25 + pckt_26 + pckt_27 + pckt_29 + pckt_31 == p_STOP) {
			file << "Simulation time: " << sc_time_stamp() << " , , , ," << '\n';
			sc_stop();
		}
	}
}