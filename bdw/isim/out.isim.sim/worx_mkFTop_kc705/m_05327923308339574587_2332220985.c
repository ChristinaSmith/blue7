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
static const char *ng0 = "/opt/Bluespec/Bluespec-2012.01.A/lib/Verilog/SyncFIFO.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {682U, 0U};
static unsigned int ng13[] = {10U, 0U};
static const char *ng14 = "ERROR SyncFiFO.v: index size and depth do not match;";
static const char *ng15 = "\tdepth must equal 2 ** index size. expected %0d";



static int sp_incrGrayP(char *t1, char *t2)
{
    char t5[8];
    char t39[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    xsi_set_current_line(269, ng0);

LAB4:    t4 = (t1 + 872);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB5);
    xsi_vlog_namedbase_pushprocess(t4, t2);

LAB6:    xsi_set_current_line(274, ng0);
    t6 = (t1 + 9344);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 9344);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_part_select_value(t5, 4, t8, t11, 2, t12, 32U, 2, t13, 32U, 1);
    t14 = (t1 + 9504);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 4);
    xsi_set_current_line(275, ng0);
    t4 = (t1 + 9344);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    t10 = (t1 + 9664);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 1);
    xsi_set_current_line(276, ng0);
    t4 = (t1 + 9504);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 9664);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 2872);
    t14 = xsi_create_subprogram_invocation(t12, 0, t1, t13, 0, t2);
    t21 = (t1 + 10144);
    xsi_vlogvar_assign_value(t21, t7, 0, 0, 4);
    t22 = (t1 + 10304);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 1);

LAB7:    t23 = (t2 + 64U);
    t24 = *((char **)t23);
    t25 = (t24 + 80U);
    t26 = *((char **)t25);
    t27 = (t26 + 272U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t31 = ((int  (*)(char *, char *))t30)(t1, t24);
    if (t31 != 0)
        goto LAB9;

LAB8:    t24 = (t2 + 64U);
    t32 = *((char **)t24);
    t24 = (t1 + 9984);
    t33 = (t24 + 56U);
    t34 = *((char **)t33);
    memcpy(t5, t34, 8);
    t35 = (t1 + 2872);
    t36 = (t2 + 56U);
    t37 = *((char **)t36);
    xsi_delete_subprogram_invocation(t35, t32, t1, t37, t2);
    t38 = (t1 + 9824);
    xsi_vlogvar_assign_value(t38, t5, 0, 0, 4);
    xsi_set_current_line(277, ng0);
    t4 = (t1 + 9664);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t39, 0, 8);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t7);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t8) == 0)
        goto LAB10;

LAB12:    t9 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t9) = 1;

LAB13:    t10 = (t39 + 4);
    t11 = (t7 + 4);
    t20 = *((unsigned int *)t7);
    t40 = (~(t20));
    *((unsigned int *)t39) = t40;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB15;

LAB14:    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 1U);
    t46 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t46 & 1U);
    t12 = (t1 + 9824);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlogtype_concat(t5, 5, 5, 2U, t14, 4, t39, 1);
    t21 = (t1 + 9184);
    xsi_vlogvar_assign_value(t21, t5, 0, 0, 5);
    t4 = (t1 + 872);
    xsi_vlog_namedbase_popprocess(t4);

LAB5:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t23 = (t2 + 48U);
    *((char **)t23) = &&LAB7;
    goto LAB1;

LAB10:    *((unsigned int *)t39) = 1;
    goto LAB13;

LAB15:    t41 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t11);
    *((unsigned int *)t39) = (t41 | t42);
    t43 = *((unsigned int *)t10);
    t44 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t43 | t44);
    goto LAB14;

}

static int sp_incrGray(char *t1, char *t2)
{
    char t5[8];
    char t17[8];
    char t29[8];
    char t30[8];
    char t52[8];
    char t80[8];
    char t113[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    int t122;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    xsi_set_current_line(284, ng0);

LAB4:    t4 = (t1 + 1168);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB5);
    xsi_vlog_namedbase_pushprocess(t4, t2);

LAB6:    xsi_set_current_line(289, ng0);
    t6 = (t1 + 10304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t9) == 0)
        goto LAB7;

