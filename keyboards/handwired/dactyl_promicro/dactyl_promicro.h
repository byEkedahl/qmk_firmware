#pragma once

#include "quantum.h"
#define ___ KC_NO

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif


#define LAYOUT_6x6(\
	L00, L01, L02, L03, L04, L05,                	   R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15,                	   R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25,                	   R20, R21, R22, R23, R24, R25, \
	L30, L31, L32, L33, L34, L35,                	   R30, R31, R32, R33, R34, R35, \
	L40, L41, L42, L43, L44, L45,                	   R40, R41, R42, R43, R44, R45, \
					             L50, L51, L52,       R53, R54, R55, 					             \
					                   L53,           R52, 									               \
					                   L54,           R51                                  \
	)\
	{ \
		{ L00, L01, L02, L03, L04, L05 },	 \
		{ L10, L11, L12, L13, L14, L15 },	 \
		{ L20, L21, L22, L23, L24, L25 },	 \
		{ L30, L31, L32, L33, L34, L35 },	 \
		{ L40, L41, L42, L43, L44, L45 },	 \
		{ L50, L51, L52, L53, L54, KC_NO },  \
\
		{ R00, R01, R02, R03, R04, R05 },    \
		{ R10, R11, R12, R13, R14, R15 },    \
		{ R20, R21, R22, R23, R24, R25 },    \
		{ R30, R31, R32, R33, R34, R35 },    \
		{ R40, R41, R42, R43, R44, R45 },    \
		{ KC_NO, R51, R52, R53, R54, R55 },  \
}
#define LAYOUT_ortho_6x12( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4a, K4b, \
    K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5a, K5b  \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b}, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b}, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b}, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b}, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4a, K4b}, \
    { K50, K51, K52, K53, K54, ___, ___, K57, K58, K59, K5a, K5b} \
}
