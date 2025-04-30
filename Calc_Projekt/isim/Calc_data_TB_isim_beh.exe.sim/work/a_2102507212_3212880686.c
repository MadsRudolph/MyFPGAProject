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
    char t18[16];
    char t20[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB13;

LAB14:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(60, ng0);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t7 = t3;
    if (-1 == 1)
        goto LAB8;

LAB9:    t8 = 16;

LAB10:    t9 = (t8 - 16);
    t10 = (t9 * 1);
    t11 = (1U * t10);
    t12 = (t7 + t11);
    t13 = (16 - 31);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t15 = (1U * t14);
    memset(t12, (unsigned char)2, t15);
    t16 = (t0 + 1032U);
    t17 = *((char **)t16);
    t19 = ((IEEE_P_2592010699) + 4024);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 16;
    t22 = (t21 + 4U);
    *((int *)t22) = 31;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (31 - 16);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = (t0 + 10788U);
    t16 = xsi_base_array_concat(t16, t18, t19, (char)97, t3, t20, (char)97, t17, t22, (char)101);
    t24 = (16U + 16U);
    t25 = (32U != t24);
    if (t25 == 1)
        goto LAB11;

LAB12:    t26 = (t0 + 6576);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t16, 32U);
    xsi_driver_first_trans_fast(t26);
    goto LAB6;

LAB8:    t8 = 31;
    goto LAB10;

LAB11:    xsi_size_not_matching(32U, t24, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 6576);
    t7 = (t1 + 56U);
    t12 = *((char **)t7);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_2102507212_3212880686_p_1(char *t0)
{
    char t18[16];
    char t21[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6416);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB13;

LAB14:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t8 = t3;
    if (-1 == 1)
        goto LAB8;

LAB9:    t9 = 0;

LAB10:    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (t8 + t12);
    t14 = (0 - 15);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t16 = (1U * t15);
    memset(t13, (unsigned char)2, t16);
    t19 = ((IEEE_P_2592010699) + 4024);
    t20 = (t0 + 10804U);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 15;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (15 - 0);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t17 = xsi_base_array_concat(t17, t18, t19, (char)97, t7, t20, (char)97, t3, t21, (char)101);
    t25 = (8U + 16U);
    t26 = (24U != t25);
    if (t26 == 1)
        goto LAB11;

LAB12:    t23 = (t0 + 6640);
    t27 = (t23 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t17, 24U);
    xsi_driver_first_trans_fast(t23);
    goto LAB6;

LAB8:    t9 = 15;
    goto LAB10;

LAB11:    xsi_size_not_matching(24U, t25, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t1 = (t0 + 6640);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t4, 24U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_2102507212_3212880686_p_2(char *t0)
{
    char t15[16];
    char t16[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 <= 18);
    if (t2 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6832);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 2632U);
    t7 = *((char **)t3);
    t3 = (t0 + 6704);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6768);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 24U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t12 = (23 - 23);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t4 + t14);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t16 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 23;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t17 = (1 - 23);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t18;
    t7 = xsi_base_array_concat(t7, t15, t8, (char)99, (unsigned char)2, (char)97, t1, t16, (char)101);
    t18 = (1U + 23U);
    t6 = (24U != t18);
    if (t6 == 1)
        goto LAB10;

LAB11:    t10 = (t0 + 6768);
    t11 = (t10 + 56U);
    t19 = *((char **)t11);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 24U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 10852U);
    t4 = (t0 + 2472U);
    t7 = *((char **)t4);
    t4 = (t0 + 10868U);
    t2 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 10852U);
    t4 = (t0 + 2472U);
    t7 = *((char **)t4);
    t4 = (t0 + 10868U);
    t8 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t15, t3, t1, t7, t4);
    t9 = (t0 + 6704);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t19 = (t11 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 32U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 6832);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB6;

LAB10:    xsi_size_not_matching(24U, t18, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(90, ng0);
    t8 = (t0 + 6832);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t19 = *((char **)t11);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB13;

}

static void work_a_2102507212_3212880686_p_3(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;

LAB0:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6448);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 1992U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(112, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    if (-1 == -1)
        goto LAB17;

LAB18:    t11 = 0;

LAB19:    t20 = (t11 - 15);
    t12 = (t20 * -1);
    t13 = (1U * t12);
    t4 = (t3 + t13);
    t27 = (0 - 15);
    t21 = (t27 * -1);
    t21 = (t21 + 1);
    t28 = (1U * t21);
    memset(t4, (unsigned char)2, t28);
    t7 = (t0 + 6896);
    t10 = (t7 + 56U);
    t14 = *((char **)t10);
    t16 = (t14 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast(t7);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 2952U);
    t10 = *((char **)t3);
    t11 = (15 - 14);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t3 = (t10 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 14;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 14);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t3, t17, (char)99, (unsigned char)3, (char)101);
    t21 = (15U + 1U);
    t22 = (16U != t21);
    if (t22 == 1)
        goto LAB11;

LAB12:    t19 = (t0 + 6896);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 16U);
    xsi_driver_first_trans_fast(t19);
    goto LAB9;

LAB11:    xsi_size_not_matching(16U, t21, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t11 = (15 - 14);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t4 + t13);
    t10 = ((IEEE_P_2592010699) + 4024);
    t14 = (t17 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 14;
    t16 = (t14 + 4U);
    *((int *)t16) = 0;
    t16 = (t14 + 8U);
    *((int *)t16) = -1;
    t20 = (0 - 14);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t21;
    t7 = xsi_base_array_concat(t7, t15, t10, (char)97, t1, t17, (char)99, (unsigned char)2, (char)101);
    t21 = (15U + 1U);
    t6 = (16U != t21);
    if (t6 == 1)
        goto LAB15;

LAB16:    t16 = (t0 + 6896);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 16U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB15:    xsi_size_not_matching(16U, t21, 0);
    goto LAB16;

LAB17:    t11 = 15;
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

LAB0:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 6960);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 7024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 7088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t6 = (t11 < 18);
    if (t6 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 7024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 7088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 2152U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    t13 = (t12 + 1);
    t1 = (t0 + 6960);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    *((int *)t14) = t13;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

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

LAB0:    xsi_set_current_line(137, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 7152);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6480);
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

LAB0:    xsi_set_current_line(138, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7216);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6496);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2102507212_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2102507212_3212880686_p_0,(void *)work_a_2102507212_3212880686_p_1,(void *)work_a_2102507212_3212880686_p_2,(void *)work_a_2102507212_3212880686_p_3,(void *)work_a_2102507212_3212880686_p_4,(void *)work_a_2102507212_3212880686_p_5,(void *)work_a_2102507212_3212880686_p_6};
	xsi_register_didat("work_a_2102507212_3212880686", "isim/Calc_data_TB_isim_beh.exe.sim/work/a_2102507212_3212880686.didat");
	xsi_register_executes(pe);
}