LAB9:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB10:    t16 = (t1 + 10784);
    t18 = (t1 + 10784);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t21, 32, 1);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    if (t24 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(290, ng0);
    xsi_set_current_line(290, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 10464);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB13:    t4 = (t1 + 10464);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB15;

LAB14:    t15 = (t8 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB16;

LAB17:    t18 = (t5 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(295, ng0);
    t4 = (t1 + 10144);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_lshift(t5, 4, t7, 4, t8, 32);
    t9 = (t1 + 10624);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 4);
    xsi_set_current_line(296, ng0);
    t4 = (t1 + 10304);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10624);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    memset(t17, 0, 8);
    t16 = (t15 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t15);
    t13 = (t12 & t11);
    t14 = (t13 & 15U);
    if (t14 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t16) != 0)
        goto LAB42;

LAB43:    memset(t5, 0, 8);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t32 = (~(t23));
    t33 = *((unsigned int *)t17);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t19) == 0)
        goto LAB44;

LAB46:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;

LAB47:    t21 = (t5 + 4);
    t22 = (t17 + 4);
    t37 = *((unsigned int *)t17);
    t38 = (~(t37));
    *((unsigned int *)t5) = t38;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB49;

LAB48:    t43 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t43 & 1U);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & 1U);
    t46 = *((unsigned int *)t7);
    t47 = *((unsigned int *)t5);
    t48 = (t46 & t47);
    *((unsigned int *)t29) = t48;
    t25 = (t7 + 4);
    t26 = (t5 + 4);
    t27 = (t29 + 4);
    t49 = *((unsigned int *)t25);
    t50 = *((unsigned int *)t26);
    t51 = (t49 | t50);
    *((unsigned int *)t27) = t51;
    t57 = *((unsigned int *)t27);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB50;

LAB51:
LAB52:    t36 = (t1 + 10784);
    t53 = (t1 + 10784);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t30, t55, 2, t56, 32, 2);
    t62 = (t30 + 4);
    t81 = *((unsigned int *)t62);
    t104 = (!(t81));
    if (t104 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(298, ng0);
    t4 = (t1 + 10784);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10144);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t15);
    t12 = (t10 ^ t11);
    *((unsigned int *)t5) = t12;
    t16 = (t7 + 4);
    t18 = (t15 + 4);
    t19 = (t5 + 4);
    t13 = *((unsigned int *)t16);
    t14 = *((unsigned int *)t18);
    t23 = (t13 | t14);
    *((unsigned int *)t19) = t23;
    t32 = *((unsigned int *)t19);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB55;

LAB56:
LAB57:    t20 = (t1 + 9984);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 4);
    t4 = (t1 + 1168);
    xsi_vlog_namedbase_popprocess(t4);

LAB5:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t5) = 1;
    goto LAB10;

LAB11:    xsi_vlogvar_assign_value(t16, t5, 0, *((unsigned int *)t17), 1);
    goto LAB12;

LAB15:    t16 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t5) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(291, ng0);

LAB21:    xsi_set_current_line(292, ng0);
    t19 = (t1 + 10144);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng5)));
    t25 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t22, 32, t25, 32);
    t26 = (t1 + 10464);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_minus(t29, 32, t17, 32, t28, 32);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_lshift(t30, 4, t21, 4, t29, 32);
    t31 = (t1 + 10624);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 4);
    xsi_set_current_line(293, ng0);
    t4 = (t1 + 10304);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10144);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t16 = (t1 + 10144);
    t18 = (t16 + 72U);
    t19 = *((char **)t18);
    t20 = (t1 + 10464);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t25 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t22, 32, t25, 32);
    xsi_vlog_generic_get_index_select_value(t5, 1, t15, t19, 2, t17, 32, 1);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t5);
    t12 = (t10 & t11);
    *((unsigned int *)t29) = t12;
    t26 = (t7 + 4);
    t27 = (t5 + 4);
    t28 = (t29 + 4);
    t13 = *((unsigned int *)t26);
    t14 = *((unsigned int *)t27);
    t23 = (t13 | t14);
    *((unsigned int *)t28) = t23;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB22;

LAB23:
LAB24:    t53 = (t1 + 10624);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t52, 0, 8);
    t56 = (t55 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (t59 & t58);
    t61 = (t60 & 15U);
    if (t61 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t56) != 0)
        goto LAB27;

LAB28:    memset(t30, 0, 8);
    t63 = (t52 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t52);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t63) == 0)
        goto LAB29;

LAB31:    t69 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t69) = 1;

