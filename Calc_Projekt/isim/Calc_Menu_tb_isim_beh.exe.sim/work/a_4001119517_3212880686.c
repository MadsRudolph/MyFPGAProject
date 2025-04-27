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
static const char *ng0 = "/home/mads/Xilinx_Projects/MyFPGAProject/Calc_Projekt/Calc_Menu.vhd";
extern char *IEEE_P_2592010699;



static void work_a_4001119517_3212880686_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 8064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 8224);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 8224);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_4001119517_3212880686_p_1(char *t0)
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
    unsigned char t11;
    static char *nl0[] = {&&LAB3, &&LAB5, &&LAB7, &&LAB9, &&LAB11, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB4, &&LAB6, &&LAB8, &&LAB10, &&LAB12};

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 8288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 8352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 8416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 8480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 8544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 8608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 14558);
    t3 = (t0 + 8736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 8080);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 14566);
    t5 = (t0 + 8736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB17;

LAB19:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB4:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 8288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 14574);
    t3 = (t0 + 8736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB24;

LAB26:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB29;

LAB30:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB25:    goto LAB2;

LAB6:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 8480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 14582);
    t3 = (t0 + 8736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB34;

LAB35:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB36;

LAB37:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB2;

LAB8:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 8352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 14590);
    t3 = (t0 + 8736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB38;

LAB40:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB41;

LAB42:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB43;

LAB44:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB39:    goto LAB2;

LAB10:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 8544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 14598);
    t3 = (t0 + 8736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB45;

LAB47:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB48;

LAB49:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB50;

LAB51:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB46:    goto LAB2;

LAB12:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 8416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 8608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 8672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB52;

LAB54:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB53:    goto LAB2;

LAB14:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 8608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB15:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 8608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 8672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB55;

LAB57:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB56:    goto LAB2;

LAB16:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 14606);
    t3 = (t0 + 8736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB58;

LAB60:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 8800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB59:    goto LAB2;

LAB17:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB22:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB24:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB27:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)10;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB29:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB31:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)11;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB36:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB38:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB41:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB43:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB39;

LAB45:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB48:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)13;
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB50:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB52:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB53;

LAB55:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB56;

LAB58:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 8800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB59;

}

