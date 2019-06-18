/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002620663959_0329769143_init();
    xilinxcorelib_ver_m_00000000001358910285_2123670738_init();
    xilinxcorelib_ver_m_00000000001358910285_1298878945_init();
    xilinxcorelib_ver_m_00000000001687936702_0873297193_init();
    xilinxcorelib_ver_m_00000000000277421008_1310974726_init();
    xilinxcorelib_ver_m_00000000001603977570_0813918042_init();
    work_m_00000000003388451136_2162164475_init();
    work_m_00000000003535458131_0929306500_init();
    work_m_00000000003879374857_3956024556_init();
    xilinxcorelib_ver_m_00000000001358910285_2475621038_init();
    xilinxcorelib_ver_m_00000000001358910285_1868967107_init();
    xilinxcorelib_ver_m_00000000001687936702_3055161089_init();
    xilinxcorelib_ver_m_00000000000277421008_0468466447_init();
    xilinxcorelib_ver_m_00000000001603977570_3855475241_init();
    work_m_00000000003869038185_1124448613_init();
    work_m_00000000002269175844_2813788857_init();
    work_m_00000000001636330553_3600146948_init();
    work_m_00000000002120020421_0293918366_init();
    work_m_00000000000810502343_2762904296_init();
    work_m_00000000000795323145_4115072238_init();
    work_m_00000000003822889868_2632495328_init();
    work_m_00000000003484819935_2985382454_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003484819935_2985382454");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