LAB32:    t70 = (t30 + 4);
    t71 = (t52 + 4);
    t72 = *((unsigned int *)t52);
    t73 = (~(t72));
    *((unsigned int *)t30) = t73;
    *((unsigned int *)t70) = 0;
    if (*((unsigned int *)t71) != 0)
        goto LAB34;

LAB33:    t78 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t78 & 1U);
    t79 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t79 & 1U);
    t81 = *((unsigned int *)t29);
    t82 = *((unsigned int *)t30);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t29 + 4);
    t85 = (t30 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB35;

LAB36:
LAB37:    t112 = (t1 + 10784);
    t114 = (t1 + 10784);
    t115 = (t114 + 72U);
    t116 = *((char **)t115);
    t117 = (t1 + 10464);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    xsi_vlog_generic_convert_bit_index(t113, t116, 2, t119, 32, 1);
    t120 = (t113 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (!(t121));
    if (t122 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(290, ng0);
    t4 = (t1 + 10464);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t7, 32, t8, 32);
    t9 = (t1 + 10464);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 32);
    goto LAB13;

LAB22:    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t34 | t35);
    t31 = (t7 + 4);
    t36 = (t5 + 4);
    t37 = *((unsigned int *)t7);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (~(t39));
    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (~(t43));
    t24 = (t38 & t40);
    t45 = (t42 & t44);
    t46 = (~(t24));
    t47 = (~(t45));
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    t49 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t49 & t47);
    t50 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t50 & t46);
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t47);
    goto LAB24;

LAB25:    *((unsigned int *)t52) = 1;
    goto LAB28;

LAB27:    t62 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t30) = 1;
    goto LAB32;

LAB34:    t74 = *((unsigned int *)t30);
    t75 = *((unsigned int *)t71);
    *((unsigned int *)t30) = (t74 | t75);
    t76 = *((unsigned int *)t70);
    t77 = *((unsigned int *)t71);
    *((unsigned int *)t70) = (t76 | t77);
    goto LAB33;

LAB35:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t29 + 4);
    t95 = (t30 + 4);
    t96 = *((unsigned int *)t29);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t30);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t112, t80, 0, *((unsigned int *)t113), 1);
    goto LAB39;

LAB40:    *((unsigned int *)t17) = 1;
    goto LAB43;

LAB42:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t5) = 1;
    goto LAB47;

LAB49:    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t22);
    *((unsigned int *)t5) = (t39 | t40);
    t41 = *((unsigned int *)t21);
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t41 | t42);
    goto LAB48;

LAB50:    t59 = *((unsigned int *)t29);
    t60 = *((unsigned int *)t27);
    *((unsigned int *)t29) = (t59 | t60);
    t28 = (t7 + 4);
    t31 = (t5 + 4);
    t61 = *((unsigned int *)t7);
    t64 = (~(t61));
    t65 = *((unsigned int *)t28);
    t66 = (~(t65));
    t67 = *((unsigned int *)t5);
    t68 = (~(t67));
    t72 = *((unsigned int *)t31);
    t73 = (~(t72));
    t24 = (t64 & t66);
    t45 = (t68 & t73);
    t74 = (~(t24));
    t75 = (~(t45));
    t76 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t76 & t74);
    t77 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t77 & t75);
    t78 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t78 & t74);
    t79 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t79 & t75);
    goto LAB52;

LAB53:    xsi_vlogvar_assign_value(t36, t29, 0, *((unsigned int *)t30), 1);
    goto LAB54;

LAB55:    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t19);
    *((unsigned int *)t5) = (t34 | t35);
    goto LAB57;

}

static void NetDecl_69_0(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 11696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_rshift(t5, 4, t2, 4, t4, 32);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t3) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 15U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t16 = (t0 + 16784);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 15U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 3U);

LAB1:    return;
LAB5:    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB4;

}

static void NetDecl_70_1(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 11944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng7)));
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_rshift(t5, 3, t2, 3, t4, 32);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t3) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 7U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 7U);
    t16 = (t0 + 16848);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 7U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 2U);

LAB1:    return;
LAB5:    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB4;

}

static void NetDecl_71_2(char *t0)
{
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 12192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4944U);
    t3 = *((char **)t2);
    t2 = (t0 + 5104U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng8)));
    xsi_vlogtype_concat(t4, 4, 4, 2U, t2, 1, t5, 3);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t4 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t34 = (t0 + 16912);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t38, 0, 8);
    t39 = 15U;
    t40 = t39;
    t41 = (t6 + 4);
    t42 = *((unsigned int *)t6);
    t39 = (t39 & t42);
    t43 = *((unsigned int *)t41);
    t40 = (t40 & t43);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 | t39);
    t46 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t46 | t40);
    xsi_driver_vfirst_trans(t34, 0, 3U);
    t47 = (t0 + 16480);
    *((int *)t47) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

}

