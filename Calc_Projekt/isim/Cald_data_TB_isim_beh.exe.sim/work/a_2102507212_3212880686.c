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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/s246132/Xilinx_Projects/MyFPGAProject/Calc_Projekt/div_compoent.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2102507212_3212880686_p_0(char *t0)
{
    char t20[16];
    char t21[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 <= (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB15;

LAB16:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t3 = xsi_get_transient_memory(24U);
    memset(t3, 0, 24U);
    t7 = t3;
    memset(t7, (unsigned char)2, 24U);
    t8 = (t0 + 6736);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 24U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(63, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t4 = t1;
    if (-1 == 1)
        goto LAB10;

LAB11:    t13 = 16;

LAB12:    t14 = (t13 - 16);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t7 = (t4 + t16);
    t17 = (16 - 23);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t19 = (1U * t18);
    memset(t7, (unsigned char)2, t19);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t21 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 16;
    t12 = (t11 + 4U);
    *((int *)t12) = 23;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t22 = (23 - 16);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t23;
    t12 = (t0 + 11064U);
    t8 = xsi_base_array_concat(t8, t20, t10, (char)97, t1, t21, (char)97, t9, t12, (char)101);
    t23 = (8U + 16U);
    t6 = (24U != t23);
    if (t6 == 1)
        goto LAB13;

LAB14:    t24 = (t0 + 6736);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t8, 24U);
    xsi_driver_first_trans_fast(t24);
    goto LAB6;

LAB10:    t13 = 23;
    goto LAB12;

LAB13:    xsi_size_not_matching(24U, t23, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t1 = (t0 + 6736);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 24U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_2102507212_3212880686_p_1(char *t0)
{
    char t20[16];
    char t21[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6576);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t3 = xsi_get_transient_memory(24U);
    memset(t3, 0, 24U);
    t7 = t3;
    memset(t7, (unsigned char)2, 24U);
    t8 = (t0 + 6800);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 24U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t7 = t1;
    if (-1 == 1)
        goto LAB10;

LAB11:    t13 = 0;

LAB12:    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t8 = (t7 + t16);
    t17 = (0 - 15);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t19 = (1U * t18);
    memset(t8, (unsigned char)2, t19);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 11080U);
    t12 = (t21 + 0U);
    t22 = (t12 + 0U);
    *((int *)t22) = 0;
    t22 = (t12 + 4U);
    *((int *)t22) = 15;
    t22 = (t12 + 8U);
    *((int *)t22) = 1;
    t23 = (15 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t22 = (t12 + 12U);
    *((unsigned int *)t22) = t24;
    t9 = xsi_base_array_concat(t9, t20, t10, (char)97, t4, t11, (char)97, t1, t21, (char)101);
    t24 = (8U + 16U);
    t6 = (24U != t24);
    if (t6 == 1)
        goto LAB13;

LAB14:    t22 = (t0 + 6800);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t9, 24U);
    xsi_driver_first_trans_fast(t22);
    goto LAB6;

LAB10:    t13 = 15;
    goto LAB12;

LAB13:    xsi_size_not_matching(24U, t24, 0);
    goto LAB14;

}

static void work_a_2102507212_3212880686_p_2(char *t0)
{
    char t17[16];
    char t18[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t2 = (t13 == 0);
    if (t2 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t2 = (t13 <= 18);
    if (t2 != 0)
        goto LAB10;

LAB11:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 6992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(87, ng0);
    t3 = xsi_get_transient_memory(24U);
    memset(t3, 0, 24U);
    t7 = t3;
    memset(t7, (unsigned char)2, 24U);
    t8 = (t0 + 6864);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 24U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(88, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t3 = t1;
    memset(t3, (unsigned char)2, 24U);
    t4 = (t0 + 6928);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 24U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 6992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t1 = (t0 + 6864);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 24U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 6928);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 24U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t14 = (23 - 23);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t18 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 23;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t19 = (1 - 23);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t20;
    t7 = xsi_base_array_concat(t7, t17, t8, (char)99, (unsigned char)2, (char)97, t1, t18, (char)101);
    t20 = (1U + 23U);
    t5 = (24U != t20);
    if (t5 == 1)
        goto LAB12;

LAB13:    t10 = (t0 + 6928);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 24U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 11128U);
    t4 = (t0 + 2632U);
    t7 = *((char **)t4);
    t4 = (t0 + 11144U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 11128U);
    t4 = (t0 + 2632U);
    t7 = *((char **)t4);
    t4 = (t0 + 11144U);
    t8 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t17, t3, t1, t7, t4);
    t9 = (t0 + 6864);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t21 = *((char **)t12);
    memcpy(t21, t8, 24U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 6992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB6;

LAB12:    xsi_size_not_matching(24U, t20, 0);
    goto LAB13;

LAB14:    xsi_set_current_line(97, ng0);
    t8 = (t0 + 6992);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB15;

}

static void work_a_2102507212_3212880686_p_3(char *t0)
{
    char t16[16];
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6608);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(114, ng0);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t7 = t3;
    memset(t7, (unsigned char)2, 16U);
    t8 = (t0 + 7056);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(120, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    if (-1 == -1)
        goto LAB17;

LAB18:    t13 = 0;

LAB19:    t18 = (t13 - 15);
    t14 = (t18 * -1);
    t15 = (1U * t14);
    t4 = (t3 + t15);
    t22 = (0 - 15);
    t19 = (t22 * -1);
    t19 = (t19 + 1);
    t23 = (1U * t19);
    memset(t4, (unsigned char)2, t23);
    t7 = (t0 + 7056);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast(t7);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t13 = (15 - 14);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t4 + t15);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 14;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t18 = (0 - 14);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t19;
    t7 = xsi_base_array_concat(t7, t16, t8, (char)97, t1, t17, (char)99, (unsigned char)3, (char)101);
    t19 = (15U + 1U);
    t6 = (16U != t19);
    if (t6 == 1)
        goto LAB11;

LAB12:    t10 = (t0 + 7056);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

LAB11:    xsi_size_not_matching(16U, t19, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t13 = (15 - 14);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t4 + t15);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 14;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t18 = (0 - 14);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t19;
    t7 = xsi_base_array_concat(t7, t16, t8, (char)97, t1, t17, (char)99, (unsigned char)2, (char)101);
    t19 = (15U + 1U);
    t6 = (16U != t19);
    if (t6 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 7056);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

LAB15:    xsi_size_not_matching(16U, t19, 0);
    goto LAB16;

LAB17:    t13 = 15;
    goto LAB19;

}

static void work_a_2102507212_3212880686_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    char *t14;

LAB0:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6624);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB10;

LAB11:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 7120);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 7184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 7248);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 7120);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 7184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 7248);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t6 = (t11 < 18);
    if (t6 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 7184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 7248);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB6;

LAB12:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    t13 = (t12 + 1);
    t1 = (t0 + 7120);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    *((int *)t14) = t13;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

}

static void work_a_2102507212_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(149, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 7312);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6640);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2102507212_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(150, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7376);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6656);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2102507212_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2102507212_3212880686_p_0,(void *)work_a_2102507212_3212880686_p_1,(void *)work_a_2102507212_3212880686_p_2,(void *)work_a_2102507212_3212880686_p_3,(void *)work_a_2102507212_3212880686_p_4,(void *)work_a_2102507212_3212880686_p_5,(void *)work_a_2102507212_3212880686_p_6};
	xsi_register_didat("work_a_2102507212_3212880686", "isim/Cald_data_TB_isim_beh.exe.sim/work/a_2102507212_3212880686.didat");
	xsi_register_executes(pe);
}
