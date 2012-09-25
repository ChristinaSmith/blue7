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
    worx_mktbswap_m_16541823861846354283_2073120511_init();
    worx_mktbswap_m_04442082693589477573_1258355394_init();
    worx_mktbswap_m_00424942045769336971_0674516102_init();
    worx_mktbswap_m_03412577557846589665_3249679695_init();
    worx_mktbswap_m_11814650570218390564_0286164271_init();


    xsi_register_tops("worx_mktbswap_m_16541823861846354283_2073120511");
    xsi_register_tops("worx_mktbswap_m_11814650570218390564_0286164271");


    return xsi_run_simulation(argc, argv);

}