static void Cont_97_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 12440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3664U);
    t3 = *((char **)t2);
    t2 = (t0 + 16976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 16496);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_100_4(char *t0)
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

LAB0:    t1 = (t0 + 12688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 17040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
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
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 16512);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_101_5(char *t0)
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

LAB0:    t1 = (t0 + 12936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 17104);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 16528);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_102_6(char *t0)
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

LAB0:    t1 = (t0 + 13184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 7264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 17168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 16544);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_105_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 13432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6944);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6944);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t3, 3, t5, t8, 2, t9, 32U, 2, t10, 32U, 1);
    t11 = (t0 + 17232);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 7U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 2);
    t24 = (t0 + 16560);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Cont_106_8(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 13680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 7424);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_part_select_value(t3, 3, t5, t8, 2, t9, 32U, 2, t10, 32U, 1);
    t11 = (t0 + 17296);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 7U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 2);
    t24 = (t0 + 16576);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Always_109_9(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 13928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 16592);
    *((int *)t2) = 1;
    t3 = (t0 + 13960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 3824U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(112, ng0);
    t11 = (t0 + 3984U);
    t12 = *((char **)t11);
    t11 = (t0 + 6624);
    t15 = (t0 + 6624);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 6624);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 6064U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 3, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB10;

}

static void Cont_117_10(char *t0)
{
    char t3[8];
    char t13[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 14176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6944);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 6944);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_part_select_value(t3, 4, t5, t8, 2, t9, 32U, 2, t10, 32U, 1);
    t11 = (t0 + 5264U);
    t12 = *((char **)t11);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    *((unsigned int *)t13) = t16;
    t11 = (t3 + 4);
    t17 = (t12 + 4);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB4;

LAB5:
LAB6:    t26 = (t0 + 8384);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t13 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB8;

LAB7:    if (t41 != 0)
        goto LAB9;

LAB10:    t45 = (t0 + 17360);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 1U;
    t51 = t50;
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t29);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans(t45, 0, 0);
    t58 = (t0 + 16608);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t24 | t25);
    goto LAB6;

LAB8:    *((unsigned int *)t29) = 1;
    goto LAB10;

LAB9:    t44 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB10;

}

static void Cont_118_11(char *t0)
{
    char t3[8];
    char t13[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 14424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7104);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 7104);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_part_select_value(t3, 4, t5, t8, 2, t9, 32U, 2, t10, 32U, 1);
    t11 = (t0 + 5264U);
    t12 = *((char **)t11);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    *((unsigned int *)t13) = t16;
    t11 = (t3 + 4);
    t17 = (t12 + 4);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB4;

LAB5:
LAB6:    t26 = (t0 + 8384);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t13 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB8;

LAB7:    if (t41 != 0)
        goto LAB9;

LAB10:    t45 = (t0 + 17424);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 1U;
    t51 = t50;
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t29);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans(t45, 0, 0);
    t58 = (t0 + 16624);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t24 | t25);
    goto LAB6;

LAB8:    *((unsigned int *)t29) = 1;
    goto LAB10;

LAB9:    t44 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB10;

}

static void Always_120_12(char *t0)
{
    char t6[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 14672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 16640);
    *((int *)t2) = 1;
    t3 = (t0 + 14704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 3664U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(129, ng0);

LAB14:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3824U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(137, ng0);

LAB22:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5424U);
    t3 = *((char **)t2);
    t2 = (t0 + 7264);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(123, ng0);

LAB13:    xsi_set_current_line(124, ng0);
    t28 = ((char*)((ng8)));
    t29 = (t0 + 6944);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(131, ng0);

LAB18:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 7104);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 14480);
    t21 = (t0 + 2440);
    t22 = xsi_create_subprogram_invocation(t8, 0, t0, t21, 0, 0);
    t28 = (t0 + 9344);
    xsi_vlogvar_assign_value(t28, t7, 0, 0, 5);

