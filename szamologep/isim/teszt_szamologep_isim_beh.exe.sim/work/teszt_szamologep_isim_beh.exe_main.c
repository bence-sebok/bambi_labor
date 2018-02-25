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
    work_m_00000000003762877456_1697664291_init();
    work_m_00000000003762877456_3781918965_init();
    work_m_00000000000916683465_4286169548_init();
    work_m_00000000004108418922_1522768372_init();
    work_m_00000000003243053229_0193408000_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003243053229_0193408000");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
