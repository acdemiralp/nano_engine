#ifndef DI_SYSTEMS_INPUT_SCAN_CODE_HPP_
#define DI_SYSTEMS_INPUT_SCAN_CODE_HPP_

namespace di
{
enum class scan_code
{
  unknown                       = 0,
  a                             = 4,
  b                             = 5,
  c                             = 6,
  d                             = 7,
  e                             = 8,
  f                             = 9,
  g                             = 10,
  h                             = 11,
  i                             = 12,
  j                             = 13,
  k                             = 14,
  l                             = 15,
  m                             = 16,
  n                             = 17,
  o                             = 18,
  p                             = 19,
  q                             = 20,
  r                             = 21,
  s                             = 22,
  t                             = 23,
  u                             = 24,
  v                             = 25,
  w                             = 26,
  x                             = 27,
  y                             = 28,
  z                             = 29,
  _1                            = 30,
  _2                            = 31,
  _3                            = 32,
  _4                            = 33,
  _5                            = 34,
  _6                            = 35,
  _7                            = 36,
  _8                            = 37,
  _9                            = 38,
  _0                            = 39,
  enter                         = 40,
  escape                        = 41,
  backspace                     = 42,
  tab                           = 43,
  space                         = 44,
  minus                         = 45,
  equals                        = 46,
  left_bracket                  = 47,
  right_bracket                 = 48,
  backslash                     = 49,
  non_us_hash                   = 50,
  semicolon                     = 51,
  apostrophe                    = 52,
  grave                         = 53,
  comma                         = 54,
  period                        = 55,
  slash                         = 56,
  caps_lock                     = 57,
  f1                            = 58,
  f2                            = 59,
  f3                            = 60,
  f4                            = 61,
  f5                            = 62,
  f6                            = 63,
  f7                            = 64,
  f8                            = 65,
  f9                            = 66,
  f10                           = 67,
  f11                           = 68,
  f12                           = 69,
  print_screen                  = 70,
  scroll_lock                   = 71,
  pause                         = 72,
  insert                        = 73,
  home                          = 74,
  page_up                       = 75,
  del                           = 76,
  end                           = 77,
  page_down                     = 78,
  right                         = 79,
  left                          = 80,
  down                          = 81,
  up                            = 82,
  num_lock_clear                = 83,
  keypad_divide                 = 84,
  keypad_multiply               = 85,
  keypad_minus                  = 86,
  keypad_plus                   = 87,
  keypad_enter                  = 88,
  keypad_1                      = 89,
  keypad_2                      = 90,
  keypad_3                      = 91,
  keypad_4                      = 92,
  keypad_5                      = 93,
  keypad_6                      = 94,
  keypad_7                      = 95,
  keypad_8                      = 96,
  keypad_9                      = 97,
  keypad_0                      = 98,
  keypad_period                 = 99,
  non_us_backslash              = 100,
  application                   = 101,
  power                         = 102,
  keypad_equals                 = 103,
  f13                           = 104,
  f14                           = 105,
  f15                           = 106,
  f16                           = 107,
  f17                           = 108,
  f18                           = 109,
  f19                           = 110,
  f20                           = 111,
  f21                           = 112,
  f22                           = 113,
  f23                           = 114,
  f24                           = 115,
  execute                       = 116,
  help                          = 117,
  menu                          = 118,
  select                        = 119,
  stop                          = 120,
  again                         = 121,
  undo                          = 122,
  cut                           = 123,
  copy                          = 124,
  paste                         = 125,
  find                          = 126,
  mute                          = 127,
  volume_up                     = 128,
  volume_down                   = 129,
  keypad_comma                  = 133,
  keypad_equals_as_400          = 134,
  international_1               = 135,
  international_2               = 136,
  international_3               = 137,
  international_4               = 138,
  international_5               = 139,
  international_6               = 140,
  international_7               = 141,
  international_8               = 142,
  international_9               = 143,
  language_1                    = 144,
  language_2                    = 145,
  language_3                    = 146,
  language_4                    = 147,
  language_5                    = 148,
  language_6                    = 149,
  language_7                    = 150,
  language_8                    = 151,
  language_9                    = 152,
  alt_erase                     = 153,
  sys_req                       = 154,
  cancel                        = 155,
  clear                         = 156,
  prior                         = 157,
  return_2                      = 158,
  separator                     = 159,
  out                           = 160,
  oper                          = 161,
  clear_again                   = 162,
  cr_select                     = 163,
  ex_select                     = 164,
  keypad_00                     = 176,
  keypad_000                    = 177,
  thousands_separator           = 178,
  decimal_separator             = 179,
  currency_unit                 = 180,
  currency_subunit              = 181,
  keypad_left_parenthesis       = 182,
  keypad_right_parenthesis      = 183,
  keypad_left_brace             = 184,
  keypad_right_brace            = 185,
  keypad_tab                    = 186,
  keypad_backspace              = 187,
  keypad_a                      = 188,
  keypad_b                      = 189,
  keypad_c                      = 190,
  keypad_d                      = 191,
  keypad_e                      = 192,
  keypad_f                      = 193,
  keypad_xor                    = 194,
  keypad_power                  = 195,
  keypad_percent                = 196,
  keypad_less                   = 197,
  keypad_greater                = 198,
  keypad_ampersand              = 199,
  keypad_double_ampersand       = 200,
  keypad_vertical_bar           = 201,
  keypad_double_vertical_bar    = 202,
  keypad_colon                  = 203,
  keypad_hash                   = 204,
  keypad_space                  = 205,
  keypad_at                     = 206,
  keypad_exclamation            = 207,
  keypad_memory_store           = 208,
  keypad_memory_recall          = 209,
  keypad_memory_clear           = 210,
  keypad_memory_add             = 211,
  keypad_memory_subtract        = 212,
  keypad_memory_multiply        = 213,
  keypad_memory_divide          = 214,
  keypad_plus_minus             = 215,
  keypad_clear                  = 216,
  keypad_clear_entry            = 217,
  keypad_binary                 = 218,
  keypad_octal                  = 219,
  keypad_decimal                = 220,
  keypad_hexadecimal            = 221,
  left_ctrl                     = 224,
  left_shift                    = 225,
  left_alt                      = 226,
  left_gui                      = 227,
  right_ctrl                    = 228,
  right_shift                   = 229,
  right_alt                     = 230,
  right_gui                     = 231,
  mode                          = 257,
  audio_next                    = 258,
  audio_previous                = 259,
  audio_stop                    = 260,
  audio_play                    = 261,
  audio_mute                    = 262,
  media_select                  = 263,
  www                           = 264,
  mail                          = 265,
  calculator                    = 266,
  computer                      = 267,
  application_control_search    = 268,
  application_control_home      = 269,
  application_control_back      = 270,
  application_control_forward   = 271,
  application_control_stop      = 272,
  application_control_refresh   = 273,
  application_control_bookmarks = 274,
  brightness_down               = 275,
  brightness_up                 = 276,
  display_switch                = 277,
  keyboard_illumination_toggle  = 278,
  keyboard_illumination_down    = 279,
  keyboard_illumination_up      = 280,
  eject                         = 281,
  sleep                         = 282,
  application_1                 = 283,
  application_2                 = 284,
  num_scancodes                 = 512
};
}

#endif