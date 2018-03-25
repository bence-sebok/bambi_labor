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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Documents and Settings/xilinxuser/Desktop/BAMBI1/szamologep.v";
static unsigned int ng1[] = {8U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {14U, 0U};
static unsigned int ng7[] = {100U, 0U};
static unsigned int ng8[] = {10U, 0U};



static void Always_38_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 8180);
    *((int *)t2) = 1;
    t3 = (t0 + 5996);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1812U);
    t5 = *((char **)t4);
    t4 = (t0 + 3972);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1904U);
    t3 = *((char **)t2);
    t2 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1996U);
    t3 = *((char **)t2);
    t2 = (t0 + 4156);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB2;

}

static void Always_66_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 6112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 8188);
    *((int *)t2) = 1;
    t3 = (t0 + 6140);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 3972);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4892);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(68, ng0);
    t13 = (t0 + 984);
    t14 = *((char **)t13);
    t13 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, 0, 3, 0LL);
    goto LAB7;

}

static void Always_72_2(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 6256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 8196);
    *((int *)t2) = 1;
    t3 = (t0 + 6284);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 4800);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = (t0 + 984);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB6;

LAB7:    t2 = (t0 + 1064);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = (t0 + 1144);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB10;

LAB11:    t2 = (t0 + 1224);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 1304);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 984);
    t3 = *((char **)t2);
    t2 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(75, ng0);
    t7 = (t0 + 4156);
    t10 = (t7 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB22;

LAB19:    if (t25 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 984);
    t3 = *((char **)t2);
    t2 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB25:    goto LAB18;

LAB8:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4156);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB30;

LAB27:    if (t25 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB30:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1064);
    t3 = *((char **)t2);
    t2 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB33:    goto LAB18;

LAB10:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4156);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB38;

LAB35:    if (t25 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB38:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1144);
    t3 = *((char **)t2);
    t2 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB41:    goto LAB18;

LAB12:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4156);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB46;

LAB43:    if (t25 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t13) = 1;

LAB46:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1224);
    t3 = *((char **)t2);
    t2 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB49:    goto LAB18;

LAB14:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4156);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB54;

LAB51:    if (t25 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t13) = 1;

LAB54:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1304);
    t3 = *((char **)t2);
    t2 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB57:    goto LAB18;

LAB21:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(76, ng0);

LAB26:    xsi_set_current_line(77, ng0);
    t35 = (t0 + 1064);
    t36 = *((char **)t35);
    t35 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, 0, 3, 0LL);
    goto LAB25;

LAB29:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(83, ng0);

LAB34:    xsi_set_current_line(84, ng0);
    t14 = (t0 + 1144);
    t15 = *((char **)t14);
    t14 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 3, 0LL);
    goto LAB33;

LAB37:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(90, ng0);

LAB42:    xsi_set_current_line(91, ng0);
    t14 = (t0 + 1224);
    t15 = *((char **)t14);
    t14 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 3, 0LL);
    goto LAB41;

LAB45:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(97, ng0);

LAB50:    xsi_set_current_line(98, ng0);
    t14 = (t0 + 1304);
    t15 = *((char **)t14);
    t14 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 3, 0LL);
    goto LAB49;

LAB53:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(104, ng0);

LAB58:    xsi_set_current_line(105, ng0);
    t14 = (t0 + 984);
    t15 = *((char **)t14);
    t14 = (t0 + 4892);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 3, 0LL);
    goto LAB57;

}

static void Always_115_3(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t16;
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
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 8204);
    *((int *)t2) = 1;
    t3 = (t0 + 6428);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 3972);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 984);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB12;

LAB9:    if (t20 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t15) = 1;

LAB12:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1064);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB19;

LAB16:    if (t20 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t15) = 1;

LAB19:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1144);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB26;

LAB23:    if (t20 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t15) = 1;

LAB26:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB22:
LAB15:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(117, ng0);

LAB8:    xsi_set_current_line(118, ng0);
    t13 = ((char*)((ng5)));
    t14 = (t0 + 4524);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB7;

LAB11:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(123, ng0);
    t28 = (t0 + 1904U);
    t29 = *((char **)t28);
    t28 = (t0 + 4524);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    goto LAB15;

LAB18:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(125, ng0);
    t28 = (t0 + 1904U);
    t29 = *((char **)t28);
    t28 = (t0 + 4708);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    goto LAB22;