LAB19:    t29 = (t0 + 14576);
    t30 = *((char **)t29);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = (t32 + 272U);
    t34 = *((char **)t33);
    t35 = (t34 + 0U);
    t36 = *((char **)t35);
    t37 = ((int  (*)(char *, char *))t36)(t0, t30);
    if (t37 != 0)
        goto LAB21;

LAB20:    t30 = (t0 + 14576);
    t38 = *((char **)t30);
    t30 = (t0 + 9184);
    t39 = (t30 + 56U);
    t40 = *((char **)t39);
    memcpy(t6, t40, 8);
    t41 = (t0 + 2440);
    t42 = (t0 + 14480);
    t43 = 0;
    xsi_delete_subprogram_invocation(t41, t38, t0, t42, t43);
    t44 = (t0 + 7104);
    xsi_vlogvar_wait_assign_value(t44, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6944);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t0 + 7264);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB17;

LAB21:    t29 = (t0 + 14672U);
    *((char **)t29) = &&LAB19;
    goto LAB1;

}

static void Always_145_13(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 14920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 16656);
    *((int *)t2) = 1;
    t3 = (t0 + 14952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(146, ng0);

LAB5:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 5904U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(153, ng0);

LAB14:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6944);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng1)));
    t22 = ((char*)((ng2)));
    xsi_vlog_generic_get_part_select_value(t6, 4, t4, t8, 2, t21, 32U, 2, t22, 32U, 1);
    t28 = (t0 + 7904);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8064);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(148, ng0);

LAB13:    xsi_set_current_line(149, ng0);
    t28 = ((char*)((ng8)));
    t29 = (t0 + 7904);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

}

static void Cont_163_14(char *t0)
{
    char t3[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 15168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 7424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 7424);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_part_select_value(t3, 4, t5, t8, 2, t9, 32U, 2, t10, 32U, 1);
    t11 = (t0 + 8064);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t15 = (t3 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB5;

LAB4:    if (t26 != 0)
        goto LAB6;

LAB7:    t30 = (t0 + 17488);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t34, 0, 8);
    t35 = 1U;
    t36 = t35;
    t37 = (t14 + 4);
    t38 = *((unsigned int *)t14);
    t35 = (t35 & t38);
    t39 = *((unsigned int *)t37);
    t36 = (t36 & t39);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 | t35);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t42 | t36);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t43 = (t0 + 16672);
    *((int *)t43) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB6:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB7;

}

static void Always_165_15(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t35[8];
    char t63[8];
    char t77[8];
    char t84[8];
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
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 15416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 16688);
    *((int *)t2) = 1;
    t3 = (t0 + 15448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(166, ng0);

LAB5:    xsi_set_current_line(167, ng0);
    t4 = (t0 + 5904U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(174, ng0);

LAB14:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 7744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB18:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB22:    t22 = (t30 + 4);
    t19 = *((unsigned int *)t30);
    t20 = (!(t19));
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB23;

LAB24:    memcpy(t35, t30, 8);

LAB25:    memset(t63, 0, 8);
    t64 = (t35 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t35);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t64) != 0)
        goto LAB35;

LAB36:    t71 = (t63 + 4);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB37;

LAB38:    memcpy(t84, t63, 8);

LAB39:    t116 = (t84 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t84);
    t120 = (t119 & t118);
    t121 = (t120 != 0);
    if (t121 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4464U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t2) != 0)
        goto LAB56;

LAB57:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB58;

LAB59:    memcpy(t35, t6, 8);

LAB60:    t49 = (t35 + 4);
    t68 = *((unsigned int *)t49);
    t69 = (~(t68));
    t72 = *((unsigned int *)t35);
    t73 = (t72 & t69);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB49:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(168, ng0);

LAB13:    xsi_set_current_line(169, ng0);
    t28 = ((char*)((ng8)));
    t29 = (t0 + 7424);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t30) = 1;
    goto LAB22;

LAB21:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB23:    t28 = (t0 + 4464U);
    t29 = *((char **)t28);
    memset(t31, 0, 8);
    t28 = (t29 + 4);
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t27 = *((unsigned int *)t29);
    t32 = (t27 & t26);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t28) != 0)
        goto LAB28;

LAB29:    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = (t30 + 4);
    t40 = (t31 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB25;

LAB26:    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB28:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB29;

LAB30:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t30 + 4);
    t50 = (t31 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t30);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t31);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB32;

LAB33:    *((unsigned int *)t63) = 1;
    goto LAB36;

LAB35:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB36;

