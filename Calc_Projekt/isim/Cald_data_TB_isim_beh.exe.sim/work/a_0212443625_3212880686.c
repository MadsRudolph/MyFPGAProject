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
static const char *ng0 = "C:/Users/s246132/Xilinx_Projects/MyFPGAProject/Calc_Projekt/Calc_data_topmudule.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2045698577_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2053728113_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0212443625_3212880686_p_0(char *t0)
{
    char t12[16];
    char t13[16];
    char t15[16];
    char t26[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5088);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 9004);
    t6 = (t0 + 5200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 9020);
    t5 = (t0 + 5264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 9036);
    t5 = (t0 + 5328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t2 = (t0 + 8788U);
    t7 = (t0 + 9052);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t14 = ((IEEE_P_2592010699) + 4024);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 7;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (7 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t0 + 8804U);
    t9 = xsi_base_array_concat(t9, t13, t14, (char)97, t7, t15, (char)97, t10, t17, (char)101);
    t20 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t12, t6, t2, t9, t13);
    t21 = (t0 + 5200);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t20, 16U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 8788U);
    t5 = (t0 + 9060);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t15 + 0U);
    t14 = (t10 + 0U);
    *((int *)t14) = 0;
    t14 = (t10 + 4U);
    *((int *)t14) = 7;
    t14 = (t10 + 8U);
    *((int *)t14) = 1;
    t18 = (7 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t14 = (t10 + 12U);
    *((unsigned int *)t14) = t19;
    t14 = (t0 + 8804U);
    t7 = xsi_base_array_concat(t7, t13, t9, (char)97, t5, t15, (char)97, t8, t14, (char)101);
    t16 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t12, t2, t1, t7, t13);
    t17 = (t0 + 5264);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t16, 16U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 8788U);
    t5 = (t0 + 9068);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t26 + 0U);
    t14 = (t10 + 0U);
    *((int *)t14) = 0;
    t14 = (t10 + 4U);
    *((int *)t14) = 7;
    t14 = (t10 + 8U);
    *((int *)t14) = 1;
    t18 = (7 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t14 = (t10 + 12U);
    *((unsigned int *)t14) = t19;
    t14 = (t0 + 8804U);
    t7 = xsi_base_array_concat(t7, t15, t9, (char)97, t5, t26, (char)97, t8, t14, (char)101);
    t16 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t13, t2, t1, t7, t15);
    t17 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t12, t16, t13, 16);
    t20 = (t0 + 5328);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t17, 16U);
    xsi_driver_first_trans_fast(t20);
    goto LAB8;

}

static void work_a_0212443625_3212880686_p_1(char *t0)
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
    char *t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    int t21;

LAB0:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(102, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 5392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t2 = (t0 + 9076);
    t4 = 1;
    if (3U == 3U)
        goto LAB10;

LAB11:    t4 = 0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9079);
    t19 = xsi_mem_cmp(t1, t2, 3U);
    if (t19 == 1)
        goto LAB20;

LAB24:    t6 = (t0 + 9082);
    t20 = xsi_mem_cmp(t6, t2, 3U);
    if (t20 == 1)
        goto LAB21;

LAB25:    t8 = (t0 + 9085);
    t21 = xsi_mem_cmp(t8, t2, 3U);
    if (t21 == 1)
        goto LAB22;

LAB26:
LAB23:    xsi_set_current_line(113, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 5392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB19:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(105, ng0);
    t9 = (t0 + 2952U);
    t10 = *((char **)t9);
    t12 = *((unsigned char *)t10);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB8;

LAB10:    t11 = 0;

LAB13:    if (t11 < 3U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t7 = (t5 + t11);
    t8 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(106, ng0);
    t9 = (t0 + 2792U);
    t14 = *((char **)t9);
    t9 = (t0 + 5392);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 16U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB17;

LAB20:    xsi_set_current_line(110, ng0);
    t10 = (t0 + 2312U);
    t14 = *((char **)t10);
    t10 = (t0 + 5392);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB19;

LAB21:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5392);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB22:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5392);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB27:;
}

static void work_a_0212443625_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5120);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 5456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5520);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t2 = (t0 + 9088);
    t9 = 1;
    if (3U == 3U)
        goto LAB13;

LAB14:    t9 = 0;

LAB15:    if (t9 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9091);
    t3 = 1;
    if (3U == 3U)
        goto LAB21;

LAB22:    t3 = 0;

LAB23:    if ((!(t3)) != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 5456);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(127, ng0);
    t11 = (t0 + 2952U);
    t15 = *((char **)t11);
    t16 = *((unsigned char *)t15);
    t11 = (t0 + 5520);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t16;
    xsi_driver_first_trans_fast(t11);
    goto LAB8;

LAB10:    t11 = (t0 + 2952U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t4 = t14;
    goto LAB12;

LAB13:    t10 = 0;

LAB16:    if (t10 < 3U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t7 = (t5 + t10);
    t8 = (t2 + t10);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB14;

LAB18:    t10 = (t10 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(130, ng0);
    t8 = (t0 + 5456);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t15 = (t12 + 56U);
    t17 = *((char **)t15);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB8;

LAB21:    t10 = 0;

LAB24:    if (t10 < 3U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t2 + t10);
    t7 = (t1 + t10);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t10 = (t10 + 1);
    goto LAB24;

}


extern void work_a_0212443625_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0212443625_3212880686_p_0,(void *)work_a_0212443625_3212880686_p_1,(void *)work_a_0212443625_3212880686_p_2};
	xsi_register_didat("work_a_0212443625_3212880686", "isim/Cald_data_TB_isim_beh.exe.sim/work/a_0212443625_3212880686.didat");
	xsi_register_executes(pe);
}
