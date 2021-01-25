#include"StimulusRST.h"

void StimulusRST::prc_RST() {
	s_addr_x_00.write(0);
	s_addr_y_00.write(0);

	s_addr_x_10.write(1);
	s_addr_y_10.write(0);

	s_addr_x_01.write(0);
	s_addr_y_01.write(1);

	s_addr_x_11.write(1);
	s_addr_y_11.write(1);

	s_addr_nn_000.write(c_NN);
	s_addr_ne_001.write(c_NE);
	s_addr_ee_010.write(c_EE);
	s_addr_se_011.write(c_SE);
	s_addr_ss_100.write(c_SS);
	s_addr_sw_101.write(c_SW);
	s_addr_ww_110.write(c_WW);
	s_addr_nw_111.write(c_NW);

	s_rst.write(1);
	wait(1, SC_NS);
	s_rst.write(0);
	wait(1, SC_NS);
}