static void work_a_4001119517_3212880686_p_2(char *t0)
{
    char t31[16];
    char t32[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t33;
    unsigned char t34;

LAB0:    t1 = (t0 + 7000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4232U);
    t3 = *((char **)t2);
    t2 = (t0 + 14614);
    t5 = xsi_mem_cmp(t2, t3, 8U);
    if (t5 == 1)
        goto LAB5;

LAB13:    t6 = (t0 + 14622);
    t8 = xsi_mem_cmp(t6, t3, 8U);
    if (t8 == 1)
        goto LAB6;

LAB14:    t9 = (t0 + 14630);
    t11 = xsi_mem_cmp(t9, t3, 8U);
    if (t11 == 1)
        goto LAB7;

LAB15:    t12 = (t0 + 14638);
    t14 = xsi_mem_cmp(t12, t3, 8U);
    if (t14 == 1)
        goto LAB8;

LAB16:    t15 = (t0 + 14646);
    t17 = xsi_mem_cmp(t15, t3, 8U);
    if (t17 == 1)
        goto LAB9;

LAB17:    t18 = (t0 + 14654);
    t20 = xsi_mem_cmp(t18, t3, 8U);
    if (t20 == 1)
        goto LAB10;

LAB18:    t21 = (t0 + 14662);
    t23 = xsi_mem_cmp(t21, t3, 8U);
    if (t23 == 1)
        goto LAB11;

LAB19:
LAB12:    xsi_set_current_line(171, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 8864);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(169, ng0);

LAB33:    t2 = (t0 + 8096);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;

LAB1:    return;
LAB5:    xsi_set_current_line(171, ng0);
    t24 = xsi_get_transient_memory(16U);
    memset(t24, 0, 16U);
    t25 = t24;
    memset(t25, (unsigned char)2, 16U);
    t26 = (t0 + 8864);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t24, 16U);
    xsi_driver_first_trans_fast_port(t26);
    goto LAB4;

LAB6:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 14670);
    t4 = (t0 + 3912U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 7;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t5 = (7 - 0);
    t33 = (t5 * 1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = (t0 + 14432U);
    t4 = xsi_base_array_concat(t4, t31, t7, (char)97, t2, t32, (char)97, t6, t10, (char)101);
    t33 = (8U + 8U);
    t34 = (16U != t33);
    if (t34 == 1)
        goto LAB21;

LAB22:    t12 = (t0 + 8864);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t4, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB7:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 14678);
    t4 = (t0 + 4392U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 7;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t5 = (7 - 0);
    t33 = (t5 * 1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = (t0 + 14432U);
    t4 = xsi_base_array_concat(t4, t31, t7, (char)97, t2, t32, (char)97, t6, t10, (char)101);
    t33 = (8U + 8U);
    t34 = (16U != t33);
    if (t34 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 8864);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t4, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB8:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 14686);
    t4 = (t0 + 4072U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 7;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t5 = (7 - 0);
    t33 = (t5 * 1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = (t0 + 14432U);
    t4 = xsi_base_array_concat(t4, t31, t7, (char)97, t2, t32, (char)97, t6, t10, (char)101);
    t33 = (8U + 8U);
    t34 = (16U != t33);
    if (t34 == 1)
        goto LAB25;

LAB26:    t12 = (t0 + 8864);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t4, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB9:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 14694);
    t4 = (t0 + 3592U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 7;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t5 = (7 - 0);
    t33 = (t5 * 1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = (t0 + 14432U);
    t4 = xsi_base_array_concat(t4, t31, t7, (char)97, t2, t32, (char)97, t6, t10, (char)101);
    t33 = (8U + 8U);
    t34 = (16U != t33);
    if (t34 == 1)
        goto LAB27;

LAB28:    t12 = (t0 + 8864);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t4, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB10:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 14702);
    t4 = (t0 + 3752U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t9 = (t32 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 7;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t5 = (7 - 0);
    t33 = (t5 * 1);
    t33 = (t33 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t33;
    t10 = (t0 + 14432U);
    t4 = xsi_base_array_concat(t4, t31, t7, (char)97, t2, t32, (char)97, t6, t10, (char)101);
    t33 = (8U + 8U);
    t34 = (16U != t33);
    if (t34 == 1)
        goto LAB29;

LAB30:    t12 = (t0 + 8864);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t4, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB4;

LAB11:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 8864);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB20:;
LAB21:    xsi_size_not_matching(16U, t33, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, t33, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(16U, t33, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(16U, t33, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(16U, t33, 0);
    goto LAB30;

LAB31:    t3 = (t0 + 8096);
    *((int *)t3) = 0;
    goto LAB2;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

}

static void work_a_4001119517_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    static char *nl0[] = {&&LAB7, &&LAB7, &&LAB5, &&LAB6, &&LAB7, &&LAB7, &&LAB7, &&LAB7, &&LAB7};

LAB0:    t1 = (t0 + 7248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(180, ng0);

LAB10:    t2 = (t0 + 8112);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB5:    xsi_set_current_line(182, ng0);
    t5 = (t0 + 3912U);
    t6 = *((char **)t5);
    t5 = (t0 + 8928);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB6:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t11 = (15 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t2 = (t3 + t13);
    t5 = (t0 + 8928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB7:    xsi_set_current_line(182, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)2, 8U);
    t5 = (t0 + 8928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB8:    t3 = (t0 + 8112);
    *((int *)t3) = 0;
    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4001119517_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    static char *nl0[] = {&&LAB7, &&LAB7, &&LAB5, &&LAB6, &&LAB7, &&LAB7, &&LAB7, &&LAB7, &&LAB7};

LAB0:    t1 = (t0 + 7496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 5352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(186, ng0);

LAB10:    t2 = (t0 + 8128);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB5:    xsi_set_current_line(188, ng0);
    t5 = (t0 + 4392U);
    t6 = *((char **)t5);
    t5 = (t0 + 8992);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB6:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 4072U);
    t3 = *((char **)t2);
    t2 = (t0 + 8992);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(188, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)2, 8U);
    t5 = (t0 + 8992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB8:    t3 = (t0 + 8128);
    *((int *)t3) = 0;
    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4001119517_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    static char *nl0[] = {&&LAB7, &&LAB7, &&LAB5, &&LAB6, &&LAB7, &&LAB7, &&LAB7, &&LAB7, &&LAB7};

LAB0:    t1 = (t0 + 7744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(192, ng0);

LAB10:    t2 = (t0 + 8144);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB5:    xsi_set_current_line(194, ng0);
    t5 = (t0 + 3592U);
    t6 = *((char **)t5);
    t7 = (7 - 2);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t5 = (t6 + t9);
    t10 = (t0 + 9056);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 3U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB6:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t7 = (7 - 2);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t5 = (t0 + 9056);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB7:    xsi_set_current_line(194, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t3 = t2;
    memset(t3, (unsigned char)2, 3U);
    t5 = (t0 + 9056);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB8:    t3 = (t0 + 8144);
    *((int *)t3) = 0;
    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_4001119517_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4001119517_3212880686_p_0,(void *)work_a_4001119517_3212880686_p_1,(void *)work_a_4001119517_3212880686_p_2,(void *)work_a_4001119517_3212880686_p_3,(void *)work_a_4001119517_3212880686_p_4,(void *)work_a_4001119517_3212880686_p_5};
	xsi_register_didat("work_a_4001119517_3212880686", "isim/Calc_Menu_tb_isim_beh.exe.sim/work/a_4001119517_3212880686.didat");
	xsi_register_executes(pe);
}
