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
    char t7[16];
    char t13[16];
    char t15[16];
    char t26[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
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

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4768);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1352U);
    t8 = *((char **)t3);
    t3 = (t0 + 8188U);
    t9 = (t0 + 8402);
    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
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
    t17 = (t0 + 8204U);
    t11 = xsi_base_array_concat(t11, t13, t14, (char)97, t9, t15, (char)97, t12, t17, (char)101);
    t20 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t7, t8, t3, t11, t13);
    t21 = (t0 + 4880);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t20, 16U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 8188U);
    t4 = (t0 + 8410);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t15 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 0;
    t14 = (t12 + 4U);
    *((int *)t14) = 7;
    t14 = (t12 + 8U);
    *((int *)t14) = 1;
    t18 = (7 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t19;
    t14 = (t0 + 8204U);
    t9 = xsi_base_array_concat(t9, t13, t11, (char)97, t4, t15, (char)97, t10, t14, (char)101);
    t16 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t7, t3, t1, t9, t13);
    t17 = (t0 + 4944);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t16, 16U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 8188U);
    t4 = (t0 + 8418);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t26 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 0;
    t14 = (t12 + 4U);
    *((int *)t14) = 7;
    t14 = (t12 + 8U);
    *((int *)t14) = 1;
    t18 = (7 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t19;
    t14 = (t0 + 8204U);
    t9 = xsi_base_array_concat(t9, t15, t11, (char)97, t4, t26, (char)97, t10, t14, (char)101);
    t16 = ieee_p_1242562249_sub_2053728113_1035706684(IEEE_P_1242562249, t13, t3, t1, t9, t15);
    t17 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t7, t16, t13, 16);
    t20 = (t0 + 5008);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t17, 16U);
    xsi_driver_first_trans_fast(t20);
    goto LAB6;

}

static void work_a_0212443625_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
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

LAB0:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 8426);
    t6 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t6 = 0;

LAB10:    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 8429);
    t19 = xsi_mem_cmp(t1, t3, 3U);
    if (t19 == 1)
        goto LAB18;

LAB22:    t5 = (t0 + 8432);
    t20 = xsi_mem_cmp(t5, t3, 3U);
    if (t20 == 1)
        goto LAB19;

LAB23:    t9 = (t0 + 8435);
    t21 = xsi_mem_cmp(t9, t3, 3U);
    if (t21 == 1)
        goto LAB20;

LAB24:
LAB21:    xsi_set_current_line(101, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5072);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB17:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(93, ng0);
    t10 = (t0 + 2792U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB6;

LAB8:    t7 = 0;

LAB11:    if (t7 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t8 = (t4 + t7);
    t9 = (t3 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB9;

LAB13:    t7 = (t7 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(94, ng0);
    t10 = (t0 + 2632U);
    t14 = *((char **)t10);
    t10 = (t0 + 5072);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB15;

LAB18:    xsi_set_current_line(98, ng0);
    t11 = (t0 + 2152U);
    t14 = *((char **)t11);
    t11 = (t0 + 5072);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 16U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB17;

LAB19:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 5072);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB20:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 5072);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB25:;
}

static void work_a_0212443625_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 8438);
    t7 = 1;
    if (3U == 3U)
        goto LAB11;

LAB12:    t7 = 0;

LAB13:    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t1 = (t0 + 8441);
    t3 = 1;
    if (3U == 3U)
        goto LAB22;

LAB23:    t3 = 0;

LAB24:    if ((!(t3)) == 1)
        goto LAB19;

LAB20:    t2 = (unsigned char)0;

LAB21:    if (t2 != 0)
        goto LAB17;

LAB18:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5136);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(111, ng0);
    t11 = (t0 + 5136);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB8:    t11 = (t0 + 2792U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB10;

LAB11:    t8 = 0;

LAB14:    if (t8 < 3U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t9 = (t5 + t8);
    t10 = (t4 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB12;

LAB16:    t8 = (t8 + 1);
    goto LAB14;

LAB17:    xsi_set_current_line(113, ng0);
    t10 = (t0 + 5136);
    t12 = (t10 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB6;

LAB19:    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t7 = *((unsigned char *)t11);
    t13 = (t7 == (unsigned char)3);
    t2 = t13;
    goto LAB21;

LAB22:    t8 = 0;

LAB25:    if (t8 < 3U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t6 = (t4 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB23;

LAB27:    t8 = (t8 + 1);
    goto LAB25;

}


extern void work_a_0212443625_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0212443625_3212880686_p_0,(void *)work_a_0212443625_3212880686_p_1,(void *)work_a_0212443625_3212880686_p_2};
	xsi_register_didat("work_a_0212443625_3212880686", "isim/Calc_Top_Without_Debounce_TB_isim_beh.exe.sim/work/a_0212443625_3212880686.didat");
	xsi_register_executes(pe);
}