LAB25:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(127, ng0);
    t28 = (t0 + 1904U);
    t29 = *((char **)t28);
    t28 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    goto LAB29;

}

static void Always_129_4(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t16;
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
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 8212);
    *((int *)t2) = 1;
    t3 = (t0 + 6572);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 3972);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1064);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t15) = 1;

LAB11:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1144);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t15) = 1;

LAB18:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1224);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB22:    if (t20 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t15) = 1;

LAB25:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1304);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB32;

LAB29:    if (t20 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t15) = 1;

LAB32:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:
LAB35:
LAB28:
LAB21:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(131, ng0);
    t13 = ((char*)((ng5)));
    t14 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 8, 0LL);
    goto LAB7;

LAB10:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(133, ng0);
    t28 = (t0 + 4524);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB14;

LAB17:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(135, ng0);
    t28 = (t0 + 4708);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB21;

LAB24:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(137, ng0);
    t28 = (t0 + 4616);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB28;

LAB31:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(139, ng0);
    t28 = (t0 + 4340);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB35;

}

static void Always_144_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 8220);
    *((int *)t2) = 1;
    t3 = (t0 + 6716);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);

LAB5:    xsi_set_current_line(146, ng0);
    t5 = (t0 + 4708);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t16, t4, 0, 0, 4, 0LL);
    goto LAB2;

}

static void Always_149_6(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;

LAB0:    t1 = (t0 + 6832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 8228);
    *((int *)t2) = 1;
    t3 = (t0 + 6860);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 4984);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4340);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(151, ng0);
    t9 = (t0 + 4524);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 4616);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 8, t11, 8, t14, 8);
    t16 = (t0 + 4340);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 8, 0LL);
    goto LAB16;

LAB8:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 4524);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 4616);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 8, t5, 8, t10, 8);
    t11 = (t0 + 4340);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 8, 0LL);
    goto LAB16;

LAB10:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 4524);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 4616);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 8, t5, 8, t10, 8);
    t11 = (t0 + 4340);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 8, 0LL);
    goto LAB16;

LAB12:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 4432);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 4340);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 8, 0LL);
    goto LAB16;

}

static void Cont_159_7(char *t0)
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 6976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 8312);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 8236);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_173_8(char *t0)
{
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 7120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 8244);
    *((int *)t2) = 1;
    t3 = (t0 + 7148);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(174, ng0);
    t4 = (t0 + 2364U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(175, ng0);

LAB8:    xsi_set_current_line(176, ng0);
    t11 = (t0 + 2456U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2548U);
    t3 = *((char **)t2);
    t2 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB11:    goto LAB7;

LAB9:    xsi_set_current_line(177, ng0);
    t18 = ((char*)((ng6)));
    t19 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 8, 0LL);
    goto LAB11;

}

static void Always_194_9(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t16;
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
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 8252);
    *((int *)t2) = 1;
    t3 = (t0 + 7292);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(195, ng0);
    t4 = (t0 + 3972);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1064);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t15) = 1;

LAB11:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1144);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t15) = 1;

LAB18:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1224);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB22:    if (t20 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t15) = 1;

LAB25:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1304);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB32;

LAB29:    if (t20 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t15) = 1;

LAB32:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:
LAB35:
LAB28:
LAB21:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(196, ng0);
    t13 = ((char*)((ng5)));
    t14 = (t0 + 5076);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 8, 0LL);
    goto LAB7;

LAB10:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(198, ng0);
    t28 = (t0 + 4524);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 5076);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB14;

LAB17:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(200, ng0);
    t28 = (t0 + 4708);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 5076);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB21;

LAB24:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(202, ng0);
    t28 = (t0 + 4616);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 5076);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB28;

LAB31:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(204, ng0);
    t28 = (t0 + 4340);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 5076);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    goto LAB35;

}

static void Cont_229_10(char *t0)
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

LAB0:    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 5076);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 8348);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 8260);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_238_11(char *t0)
{
    char t12[8];
    char t27[8];
    char t63[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 7552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 8268);
    *((int *)t2) = 1;
    t3 = (t0 + 7580);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(239, ng0);
    t4 = (t0 + 3972);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 4800);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 984);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    t10 = (t9 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB8;

LAB5:    if (t23 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t12) = 1;

LAB8:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t12);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t12 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB9;

