#include QMK_KEYBOARD_H
extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _DEMO 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap 0: _QWERTY
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | =/L0 | 1/L1 | 2/L2 |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |; / L2|'/Cmd |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|Z/Ctrl|   X  |   C  |   V  |   B  |                    |   N  |   M  |   ,  |   .  |//Ctrl|RShift|
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |Debug |  '"  |AltShf| Left | Right|                                  |  Up  | Down |   [  |   ]  | ~L1  |
 * `----------------------------------'                                  `----------------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      | LGui | LAlt |  | RAlt | LGui |
 *                               ,------|------|------|  |------+------+------.
 *                               |      |      | Home |  | PgUp |      |      |
 *                               |Back  |Space |------|  |------|  Tab |Enter |
 *                               |Space |      | End  |  | PgDn |      |      |
 *                               `--------------------'  `--------------------'
 */


[_QWERTY] = LAYOUT_6x6(
	LT(0,KC_EQL),	LT(1,KC_1), LT(2,KC_2)    ,		KC_3	,     KC_4     , KC_5  ,							KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
		KC_TAB		, 	KC_Q		,		KC_W		    ,		KC_E	,     KC_R     , KC_T  ,							KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
		KC_CAPS		,		KC_A		,		KC_S		    ,		KC_D	,		  KC_F     , KC_G  ,							KC_H   , KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
		KC_LSFT		,		KC_Z		,		KC_X		    ,		KC_C	,		  KC_V     , KC_B  ,							KC_N   , KC_M, KC_COMM, KC_DOT, KC_MINS, KC_RSFT,
		DEBUG			,	KC_COMM		,		KC_GRV		  ,	KC_LEFT	,   KC_RGHT    ,KC_BSPC,		          KC_SPC , KC_UP, KC_DOWN, KC_QUOT, KC_RBRC, KC_MSTP,
    KC_DEL    ,  KC_END   ,LCTL_T(KC_HOME), KC_LALT	,LGUI_T(KC_ESC),				              RGUI_T(KC__MUTE), KC_RALT, KC_PGUP, KC_PGDN, KC_ENT),


[_LOWER] = LAYOUT_6x6(
	TO(0)		,		TO(1)		,		TO(2)		,		KC_NO		,		KC_NO		,		KC_NO,					KC_NO		,	KC_NO	,	KC_NO	,	KC_NO	,		KC_NO	,	KC_NO,
	KC_TAB	,		KC_NO		,		KC_NO		,		KC_NO		,		KC_NO		,		KC_NO,					KC_NO		,	KC_P1	,	KC_P2	,	KC_P3	,	KC_PSLS	,	KC_NO,
	KC_NO		,		KC_LEFT	,	KC_RGHT		,		KC_UP		,		KC_DOWN	,		KC_NO,					KC_NO		,	KC_P4	,	KC_P5	,	KC_P6	,	KC_PAST	,	KC_NO,
	KC_NO		,		KC_NO		,		KC_NO		,		KC_NO		,		KC_NO		,		KC_NO,					KC_NO		,	KC_P7	,	KC_P8	,	KC_P9	,	KC_PCMM	,	KC_NO,
	KC_NO		,		KC_NO		,		KC_NO		,		KC_NO		,		KC_NO		, LGUI(KC_NO),			KC_PPLS	,	KC_P0	,	KC_PDOT	,	KC_PEQL	,	KC_NO	,	KC_RALT,
							KC_LALT	, KC_MRWD		,	KC_MSTP		, KC_MPLY		, KC_MFFD,					RGUI_T(KC_NO), KC__VOLUP, KC__VOLDOWN, KC_ENT, KC_NO),

[_RAISE] = LAYOUT_6x6(TO(0), TO(1), TO(2), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AMPR, KC_LCBR, KC_LT, KC_GT, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_SPC),


	  [_DEMO] = LAYOUT_6x6(
	     KC_ESC  ,  KC_1  , KC_2  , KC_3  ,  KC_4  , KC_5  ,      KC_6  , KC_7   , KC_8   , KC_9   , KC_0  ,KC_BSPC,
	     KC_TAB  ,  KC_Q  , KC_W  , KC_E  ,  KC_R  , KC_T  ,      KC_Y  , KC_U   , KC_I   , KC_O   , KC_P  ,KC_MINS,
	     KC_LSFT ,  KC_A  , KC_S  , KC_D  ,  KC_F  , KC_G  ,      KC_H  , KC_J   , KC_K   , KC_L   ,KC_SCLN,KC_QUOT,
	     KC_LCTL ,  KC_Z  , KC_X  , KC_C  ,  KC_V  , KC_B  ,      KC_N  , KC_M   ,KC_COMM , KC_DOT ,KC_SLSH,KC_BSLASH,
	     KC_PLUS , KC_LEFT,KC_UP  ,KC_DOWN, KC_RGHT, RAISE ,      LOWER , KC_HOME, KC_PGUP, KC_PGDN,KC_END ,KC_EQL,
	               _______,KC_LALT,KC_PSCR, KC_LGUI, KC_SPC,      KC_ENT,KC_GRAVE, KC_AT  ,KC_PSCR ,_______

	  ),


};