LAB37:    t75 = (t0 + 5744U);
    t76 = *((char **)t75);
    memset(t77, 0, 8);
    t75 = (t76 + 4);
    t78 = *((unsigned int *)t75);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t75) != 0)
        goto LAB42;

LAB43:    t85 = *((unsigned int *)t63);
    t86 = *((unsigned int *)t77);
    t87 = (t85 & t86);
    *((unsigned int *)t84) = t87;
    t88 = (t63 + 4);
    t89 = (t77 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB39;

LAB40:    *((unsigned int *)t77) = 1;
    goto LAB43;

LAB42:    t83 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB43;

LAB44:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t63 + 4);
    t99 = (t77 + 4);
    t100 = *((unsigned int *)t63);
    t101 = (~(t100));
    t102 = *((unsigned int *)t98);
    t103 = (~(t102));
    t104 = *((unsigned int *)t77);
    t105 = (~(t104));
    t106 = *((unsigned int *)t99);
    t107 = (~(t106));
    t108 = (t101 & t103);
    t109 = (t105 & t107);
    t110 = (~(t108));
    t111 = (~(t109));
    t112 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t112 & t110);
    t113 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t113 & t111);
    t114 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t114 & t110);
    t115 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t115 & t111);
    goto LAB46;

LAB47:    xsi_set_current_line(175, ng0);

LAB50:    xsi_set_current_line(176, ng0);
    t122 = (t0 + 7584);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    t125 = (t0 + 7424);
    xsi_vlogvar_wait_assign_value(t125, t124, 0, 0, 5, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 7584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15224);
    t7 = (t0 + 2440);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t21 = (t0 + 9344);
    xsi_vlogvar_assign_value(t21, t4, 0, 0, 5);

LAB51:    t22 = (t0 + 15320);
    t28 = *((char **)t22);
    t29 = (t28 + 80U);
    t34 = *((char **)t29);
    t39 = (t34 + 272U);
    t40 = *((char **)t39);
    t41 = (t40 + 0U);
    t49 = *((char **)t41);
    t54 = ((int  (*)(char *, char *))t49)(t0, t28);
    if (t54 != 0)
        goto LAB53;

LAB52:    t28 = (t0 + 15320);
    t50 = *((char **)t28);
    t28 = (t0 + 9184);
    t64 = (t28 + 56U);
    t70 = *((char **)t64);
    memcpy(t6, t70, 8);
    t71 = (t0 + 2440);
    t75 = (t0 + 15224);
    t76 = 0;
    xsi_delete_subprogram_invocation(t71, t50, t0, t75, t76);
    t83 = (t0 + 7584);
    xsi_vlogvar_wait_assign_value(t83, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 6624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6624);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 6624);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 6224U);
    t34 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 10, t4, t8, t28, 2, 1, t34, 3, 2);
    t29 = (t0 + 6784);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 10, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 7744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB49;

LAB53:    t22 = (t0 + 15416U);
    *((char **)t22) = &&LAB51;
    goto LAB1;

LAB54:    *((unsigned int *)t6) = 1;
    goto LAB57;

LAB56:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB57;

LAB58:    t7 = (t0 + 5744U);
    t8 = *((char **)t7);
    memset(t30, 0, 8);
    t7 = (t8 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t7) == 0)
        goto LAB61;

LAB63:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;

LAB64:    memset(t31, 0, 8);
    t22 = (t30 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t30);
    t27 = (t26 & t25);
    t32 = (t27 & 1U);
    if (t32 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t22) != 0)
        goto LAB67;

LAB68:    t33 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t31);
    t37 = (t33 & t36);
    *((unsigned int *)t35) = t37;
    t29 = (t6 + 4);
    t34 = (t31 + 4);
    t39 = (t35 + 4);
    t38 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t34);
    t43 = (t38 | t42);
    *((unsigned int *)t39) = t43;
    t44 = *((unsigned int *)t39);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB61:    *((unsigned int *)t30) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t31) = 1;
    goto LAB68;

LAB67:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB68;

LAB69:    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t35) = (t46 | t47);
    t40 = (t6 + 4);
    t41 = (t31 + 4);
    t48 = *((unsigned int *)t6);
    t51 = (~(t48));
    t52 = *((unsigned int *)t40);
    t53 = (~(t52));
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t41);
    t59 = (~(t57));
    t54 = (t51 & t53);
    t58 = (t56 & t59);
    t60 = (~(t54));
    t61 = (~(t58));
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t65 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t60);
    t67 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t67 & t61);
    goto LAB71;

