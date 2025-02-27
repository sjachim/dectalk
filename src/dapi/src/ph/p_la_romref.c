/* PH Rom file
 * 
 * Copyright Information:
 * 
 *                           Copyright (c)
 *    Copyright � 2002 Fonix Corporation. All rights reserved.
 *    Copyright � 2000-2001 Force Computers, a Solectron Company. All rights reserved.
 *    � Digital Equipment Corporation 1996, 1997, 1998. All rights reserved.
 * 
 *    Restricted Rights: Use, duplication, or disclosure by the U.S.
 *    Government is subject to restrictions as set forth in subparagraph
 *    (c) (1) (ii) of DFARS 252.227-7013, or in FAR 52.227-19, or in FAR
 *    52.227-14 Alt. III, as applicable.
 * 
 * 
 *    This software is proprietary to and embodies the confidential
 *    technology of Fonix Corporation and other parties.
 *    Possession, use, or copying of this software and media is authorized
 *    only pursuant to a valid written license from Fonix or an
 *    authorized sublicensor.
 * 
 * Based on Dennis Klatt's PHRom File Format  Copyright (c) 1988 by Dennis Klatt
 *
 * Compile Type: Compiled from (0/0)
 * Program: PHEdit(2)
 * Author: Kevin Bruckert
 *
 * {{START_COMMENT_BLOCK}}
 * kevinb - Initial Creation
 * bruckert - [0] fixed p back locus and nf2 with Cris
 * bruckert - [0] modified f per chris
 * bruckert - [0] ipi problem with p 
 * bruckert - [0] 
 * bruckert - [0] spanish tuning
 * bruckert - [0] 
 * bruckert - [0] lili
 * bruckert - [0] f3 t locus bring f3 too close to f2 on front vowels 
 * bruckert - [0] fson1 not marked added
 * bruckert - [0] k ang g f1->180
 * bruckert - [0] 
 * kevinb - Initial Creation
 * bruckert - [0] BATS 996 NX FEMALE NO LOCUS
 * bruckert - [958] NX HAD BAD LOCUS
 * bruckert - [0] 
 * {{END_COMMENT_BLOCK}}
 * {{COMMENT_BLOCK 3DDA 6E9B A4F6 0B1F 3B48}}
 *
 * {{0000 2727 319B 1169 0DAB 64FF 5997 0807}}
 */
