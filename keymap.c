#include QMK_KEYBOARD_H

// ==========================================================
// 1. 最高階按鍵攔截引擎 (完美解決 Windows Shift 殘留干擾)
// ==========================================================
#define KO_SHIFT(trigger, replacement) \
    ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, trigger, replacement, ~0, 0)

#define KO_BASE(trigger, replacement) \
    ko_make_with_layers_and_negmods(0, trigger, replacement, ~0, MOD_MASK_SHIFT)

// --- 第一區：數字列 (1~0) ---
const key_override_t over_1 = KO_SHIFT(KC_1, KC_PIPE);
const key_override_t over_2 = KO_SHIFT(KC_2, KC_EQL);
const key_override_t over_3 = KO_SHIFT(KC_3, KC_TILD);
const key_override_t over_4 = KO_SHIFT(KC_4, KC_PLUS);
const key_override_t over_5 = KO_SHIFT(KC_5, KC_LT);
const key_override_t over_6 = KO_SHIFT(KC_6, KC_GT);
const key_override_t over_7 = KO_SHIFT(KC_7, KC_CIRC);
const key_override_t over_8 = KO_SHIFT(KC_8, KC_AMPR);
const key_override_t over_9 = KO_SHIFT(KC_9, KC_PERC);
const key_override_t over_0 = KO_SHIFT(KC_0, KC_ASTR);

// --- 第二區：標準標點符號 ---
const key_override_t over_quot = KO_SHIFT(KC_QUOT, KC_LPRN); 
const key_override_t over_slsh = KO_SHIFT(KC_SLSH, KC_BSLS); 
const key_override_t over_comm = KO_SHIFT(KC_COMM, KC_SCLN); 
const key_override_t over_dot  = KO_SHIFT(KC_DOT,  KC_COLN); 
const key_override_t over_lbrc = KO_SHIFT(KC_LBRC, KC_LCBR); 
const key_override_t over_rbrc = KO_SHIFT(KC_RBRC, KC_RCBR); 

// --- 第三區：複雜符號 (使用 F13~F17 幽靈鍵安全轉譯) ---
const key_override_t over_f13_b = KO_BASE(KC_F13, KC_AT);    
const key_override_t over_f13_s = KO_SHIFT(KC_F13, KC_GRV);  

const key_override_t over_f14_b = KO_BASE(KC_F14, KC_HASH);  
const key_override_t over_f14_s = KO_SHIFT(KC_F14, KC_DLR);  

const key_override_t over_f15_b = KO_BASE(KC_F15, KC_DQUO);  
const key_override_t over_f15_s = KO_SHIFT(KC_F15, KC_RPRN); 

const key_override_t over_f16_b = KO_BASE(KC_F16, KC_UNDS);  
const key_override_t over_f16_s = KO_SHIFT(KC_F16, KC_MINS); 

const key_override_t over_f17_b = KO_BASE(KC_F17, KC_QUES);  
const key_override_t over_f17_s = KO_SHIFT(KC_F17, KC_EXLM); 

// 註冊所有攔截規則
const key_override_t *key_overrides[] = {
    &over_1, &over_2, &over_3, &over_4, &over_5,
    &over_6, &over_7, &over_8, &over_9, &over_0,
    &over_quot, &over_slsh, &over_comm, &over_dot, &over_lbrc, &over_rbrc,
    &over_f13_b, &over_f13_s,
    &over_f14_b, &over_f14_s,
    &over_f15_b, &over_f15_s,
    &over_f16_b, &over_f16_s,
    &over_f17_b, &over_f17_s,
    NULL 
};

// ==========================================================
// 2. 鍵盤佈局矩陣
// ==========================================================
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  // [0] Base Layer (您的專屬 Engram 2.0 終極版)
  [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_CAPS,
        KC_F13,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F14,  KC_LGUI, KC_BSPC,
        KC_TAB,  KC_B,    KC_Y,    KC_O,    KC_U,    KC_QUOT, KC_F15,  KC_L,    KC_D,    KC_W,    KC_V,    KC_SLSH, KC_END,  KC_HOME, KC_PGUP,
        KC_LBRC, KC_C,    KC_I,    KC_E,    KC_A,    KC_COMM, KC_BSPC, KC_DOT,  KC_H,    KC_T,    KC_S,    KC_N,    KC_RBRC, KC_ENT,  KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,    KC_J,    KC_K,    KC_F16,  LCTL(KC_BSPC), KC_F17, KC_R,    KC_M,    KC_F,    KC_P,    KC_DEL,  KC_UP,
        KC_LCTL, KC_LALT, KC_SPC,           KC_G,    KC_ENT,  KC_LSFT, KC_SPC,           KC_Q,    MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  // [1] RGB & Media Layer (已完美修復！恢復背光與多媒體控制)
  [1] = LAYOUT(
        QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CALC, KC_MYCM, KC_MSEL, KC_MAIL, NK_TOGG, EE_CLR,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        RM_TOGG, RM_NEXT, RM_VALU, RM_HUEU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, RM_SPDD, RM_VALD, RM_SPDU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLU,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_MPLY, KC_MPRV, KC_VOLD, KC_MNXT
  ),

  // [2] Custom Layer (預留的空白層)
  [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};