LAB72:    xsi_set_current_line(181, ng0);

LAB75:    xsi_set_current_line(182, ng0);
    t50 = ((char*)((ng8)));
    t64 = (t0 + 7744);
    xsi_vlogvar_wait_assign_value(t64, t50, 0, 0, 1, 0LL);
    goto LAB74;

}

static void Always_188_16(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 15664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 16704);
    *((int *)t2) = 1;
    t3 = (t0 + 15696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(189, ng0);

LAB5:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 3664U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(196, ng0);

LAB14:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 7424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7424);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng1)));
    t22 = ((char*)((ng2)));
    xsi_vlog_generic_get_part_select_value(t6, 4, t4, t8, 2, t21, 32U, 2, t22, 32U, 1);
    t28 = (t0 + 8224);
    xsi_vlogvar_wait_assign_value(t28, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 8224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(191, ng0);

LAB13:    xsi_set_current_line(192, ng0);
    t28 = ((char*)((ng8)));
    t29 = (t0 + 8224);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 8384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

}

static void Initial_206_17(char *t0)
{
    char t6[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 15912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(207, ng0);

LAB4:    t2 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 15720);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(211, ng0);
    xsi_set_current_line(211, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 8544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t2 = (t0 + 8544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB9;

LAB8:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB9;

LAB12:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB10;

LAB11:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7264);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7424);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7584);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8384);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7904);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 6944);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB5:    t3 = (t0 + 15720);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB1:    return;
LAB9:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB13:    xsi_set_current_line(212, ng0);

LAB15:    xsi_set_current_line(213, ng0);
    t16 = ((char*)((ng12)));
    t17 = (t0 + 6624);
    t20 = (t0 + 6624);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 6624);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 8544);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t28, 32, 1);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 8544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 8544);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB16:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t17, t16, 0, *((unsigned int *)t19), t39);
    goto LAB17;

}

static void Initial_238_18(char *t0)
{
    char t6[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 16160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(239, ng0);

LAB4:    t2 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 15968);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(243, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 8704);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(247, ng0);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 8864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB9;

LAB8:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB9;

LAB12:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB10;

LAB11:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(252, ng0);
    t2 = (t0 + 9024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t22 = (t14 ^ t15);
    t23 = (t13 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB17;

LAB16:    if (t26 != 0)
        goto LAB18;

LAB19:    t10 = (t6 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t6);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(259, ng0);
    t2 = (t0 + 15968);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB5:    t3 = (t0 + 15968);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB1;

LAB9:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB13:    xsi_set_current_line(248, ng0);

LAB15:    xsi_set_current_line(249, ng0);
    t16 = (t0 + 9024);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    memset(t20, 0, 8);
    xsi_vlog_signed_multiply(t20, 32, t18, 32, t19, 32);
    t21 = (t0 + 9024);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    xsi_set_current_line(247, ng0);
    t2 = (t0 + 8864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 8864);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB18:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(253, ng0);

LAB23:    xsi_set_current_line(254, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 8704);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 32);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t2);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 9024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t5, (char)119, t4, 32);
    goto LAB22;

LAB24:    xsi_set_current_line(260, ng0);
    t3 = (t0 + 8704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t7, 32);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB25;

LAB26:
LAB27:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

LAB25:    xsi_set_current_line(260, ng0);
    xsi_vlog_finish(1);
    goto LAB27;

}


extern void worx_mkftop_kc705_m_05327923308339574587_2332220985_init()
{
	static char *pe[] = {(void *)NetDecl_69_0,(void *)NetDecl_70_1,(void *)NetDecl_71_2,(void *)Cont_97_3,(void *)Cont_100_4,(void *)Cont_101_5,(void *)Cont_102_6,(void *)Cont_105_7,(void *)Cont_106_8,(void *)Always_109_9,(void *)Cont_117_10,(void *)Cont_118_11,(void *)Always_120_12,(void *)Always_145_13,(void *)Cont_163_14,(void *)Always_165_15,(void *)Always_188_16,(void *)Initial_206_17,(void *)Initial_238_18};
	static char *se[] = {(void *)sp_incrGrayP,(void *)sp_incrGray};
	xsi_register_didat("worx_mkftop_kc705_m_05327923308339574587_2332220985", "isim/out.isim.sim/worx_mkFTop_kc705/m_05327923308339574587_2332220985.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