#ifdef PHEDIT2
short inhdr[100] = {
#else
const short la_inhdr[] = {
#endif
 300, 
 120, 
 130, 
 120, 
 120, 
 115, 
 50, 
 70, 
 140, 
 75, 
 50, 
 75, 
 85, 
 90, 
 100, 
 100, 
 110, 
 120, 
 50, 
 50, 
 55, 
 100, 
 75, 
 90, 
 100, 
 80, 
 90, 
 60, 
 150, 
 75, 
 45, 
 20, 
 75, 
 65, 
 100, 
 70, 
 40, 
 90, 
 120 };

#ifdef PHEDIT2
short mindur[100] = {
#else
const short la_mindur[] = {
#endif
 300, 
 50, 
 55, 
 80, 
 55, 
 60, 
 30, 
 30, 
 70, 
 50, 
 20, 
 50, 
 50, 
 45, 
 60, 
 50, 
 60, 
 60, 
 30, 
 35, 
 30, 
 60, 
 45, 
 80, 
 80, 
 70, 
 75, 
 50, 
 140, 
 35, 
 40, 
 5, 
 60, 
 30, 
 60, 
 60, 
 40, 
 60, 
 60 };

#ifdef PHEDIT2
short burdr[100] = {
#else
const short la_burdr[] = {
#endif
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 10, 
 0, 
 26, 
 16, 
 7, 
 20, 
 15, 
 14, 
 30, 
 75, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0 };

#ifdef PHEDIT2
short f0segtars[100] = {
#else
const short la_f0segtars[] = {
#endif
 30, 
 0, 
 0, 
 0, 
 30, 
 60, 
 -50, 
 30, 
 -50, 
 -50, 
 -60, 
 -30, 
 -50, 
 -50, 
 300, 
 300, 
 300, 
 300, 
 -50, 
 -50, 
 -50, 
 -50, 
 300, 
 -50, 
 300, 
 -50, 
 300, 
 -50, 
 300, 
 -50, 
 -50, 
 -20, 
 -50, 
 -50, 
 -50, 
 -50, 
 0, 
 -50, 
 150 };

#ifdef PHEDIT2
short begtyp[100] = {
#else
const short la_begtyp[] = {
#endif
 4, 
 2, 
 1, 
 1, 
 3, 
 3, 
 3, 
 1, 
 3, 
 4, 
 1, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 2, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 2, 
 4, 
 4, 
 4, 
 4, 
 1, 
 4, 
 4 };

#ifdef PHEDIT2
short endtyp[100] = {
#else
const short la_endtyp[] = {
#endif
 4, 
 2, 
 1, 
 1, 
 3, 
 3, 
 2, 
 1, 
 3, 
 4, 
 1, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 2, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 4, 
 2, 
 4, 
 4, 
 4, 
 4, 
 1, 
 4, 
 4 };

#ifdef PHEDIT2
short place[500] = {
#else
const short la_place[] = {
#endif
 0, 
 0, 
 0, 
 192, 
 0, 
 0, 
 4, 
 196, 
 8, 
 8, 
 4, 
 1, 
 8, 
 4, 
 1, 
 8, 
 16, 
 2, 
 1, 
 2, 
 16, 
 4, 
 1, 
 1, 
 2, 
 2, 
 16, 
 16, 
 4, 
 196, 
 8, 
 32, 
 8, 
 1, 
 16, 
 1, 
 192, 
 1, 
 1 };

#ifdef PHEDIT2
short featb[200] = {
#else
const short la_featb[] = {
#endif
 16, 
 31, 
 31, 
 1055, 
 31, 
 1055, 
 1050, 
 1050, 
 282, 
 794, 
 882, 
 9626, 
 9626, 
 410, 
 288, 
 288, 
 288, 
 288, 
 306, 
 306, 
 16690, 
 2338, 
 2400, 
 18786, 
 2400, 
 2402, 
 2400, 
 2306, 
 2336, 
 290, 
 274, 
 34, 
 290, 
 298, 
 402, 
 274, 
 18, 
 402, 
 288, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
0 };

#ifdef PHEDIT2
short maltar[700] = {
#else
const short la_maltar[] = {
#endif
 -1, 
 -2, 
 430, 
 275, 
 -6, 
 316, 
 320, 
 289, 
 480, 
 377, 
 207, 
 430, 
 430, 
 215, 
 340, 
 290, 
 -1, 
 450, 
 240, 
 238, 
 260, 
 250, 
 250, 
 210, 
 350, 
 238, 
 180, 
 180, 
 475, 
 250, 
 374, 
 -1, 
 240, 
 295, 
 430, 
 220, 
 500, 
 400, 
 300, 
 -1, 
 -12, 
 1884, 
 2216, 
 -16, 
 781, 
 781, 
 2315, 
 1250, 
 1400, 
 2295, 
 1197, 
 1261, 
 1900, 
 1100, 
 2039, 
 -1, 
 2040, 
 1071, 
 1237, 
 1700, 
 1760, 
 1763, 
 1635, 
 1802, 
 1495, 
 1110, 
 1335, 
 1800, 
 2200, 
 1720, 
 -1, 
 1420, 
 610, 
 1600, 
 1150, 
 2250, 
 1400, 
 1500, 
 -1, 
 -22, 
 2504, 
 -26, 
 -30, 
 2314, 
 2314, 
 2900, 
 1711, 
 2558, 
 3050, 
 2327, 
 2298, 
 2990, 
 2080, 
 2817, 
 -1, 
 2780, 
 2270, 
 2400, 
 2350, 
 3000, 
 2516, 
 2500, 
 2488, 
 2246, 
 2249, 
 2390, 
 2700, 
 3050, 
 2229, 
 -1, 
 2600, 
 2250, 
 2100, 
 2080, 
 2850, 
 2500, 
 2500, 
 250, 
 140, 
 95, 
 170, 
 110, 
 90, 
 50, 
 110, 
 200, 
 120, 
 60, 
 180, 
 140, 
 105, 
 300, 
 300, 
 300, 
 300, 
 90, 
 60, 
 140, 
 125, 
 160, 
 110, 
 300, 
 90, 
 200, 
 90, 
 250, 
 80, 
 200, 
 -1, 
 140, 
 50, 
 90, 
 140, 
 120, 
 90, 
 300, 
 250, 
 120, 
 120, 
 120, 
 110, 
 110, 
 80, 
 120, 
 125, 
 150, 
 170, 
 250, 
 350, 
 425, 
 150, 
 150, 
 150, 
 150, 
 160, 
 130, 
 120, 
 175, 
 150, 
 110, 
 150, 
 80, 
 160, 
 120, 
 250, 
 120, 
 60, 
 -1, 
 100, 
 80, 
 250, 
 120, 
 170, 
 250, 
 150, 
 250, 
 170, 
 120, 
 220, 
 170, 
 130, 
 80, 
 240, 
 130, 
 110, 
 250, 
 220, 
 350, 
 450, 
 150, 
 150, 
 150, 
 150, 
 120, 
 240, 
 180, 
 175, 
 180, 
 130, 
 250, 
 240, 
 280, 
 180, 
 250, 
 200, 
 130, 
 -1, 
 300, 
 80, 
 150, 
 120, 
 240, 
 150, 
 150, 
 0, 
 52, 
 54, 
 55, 
 53, 
 54, 
 54, 
 57, 
 50, 
 54, 
 45, 
 54, 
 55, 
 54, 
 0, 
 0, 
 0, 
 0, 
 42, 
 50, 
 35, 
 0, 
 0, 
 0, 
 0, 
 30, 
 0, 
 0, 
 0, 
 54, 
 48, 
 54, 
 45, 
 52, 
 50, 
 54, 
 52, 
 54, 
 0 };

#ifdef PHEDIT2
short femtar[700] = {
#else
const short la_femtar[] = {
#endif
 -1, 
 908, 
 466, 
 220, 
 565, 
 269, 
 295, 
 220, 
 480, 
 262, 
 330, 
 221, 
 460, 
 365, 
 225, 
 290, 
 -1, 
 450, 
 240, 
 338, 
 250, 
 250, 
 250, 
 210, 
 350, 
 238, 
 470, 
 200, 
 475, 
 250, 
 480, 
 -1, 
 240, 
 295, 
 440, 
 220, 
 500, 
 400, 
 300, 
 -1, 
 1561, 
 2498, 
 2596, 
 1070, 
 841, 
 610, 
 2537, 
 1743, 
 1542, 
 2200, 
 1444, 
 1600, 
 1900, 
 800, 
 2150, 
 -1, 
 2040, 
 1212, 
 1737, 
 1970, 
 1760, 
 1800, 
 1735, 
 2182, 
 1495, 
 2336, 
 890, 
 2100, 
 2200, 
 1450, 
 -1, 
 1520, 
 610, 
 1100, 
 1150, 
 2250, 
 1400, 
 1500, 
 -1, 
 2703, 
 2942, 
 3210, 
 2841, 
 2575, 
 2250, 
 2955, 
 2550, 
 2710, 
 2815, 
 2457, 
 2800, 
 2630, 
 2715, 
 3172, 
 -1, 
 2780, 
 2610, 
 2800, 
 2782, 
 3000, 
 2716, 
 2150, 
 2888, 
 2789, 
 2400, 
 2817, 
 2700, 
 3050, 
 2550, 
 -1, 
 2800, 
 2250, 
 2400, 
 2080, 
 2850, 
 2500, 
 2500, 
 250, 
 140, 
 110, 
 110, 
 120, 
 120, 
 50, 
 110, 
 200, 
 120, 
 60, 
 120, 
 120, 
 105, 
 300, 
 300, 
 300, 
 300, 
 80, 
 130, 
 140, 
 125, 
 300, 
 100, 
 300, 
 60, 
 200, 
 90, 
 250, 
 80, 
 200, 
 -1, 
 140, 
 50, 
 90, 
 140, 
 120, 
 90, 
 300, 
 250, 
 140, 
 130, 
 270, 
 140, 
 120, 
 80, 
 110, 
 60, 
 150, 
 200, 
 150, 
 350, 
 425, 
 150, 
 150, 
 150, 
 150, 
 160, 
 130, 
 120, 
 175, 
 150, 
 80, 
 150, 
 130, 
 160, 
 120, 
 250, 
 120, 
 60, 
 -1, 
 100, 
 80, 
 250, 
 120, 
 170, 
 250, 
 150, 
 250, 
 120, 
 150, 
 360, 
 150, 
 160, 
 80, 
 150, 
 130, 
 120, 
 400, 
 150, 
 350, 
 450, 
 150, 
 150, 
 150, 
 150, 
 120, 
 240, 
 180, 
 175, 
 180, 
 130, 
 250, 
 240, 
 280, 
 180, 
 250, 
 200, 
 130, 
 -1, 
 300, 
 80, 
 150, 
 120, 
 240, 
 150, 
 150, 
 0, 
 50, 
 53, 
 52, 
 52, 
 50, 
 54, 
 54, 
 48, 
 54, 
 45, 
 43, 
 45, 
 54, 
 0, 
 0, 
 0, 
 0, 
 40, 
 50, 
 45, 
 0, 
 0, 
 0, 
 0, 
 30, 
 0, 
 0, 
 0, 
 54, 
 48, 
 53, 
 45, 
 52, 
 50, 
 54, 
 51, 
 52, 
 0 };

#ifdef PHEDIT2
short maldip[3500] = {
#else
const short la_maldip[] = {
#endif
 0, 
 0, 
 795, 
 10, 
 812, 
 -1, 
 511, 
 30, 
 511, 
 60, 
 611, 
 -1, 
 1404, 
 10, 
 1408, 
 -1, 
 995, 
 30, 
 960, 
 60, 
 916, 
 -1, 
 2409, 
 10, 
 2406, 
 -1, 
 2650, 
 10, 
 2765, 
 -1, 
 2411, 
 30, 
 2411, 
 60, 
 2411, 
 -1 };

#ifdef PHEDIT2
short femdip[3500] = {
#else
const short la_femdip[] = {
#endif
 0, 
 0 };

#ifdef PHEDIT2
short ptram[100] = {
#else
const short la_ptram[] = {
#endif
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 1, 
 0, 
 31, 
 0, 
 0, 
 0, 
 61, 
 91, 
 0, 
 121, 
 151, 
 181, 
 211, 
 241, 
 271, 
 301, 
 331, 
 361, 
 391, 
 421, 
 451, 
 0, 
 481, 
 0, 
 511, 
 0, 
 0, 
 541, 
 0, 
 0, 
 571 };

#ifdef PHEDIT2
short malamp[7000] = {
#else
const short la_malamp[] = {
#endif
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 50, 
 50, 
 0, 
 0, 
 0, 
 0, 
 0, 
 50, 
 0, 
 0, 
 0, 
 0, 
 0, 
 50, 
 0, 
 0, 
 0, 
 0, 
 0, 
 43, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 57, 
 0, 
 0, 
 0, 
 0, 
 0, 
 52, 
 0, 
 0, 
 0, 
 0, 
 0, 
 57, 
 0, 
 0, 
 0, 
 0, 
 0, 
 57, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 44, 
 47, 
 0, 
 0, 
 0, 
 0, 
 44, 
 47, 
 0, 
 0, 
 0, 
 0, 
 44, 
 45, 
 0, 
 0, 
 0, 
 0, 
 44, 
 45, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 10, 
 0, 
 0, 
 0, 
 0, 
 0, 
 10, 
 0, 
 0, 
 0, 
 0, 
 0, 
 14, 
 0, 
 0, 
 0, 
 0, 
 0, 
 10, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 10, 
 12, 
 13, 
 0, 
 0, 
 0, 
 10, 
 14, 
 12, 
 0, 
 0, 
 0, 
 10, 
 14, 
 12, 
 0, 
 0, 
 0, 
 10, 
 14, 
 12, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 45, 
 61, 
 0, 
 44, 
 0, 
 0, 
 45, 
 61, 
 0, 
 44, 
 0, 
 0, 
 45, 
 56, 
 0, 
 38, 
 0, 
 0, 
 45, 
 56, 
 0, 
 38, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 10, 
 10, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 22, 
 38, 
 44, 
 0, 
 43, 
 0, 
 32, 
 40, 
 44, 
 0, 
 43, 
 0, 
 22, 
 36, 
 44, 
 0, 
 43, 
 0, 
 22, 
 36, 
 44, 
 0, 
 43, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 38, 
 0, 
 30, 
 0, 
 0, 
 39, 
 0, 
 0, 
 42, 
 0, 
 0, 
 38, 
 0, 
 23, 
 33, 
 0, 
 0, 
 38, 
 0, 
 23, 
 33, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 39, 
 0, 
 0, 
 52, 
 0, 
 0, 
 29, 
 0, 
 0, 
 52, 
 0, 
 0, 
 39, 
 0, 
 0, 
 46, 
 0, 
 0, 
 39, 
 0, 
 0, 
 46, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 45, 
 0, 
 0, 
 0, 
 0, 
 0, 
 45, 
 0, 
 0, 
 0, 
 0, 
 0, 
 43, 
 0, 
 0, 
 0, 
 0, 
 0, 
 43, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 47, 
 0, 
 0, 
 0, 
 0, 
 0, 
 47, 
 0, 
 0, 
 0, 
 0, 
 0, 
 44, 
 0, 
 0, 
 0, 
 0, 
 0, 
 44, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0 };

#ifdef PHEDIT2
short femamp[7000] = {
#else
const short la_femamp[] = {
#endif
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 20, 
 20, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 0, 
 30, 
 30, 
 0, 
 30, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 50, 
 0, 
 0, 
 0, 
 0, 
 0, 
 50, 
 0, 
 0, 
 0, 
 0, 
 0, 
 50, 
 0, 
 0, 
 0, 
 0, 
 0, 
 43, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 20, 
 20, 
 0, 
 0, 
 52, 
 0, 
 0, 
 0, 
 0, 
 0, 
 52, 
 0, 
 0, 
 0, 
 0, 
 0, 
 54, 
 0, 
 0, 
 0, 
 0, 
 0, 
 54, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 44, 
 47, 
 0, 
 0, 
 0, 
 0, 
 44, 
 47, 
 0, 
 0, 
 0, 
 0, 
 44, 
 45, 
 0, 
 0, 
 0, 
 0, 
 44, 
 45, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 10, 
 0, 
 0, 
 0, 
 0, 
 0, 
 10, 
 0, 
 0, 
 0, 
 0, 
 0, 
 14, 
 0, 
 0, 
 0, 
 0, 
 0, 
 10, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 10, 
 12, 
 13, 
 0, 
 0, 
 0, 
 10, 
 14, 
 12, 
 0, 
 0, 
 0, 
 10, 
 14, 
 12, 
 0, 
 0, 
 0, 
 10, 
 14, 
 12, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 0, 
 30, 
 30, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 45, 
 61, 
 0, 
 44, 
 0, 
 0, 
 45, 
 61, 
 0, 
 44, 
 0, 
 0, 
 45, 
 56, 
 0, 
 38, 
 0, 
 0, 
 45, 
 56, 
 0, 
 38, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 25, 
 25, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 10, 
 10, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 22, 
 38, 
 44, 
 0, 
 43, 
 0, 
 32, 
 40, 
 44, 
 0, 
 43, 
 0, 
 22, 
 36, 
 44, 
 0, 
 43, 
 0, 
 22, 
 36, 
 44, 
 0, 
 43, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 32, 
 40, 
 30, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 40, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 39, 
 0, 
 0, 
 52, 
 0, 
 0, 
 29, 
 0, 
 0, 
 52, 
 0, 
 0, 
 39, 
 0, 
 0, 
 46, 
 0, 
 0, 
 39, 
 0, 
 0, 
 46, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 5, 
 2, 
 0, 
 0, 
 0, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 0, 
 0, 
 0, 
 0, 
 56, 
 0, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 45, 
 0, 
 0, 
 0, 
 0, 
 0, 
 45, 
 0, 
 0, 
 0, 
 0, 
 0, 
 43, 
 0, 
 0, 
 0, 
 0, 
 0, 
 43, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0, 
 0, 
 0, 
 0, 
 0, 
 47, 
 0, 
 0, 
 0, 
 0, 
 0, 
 47, 
 0, 
 0, 
 0, 
 0, 
 0, 
 44, 
 0, 
 0, 
 0, 
 0, 
 0, 
 44, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 -1, 
 0 };

#ifdef PHEDIT2
short plocu[500] = {
#else
const short la_plocu[] = {
#endif
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 1, 
 10, 
 19, 
 28, 
 37, 
 0, 
 46, 
 55, 
 64, 
 73, 
 82, 
 91, 
 100, 
 109, 
 118, 
 127, 
 136, 
 145, 
 154, 
 0, 
 0, 
 163, 
 0, 
 172, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 181, 
 190, 
 199, 
 208, 
 217, 
 0, 
 226, 
 235, 
 244, 
 253, 
 262, 
 271, 
 280, 
 289, 
 298, 
 307, 
 316, 
 325, 
 334, 
 0, 
 0, 
 343, 
 0, 
 352, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 361, 
 370, 
 379, 
 388, 
 397, 
 0, 
 406, 
 415, 
 424, 
 433, 
 442, 
 451, 
 460, 
 469, 
 478, 
 487, 
 496, 
 505, 
 514, 
 0, 
 0, 
 523, 
 0, 
 532, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 541, 
 550, 
 559, 
 568, 
 577, 
 0, 
 586, 
 595, 
 604, 
 613, 
 622, 
 631, 
 640, 
 649, 
 658, 
 667, 
 676, 
 685, 
 694, 
 0, 
 0, 
 703, 
 0, 
 712, 
 0, 
 0, 
 0, 
 0 };

#ifdef PHEDIT2
short maleloc[3500] = {
#else
const short la_maleloc[] = {
#endif
 0, 
 238, 
 10, 
 30, 
 1200, 
 15, 
 35, 
 2450, 
 10, 
 30, 
 450, 
 20, 
 35, 
 1350, 
 35, 
 -1, 
 2600, 
 40, 
 45, 
 195, 
 10, 
 30, 
 2039, 
 50, 
 60, 
 2735, 
 30, 
 30, 
 374, 
 10, 
 30, 
 1, 
 92, 
 35, 
 2080, 
 35, 
 30, 
 310, 
 40, 
 40, 
 1200, 
 40, 
 50, 
 2550, 
 0, 
 70, 
 423, 
 10, 
 45, 
 1450, 
 10, 
 45, 
 2476, 
 10, 
 45, 
 220, 
 30, 
 30, 
 1071, 
 50, 
 35, 
 2170, 
 50, 
 30, 
 339, 
 10, 
 42, 
 1712, 
 10, 
 62, 
 2383, 
 10, 
 60, 
 240, 
 10, 
 45, 
 1866, 
 20, 
 50, 
 2340, 
 10, 
 50, 
 288, 
 10, 
 60, 
 2007, 
 10, 
 50, 
 2944, 
 10, 
 50, 
 350, 
 55, 
 20, 
 950, 
 56, 
 30, 
 2200, 
 25, 
 45, 
 200, 
 35, 
 20, 
 1200, 
 70, 
 20, 
 2100, 
 50, 
 35, 
 320, 
 43, 
 40, 
 1700, 
 40, 
 95, 
 2500, 
 50, 
 95, 
 336, 
 80, 
 50, 
 1869, 
 10, 
 52, 
 2754, 
 80, 
 42, 
 320, 
 33, 
 45, 
 1900, 
 20, 
 50, 
 3000, 
 117, 
 50, 
 250, 
 33, 
 45, 
 2500, 
 20, 
 52, 
 2800, 
 20, 
 20, 
 318, 
 10, 
 50, 
 1825, 
 25, 
 60, 
 2775, 
 19, 
 70, 
 303, 
 10, 
 35, 
 2048, 
 10, 
 30, 
 2934, 
 10, 
 30, 
 320, 
 54, 
 55, 
 1750, 
 25, 
 70, 
 2776, 
 19, 
 70, 
 440, 
 25, 
 40, 
 2200, 
 15, 
 60, 
 2600, 
 80, 
 60, 
 450, 
 20, 
 30, 
 800, 
 10, 
 30, 
 1550, 
 80, 
 25, 
 450, 
 20, 
 30, 
 1420, 
 25, 
 75, 
 2632, 
 30, 
 60, 
 244, 
 10, 
 30, 
 2039, 
 50, 
 60, 
 2665, 
 30, 
 40, 
 320, 
 60, 
 30, 
 1, 
 91, 
 35, 
 2044, 
 65, 
 40, 
 310, 
 40, 
 40, 
 1271, 
 40, 
 50, 
 2610, 
 0, 
 60, 
 416, 
 10, 
 50, 
 1419, 
 10, 
 50, 
 2491, 
 10, 
 50, 
 220, 
 30, 
 30, 
 1071, 
 50, 
 50, 
 2270, 
 50, 
 50, 
 404, 
 10, 
 40, 
 1600, 
 10, 
 35, 
 2600, 
 10, 
 50, 
 240, 
 10, 
 50, 
 1700, 
 30, 
 50, 
 2223, 
 10, 
 70, 
 409, 
 10, 
 60, 
 1756, 
 10, 
 50, 
 2745, 
 10, 
 50, 
 350, 
 45, 
 25, 
 920, 
 46, 
 30, 
 2250, 
 45, 
 30, 
 200, 
 35, 
 20, 
 720, 
 36, 
 50, 
 1500, 
 40, 
 45, 
 320, 
 30, 
 45, 
 1700, 
 40, 
 85, 
 2600, 
 10, 
 50, 
 483, 
 10, 
 40, 
 1451, 
 10, 
 50, 
 2513, 
 50, 
 50, 
 320, 
 33, 
 45, 
 1990, 
 20, 
 50, 
 2150, 
 0, 
 90, 
 300, 
 33, 
 50, 
 1782, 
 16, 
 60, 
 2100, 
 10, 
 65, 
 320, 
 10, 
 50, 
 1600, 
 10, 
 50, 
 2450, 
 10, 
 70, 
 382, 
 10, 
 70, 
 2178, 
 10, 
 80, 
 2921, 
 10, 
 80, 
 310, 
 40, 
 40, 
 1690, 
 15, 
 60, 
 2550, 
 10, 
 70, 
 440, 
 25, 
 40, 
 1800, 
 20, 
 70, 
 2150, 
 20, 
 70, 
 237, 
 10, 
 30, 
 948, 
 10, 
 20, 
 2220, 
 10, 
 25, 
 450, 
 20, 
 30, 
 1550, 
 25, 
 95, 
 2320, 
 30, 
 95, 
 181, 
 10, 
 30, 
 1677, 
 50, 
 60, 
 2520, 
 30, 
 30, 
 320, 
 60, 
 30, 
 1, 
 91, 
 25, 
 2180, 
 10, 
 40, 
 310, 
 40, 
 40, 
 1320, 
 15, 
 60, 
 2484, 
 0, 
 60, 
 439, 
 10, 
 50, 
 1198, 
 10, 
 50, 
 2541, 
 10, 
 50, 
 220, 
 30, 
 30, 
 1070, 
 50, 
 30, 
 2270, 
 50, 
 30, 
 397, 
 10, 
 40, 
 1261, 
 10, 
 55, 
 2536, 
 10, 
 50, 
 240, 
 10, 
 50, 
 869, 
 90, 
 50, 
 2163, 
 10, 
 70, 
 313, 
 10, 
 60, 
 1562, 
 10, 
 50, 
 2745, 
 10, 
 50, 
 350, 
 45, 
 30, 
 888, 
 46, 
 30, 
 2198, 
 40, 
 30, 
 200, 
 45, 
 25, 
 720, 
 36, 
 35, 
 1550, 
 40, 
 35, 
 320, 
 30, 
 45, 
 1800, 
 66, 
 35, 
 2650, 
 43, 
 35, 
 426, 
 10, 
 45, 
 1495, 
 10, 
 60, 
 2238, 
 60, 
 50, 
 320, 
 33, 
 40, 
 1600, 
 42, 
 65, 
 2050, 
 15, 
 70, 
 290, 
 45, 
 40, 
 1600, 
 42, 
 65, 
 1923, 
 15, 
 80, 
 320, 
 54, 
 55, 
 1678, 
 10, 
 90, 
 2350, 
 10, 
 80, 
 338, 
 10, 
 35, 
 1417, 
 10, 
 30, 
 2685, 
 10, 
 30, 
 310, 
 40, 
 40, 
 1198, 
 40, 
 50, 
 2541, 
 0, 
 70, 
 440, 
 25, 
 40, 
 1700, 
 42, 
 70, 
 1920, 
 25, 
 70, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0 };

#ifdef PHEDIT2
short femloc[3500] = {
#else
const short la_femloc[] = {
#endif
 0, 
 238, 
 10, 
 30, 
 1100, 
 10, 
 20, 
 2758, 
 10, 
 30, 
 450, 
 24, 
 35, 
 2100, 
 60, 
 35, 
 3200, 
 35, 
 45, 
 195, 
 10, 
 30, 
 2039, 
 50, 
 60, 
 2735, 
 50, 
 30, 
 362, 
 10, 
 60, 
 2085, 
 10, 
 60, 
 2776, 
 10, 
 60, 
 353, 
 10, 
 60, 
 1905, 
 30, 
 60, 
 2740, 
 90, 
 60, 
 505, 
 10, 
 45, 
 1668, 
 10, 
 45, 
 3080, 
 10, 
 45, 
 220, 
 30, 
 30, 
 1200, 
 50, 
 30, 
 2300, 
 50, 
 30, 
 454, 
 10, 
 35, 
 2378, 
 10, 
 42, 
 2972, 
 10, 
 60, 
 349, 
 10, 
 45, 
 2577, 
 10, 
 50, 
 2844, 
 10, 
 50, 
 288, 
 10, 
 60, 
 2007, 
 10, 
 50, 
 2944, 
 10, 
 50, 
 594, 
 10, 
 30, 
 2222, 
 10, 
 25, 
 2978, 
 10, 
 25, 
 241, 
 30, 
 30, 
 1500, 
 15, 
 25, 
 2412, 
 15, 
 25, 
 447, 
 10, 
 45, 
 2375, 
 10, 
 45, 
 3065, 
 10, 
 45, 
 492, 
 10, 
 50, 
 2515, 
 10, 
 52, 
 3084, 
 10, 
 52, 
 390, 
 10, 
 45, 
 2592, 
 10, 
 50, 
 3180, 
 10, 
 60, 
 220, 
 10, 
 50, 
 2700, 
 10, 
 52, 
 2835, 
 10, 
 52, 
 318, 
 10, 
 50, 
 2325, 
 10, 
 50, 
 2775, 
 10, 
 50, 
 303, 
 10, 
 35, 
 2048, 
 10, 
 30, 
 2934, 
 10, 
 30, 
 505, 
 10, 
 45, 
 1668, 
 10, 
 45, 
 3080, 
 10, 
 45, 
 440, 
 25, 
 40, 
 1200, 
 15, 
 60, 
 2500, 
 8, 
 60, 
 247, 
 10, 
 30, 
 1124, 
 10, 
 20, 
 2743, 
 10, 
 40, 
 450, 
 22, 
 30, 
 2200, 
 65, 
 75, 
 3140, 
 30, 
 60, 
 244, 
 10, 
 30, 
 2039, 
 50, 
 60, 
 2665, 
 30, 
 40, 
 725, 
 10, 
 60, 
 1521, 
 10, 
 60, 
 2644, 
 10, 
 60, 
 605, 
 10, 
 60, 
 1271, 
 10, 
 60, 
 2610, 
 10, 
 60, 
 767, 
 10, 
 30, 
 1652, 
 10, 
 50, 
 2891, 
 10, 
 50, 
 220, 
 30, 
 30, 
 1365, 
 50, 
 50, 
 2283, 
 50, 
 50, 
 626, 
 10, 
 40, 
 1813, 
 10, 
 35, 
 2981, 
 10, 
 50, 
 518, 
 10, 
 50, 
 1901, 
 10, 
 50, 
 2817, 
 10, 
 70, 
 409, 
 10, 
 60, 
 1756, 
 10, 
 50, 
 2745, 
 10, 
 50, 
 679, 
 10, 
 35, 
 1343, 
 10, 
 25, 
 2861, 
 10, 
 30, 
 240, 
 30, 
 30, 
 1065, 
 30, 
 45, 
 2506, 
 20, 
 45, 
 767, 
 10, 
 30, 
 1652, 
 10, 
 50, 
 2891, 
 10, 
 50, 
 594, 
 10, 
 40, 
 2141, 
 10, 
 50, 
 3059, 
 10, 
 50, 
 400, 
 10, 
 50, 
 2074, 
 10, 
 50, 
 2588, 
 10, 
 50, 
 220, 
 10, 
 55, 
 1900, 
 10, 
 55, 
 2200, 
 10, 
 55, 
 700, 
 10, 
 50, 
 1900, 
 10, 
 50, 
 2650, 
 10, 
 50, 
 382, 
 10, 
 70, 
 2178, 
 10, 
 80, 
 2921, 
 10, 
 80, 
 767, 
 10, 
 30, 
 1652, 
 10, 
 50, 
 2891, 
 10, 
 50, 
 440, 
 25, 
 40, 
 1200, 
 20, 
 70, 
 2200, 
 20, 
 70, 
 234, 
 10, 
 50, 
 853, 
 10, 
 20, 
 2374, 
 10, 
 25, 
 450, 
 25, 
 30, 
 2160, 
 65, 
 80, 
 2800, 
 30, 
 80, 
 181, 
 10, 
 30, 
 2039, 
 50, 
 60, 
 2520, 
 30, 
 30, 
 390, 
 10, 
 60, 
 1096, 
 10, 
 60, 
 2723, 
 10, 
 60, 
 402, 
 10, 
 60, 
 1161, 
 10, 
 60, 
 2484, 
 10, 
 60, 
 496, 
 10, 
 50, 
 1672, 
 10, 
 50, 
 2858, 
 10, 
 50, 
 220, 
 30, 
 30, 
 1200, 
 50, 
 30, 
 2255, 
 50, 
 30, 
 458, 
 10, 
 40, 
 1687, 
 10, 
 55, 
 2856, 
 10, 
 50, 
 425, 
 10, 
 50, 
 1415, 
 10, 
 50, 
 2791, 
 10, 
 70, 
 313, 
 10, 
 60, 
 1562, 
 10, 
 50, 
 2745, 
 10, 
 50, 
 443, 
 10, 
 30, 
 962, 
 10, 
 40, 
 2704, 
 10, 
 30, 
 240, 
 15, 
 30, 
 708, 
 15, 
 30, 
 2100, 
 20, 
 25, 
 496, 
 10, 
 50, 
 1672, 
 10, 
 50, 
 2858, 
 10, 
 50, 
 500, 
 10, 
 45, 
 1615, 
 10, 
 47, 
 2818, 
 10, 
 50, 
 498, 
 10, 
 45, 
 1184, 
 10, 
 50, 
 2632, 
 10, 
 70, 
 200, 
 30, 
 50, 
 1100, 
 20, 
 30, 
 2400, 
 10, 
 40, 
 386, 
 10, 
 50, 
 1328, 
 10, 
 50, 
 2441, 
 10, 
 50, 
 338, 
 10, 
 35, 
 1417, 
 10, 
 30, 
 2685, 
 10, 
 30, 
 496, 
 10, 
 50, 
 1672, 
 10, 
 50, 
 2858, 
 10, 
 50, 
 440, 
 25, 
 40, 
 1200, 
 22, 
 70, 
 2100, 
 25, 
 70, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0, 
 0 };

#ifdef PHEDIT2
short f0glstp[8] = {
#else
const short la_f0glstp[8] = {
#endif
 -600,  -450,  -320,  -210,  -120,  -50 };

#ifdef PHEDIT2
short f0_phrase_position[8] = {
#else
const short la_f0_phrase_position[] = {
#endif
 300,  275,  200,  175,  150,  0,  0,  0 };

#ifdef PHEDIT2
short f0_stress_level[8] = {
#else
const short la_f0_stress_level[] = {
#endif
 0,  71,  41,  261,  0,  0,  0,  0 };

/* {{PHROMDUMP2E9420B3}} */
