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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/Mads/MyFPGAProject/Mock_Exam_TEMPLATE/src/modules/ENT3.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2909998233_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 3648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 3648);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_2909998233_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5918);
    t3 = (t0 + 3712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 3776);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3568);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 5920);
    t5 = (t0 + 3712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = (1 - 1);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t8 = *((unsigned char *)t1);
    t15 = (t8 == (unsigned char)3);
    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 3712);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = (1 - 1);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t8 = *((unsigned char *)t1);
    t15 = (t8 == (unsigned char)2);
    if (t15 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5922);
    t8 = 1;
    if (2U == 2U)
        goto LAB16;

LAB17:    t8 = 0;

LAB18:    if (t8 != 0)
        goto LAB14;

LAB15:
LAB12:    goto LAB2;

LAB5:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3712);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = (0 - 1);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t8 = *((unsigned char *)t1);
    t15 = (t8 == (unsigned char)3);
    if (t15 != 0)
        goto LAB22;

LAB24:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = (0 - 1);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t8 = *((unsigned char *)t1);
    t15 = (t8 == (unsigned char)2);
    if (t15 != 0)
        goto LAB25;

LAB26:
LAB23:    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 5924);
    t3 = (t0 + 3712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3776);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5926);
    t8 = 1;
    if (2U == 2U)
        goto LAB30;

LAB31:    t8 = 0;

LAB32:    if (t8 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB2;

LAB8:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 3776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t3);
    goto LAB9;

LAB11:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 3776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB12;

LAB14:    xsi_set_current_line(46, ng0);
    t6 = (t0 + 3776);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB12;

LAB16:    t12 = 0;

LAB19:    if (t12 < 2U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t4 = (t2 + t12);
    t5 = (t1 + t12);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB17;

LAB21:    t12 = (t12 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 3776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB23;

LAB25:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 3776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t3);
    goto LAB23;

LAB27:    xsi_set_current_line(63, ng0);
    t6 = (t0 + 3776);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB28;

LAB30:    t12 = 0;

LAB33:    if (t12 < 2U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t4 = (t2 + t12);
    t5 = (t1 + t12);
    if (*((unsigned char *)t4) != *((unsigned char *)t5))
        goto LAB31;

LAB35:    t12 = (t12 + 1);
    goto LAB33;

}


extern void work_a_2909998233_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2909998233_3212880686_p_0,(void *)work_a_2909998233_3212880686_p_1};
	xsi_register_didat("work_a_2909998233_3212880686", "isim/ENT3_tb_isim_beh.exe.sim/work/a_2909998233_3212880686.didat");
	xsi_register_executes(pe);
}
