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

/* This file is designed for use with ISim build 0x54af6ca1 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/opt/Bluespec/Bluespec-2012.01.A/lib/Verilog/Counter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {10U, 0U};



static void Cont_59_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 5048);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_61_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t32[8];
    char t44[8];
    char t45[8];
    char t46[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t66;

LAB0:    t1 = (t0 + 4480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5064);
    *((int *)t2) = 1;
    t3 = (t0 + 4512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng0);

LAB13:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t2) != 0)
        goto LAB19;

LAB20:    t5 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB21;

LAB22:    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t5) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t30) > 0)
        goto LAB27;

LAB28:    memcpy(t6, t22, 8);

LAB29:    t28 = (t0 + 1800U);
    t29 = *((char **)t28);
    memset(t32, 0, 8);
    t28 = (t29 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t29);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t28) != 0)
        goto LAB32;

LAB33:    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB34;

LAB35:    t40 = *((unsigned int *)t32);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t34) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t32) > 0)
        goto LAB40;

LAB41:    memcpy(t31, t38, 8);

LAB42:    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 4, t6, 4, t31, 4);
    t47 = (t0 + 2120U);
    t48 = *((char **)t47);
    memset(t46, 0, 8);
    t47 = (t48 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t48);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t47) != 0)
        goto LAB45;

LAB46:    t55 = (t46 + 4);
    t56 = *((unsigned int *)t46);
    t57 = *((unsigned int *)t55);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB47;

LAB48:    t61 = *((unsigned int *)t46);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t55) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t46) > 0)
        goto LAB53;

LAB54:    memcpy(t45, t59, 8);

LAB55:    memset(t65, 0, 8);
    xsi_vlog_unsigned_add(t65, 4, t44, 4, t45, 4);
    t66 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t66, t65, 0, 0, 4, 0LL);

LAB16:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(63, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 2600U);
    t5 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 4, 0LL);
    goto LAB16;

LAB17:    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB19:    t4 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB21:    t7 = (t0 + 2280U);
    t8 = *((char **)t7);
    goto LAB22;

LAB23:    t7 = (t0 + 3320);
    t21 = (t7 + 56U);
    t22 = *((char **)t21);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t6, 4, t8, 4, t22, 4);
    goto LAB29;

LAB27:    memcpy(t6, t8, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t32) = 1;
    goto LAB33;

LAB32:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB33;

LAB34:    t38 = (t0 + 1640U);
    t39 = *((char **)t38);
    goto LAB35;

LAB36:    t38 = ((char*)((ng3)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t31, 4, t39, 4, t38, 4);
    goto LAB42;

LAB40:    memcpy(t31, t39, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t46) = 1;
    goto LAB46;

LAB45:    t54 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB46;

LAB47:    t59 = (t0 + 1960U);
    t60 = *((char **)t59);
    goto LAB48;

LAB49:    t59 = ((char*)((ng3)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t45, 4, t60, 4, t59, 4);
    goto LAB55;

LAB53:    memcpy(t45, t60, 8);
    goto LAB55;

}

static void Initial_76_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(76, ng0);

LAB2:    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}


extern void worx_mkftop_kc705_m_18305572456585824247_1548057623_init()
{
	static char *pe[] = {(void *)Cont_59_0,(void *)Always_61_1,(void *)Initial_76_2};
	xsi_register_didat("worx_mkftop_kc705_m_18305572456585824247_1548057623", "isim/out.isim.sim/worx_mkFTop_kc705/m_18305572456585824247_1548057623.didat");
	xsi_register_executes(pe);
}