LAB10:
LAB11:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 3100U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB14:    goto LAB2;

LAB7:    t26 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB8;

LAB9:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t12 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t12);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB11;

LAB12:    xsi_set_current_line(240, ng0);

LAB15:    xsi_set_current_line(241, ng0);
    t61 = ((char*)((ng5)));
    t62 = (t0 + 5168);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 8, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB14;

LAB16:    xsi_set_current_line(247, ng0);

LAB19:    xsi_set_current_line(248, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);
    memset(t12, 0, 8);
    t4 = (t5 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t4) != 0)
        goto LAB22;

LAB23:    t7 = (t12 + 4);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t7);
    t28 = (t24 || t25);
    if (t28 > 0)
        goto LAB24;

LAB25:    memcpy(t64, t12, 8);

LAB26:    t82 = (t64 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t64);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(256, ng0);

LAB42:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 3376U);
    t3 = *((char **)t2);
    t2 = (t0 + 5168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 3284U);
    t3 = *((char **)t2);
    t2 = (t0 + 5260);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB40:    goto LAB18;

LAB20:    *((unsigned int *)t12) = 1;
    goto LAB23;

LAB22:    t6 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB23;

LAB24:    t8 = (t0 + 4800);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 1304);
    t13 = *((char **)t11);
    memset(t27, 0, 8);
    t11 = (t10 + 4);
    t26 = (t13 + 4);
    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t13);
    t34 = (t29 ^ t30);
    t35 = *((unsigned int *)t11);
    t36 = *((unsigned int *)t26);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t26);
    t43 = (t39 | t40);
    t44 = (~(t43));
    t45 = (t38 & t44);
    if (t45 != 0)
        goto LAB30;

LAB27:    if (t43 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t27) = 1;

LAB30:    memset(t63, 0, 8);
    t32 = (t27 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (~(t47));
    t49 = *((unsigned int *)t27);
    t51 = (t49 & t48);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t32) != 0)
        goto LAB33;

LAB34:    t53 = *((unsigned int *)t12);
    t54 = *((unsigned int *)t63);
    t56 = (t53 & t54);
    *((unsigned int *)t64) = t56;
    t41 = (t12 + 4);
    t42 = (t63 + 4);
    t55 = (t64 + 4);
    t57 = *((unsigned int *)t41);
    t58 = *((unsigned int *)t42);
    t59 = (t57 | t58);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t55);
    t65 = (t60 != 0);
    if (t65 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB26;

LAB29:    t31 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t63) = 1;
    goto LAB34;

LAB33:    t33 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB34;

LAB35:    t66 = *((unsigned int *)t64);
    t67 = *((unsigned int *)t55);
    *((unsigned int *)t64) = (t66 | t67);
    t61 = (t12 + 4);
    t62 = (t63 + 4);
    t68 = *((unsigned int *)t12);
    t69 = (~(t68));
    t70 = *((unsigned int *)t61);
    t71 = (~(t70));
    t72 = *((unsigned int *)t63);
    t73 = (~(t72));
    t74 = *((unsigned int *)t62);
    t75 = (~(t74));
    t46 = (t69 & t71);
    t50 = (t73 & t75);
    t76 = (~(t46));
    t77 = (~(t50));
    t78 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t78 & t76);
    t79 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t79 & t77);
    t80 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t80 & t76);
    t81 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t81 & t77);
    goto LAB37;

LAB38:    xsi_set_current_line(249, ng0);

LAB41:    xsi_set_current_line(250, ng0);
    t88 = ((char*)((ng6)));
    t89 = (t0 + 5168);
    xsi_vlogvar_wait_assign_value(t89, t88, 0, 0, 8, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB40;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 7696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 8384);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 7840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 8420);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void implSig3_execute(char *t0)
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

LAB0:    t1 = (t0 + 7984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 8456);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}


extern void work_m_00000000002379915861_1522768372_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)Always_66_1,(void *)Always_72_2,(void *)Always_115_3,(void *)Always_129_4,(void *)Always_144_5,(void *)Always_149_6,(void *)Cont_159_7,(void *)Always_173_8,(void *)Always_194_9,(void *)Cont_229_10,(void *)Always_238_11,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000002379915861_1522768372", "isim/test_top_modul_isim_beh.exe.sim/work/m_00000000002379915861_1522768372.didat");
	xsi_register_executes(pe);
}
