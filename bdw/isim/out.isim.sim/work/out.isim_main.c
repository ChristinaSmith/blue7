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
    worx_mkftop_kc705_m_16541823861846354283_2073120511_init();
    worx_mkftop_kc705_m_13607340139388400504_1685011465_init();
    unisims_ver_m_02760857255181855774_2781815542_init();
    unisims_ver_m_16358873866685240998_2395137966_init();
    worx_mkftop_kc705_m_07536497945387238156_2002037872_init();
    unisims_ver_m_10123746622690917747_3985585492_init();
    worx_mkftop_kc705_m_11839070888420591915_2109869739_init();
    worx_mkftop_kc705_m_05327923308339574587_2332220985_init();
    worx_mkftop_kc705_m_07536497945387238156_2151734610_init();
    unisims_ver_m_07999219727340989524_1336192191_init();
    worx_mkftop_kc705_m_08619264518087090296_0922177461_init();
    worx_mkftop_kc705_m_05327923308339574587_0740955005_init();
    worx_mkftop_kc705_m_13055845071048068673_4108822972_init();
    worx_mkftop_kc705_m_04442082693589477573_1298261272_init();
    worx_mkftop_kc705_m_04442082693589477573_3344197823_init();
    worx_mkftop_kc705_m_18305572456585824247_1721758268_init();
    worx_mkftop_kc705_m_18305572456585824247_1548057623_init();
    worx_mkftop_kc705_m_14903997217979101907_3056617008_init();
    worx_mkftop_kc705_m_12426684326836199408_0197366252_init();
    worx_mkftop_kc705_m_11814650570218390564_0286164271_init();


    xsi_register_tops("worx_mkftop_kc705_m_16541823861846354283_2073120511");
    xsi_register_tops("worx_mkftop_kc705_m_11814650570218390564_0286164271");


    return xsi_run_simulation(argc, argv);

}
