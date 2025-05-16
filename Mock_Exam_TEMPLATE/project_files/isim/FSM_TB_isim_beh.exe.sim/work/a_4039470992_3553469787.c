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
static const char *ng0 = "/home/Mads/MyFPGAProject/Mock_Exam_TEMPLATE/project_files/FSM_TB.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4039470992_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    if ((unsigned char)1 != 0)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(40, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:;
LAB8:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(42, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_4039470992_3553469787_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t3 = (5 * 1000LL);
    t2 = (t0 + 2720);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB10:    t2 = (t0 + 3232);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 3232);
    *((int *)t6) = 0;
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3456);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(57, ng0);

LAB14:    t2 = (t0 + 3248);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t4 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t6 = (t0 + 3248);
    *((int *)t6) = 0;
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3456);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5566);
    t6 = (t0 + 3520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(62, ng0);

LAB18:    t2 = (t0 + 3264);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t4 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t6 = (t0 + 3264);
    *((int *)t6) = 0;
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5568);
    t6 = (t0 + 3520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(66, ng0);

LAB22:    t2 = (t0 + 3280);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t4 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t6 = (t0 + 3280);
    *((int *)t6) = 0;
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5570);
    t6 = (t0 + 3520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(70, ng0);

LAB26:    t2 = (t0 + 3296);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t4 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    t6 = (t0 + 3296);
    *((int *)t6) = 0;
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5572);
    t6 = (t0 + 3520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(74, ng0);

LAB30:    t2 = (t0 + 3312);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t4 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t6 = (t0 + 3312);
    *((int *)t6) = 0;
    xsi_set_current_line(76, ng0);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t4 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t5 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    goto LAB2;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

}


extern void work_a_4039470992_3553469787_init()
{
	static char *pe[] = {(void *)work_a_4039470992_3553469787_p_0,(void *)work_a_4039470992_3553469787_p_1};
	xsi_register_didat("work_a_4039470992_3553469787", "isim/FSM_TB_isim_beh.exe.sim/work/a_4039470992_3553469787.didat");
	xsi_register_executes(pe);
}
