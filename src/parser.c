#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 243
#define ALIAS_COUNT 0
#define TOKEN_COUNT 215
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_set = 4,
  anon_sym_bindsym = 5,
  anon_sym_bindcode = 6,
  anon_sym_exec = 7,
  anon_sym_exec_always = 8,
  anon_sym_assign = 9,
  anon_sym_for_window = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_no_focus = 13,
  anon_sym_include = 14,
  anon_sym_bar = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_EQ = 18,
  sym_criteria_key = 19,
  aux_sym_criteria_value_token1 = 20,
  anon_sym_accel_profile = 21,
  anon_sym_active_workspace = 22,
  anon_sym_adaptive_sync = 23,
  anon_sym_allow_tearing = 24,
  anon_sym_attach = 25,
  anon_sym_background = 26,
  anon_sym_bg = 27,
  anon_sym_bindgesture = 28,
  anon_sym_binding_mode = 29,
  anon_sym_binding_mode_indicator = 30,
  anon_sym_bindswitch = 31,
  anon_sym_border = 32,
  anon_sym_calibration_matrix = 33,
  anon_sym_click_method = 34,
  anon_sym_clickfinger_button_map = 35,
  anon_sym_client_DOTbackground = 36,
  anon_sym_client_DOTfocused = 37,
  anon_sym_client_DOTfocused_inactive = 38,
  anon_sym_client_DOTfocused_tab_title = 39,
  anon_sym_client_DOTplaceholder = 40,
  anon_sym_client_DOTunfocused = 41,
  anon_sym_client_DOTurgent = 42,
  anon_sym_color_profile = 43,
  anon_sym_colors = 44,
  anon_sym_create_output = 45,
  anon_sym_cursor = 46,
  anon_sym_default_border = 47,
  anon_sym_default_floating_border = 48,
  anon_sym_default_orientation = 49,
  anon_sym_disable = 50,
  anon_sym_dpms = 51,
  anon_sym_drag = 52,
  anon_sym_drag_lock = 53,
  anon_sym_dwt = 54,
  anon_sym_dwtp = 55,
  anon_sym_enable = 56,
  anon_sym_events = 57,
  anon_sym_exit = 58,
  anon_sym_fallback = 59,
  anon_sym_floating = 60,
  anon_sym_floating_maximum_size = 61,
  anon_sym_floating_minimum_size = 62,
  anon_sym_floating_modifier = 63,
  anon_sym_focus = 64,
  anon_sym_focus_follows_mouse = 65,
  anon_sym_focus_on_window_activation = 66,
  anon_sym_focus_wrapping = 67,
  anon_sym_focused_background = 68,
  anon_sym_focused_separator = 69,
  anon_sym_focused_statusline = 70,
  anon_sym_focused_workspace = 71,
  anon_sym_font = 72,
  anon_sym_force_display_urgency_hint = 73,
  anon_sym_force_focus_wrapping = 74,
  anon_sym_fullscreen = 75,
  anon_sym_gaps = 76,
  anon_sym_hdr = 77,
  anon_sym_height = 78,
  anon_sym_hidden_state = 79,
  anon_sym_hide_cursor = 80,
  anon_sym_hide_edge_borders = 81,
  anon_sym_icon_theme = 82,
  anon_sym_id = 83,
  anon_sym_idle_inhibit = 84,
  anon_sym_idle_wake = 85,
  anon_sym_inactive_workspace = 86,
  anon_sym_inhibit_idle = 87,
  anon_sym_input = 88,
  anon_sym_keyboard = 89,
  anon_sym_keyboard_grouping = 90,
  anon_sym_kill = 91,
  anon_sym_layout = 92,
  anon_sym_left_handed = 93,
  anon_sym_map_from_region = 94,
  anon_sym_map_to_output = 95,
  anon_sym_map_to_region = 96,
  anon_sym_mark = 97,
  anon_sym_max_render_time = 98,
  anon_sym_middle_emulation = 99,
  anon_sym_mode = 100,
  anon_sym_modeline = 101,
  anon_sym_modifier = 102,
  anon_sym_mouse_warping = 103,
  anon_sym_move = 104,
  anon_sym_natural_scroll = 105,
  anon_sym_new_float = 106,
  anon_sym_new_window = 107,
  anon_sym_nop = 108,
  anon_sym_opacity = 109,
  anon_sym_output = 110,
  anon_sym_pango_markup = 111,
  anon_sym_pointer = 112,
  anon_sym_pointer_accel = 113,
  anon_sym_pointer_constraint = 114,
  anon_sym_popup_during_fullscreen = 115,
  anon_sym_pos = 116,
  anon_sym_position = 117,
  anon_sym_power = 118,
  anon_sym_primary_selection = 119,
  anon_sym_reload = 120,
  anon_sym_rename = 121,
  anon_sym_render_bit_depth = 122,
  anon_sym_repeat_delay = 123,
  anon_sym_repeat_rate = 124,
  anon_sym_res = 125,
  anon_sym_resize = 126,
  anon_sym_resolution = 127,
  anon_sym_restart = 128,
  anon_sym_rotation_angle = 129,
  anon_sym_scale = 130,
  anon_sym_scale_filter = 131,
  anon_sym_scratchpad = 132,
  anon_sym_scroll_button = 133,
  anon_sym_scroll_button_lock = 134,
  anon_sym_scroll_factor = 135,
  anon_sym_scroll_method = 136,
  anon_sym_seat = 137,
  anon_sym_separator = 138,
  anon_sym_separator_symbol = 139,
  anon_sym_shortcuts_inhibitor = 140,
  anon_sym_show_marks = 141,
  anon_sym_smart_borders = 142,
  anon_sym_smart_gaps = 143,
  anon_sym_split = 144,
  anon_sym_splith = 145,
  anon_sym_splitt = 146,
  anon_sym_splitv = 147,
  anon_sym_status_command = 148,
  anon_sym_status_edge_padding = 149,
  anon_sym_status_padding = 150,
  anon_sym_statusline = 151,
  anon_sym_sticky = 152,
  anon_sym_strip_workspace_name = 153,
  anon_sym_strip_workspace_numbers = 154,
  anon_sym_subpixel = 155,
  anon_sym_swap = 156,
  anon_sym_swaybar_command = 157,
  anon_sym_swaybg_command = 158,
  anon_sym_swaynag_command = 159,
  anon_sym_switch = 160,
  anon_sym_tablet_pad = 161,
  anon_sym_tablet_tool = 162,
  anon_sym_tap = 163,
  anon_sym_tap_button_map = 164,
  anon_sym_tiling_drag = 165,
  anon_sym_tiling_drag_threshold = 166,
  anon_sym_title_align = 167,
  anon_sym_title_format = 168,
  anon_sym_titlebar_border_thickness = 169,
  anon_sym_titlebar_padding = 170,
  anon_sym_toggle = 171,
  anon_sym_tool_mode = 172,
  anon_sym_touch = 173,
  anon_sym_transform = 174,
  anon_sym_tray_bindcode = 175,
  anon_sym_tray_bindsym = 176,
  anon_sym_tray_output = 177,
  anon_sym_tray_padding = 178,
  anon_sym_unbindcode = 179,
  anon_sym_unbindgesture = 180,
  anon_sym_unbindswitch = 181,
  anon_sym_unbindsym = 182,
  anon_sym_unmark = 183,
  anon_sym_unplug = 184,
  anon_sym_urgent = 185,
  anon_sym_urgent_workspace = 186,
  anon_sym_workspace = 187,
  anon_sym_workspace_auto_back_and_forth = 188,
  anon_sym_workspace_buttons = 189,
  anon_sym_workspace_layout = 190,
  anon_sym_workspace_min_width = 191,
  anon_sym_wrap_scroll = 192,
  anon_sym_xcursor_theme = 193,
  anon_sym_xkb_capslock = 194,
  anon_sym_xkb_file = 195,
  anon_sym_xkb_layout = 196,
  anon_sym_xkb_model = 197,
  anon_sym_xkb_numlock = 198,
  anon_sym_xkb_options = 199,
  anon_sym_xkb_rules = 200,
  anon_sym_xkb_switch_layout = 201,
  anon_sym_xkb_variant = 202,
  anon_sym_xwayland = 203,
  sym_keycombo = 204,
  sym_flag = 205,
  sym_variable = 206,
  sym_number = 207,
  sym_unit_value = 208,
  sym_color = 209,
  anon_sym_DQUOTE = 210,
  aux_sym_string_token1 = 211,
  sym_escape_sequence = 212,
  sym_command = 213,
  sym_word = 214,
  sym_source_file = 215,
  sym_statement = 216,
  sym_comment = 217,
  sym_set_statement = 218,
  sym_bindsym_statement = 219,
  sym_bindcode_statement = 220,
  sym_exec_statement = 221,
  sym_exec_always_statement = 222,
  sym_assign_statement = 223,
  sym_for_window_statement = 224,
  sym_for_window_block = 225,
  sym_no_focus_statement = 226,
  sym_criteria_command = 227,
  sym_include_statement = 228,
  sym_bar_block = 229,
  sym_block_statement = 230,
  sym_command_statement = 231,
  sym_criteria = 232,
  sym_criteria_pair = 233,
  sym_criteria_value = 234,
  sym_keyword = 235,
  sym_value = 236,
  sym_string = 237,
  aux_sym_source_file_repeat1 = 238,
  aux_sym_set_statement_repeat1 = 239,
  aux_sym_bindsym_statement_repeat1 = 240,
  aux_sym_criteria_repeat1 = 241,
  aux_sym_string_repeat1 = 242,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_set] = "set",
  [anon_sym_bindsym] = "bindsym",
  [anon_sym_bindcode] = "bindcode",
  [anon_sym_exec] = "exec",
  [anon_sym_exec_always] = "exec_always",
  [anon_sym_assign] = "assign",
  [anon_sym_for_window] = "for_window",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_no_focus] = "no_focus",
  [anon_sym_include] = "include",
  [anon_sym_bar] = "bar",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_criteria_key] = "criteria_key",
  [aux_sym_criteria_value_token1] = "criteria_value_token1",
  [anon_sym_accel_profile] = "accel_profile",
  [anon_sym_active_workspace] = "active_workspace",
  [anon_sym_adaptive_sync] = "adaptive_sync",
  [anon_sym_allow_tearing] = "allow_tearing",
  [anon_sym_attach] = "attach",
  [anon_sym_background] = "background",
  [anon_sym_bg] = "bg",
  [anon_sym_bindgesture] = "bindgesture",
  [anon_sym_binding_mode] = "binding_mode",
  [anon_sym_binding_mode_indicator] = "binding_mode_indicator",
  [anon_sym_bindswitch] = "bindswitch",
  [anon_sym_border] = "border",
  [anon_sym_calibration_matrix] = "calibration_matrix",
  [anon_sym_click_method] = "click_method",
  [anon_sym_clickfinger_button_map] = "clickfinger_button_map",
  [anon_sym_client_DOTbackground] = "client.background",
  [anon_sym_client_DOTfocused] = "client.focused",
  [anon_sym_client_DOTfocused_inactive] = "client.focused_inactive",
  [anon_sym_client_DOTfocused_tab_title] = "client.focused_tab_title",
  [anon_sym_client_DOTplaceholder] = "client.placeholder",
  [anon_sym_client_DOTunfocused] = "client.unfocused",
  [anon_sym_client_DOTurgent] = "client.urgent",
  [anon_sym_color_profile] = "color_profile",
  [anon_sym_colors] = "colors",
  [anon_sym_create_output] = "create_output",
  [anon_sym_cursor] = "cursor",
  [anon_sym_default_border] = "default_border",
  [anon_sym_default_floating_border] = "default_floating_border",
  [anon_sym_default_orientation] = "default_orientation",
  [anon_sym_disable] = "disable",
  [anon_sym_dpms] = "dpms",
  [anon_sym_drag] = "drag",
  [anon_sym_drag_lock] = "drag_lock",
  [anon_sym_dwt] = "dwt",
  [anon_sym_dwtp] = "dwtp",
  [anon_sym_enable] = "enable",
  [anon_sym_events] = "events",
  [anon_sym_exit] = "exit",
  [anon_sym_fallback] = "fallback",
  [anon_sym_floating] = "floating",
  [anon_sym_floating_maximum_size] = "floating_maximum_size",
  [anon_sym_floating_minimum_size] = "floating_minimum_size",
  [anon_sym_floating_modifier] = "floating_modifier",
  [anon_sym_focus] = "focus",
  [anon_sym_focus_follows_mouse] = "focus_follows_mouse",
  [anon_sym_focus_on_window_activation] = "focus_on_window_activation",
  [anon_sym_focus_wrapping] = "focus_wrapping",
  [anon_sym_focused_background] = "focused_background",
  [anon_sym_focused_separator] = "focused_separator",
  [anon_sym_focused_statusline] = "focused_statusline",
  [anon_sym_focused_workspace] = "focused_workspace",
  [anon_sym_font] = "font",
  [anon_sym_force_display_urgency_hint] = "force_display_urgency_hint",
  [anon_sym_force_focus_wrapping] = "force_focus_wrapping",
  [anon_sym_fullscreen] = "fullscreen",
  [anon_sym_gaps] = "gaps",
  [anon_sym_hdr] = "hdr",
  [anon_sym_height] = "height",
  [anon_sym_hidden_state] = "hidden_state",
  [anon_sym_hide_cursor] = "hide_cursor",
  [anon_sym_hide_edge_borders] = "hide_edge_borders",
  [anon_sym_icon_theme] = "icon_theme",
  [anon_sym_id] = "id",
  [anon_sym_idle_inhibit] = "idle_inhibit",
  [anon_sym_idle_wake] = "idle_wake",
  [anon_sym_inactive_workspace] = "inactive_workspace",
  [anon_sym_inhibit_idle] = "inhibit_idle",
  [anon_sym_input] = "input",
  [anon_sym_keyboard] = "keyboard",
  [anon_sym_keyboard_grouping] = "keyboard_grouping",
  [anon_sym_kill] = "kill",
  [anon_sym_layout] = "layout",
  [anon_sym_left_handed] = "left_handed",
  [anon_sym_map_from_region] = "map_from_region",
  [anon_sym_map_to_output] = "map_to_output",
  [anon_sym_map_to_region] = "map_to_region",
  [anon_sym_mark] = "mark",
  [anon_sym_max_render_time] = "max_render_time",
  [anon_sym_middle_emulation] = "middle_emulation",
  [anon_sym_mode] = "mode",
  [anon_sym_modeline] = "modeline",
  [anon_sym_modifier] = "modifier",
  [anon_sym_mouse_warping] = "mouse_warping",
  [anon_sym_move] = "move",
  [anon_sym_natural_scroll] = "natural_scroll",
  [anon_sym_new_float] = "new_float",
  [anon_sym_new_window] = "new_window",
  [anon_sym_nop] = "nop",
  [anon_sym_opacity] = "opacity",
  [anon_sym_output] = "output",
  [anon_sym_pango_markup] = "pango_markup",
  [anon_sym_pointer] = "pointer",
  [anon_sym_pointer_accel] = "pointer_accel",
  [anon_sym_pointer_constraint] = "pointer_constraint",
  [anon_sym_popup_during_fullscreen] = "popup_during_fullscreen",
  [anon_sym_pos] = "pos",
  [anon_sym_position] = "position",
  [anon_sym_power] = "power",
  [anon_sym_primary_selection] = "primary_selection",
  [anon_sym_reload] = "reload",
  [anon_sym_rename] = "rename",
  [anon_sym_render_bit_depth] = "render_bit_depth",
  [anon_sym_repeat_delay] = "repeat_delay",
  [anon_sym_repeat_rate] = "repeat_rate",
  [anon_sym_res] = "res",
  [anon_sym_resize] = "resize",
  [anon_sym_resolution] = "resolution",
  [anon_sym_restart] = "restart",
  [anon_sym_rotation_angle] = "rotation_angle",
  [anon_sym_scale] = "scale",
  [anon_sym_scale_filter] = "scale_filter",
  [anon_sym_scratchpad] = "scratchpad",
  [anon_sym_scroll_button] = "scroll_button",
  [anon_sym_scroll_button_lock] = "scroll_button_lock",
  [anon_sym_scroll_factor] = "scroll_factor",
  [anon_sym_scroll_method] = "scroll_method",
  [anon_sym_seat] = "seat",
  [anon_sym_separator] = "separator",
  [anon_sym_separator_symbol] = "separator_symbol",
  [anon_sym_shortcuts_inhibitor] = "shortcuts_inhibitor",
  [anon_sym_show_marks] = "show_marks",
  [anon_sym_smart_borders] = "smart_borders",
  [anon_sym_smart_gaps] = "smart_gaps",
  [anon_sym_split] = "split",
  [anon_sym_splith] = "splith",
  [anon_sym_splitt] = "splitt",
  [anon_sym_splitv] = "splitv",
  [anon_sym_status_command] = "status_command",
  [anon_sym_status_edge_padding] = "status_edge_padding",
  [anon_sym_status_padding] = "status_padding",
  [anon_sym_statusline] = "statusline",
  [anon_sym_sticky] = "sticky",
  [anon_sym_strip_workspace_name] = "strip_workspace_name",
  [anon_sym_strip_workspace_numbers] = "strip_workspace_numbers",
  [anon_sym_subpixel] = "subpixel",
  [anon_sym_swap] = "swap",
  [anon_sym_swaybar_command] = "swaybar_command",
  [anon_sym_swaybg_command] = "swaybg_command",
  [anon_sym_swaynag_command] = "swaynag_command",
  [anon_sym_switch] = "switch",
  [anon_sym_tablet_pad] = "tablet_pad",
  [anon_sym_tablet_tool] = "tablet_tool",
  [anon_sym_tap] = "tap",
  [anon_sym_tap_button_map] = "tap_button_map",
  [anon_sym_tiling_drag] = "tiling_drag",
  [anon_sym_tiling_drag_threshold] = "tiling_drag_threshold",
  [anon_sym_title_align] = "title_align",
  [anon_sym_title_format] = "title_format",
  [anon_sym_titlebar_border_thickness] = "titlebar_border_thickness",
  [anon_sym_titlebar_padding] = "titlebar_padding",
  [anon_sym_toggle] = "toggle",
  [anon_sym_tool_mode] = "tool_mode",
  [anon_sym_touch] = "touch",
  [anon_sym_transform] = "transform",
  [anon_sym_tray_bindcode] = "tray_bindcode",
  [anon_sym_tray_bindsym] = "tray_bindsym",
  [anon_sym_tray_output] = "tray_output",
  [anon_sym_tray_padding] = "tray_padding",
  [anon_sym_unbindcode] = "unbindcode",
  [anon_sym_unbindgesture] = "unbindgesture",
  [anon_sym_unbindswitch] = "unbindswitch",
  [anon_sym_unbindsym] = "unbindsym",
  [anon_sym_unmark] = "unmark",
  [anon_sym_unplug] = "unplug",
  [anon_sym_urgent] = "urgent",
  [anon_sym_urgent_workspace] = "urgent_workspace",
  [anon_sym_workspace] = "workspace",
  [anon_sym_workspace_auto_back_and_forth] = "workspace_auto_back_and_forth",
  [anon_sym_workspace_buttons] = "workspace_buttons",
  [anon_sym_workspace_layout] = "workspace_layout",
  [anon_sym_workspace_min_width] = "workspace_min_width",
  [anon_sym_wrap_scroll] = "wrap_scroll",
  [anon_sym_xcursor_theme] = "xcursor_theme",
  [anon_sym_xkb_capslock] = "xkb_capslock",
  [anon_sym_xkb_file] = "xkb_file",
  [anon_sym_xkb_layout] = "xkb_layout",
  [anon_sym_xkb_model] = "xkb_model",
  [anon_sym_xkb_numlock] = "xkb_numlock",
  [anon_sym_xkb_options] = "xkb_options",
  [anon_sym_xkb_rules] = "xkb_rules",
  [anon_sym_xkb_switch_layout] = "xkb_switch_layout",
  [anon_sym_xkb_variant] = "xkb_variant",
  [anon_sym_xwayland] = "xwayland",
  [sym_keycombo] = "keycombo",
  [sym_flag] = "flag",
  [sym_variable] = "variable",
  [sym_number] = "number",
  [sym_unit_value] = "unit_value",
  [sym_color] = "color",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_command] = "command",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_comment] = "comment",
  [sym_set_statement] = "set_statement",
  [sym_bindsym_statement] = "bindsym_statement",
  [sym_bindcode_statement] = "bindcode_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_exec_always_statement] = "exec_always_statement",
  [sym_assign_statement] = "assign_statement",
  [sym_for_window_statement] = "for_window_statement",
  [sym_for_window_block] = "for_window_block",
  [sym_no_focus_statement] = "no_focus_statement",
  [sym_criteria_command] = "criteria_command",
  [sym_include_statement] = "include_statement",
  [sym_bar_block] = "bar_block",
  [sym_block_statement] = "block_statement",
  [sym_command_statement] = "command_statement",
  [sym_criteria] = "criteria",
  [sym_criteria_pair] = "criteria_pair",
  [sym_criteria_value] = "criteria_value",
  [sym_keyword] = "keyword",
  [sym_value] = "value",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_set_statement_repeat1] = "set_statement_repeat1",
  [aux_sym_bindsym_statement_repeat1] = "bindsym_statement_repeat1",
  [aux_sym_criteria_repeat1] = "criteria_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_bindsym] = anon_sym_bindsym,
  [anon_sym_bindcode] = anon_sym_bindcode,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_exec_always] = anon_sym_exec_always,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_for_window] = anon_sym_for_window,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_no_focus] = anon_sym_no_focus,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_bar] = anon_sym_bar,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_criteria_key] = sym_criteria_key,
  [aux_sym_criteria_value_token1] = aux_sym_criteria_value_token1,
  [anon_sym_accel_profile] = anon_sym_accel_profile,
  [anon_sym_active_workspace] = anon_sym_active_workspace,
  [anon_sym_adaptive_sync] = anon_sym_adaptive_sync,
  [anon_sym_allow_tearing] = anon_sym_allow_tearing,
  [anon_sym_attach] = anon_sym_attach,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_bg] = anon_sym_bg,
  [anon_sym_bindgesture] = anon_sym_bindgesture,
  [anon_sym_binding_mode] = anon_sym_binding_mode,
  [anon_sym_binding_mode_indicator] = anon_sym_binding_mode_indicator,
  [anon_sym_bindswitch] = anon_sym_bindswitch,
  [anon_sym_border] = anon_sym_border,
  [anon_sym_calibration_matrix] = anon_sym_calibration_matrix,
  [anon_sym_click_method] = anon_sym_click_method,
  [anon_sym_clickfinger_button_map] = anon_sym_clickfinger_button_map,
  [anon_sym_client_DOTbackground] = anon_sym_client_DOTbackground,
  [anon_sym_client_DOTfocused] = anon_sym_client_DOTfocused,
  [anon_sym_client_DOTfocused_inactive] = anon_sym_client_DOTfocused_inactive,
  [anon_sym_client_DOTfocused_tab_title] = anon_sym_client_DOTfocused_tab_title,
  [anon_sym_client_DOTplaceholder] = anon_sym_client_DOTplaceholder,
  [anon_sym_client_DOTunfocused] = anon_sym_client_DOTunfocused,
  [anon_sym_client_DOTurgent] = anon_sym_client_DOTurgent,
  [anon_sym_color_profile] = anon_sym_color_profile,
  [anon_sym_colors] = anon_sym_colors,
  [anon_sym_create_output] = anon_sym_create_output,
  [anon_sym_cursor] = anon_sym_cursor,
  [anon_sym_default_border] = anon_sym_default_border,
  [anon_sym_default_floating_border] = anon_sym_default_floating_border,
  [anon_sym_default_orientation] = anon_sym_default_orientation,
  [anon_sym_disable] = anon_sym_disable,
  [anon_sym_dpms] = anon_sym_dpms,
  [anon_sym_drag] = anon_sym_drag,
  [anon_sym_drag_lock] = anon_sym_drag_lock,
  [anon_sym_dwt] = anon_sym_dwt,
  [anon_sym_dwtp] = anon_sym_dwtp,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_events] = anon_sym_events,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_floating] = anon_sym_floating,
  [anon_sym_floating_maximum_size] = anon_sym_floating_maximum_size,
  [anon_sym_floating_minimum_size] = anon_sym_floating_minimum_size,
  [anon_sym_floating_modifier] = anon_sym_floating_modifier,
  [anon_sym_focus] = anon_sym_focus,
  [anon_sym_focus_follows_mouse] = anon_sym_focus_follows_mouse,
  [anon_sym_focus_on_window_activation] = anon_sym_focus_on_window_activation,
  [anon_sym_focus_wrapping] = anon_sym_focus_wrapping,
  [anon_sym_focused_background] = anon_sym_focused_background,
  [anon_sym_focused_separator] = anon_sym_focused_separator,
  [anon_sym_focused_statusline] = anon_sym_focused_statusline,
  [anon_sym_focused_workspace] = anon_sym_focused_workspace,
  [anon_sym_font] = anon_sym_font,
  [anon_sym_force_display_urgency_hint] = anon_sym_force_display_urgency_hint,
  [anon_sym_force_focus_wrapping] = anon_sym_force_focus_wrapping,
  [anon_sym_fullscreen] = anon_sym_fullscreen,
  [anon_sym_gaps] = anon_sym_gaps,
  [anon_sym_hdr] = anon_sym_hdr,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_hidden_state] = anon_sym_hidden_state,
  [anon_sym_hide_cursor] = anon_sym_hide_cursor,
  [anon_sym_hide_edge_borders] = anon_sym_hide_edge_borders,
  [anon_sym_icon_theme] = anon_sym_icon_theme,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_idle_inhibit] = anon_sym_idle_inhibit,
  [anon_sym_idle_wake] = anon_sym_idle_wake,
  [anon_sym_inactive_workspace] = anon_sym_inactive_workspace,
  [anon_sym_inhibit_idle] = anon_sym_inhibit_idle,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_keyboard] = anon_sym_keyboard,
  [anon_sym_keyboard_grouping] = anon_sym_keyboard_grouping,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_left_handed] = anon_sym_left_handed,
  [anon_sym_map_from_region] = anon_sym_map_from_region,
  [anon_sym_map_to_output] = anon_sym_map_to_output,
  [anon_sym_map_to_region] = anon_sym_map_to_region,
  [anon_sym_mark] = anon_sym_mark,
  [anon_sym_max_render_time] = anon_sym_max_render_time,
  [anon_sym_middle_emulation] = anon_sym_middle_emulation,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_modeline] = anon_sym_modeline,
  [anon_sym_modifier] = anon_sym_modifier,
  [anon_sym_mouse_warping] = anon_sym_mouse_warping,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_natural_scroll] = anon_sym_natural_scroll,
  [anon_sym_new_float] = anon_sym_new_float,
  [anon_sym_new_window] = anon_sym_new_window,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_pango_markup] = anon_sym_pango_markup,
  [anon_sym_pointer] = anon_sym_pointer,
  [anon_sym_pointer_accel] = anon_sym_pointer_accel,
  [anon_sym_pointer_constraint] = anon_sym_pointer_constraint,
  [anon_sym_popup_during_fullscreen] = anon_sym_popup_during_fullscreen,
  [anon_sym_pos] = anon_sym_pos,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_power] = anon_sym_power,
  [anon_sym_primary_selection] = anon_sym_primary_selection,
  [anon_sym_reload] = anon_sym_reload,
  [anon_sym_rename] = anon_sym_rename,
  [anon_sym_render_bit_depth] = anon_sym_render_bit_depth,
  [anon_sym_repeat_delay] = anon_sym_repeat_delay,
  [anon_sym_repeat_rate] = anon_sym_repeat_rate,
  [anon_sym_res] = anon_sym_res,
  [anon_sym_resize] = anon_sym_resize,
  [anon_sym_resolution] = anon_sym_resolution,
  [anon_sym_restart] = anon_sym_restart,
  [anon_sym_rotation_angle] = anon_sym_rotation_angle,
  [anon_sym_scale] = anon_sym_scale,
  [anon_sym_scale_filter] = anon_sym_scale_filter,
  [anon_sym_scratchpad] = anon_sym_scratchpad,
  [anon_sym_scroll_button] = anon_sym_scroll_button,
  [anon_sym_scroll_button_lock] = anon_sym_scroll_button_lock,
  [anon_sym_scroll_factor] = anon_sym_scroll_factor,
  [anon_sym_scroll_method] = anon_sym_scroll_method,
  [anon_sym_seat] = anon_sym_seat,
  [anon_sym_separator] = anon_sym_separator,
  [anon_sym_separator_symbol] = anon_sym_separator_symbol,
  [anon_sym_shortcuts_inhibitor] = anon_sym_shortcuts_inhibitor,
  [anon_sym_show_marks] = anon_sym_show_marks,
  [anon_sym_smart_borders] = anon_sym_smart_borders,
  [anon_sym_smart_gaps] = anon_sym_smart_gaps,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_splith] = anon_sym_splith,
  [anon_sym_splitt] = anon_sym_splitt,
  [anon_sym_splitv] = anon_sym_splitv,
  [anon_sym_status_command] = anon_sym_status_command,
  [anon_sym_status_edge_padding] = anon_sym_status_edge_padding,
  [anon_sym_status_padding] = anon_sym_status_padding,
  [anon_sym_statusline] = anon_sym_statusline,
  [anon_sym_sticky] = anon_sym_sticky,
  [anon_sym_strip_workspace_name] = anon_sym_strip_workspace_name,
  [anon_sym_strip_workspace_numbers] = anon_sym_strip_workspace_numbers,
  [anon_sym_subpixel] = anon_sym_subpixel,
  [anon_sym_swap] = anon_sym_swap,
  [anon_sym_swaybar_command] = anon_sym_swaybar_command,
  [anon_sym_swaybg_command] = anon_sym_swaybg_command,
  [anon_sym_swaynag_command] = anon_sym_swaynag_command,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_tablet_pad] = anon_sym_tablet_pad,
  [anon_sym_tablet_tool] = anon_sym_tablet_tool,
  [anon_sym_tap] = anon_sym_tap,
  [anon_sym_tap_button_map] = anon_sym_tap_button_map,
  [anon_sym_tiling_drag] = anon_sym_tiling_drag,
  [anon_sym_tiling_drag_threshold] = anon_sym_tiling_drag_threshold,
  [anon_sym_title_align] = anon_sym_title_align,
  [anon_sym_title_format] = anon_sym_title_format,
  [anon_sym_titlebar_border_thickness] = anon_sym_titlebar_border_thickness,
  [anon_sym_titlebar_padding] = anon_sym_titlebar_padding,
  [anon_sym_toggle] = anon_sym_toggle,
  [anon_sym_tool_mode] = anon_sym_tool_mode,
  [anon_sym_touch] = anon_sym_touch,
  [anon_sym_transform] = anon_sym_transform,
  [anon_sym_tray_bindcode] = anon_sym_tray_bindcode,
  [anon_sym_tray_bindsym] = anon_sym_tray_bindsym,
  [anon_sym_tray_output] = anon_sym_tray_output,
  [anon_sym_tray_padding] = anon_sym_tray_padding,
  [anon_sym_unbindcode] = anon_sym_unbindcode,
  [anon_sym_unbindgesture] = anon_sym_unbindgesture,
  [anon_sym_unbindswitch] = anon_sym_unbindswitch,
  [anon_sym_unbindsym] = anon_sym_unbindsym,
  [anon_sym_unmark] = anon_sym_unmark,
  [anon_sym_unplug] = anon_sym_unplug,
  [anon_sym_urgent] = anon_sym_urgent,
  [anon_sym_urgent_workspace] = anon_sym_urgent_workspace,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_workspace_auto_back_and_forth] = anon_sym_workspace_auto_back_and_forth,
  [anon_sym_workspace_buttons] = anon_sym_workspace_buttons,
  [anon_sym_workspace_layout] = anon_sym_workspace_layout,
  [anon_sym_workspace_min_width] = anon_sym_workspace_min_width,
  [anon_sym_wrap_scroll] = anon_sym_wrap_scroll,
  [anon_sym_xcursor_theme] = anon_sym_xcursor_theme,
  [anon_sym_xkb_capslock] = anon_sym_xkb_capslock,
  [anon_sym_xkb_file] = anon_sym_xkb_file,
  [anon_sym_xkb_layout] = anon_sym_xkb_layout,
  [anon_sym_xkb_model] = anon_sym_xkb_model,
  [anon_sym_xkb_numlock] = anon_sym_xkb_numlock,
  [anon_sym_xkb_options] = anon_sym_xkb_options,
  [anon_sym_xkb_rules] = anon_sym_xkb_rules,
  [anon_sym_xkb_switch_layout] = anon_sym_xkb_switch_layout,
  [anon_sym_xkb_variant] = anon_sym_xkb_variant,
  [anon_sym_xwayland] = anon_sym_xwayland,
  [sym_keycombo] = sym_keycombo,
  [sym_flag] = sym_flag,
  [sym_variable] = sym_variable,
  [sym_number] = sym_number,
  [sym_unit_value] = sym_unit_value,
  [sym_color] = sym_color,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_command] = sym_command,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_comment] = sym_comment,
  [sym_set_statement] = sym_set_statement,
  [sym_bindsym_statement] = sym_bindsym_statement,
  [sym_bindcode_statement] = sym_bindcode_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_exec_always_statement] = sym_exec_always_statement,
  [sym_assign_statement] = sym_assign_statement,
  [sym_for_window_statement] = sym_for_window_statement,
  [sym_for_window_block] = sym_for_window_block,
  [sym_no_focus_statement] = sym_no_focus_statement,
  [sym_criteria_command] = sym_criteria_command,
  [sym_include_statement] = sym_include_statement,
  [sym_bar_block] = sym_bar_block,
  [sym_block_statement] = sym_block_statement,
  [sym_command_statement] = sym_command_statement,
  [sym_criteria] = sym_criteria,
  [sym_criteria_pair] = sym_criteria_pair,
  [sym_criteria_value] = sym_criteria_value,
  [sym_keyword] = sym_keyword,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_set_statement_repeat1] = aux_sym_set_statement_repeat1,
  [aux_sym_bindsym_statement_repeat1] = aux_sym_bindsym_statement_repeat1,
  [aux_sym_criteria_repeat1] = aux_sym_criteria_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bindsym] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bindcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_criteria_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_criteria_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_accel_profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adaptive_sync] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_tearing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bindgesture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binding_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binding_mode_indicator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bindswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calibration_matrix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_click_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clickfinger_button_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTbackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTfocused] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTfocused_inactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTfocused_tab_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTplaceholder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTunfocused] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTurgent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color_profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_floating_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_orientation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dpms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drag_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dwt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dwtp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_events] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_maximum_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_minimum_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_follows_mouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_on_window_activation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_wrapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focused_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focused_separator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focused_statusline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focused_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_display_urgency_hint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_focus_wrapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hdr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide_cursor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide_edge_borders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon_theme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idle_inhibit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idle_wake] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inactive_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inhibit_idle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyboard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyboard_grouping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left_handed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_from_region] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_to_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map_to_region] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mark] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_render_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_middle_emulation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modeline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse_warping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_natural_scroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pango_markup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer_accel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popup_during_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_power] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primary_selection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render_bit_depth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat_rate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_res] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolution] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotation_angle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scale_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scratchpad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_button] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_button_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_factor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_separator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_separator_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shortcuts_inhibitor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show_marks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smart_borders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smart_gaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splitt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_splitv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_edge_padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_statusline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sticky] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strip_workspace_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strip_workspace_numbers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subpixel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swaybar_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swaybg_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swaynag_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tablet_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tablet_tool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tap_button_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tiling_drag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tiling_drag_threshold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_titlebar_border_thickness] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_titlebar_padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toggle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tool_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_touch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tray_bindcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tray_bindsym] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tray_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tray_padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbindcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbindgesture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbindswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unbindsym] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unmark] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unplug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urgent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urgent_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_auto_back_and_forth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_buttons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_min_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wrap_scroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xcursor_theme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_capslock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_numlock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_rules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_switch_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xwayland] = {
    .visible = true,
    .named = false,
  },
  [sym_keycombo] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_bindsym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_bindcode_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_always_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_window_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_window_block] = {
    .visible = true,
    .named = true,
  },
  [sym_no_focus_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_criteria_command] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_bar_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_criteria_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_criteria_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bindsym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_criteria_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 32,
  [63] = 33,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
};

static TSCharacterRange sym_word_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '+'}, {'-', ':'}, {'<', 'Z'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1340);
      ADVANCE_MAP(
        '\n', 1341,
        '\r', 1,
        '"', 1558,
        '#', 1342,
        '$', 1334,
        '-', 14,
        '=', 1360,
        '[', 1358,
      );
      if (lookahead == '\\') SKIP(1339);
      if (lookahead == ']') ADVANCE(1359);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(771);
      if (lookahead == 'w') ADVANCE(856);
      if (lookahead == 'x') ADVANCE(240);
      if (lookahead == '{') ADVANCE(1353);
      if (lookahead == '}') ADVANCE(1354);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1552);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1341);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1341);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1558);
      if (lookahead == '#') ADVANCE(1333);
      if (lookahead == '$') ADVANCE(1570);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == '{') ADVANCE(1353);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(1571);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(2);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\r') ADVANCE(1561);
      if (lookahead != 0) ADVANCE(1561);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(12);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(8);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1558);
      if (lookahead == '\\') ADVANCE(1363);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(1362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1363);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1558);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead != 0) ADVANCE(1560);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(1335);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '\\') SKIP(9);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(12);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1547);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(1337);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(1564);
      if (lookahead == '\\') ADVANCE(1562);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(218);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(1360);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == ']') ADVANCE(1359);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1361);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(1562);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(487);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(563);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(216);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(351);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(230);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'l') ADVANCE(591);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(967);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(943);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(1299);
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(235);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(1451);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(1298);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(759);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(1289);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(550);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(484);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(1016);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(971);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(1304);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(233);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(753);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(295);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(1120);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(333);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(1113);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(590);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(639);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(1092);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(415);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(782);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(1156);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(1191);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(730);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(1175);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(1169);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(1207);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(1096);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(742);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(741);
      if (lookahead == 'f') ADVANCE(567);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(743);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(1095);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(552);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(1291);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(486);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(989);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(1066);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(1251);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(341);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(755);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(940);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(754);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(1119);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(757);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(1301);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(762);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(1300);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(229);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(1227);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(1127);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(1303);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 's') ADVANCE(1387);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'g') ADVANCE(1370);
      if (lookahead == 'i') ADVANCE(787);
      if (lookahead == 'o') ADVANCE(1010);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(956);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(951);
      if (lookahead == 'i') ADVANCE(1157);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(793);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(677);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(1008);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(959);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(1312);
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'c') ADVANCE(680);
      if (lookahead == 'h') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(1239);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'i') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'l') ADVANCE(900);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(675);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1288);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(1316);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(1041);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(960);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(1241);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(1317);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(1132);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 't') ADVANCE(1346);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(985);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(1187);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(1012);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(1310);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(1198);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(954);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(1011);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(1213);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(1020);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(902);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(1160);
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(1040);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(1199);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(1141);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(1182);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(1184);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(1146);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(1181);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(1018);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(961);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(1039);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(1030);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(1319);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(1048);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(1189);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(965);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == 'f') ADVANCE(887);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(1176);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(1035);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(836);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(748);
      if (lookahead == 'u') ADVANCE(738);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(845);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(1256);
      if (lookahead == 'b') ADVANCE(1273);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(610);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(821);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(837);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(1201);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(1222);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(1210);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(1321);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(1225);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(1063);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(1056);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(1229);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(1322);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(1224);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(1323);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(1226);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(986);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 209:
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 210:
      if (lookahead == 'b') ADVANCE(957);
      END_STATE();
    case 211:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 212:
      if (lookahead == 'b') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(1506);
      END_STATE();
    case 213:
      if (lookahead == 'b') ADVANCE(584);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(683);
      END_STATE();
    case 214:
      if (lookahead == 'b') ADVANCE(689);
      END_STATE();
    case 215:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 216:
      if (lookahead == 'b') ADVANCE(927);
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 217:
      if (lookahead == 'b') ADVANCE(693);
      END_STATE();
    case 218:
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(934);
      if (lookahead == 'p') ADVANCE(713);
      if (lookahead == 'u') ADVANCE(852);
      END_STATE();
    case 219:
      if (lookahead == 'b') ADVANCE(872);
      END_STATE();
    case 220:
      if (lookahead == 'b') ADVANCE(607);
      END_STATE();
    case 221:
      if (lookahead == 'b') ADVANCE(892);
      END_STATE();
    case 222:
      if (lookahead == 'b') ADVANCE(1249);
      END_STATE();
    case 223:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 224:
      if (lookahead == 'b') ADVANCE(582);
      END_STATE();
    case 225:
      if (lookahead == 'b') ADVANCE(637);
      END_STATE();
    case 226:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 227:
      if (lookahead == 'b') ADVANCE(936);
      if (lookahead == 'f') ADVANCE(727);
      if (lookahead == 'o') ADVANCE(1022);
      END_STATE();
    case 228:
      if (lookahead == 'b') ADVANCE(1067);
      END_STATE();
    case 229:
      if (lookahead == 'b') ADVANCE(611);
      END_STATE();
    case 230:
      if (lookahead == 'b') ADVANCE(1271);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(474);
      END_STATE();
    case 231:
      if (lookahead == 'b') ADVANCE(466);
      END_STATE();
    case 232:
      if (lookahead == 'b') ADVANCE(612);
      if (lookahead == 'o') ADVANCE(1269);
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 233:
      if (lookahead == 'b') ADVANCE(932);
      END_STATE();
    case 234:
      if (lookahead == 'b') ADVANCE(1279);
      END_STATE();
    case 235:
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 236:
      if (lookahead == 'b') ADVANCE(944);
      END_STATE();
    case 237:
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == 'w') ADVANCE(945);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(674);
      if (lookahead == 's') ADVANCE(1104);
      if (lookahead == 't') ADVANCE(1158);
      END_STATE();
    case 239:
      ADVANCE_MAP(
        'c', 122,
        'e', 123,
        'h', 854,
        'm', 116,
        'p', 678,
        't', 126,
        'u', 210,
        'w', 101,
      );
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(1275);
      if (lookahead == 'k') ADVANCE(211);
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(651);
      if (lookahead == 'r') ADVANCE(1357);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(1349);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(1366);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(855);
      if (lookahead == 'd') ADVANCE(1426);
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(1233);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(533);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(650);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(534);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(906);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 's') ADVANCE(1295);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(535);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(648);
      END_STATE();
    case 260:
      if (lookahead == 'c') ADVANCE(536);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(649);
      END_STATE();
    case 262:
      if (lookahead == 'c') ADVANCE(655);
      END_STATE();
    case 263:
      if (lookahead == 'c') ADVANCE(658);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 265:
      if (lookahead == 'c') ADVANCE(870);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 266:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 267:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 269:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 271:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 272:
      if (lookahead == 'c') ADVANCE(1179);
      END_STATE();
    case 273:
      if (lookahead == 'c') ADVANCE(576);
      END_STATE();
    case 274:
      if (lookahead == 'c') ADVANCE(1024);
      END_STATE();
    case 275:
      if (lookahead == 'c') ADVANCE(1188);
      END_STATE();
    case 276:
      if (lookahead == 'c') ADVANCE(1238);
      END_STATE();
    case 277:
      if (lookahead == 'c') ADVANCE(1320);
      END_STATE();
    case 278:
      if (lookahead == 'c') ADVANCE(1261);
      END_STATE();
    case 279:
      if (lookahead == 'c') ADVANCE(1025);
      END_STATE();
    case 280:
      if (lookahead == 'c') ADVANCE(1246);
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(1262);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(1250);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 285:
      ADVANCE_MAP(
        'c', 154,
        'f', 571,
        'l', 195,
        'm', 868,
        'n', 1232,
        'o', 980,
        'r', 1242,
        's', 1296,
        'v', 137,
      );
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(1231);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(1204);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(1054);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(1055);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(477);
      if (lookahead == 's') ADVANCE(1297);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(924);
      if (lookahead == 's') ADVANCE(1314);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(1223);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(1276);
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(947);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(948);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(949);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(663);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(664);
      END_STATE();
    case 300:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 301:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 302:
      if (lookahead == 'd') ADVANCE(1463);
      END_STATE();
    case 303:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 304:
      if (lookahead == 'd') ADVANCE(1432);
      END_STATE();
    case 305:
      if (lookahead == 'd') ADVANCE(1546);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 307:
      if (lookahead == 'd') ADVANCE(1369);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(1475);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(1504);
      END_STATE();
    case 310:
      if (lookahead == 'd') ADVANCE(1436);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(1377);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(1479);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(1380);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(1491);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(1501);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(1500);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(1502);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(1384);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(1379);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(1411);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(1509);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(1109);
      if (lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(990);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(719);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(570);
      if (lookahead == 'f') ADVANCE(930);
      END_STATE();
    case 327:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 328:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 329:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 330:
      if (lookahead == 'd') ADVANCE(857);
      END_STATE();
    case 331:
      if (lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 332:
      if (lookahead == 'd') ADVANCE(638);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(1042);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 335:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 336:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 337:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 338:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(1171);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(521);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(703);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(1243);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(904);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(1115);
      if (lookahead == 'p') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(1129);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(1311);
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 'o') ADVANCE(1194);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(1130);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(1443);
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(1447);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(1473);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(1464);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(1469);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(1514);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(1393);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(1348);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(1538);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(1515);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(1425);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(1494);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(1467);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1372);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(1422);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1430);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(1386);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(1536);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(1472);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(1365);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(1529);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(1414);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(1429);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(992);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(987);
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(1097);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(1004);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1007);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(1214);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(1121);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 480:
      if (lookahead == 'f') ADVANCE(1159);
      END_STATE();
    case 481:
      if (lookahead == 'f') ADVANCE(864);
      END_STATE();
    case 482:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 483:
      if (lookahead == 'f') ADVANCE(604);
      END_STATE();
    case 484:
      if (lookahead == 'f') ADVANCE(1280);
      END_STATE();
    case 485:
      if (lookahead == 'f') ADVANCE(882);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead == 'w') ADVANCE(1046);
      END_STATE();
    case 486:
      if (lookahead == 'f') ADVANCE(908);
      END_STATE();
    case 487:
      if (lookahead == 'f') ADVANCE(1017);
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 488:
      if (lookahead == 'f') ADVANCE(575);
      END_STATE();
    case 489:
      if (lookahead == 'f') ADVANCE(721);
      if (lookahead == 'w') ADVANCE(601);
      END_STATE();
    case 490:
      if (lookahead == 'f') ADVANCE(878);
      END_STATE();
    case 491:
      if (lookahead == 'f') ADVANCE(621);
      END_STATE();
    case 492:
      if (lookahead == 'f') ADVANCE(600);
      END_STATE();
    case 493:
      if (lookahead == 'f') ADVANCE(605);
      END_STATE();
    case 494:
      if (lookahead == 'f') ADVANCE(935);
      END_STATE();
    case 495:
      if (lookahead == 'g') ADVANCE(1395);
      END_STATE();
    case 496:
      if (lookahead == 'g') ADVANCE(541);
      END_STATE();
    case 497:
      if (lookahead == 'g') ADVANCE(1527);
      END_STATE();
    case 498:
      if (lookahead == 'g') ADVANCE(1403);
      END_STATE();
    case 499:
      if (lookahead == 'g') ADVANCE(1508);
      END_STATE();
    case 500:
      if (lookahead == 'g') ADVANCE(1521);
      END_STATE();
    case 501:
      if (lookahead == 'g') ADVANCE(1367);
      END_STATE();
    case 502:
      if (lookahead == 'g') ADVANCE(1446);
      END_STATE();
    case 503:
      if (lookahead == 'g') ADVANCE(1410);
      END_STATE();
    case 504:
      if (lookahead == 'g') ADVANCE(1493);
      END_STATE();
    case 505:
      if (lookahead == 'g') ADVANCE(1513);
      END_STATE();
    case 506:
      if (lookahead == 'g') ADVANCE(1433);
      END_STATE();
    case 507:
      if (lookahead == 'g') ADVANCE(1492);
      END_STATE();
    case 508:
      if (lookahead == 'g') ADVANCE(1417);
      END_STATE();
    case 509:
      if (lookahead == 'g') ADVANCE(772);
      END_STATE();
    case 510:
      if (lookahead == 'g') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 511:
      if (lookahead == 'g') ADVANCE(901);
      END_STATE();
    case 512:
      if (lookahead == 'g') ADVANCE(1015);
      END_STATE();
    case 513:
      if (lookahead == 'g') ADVANCE(776);
      END_STATE();
    case 514:
      if (lookahead == 'g') ADVANCE(692);
      END_STATE();
    case 515:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 516:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 517:
      if (lookahead == 'g') ADVANCE(456);
      END_STATE();
    case 518:
      if (lookahead == 'g') ADVANCE(1027);
      END_STATE();
    case 519:
      if (lookahead == 'g') ADVANCE(707);
      END_STATE();
    case 520:
      if (lookahead == 'g') ADVANCE(470);
      END_STATE();
    case 521:
      if (lookahead == 'g') ADVANCE(450);
      END_STATE();
    case 522:
      if (lookahead == 'g') ADVANCE(452);
      END_STATE();
    case 523:
      if (lookahead == 'g') ADVANCE(467);
      END_STATE();
    case 524:
      if (lookahead == 'g') ADVANCE(472);
      END_STATE();
    case 525:
      if (lookahead == 'g') ADVANCE(606);
      END_STATE();
    case 526:
      if (lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 527:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 528:
      if (lookahead == 'g') ADVANCE(1053);
      END_STATE();
    case 529:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 530:
      if (lookahead == 'g') ADVANCE(1061);
      END_STATE();
    case 531:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 532:
      if (lookahead == 'h') ADVANCE(1516);
      END_STATE();
    case 533:
      if (lookahead == 'h') ADVANCE(1368);
      END_STATE();
    case 534:
      if (lookahead == 'h') ADVANCE(1503);
      END_STATE();
    case 535:
      if (lookahead == 'h') ADVANCE(1374);
      END_STATE();
    case 536:
      if (lookahead == 'h') ADVANCE(1524);
      END_STATE();
    case 537:
      if (lookahead == 'h') ADVANCE(1465);
      END_STATE();
    case 538:
      if (lookahead == 'h') ADVANCE(1534);
      END_STATE();
    case 539:
      if (lookahead == 'h') ADVANCE(1531);
      END_STATE();
    case 540:
      if (lookahead == 'h') ADVANCE(462);
      END_STATE();
    case 541:
      if (lookahead == 'h') ADVANCE(1136);
      END_STATE();
    case 542:
      if (lookahead == 'h') ADVANCE(616);
      END_STATE();
    case 543:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 544:
      if (lookahead == 'h') ADVANCE(966);
      END_STATE();
    case 545:
      if (lookahead == 'h') ADVANCE(881);
      END_STATE();
    case 546:
      if (lookahead == 'h') ADVANCE(885);
      END_STATE();
    case 547:
      if (lookahead == 'h') ADVANCE(891);
      END_STATE();
    case 548:
      if (lookahead == 'h') ADVANCE(893);
      END_STATE();
    case 549:
      if (lookahead == 'h') ADVANCE(1045);
      END_STATE();
    case 550:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 551:
      if (lookahead == 'h') ADVANCE(468);
      END_STATE();
    case 552:
      if (lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 553:
      if (lookahead == 'h') ADVANCE(634);
      END_STATE();
    case 554:
      if (lookahead == 'h') ADVANCE(635);
      END_STATE();
    case 555:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 556:
      if (lookahead == 'i') ADVANCE(1282);
      END_STATE();
    case 557:
      if (lookahead == 'i') ADVANCE(1307);
      END_STATE();
    case 558:
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(1284);
      END_STATE();
    case 560:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 561:
      if (lookahead == 'i') ADVANCE(1305);
      END_STATE();
    case 562:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(792);
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(842);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(1094);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(1134);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(1155);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(1166);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(1168);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(1174);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(1145);
      END_STATE();
    case 583:
      if (lookahead == 'i') ADVANCE(1203);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 585:
      if (lookahead == 'i') ADVANCE(1281);
      END_STATE();
    case 586:
      if (lookahead == 'i') ADVANCE(1325);
      END_STATE();
    case 587:
      if (lookahead == 'i') ADVANCE(791);
      END_STATE();
    case 588:
      if (lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 589:
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead == 'p') ADVANCE(1260);
      if (lookahead == 's') ADVANCE(1459);
      if (lookahead == 'w') ADVANCE(417);
      END_STATE();
    case 590:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 591:
      if (lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 592:
      if (lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 593:
      if (lookahead == 'i') ADVANCE(1326);
      END_STATE();
    case 594:
      if (lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 595:
      if (lookahead == 'i') ADVANCE(963);
      END_STATE();
    case 596:
      if (lookahead == 'i') ADVANCE(833);
      END_STATE();
    case 597:
      if (lookahead == 'i') ADVANCE(794);
      END_STATE();
    case 598:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 599:
      if (lookahead == 'i') ADVANCE(869);
      END_STATE();
    case 600:
      if (lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 601:
      if (lookahead == 'i') ADVANCE(839);
      END_STATE();
    case 602:
      if (lookahead == 'i') ADVANCE(843);
      END_STATE();
    case 603:
      if (lookahead == 'i') ADVANCE(746);
      END_STATE();
    case 604:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 605:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 606:
      if (lookahead == 'i') ADVANCE(873);
      END_STATE();
    case 607:
      if (lookahead == 'i') ADVANCE(1180);
      END_STATE();
    case 608:
      if (lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 609:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 610:
      if (lookahead == 'i') ADVANCE(841);
      END_STATE();
    case 611:
      if (lookahead == 'i') ADVANCE(1185);
      END_STATE();
    case 612:
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 613:
      if (lookahead == 'i') ADVANCE(799);
      END_STATE();
    case 614:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 615:
      if (lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 616:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 617:
      if (lookahead == 'i') ADVANCE(801);
      END_STATE();
    case 618:
      if (lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 619:
      if (lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 620:
      if (lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 621:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 622:
      if (lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 623:
      if (lookahead == 'i') ADVANCE(880);
      END_STATE();
    case 624:
      if (lookahead == 'i') ADVANCE(846);
      END_STATE();
    case 625:
      if (lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 626:
      if (lookahead == 'i') ADVANCE(806);
      END_STATE();
    case 627:
      if (lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 628:
      if (lookahead == 'i') ADVANCE(807);
      END_STATE();
    case 629:
      if (lookahead == 'i') ADVANCE(824);
      END_STATE();
    case 630:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 631:
      if (lookahead == 'i') ADVANCE(812);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(1283);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(910);
      END_STATE();
    case 634:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 635:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 636:
      if (lookahead == 'i') ADVANCE(918);
      END_STATE();
    case 637:
      if (lookahead == 'i') ADVANCE(1209);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 639:
      if (lookahead == 'i') ADVANCE(851);
      END_STATE();
    case 640:
      if (lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(1285);
      END_STATE();
    case 642:
      if (lookahead == 'k') ADVANCE(1440);
      END_STATE();
    case 643:
      if (lookahead == 'k') ADVANCE(67);
      END_STATE();
    case 644:
      if (lookahead == 'k') ADVANCE(1526);
      END_STATE();
    case 645:
      if (lookahead == 'k') ADVANCE(1402);
      END_STATE();
    case 646:
      if (lookahead == 'k') ADVANCE(1396);
      END_STATE();
    case 647:
      if (lookahead == 'k') ADVANCE(1541);
      END_STATE();
    case 648:
      if (lookahead == 'k') ADVANCE(1537);
      END_STATE();
    case 649:
      if (lookahead == 'k') ADVANCE(1477);
      END_STATE();
    case 650:
      if (lookahead == 'k') ADVANCE(1308);
      END_STATE();
    case 651:
      if (lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 652:
      if (lookahead == 'k') ADVANCE(1091);
      END_STATE();
    case 653:
      if (lookahead == 'k') ADVANCE(1082);
      END_STATE();
    case 654:
      if (lookahead == 'k') ADVANCE(384);
      END_STATE();
    case 655:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 656:
      if (lookahead == 'k') ADVANCE(1236);
      END_STATE();
    case 657:
      if (lookahead == 'k') ADVANCE(1111);
      END_STATE();
    case 658:
      if (lookahead == 'k') ADVANCE(844);
      END_STATE();
    case 659:
      if (lookahead == 'k') ADVANCE(1117);
      END_STATE();
    case 660:
      if (lookahead == 'k') ADVANCE(1122);
      END_STATE();
    case 661:
      if (lookahead == 'k') ADVANCE(1124);
      END_STATE();
    case 662:
      if (lookahead == 'k') ADVANCE(1125);
      END_STATE();
    case 663:
      if (lookahead == 'k') ADVANCE(528);
      END_STATE();
    case 664:
      if (lookahead == 'k') ADVANCE(530);
      END_STATE();
    case 665:
      if (lookahead == 'l') ADVANCE(1434);
      END_STATE();
    case 666:
      if (lookahead == 'l') ADVANCE(1498);
      END_STATE();
    case 667:
      if (lookahead == 'l') ADVANCE(1540);
      END_STATE();
    case 668:
      if (lookahead == 'l') ADVANCE(1505);
      END_STATE();
    case 669:
      if (lookahead == 'l') ADVANCE(1535);
      END_STATE();
    case 670:
      if (lookahead == 'l') ADVANCE(1456);
      END_STATE();
    case 671:
      if (lookahead == 'l') ADVANCE(1448);
      END_STATE();
    case 672:
      if (lookahead == 'l') ADVANCE(1482);
      END_STATE();
    case 673:
      if (lookahead == 'l') ADVANCE(679);
      END_STATE();
    case 674:
      if (lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 675:
      if (lookahead == 'l') ADVANCE(684);
      END_STATE();
    case 676:
      if (lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 677:
      if (lookahead == 'l') ADVANCE(858);
      END_STATE();
    case 678:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 679:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 680:
      if (lookahead == 'l') ADVANCE(1259);
      END_STATE();
    case 681:
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 682:
      if (lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 683:
      if (lookahead == 'l') ADVANCE(1235);
      END_STATE();
    case 684:
      if (lookahead == 'l') ADVANCE(1093);
      END_STATE();
    case 685:
      if (lookahead == 'l') ADVANCE(587);
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 686:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 687:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 688:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 689:
      if (lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 690:
      if (lookahead == 'l') ADVANCE(907);
      END_STATE();
    case 691:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 692:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 693:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 694:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 695:
      if (lookahead == 'l') ADVANCE(861);
      END_STATE();
    case 696:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 697:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 698:
      if (lookahead == 'l') ADVANCE(669);
      END_STATE();
    case 699:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 700:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 701:
      if (lookahead == 'l') ADVANCE(671);
      END_STATE();
    case 702:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 703:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 704:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 705:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 706:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 707:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 708:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 709:
      if (lookahead == 'l') ADVANCE(866);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 's') ADVANCE(1468);
      END_STATE();
    case 710:
      if (lookahead == 'l') ADVANCE(1290);
      END_STATE();
    case 711:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 712:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 713:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 714:
      if (lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 715:
      if (lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 716:
      if (lookahead == 'l') ADVANCE(1270);
      END_STATE();
    case 717:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 718:
      if (lookahead == 'l') ADVANCE(1178);
      END_STATE();
    case 719:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 720:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 721:
      if (lookahead == 'l') ADVANCE(916);
      END_STATE();
    case 722:
      if (lookahead == 'l') ADVANCE(912);
      END_STATE();
    case 723:
      if (lookahead == 'l') ADVANCE(1205);
      END_STATE();
    case 724:
      if (lookahead == 'l') ADVANCE(915);
      END_STATE();
    case 725:
      if (lookahead == 'l') ADVANCE(920);
      END_STATE();
    case 726:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 727:
      if (lookahead == 'l') ADVANCE(938);
      END_STATE();
    case 728:
      if (lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 729:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 730:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 731:
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 732:
      if (lookahead == 'm') ADVANCE(1347);
      END_STATE();
    case 733:
      if (lookahead == 'm') ADVANCE(1517);
      END_STATE();
    case 734:
      if (lookahead == 'm') ADVANCE(1525);
      END_STATE();
    case 735:
      if (lookahead == 'm') ADVANCE(1519);
      END_STATE();
    case 736:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 737:
      if (lookahead == 'm') ADVANCE(1075);
      END_STATE();
    case 738:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 739:
      if (lookahead == 'm') ADVANCE(1240);
      END_STATE();
    case 740:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 741:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 742:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 743:
      if (lookahead == 'm') ADVANCE(921);
      END_STATE();
    case 744:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 745:
      if (lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 746:
      if (lookahead == 'm') ADVANCE(401);
      END_STATE();
    case 747:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 748:
      if (lookahead == 'm') ADVANCE(408);
      END_STATE();
    case 749:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 750:
      if (lookahead == 'm') ADVANCE(1245);
      END_STATE();
    case 751:
      if (lookahead == 'm') ADVANCE(761);
      END_STATE();
    case 752:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 753:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 754:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 755:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 756:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 757:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 758:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 759:
      if (lookahead == 'm') ADVANCE(911);
      END_STATE();
    case 760:
      if (lookahead == 'm') ADVANCE(722);
      END_STATE();
    case 761:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 762:
      if (lookahead == 'm') ADVANCE(923);
      END_STATE();
    case 763:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 764:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 765:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 766:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 767:
      if (lookahead == 'm') ADVANCE(763);
      END_STATE();
    case 768:
      if (lookahead == 'm') ADVANCE(764);
      END_STATE();
    case 769:
      if (lookahead == 'm') ADVANCE(765);
      END_STATE();
    case 770:
      if (lookahead == 'm') ADVANCE(1278);
      END_STATE();
    case 771:
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 772:
      if (lookahead == 'n') ADVANCE(1351);
      END_STATE();
    case 773:
      if (lookahead == 'n') ADVANCE(1460);
      END_STATE();
    case 774:
      if (lookahead == 'n') ADVANCE(1418);
      END_STATE();
    case 775:
      if (lookahead == 'n') ADVANCE(1470);
      END_STATE();
    case 776:
      if (lookahead == 'n') ADVANCE(1510);
      END_STATE();
    case 777:
      if (lookahead == 'n') ADVANCE(1439);
      END_STATE();
    case 778:
      if (lookahead == 'n') ADVANCE(1476);
      END_STATE();
    case 779:
      if (lookahead == 'n') ADVANCE(1437);
      END_STATE();
    case 780:
      if (lookahead == 'n') ADVANCE(1442);
      END_STATE();
    case 781:
      if (lookahead == 'n') ADVANCE(1462);
      END_STATE();
    case 782:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 783:
      if (lookahead == 'n') ADVANCE(1392);
      END_STATE();
    case 784:
      if (lookahead == 'n') ADVANCE(1458);
      END_STATE();
    case 785:
      if (lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 786:
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(413);
      if (lookahead == 'x') ADVANCE(370);
      END_STATE();
    case 787:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 788:
      if (lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 789:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 790:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 791:
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 792:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 793:
      if (lookahead == 'n') ADVANCE(1105);
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 794:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 795:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 796:
      if (lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 797:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 798:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 799:
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 800:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 801:
      if (lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 802:
      if (lookahead == 'n') ADVANCE(1196);
      END_STATE();
    case 803:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 804:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 805:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 806:
      if (lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 807:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 808:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 809:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 810:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 811:
      if (lookahead == 'n') ADVANCE(1135);
      END_STATE();
    case 812:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 813:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 814:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 815:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 816:
      if (lookahead == 'n') ADVANCE(1085);
      END_STATE();
    case 817:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 818:
      if (lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 819:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 820:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 821:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 822:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 823:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 824:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 826:
      if (lookahead == 'n') ADVANCE(1088);
      END_STATE();
    case 827:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 828:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 829:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 830:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 831:
      if (lookahead == 'n') ADVANCE(1144);
      END_STATE();
    case 832:
      if (lookahead == 'n') ADVANCE(1147);
      END_STATE();
    case 833:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 834:
      if (lookahead == 'n') ADVANCE(1152);
      END_STATE();
    case 835:
      if (lookahead == 'n') ADVANCE(1153);
      END_STATE();
    case 836:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 837:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 838:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 839:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 840:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 842:
      if (lookahead == 'n') ADVANCE(520);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 844:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 848:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 849:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(1230);
      END_STATE();
    case 851:
      if (lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 853:
      if (lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 854:
      if (lookahead == 'o') ADVANCE(1023);
      END_STATE();
    case 855:
      if (lookahead == 'o') ADVANCE(789);
      END_STATE();
    case 856:
      if (lookahead == 'o') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 857:
      if (lookahead == 'o') ADVANCE(1286);
      END_STATE();
    case 858:
      if (lookahead == 'o') ADVANCE(991);
      END_STATE();
    case 859:
      if (lookahead == 'o') ADVANCE(1287);
      END_STATE();
    case 860:
      if (lookahead == 'o') ADVANCE(758);
      END_STATE();
    case 861:
      if (lookahead == 'o') ADVANCE(1292);
      END_STATE();
    case 862:
      if (lookahead == 'o') ADVANCE(773);
      END_STATE();
    case 863:
      if (lookahead == 'o') ADVANCE(1266);
      END_STATE();
    case 864:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 865:
      if (lookahead == 'o') ADVANCE(1277);
      END_STATE();
    case 866:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 867:
      if (lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 868:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 869:
      if (lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 870:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 871:
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 872:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 873:
      if (lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 874:
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 875:
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 876:
      if (lookahead == 'o') ADVANCE(779);
      END_STATE();
    case 877:
      if (lookahead == 'o') ADVANCE(780);
      END_STATE();
    case 878:
      if (lookahead == 'o') ADVANCE(1013);
      END_STATE();
    case 879:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 880:
      if (lookahead == 'o') ADVANCE(781);
      END_STATE();
    case 881:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 882:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 883:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 884:
      if (lookahead == 'o') ADVANCE(997);
      END_STATE();
    case 885:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 886:
      if (lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 887:
      if (lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 888:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 889:
      if (lookahead == 'o') ADVANCE(998);
      END_STATE();
    case 890:
      if (lookahead == 'o') ADVANCE(1000);
      END_STATE();
    case 891:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 892:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 893:
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 894:
      if (lookahead == 'o') ADVANCE(1003);
      END_STATE();
    case 895:
      if (lookahead == 'o') ADVANCE(1005);
      END_STATE();
    case 896:
      if (lookahead == 'o') ADVANCE(1006);
      END_STATE();
    case 897:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 898:
      if (lookahead == 'o') ADVANCE(1294);
      END_STATE();
    case 899:
      if (lookahead == 'o') ADVANCE(1244);
      END_STATE();
    case 900:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 901:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 902:
      if (lookahead == 'o') ADVANCE(818);
      END_STATE();
    case 903:
      if (lookahead == 'o') ADVANCE(888);
      END_STATE();
    case 904:
      if (lookahead == 'o') ADVANCE(1293);
      END_STATE();
    case 905:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 906:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 907:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 908:
      if (lookahead == 'o') ADVANCE(1038);
      END_STATE();
    case 909:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 910:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 911:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 912:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 913:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(830);
      END_STATE();
    case 915:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 916:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 917:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 918:
      if (lookahead == 'o') ADVANCE(848);
      END_STATE();
    case 919:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 920:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 921:
      if (lookahead == 'o') ADVANCE(1264);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(1252);
      END_STATE();
    case 923:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 924:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 925:
      if (lookahead == 'o') ADVANCE(1257);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(1258);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(1049);
      END_STATE();
    case 928:
      if (lookahead == 'o') ADVANCE(1052);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(1267);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(1057);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(1268);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 936:
      if (lookahead == 'o') ADVANCE(1059);
      END_STATE();
    case 937:
      if (lookahead == 'o') ADVANCE(1065);
      END_STATE();
    case 938:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 940:
      if (lookahead == 'o') ADVANCE(1272);
      END_STATE();
    case 941:
      if (lookahead == 'o') ADVANCE(1062);
      END_STATE();
    case 942:
      if (lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 943:
      if (lookahead == 'o') ADVANCE(1274);
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 944:
      if (lookahead == 'o') ADVANCE(1064);
      END_STATE();
    case 945:
      if (lookahead == 'o') ADVANCE(1069);
      END_STATE();
    case 946:
      if (lookahead == 'o') ADVANCE(1070);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 948:
      if (lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 949:
      if (lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 950:
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 951:
      if (lookahead == 'p') ADVANCE(1499);
      if (lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 952:
      if (lookahead == 'p') ADVANCE(1454);
      END_STATE();
    case 953:
      if (lookahead == 'p') ADVANCE(1507);
      END_STATE();
    case 954:
      if (lookahead == 'p') ADVANCE(1378);
      END_STATE();
    case 955:
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(1154);
      END_STATE();
    case 956:
      if (lookahead == 'p') ADVANCE(1076);
      END_STATE();
    case 957:
      if (lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 958:
      if (lookahead == 'p') ADVANCE(1128);
      if (lookahead == 'x') ADVANCE(1554);
      END_STATE();
    case 959:
      if (lookahead == 'p') ADVANCE(1212);
      END_STATE();
    case 960:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 961:
      if (lookahead == 'p') ADVANCE(1123);
      END_STATE();
    case 962:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 963:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 964:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 965:
      if (lookahead == 'p') ADVANCE(1083);
      END_STATE();
    case 966:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 967:
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 't') ADVANCE(903);
      END_STATE();
    case 968:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 969:
      if (lookahead == 'p') ADVANCE(1167);
      END_STATE();
    case 970:
      if (lookahead == 'p') ADVANCE(1247);
      END_STATE();
    case 971:
      if (lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 972:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 973:
      if (lookahead == 'p') ADVANCE(700);
      END_STATE();
    case 974:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 975:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 976:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 977:
      if (lookahead == 'p') ADVANCE(1253);
      END_STATE();
    case 978:
      if (lookahead == 'p') ADVANCE(1254);
      END_STATE();
    case 979:
      if (lookahead == 'p') ADVANCE(1255);
      END_STATE();
    case 980:
      if (lookahead == 'p') ADVANCE(1219);
      END_STATE();
    case 981:
      if (lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 982:
      if (lookahead == 'p') ADVANCE(620);
      END_STATE();
    case 983:
      if (lookahead == 'p') ADVANCE(628);
      END_STATE();
    case 984:
      if (lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 985:
      if (lookahead == 'p') ADVANCE(982);
      END_STATE();
    case 986:
      if (lookahead == 'p') ADVANCE(984);
      END_STATE();
    case 987:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 988:
      if (lookahead == 'p') ADVANCE(1072);
      END_STATE();
    case 989:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 990:
      if (lookahead == 'r') ADVANCE(1420);
      END_STATE();
    case 991:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 992:
      if (lookahead == 'r') ADVANCE(1461);
      END_STATE();
    case 993:
      if (lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 994:
      if (lookahead == 'r') ADVANCE(1389);
      END_STATE();
    case 995:
      if (lookahead == 'r') ADVANCE(1455);
      END_STATE();
    case 996:
      if (lookahead == 'r') ADVANCE(1445);
      END_STATE();
    case 997:
      if (lookahead == 'r') ADVANCE(1481);
      END_STATE();
    case 998:
      if (lookahead == 'r') ADVANCE(1423);
      END_STATE();
    case 999:
      if (lookahead == 'r') ADVANCE(1474);
      END_STATE();
    case 1000:
      if (lookahead == 'r') ADVANCE(1478);
      END_STATE();
    case 1001:
      if (lookahead == 'r') ADVANCE(1390);
      END_STATE();
    case 1002:
      if (lookahead == 'r') ADVANCE(1406);
      END_STATE();
    case 1003:
      if (lookahead == 'r') ADVANCE(1412);
      END_STATE();
    case 1004:
      if (lookahead == 'r') ADVANCE(1383);
      END_STATE();
    case 1005:
      if (lookahead == 'r') ADVANCE(1483);
      END_STATE();
    case 1006:
      if (lookahead == 'r') ADVANCE(1373);
      END_STATE();
    case 1007:
      if (lookahead == 'r') ADVANCE(1391);
      END_STATE();
    case 1008:
      if (lookahead == 'r') ADVANCE(1106);
      END_STATE();
    case 1009:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 1010:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 1011:
      if (lookahead == 'r') ADVANCE(1318);
      END_STATE();
    case 1012:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 1013:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 1014:
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 1015:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 1016:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 1017:
      if (lookahead == 'r') ADVANCE(860);
      END_STATE();
    case 1018:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 1019:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 1020:
      if (lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 1021:
      if (lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 1022:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 1023:
      if (lookahead == 'r') ADVANCE(1163);
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 1024:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 1025:
      if (lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 1026:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 1027:
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 1028:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 1029:
      if (lookahead == 'r') ADVANCE(1086);
      END_STATE();
    case 1030:
      if (lookahead == 'r') ADVANCE(1140);
      END_STATE();
    case 1031:
      if (lookahead == 'r') ADVANCE(1087);
      END_STATE();
    case 1032:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 1033:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 1034:
      if (lookahead == 'r') ADVANCE(1089);
      END_STATE();
    case 1035:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 1036:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 1037:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 1038:
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 1039:
      if (lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 1040:
      if (lookahead == 'r') ADVANCE(981);
      END_STATE();
    case 1041:
      if (lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 1042:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 1043:
      if (lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 1044:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 1045:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 1046:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 1047:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 1048:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 1049:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 1050:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 1051:
      if (lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 1052:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 1053:
      if (lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 1054:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 1055:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 1056:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 1057:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 1058:
      if (lookahead == 'r') ADVANCE(1114);
      END_STATE();
    case 1059:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 1060:
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 1061:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 1062:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 1063:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 1064:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 1065:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 1066:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 1067:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 1069:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 1070:
      if (lookahead == 'r') ADVANCE(662);
      END_STATE();
    case 1071:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 1072:
      if (lookahead == 'r') ADVANCE(939);
      END_STATE();
    case 1073:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 1074:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 1075:
      if (lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 1076:
      if (lookahead == 's') ADVANCE(1419);
      END_STATE();
    case 1077:
      if (lookahead == 's') ADVANCE(1407);
      END_STATE();
    case 1078:
      if (lookahead == 's') ADVANCE(1400);
      END_STATE();
    case 1079:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 1080:
      if (lookahead == 's') ADVANCE(1355);
      END_STATE();
    case 1081:
      if (lookahead == 's') ADVANCE(1543);
      END_STATE();
    case 1082:
      if (lookahead == 's') ADVANCE(1484);
      END_STATE();
    case 1083:
      if (lookahead == 's') ADVANCE(1486);
      END_STATE();
    case 1084:
      if (lookahead == 's') ADVANCE(1350);
      END_STATE();
    case 1085:
      if (lookahead == 's') ADVANCE(1542);
      END_STATE();
    case 1086:
      if (lookahead == 's') ADVANCE(1485);
      END_STATE();
    case 1087:
      if (lookahead == 's') ADVANCE(1424);
      END_STATE();
    case 1088:
      if (lookahead == 's') ADVANCE(1532);
      END_STATE();
    case 1089:
      if (lookahead == 's') ADVANCE(1497);
      END_STATE();
    case 1090:
      if (lookahead == 's') ADVANCE(1512);
      END_STATE();
    case 1091:
      if (lookahead == 's') ADVANCE(964);
      END_STATE();
    case 1092:
      if (lookahead == 's') ADVANCE(1313);
      END_STATE();
    case 1093:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 1094:
      if (lookahead == 's') ADVANCE(973);
      END_STATE();
    case 1095:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 1096:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 1097:
      if (lookahead == 's') ADVANCE(1090);
      END_STATE();
    case 1098:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 1099:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 1100:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 1101:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 1102:
      if (lookahead == 's') ADVANCE(1192);
      END_STATE();
    case 1103:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 1104:
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 1105:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 1106:
      if (lookahead == 's') ADVANCE(871);
      END_STATE();
    case 1107:
      if (lookahead == 's') ADVANCE(1315);
      END_STATE();
    case 1108:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 1109:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 1110:
      if (lookahead == 's') ADVANCE(874);
      END_STATE();
    case 1111:
      if (lookahead == 's') ADVANCE(968);
      END_STATE();
    case 1112:
      if (lookahead == 's') ADVANCE(715);
      END_STATE();
    case 1113:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 1114:
      if (lookahead == 's') ADVANCE(889);
      END_STATE();
    case 1115:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 1116:
      if (lookahead == 's') ADVANCE(1195);
      END_STATE();
    case 1117:
      if (lookahead == 's') ADVANCE(972);
      END_STATE();
    case 1118:
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 1119:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 1120:
      if (lookahead == 's') ADVANCE(1202);
      END_STATE();
    case 1121:
      if (lookahead == 's') ADVANCE(1197);
      END_STATE();
    case 1122:
      if (lookahead == 's') ADVANCE(974);
      END_STATE();
    case 1123:
      if (lookahead == 's') ADVANCE(724);
      END_STATE();
    case 1124:
      if (lookahead == 's') ADVANCE(975);
      END_STATE();
    case 1125:
      if (lookahead == 's') ADVANCE(976);
      END_STATE();
    case 1126:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 1127:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 1128:
      if (lookahead == 't') ADVANCE(1554);
      END_STATE();
    case 1129:
      if (lookahead == 't') ADVANCE(1397);
      END_STATE();
    case 1130:
      if (lookahead == 't') ADVANCE(1401);
      END_STATE();
    case 1131:
      if (lookahead == 't') ADVANCE(1415);
      END_STATE();
    case 1132:
      if (lookahead == 't') ADVANCE(1480);
      END_STATE();
    case 1133:
      if (lookahead == 't') ADVANCE(1431);
      END_STATE();
    case 1134:
      if (lookahead == 't') ADVANCE(1487);
      END_STATE();
    case 1135:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 1136:
      if (lookahead == 't') ADVANCE(1421);
      END_STATE();
    case 1137:
      if (lookahead == 't') ADVANCE(1435);
      END_STATE();
    case 1138:
      if (lookahead == 't') ADVANCE(1453);
      END_STATE();
    case 1139:
      if (lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 1140:
      if (lookahead == 't') ADVANCE(1471);
      END_STATE();
    case 1141:
      if (lookahead == 't') ADVANCE(1449);
      END_STATE();
    case 1142:
      if (lookahead == 't') ADVANCE(1539);
      END_STATE();
    case 1143:
      if (lookahead == 't') ADVANCE(1520);
      END_STATE();
    case 1144:
      if (lookahead == 't') ADVANCE(1545);
      END_STATE();
    case 1145:
      if (lookahead == 't') ADVANCE(1427);
      END_STATE();
    case 1146:
      if (lookahead == 't') ADVANCE(1511);
      END_STATE();
    case 1147:
      if (lookahead == 't') ADVANCE(1385);
      END_STATE();
    case 1148:
      if (lookahead == 't') ADVANCE(1388);
      END_STATE();
    case 1149:
      if (lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 1150:
      if (lookahead == 't') ADVANCE(1533);
      END_STATE();
    case 1151:
      if (lookahead == 't') ADVANCE(1544);
      END_STATE();
    case 1152:
      if (lookahead == 't') ADVANCE(1457);
      END_STATE();
    case 1153:
      if (lookahead == 't') ADVANCE(1416);
      END_STATE();
    case 1154:
      if (lookahead == 't') ADVANCE(970);
      END_STATE();
    case 1155:
      if (lookahead == 't') ADVANCE(1309);
      END_STATE();
    case 1156:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 1157:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 1158:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 1159:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 1160:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 1161:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 1162:
      if (lookahead == 't') ADVANCE(1078);
      END_STATE();
    case 1163:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 1164:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 1165:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 1166:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 1167:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 1168:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 1169:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 1170:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 1171:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 1172:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 1173:
      if (lookahead == 't') ADVANCE(1098);
      END_STATE();
    case 1174:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 1175:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 1176:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 1177:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 1178:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 1179:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 1180:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 1181:
      if (lookahead == 't') ADVANCE(1028);
      END_STATE();
    case 1182:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 1183:
      if (lookahead == 't') ADVANCE(1217);
      END_STATE();
    case 1184:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 1185:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 1186:
      if (lookahead == 't') ADVANCE(1234);
      END_STATE();
    case 1187:
      if (lookahead == 't') ADVANCE(1237);
      END_STATE();
    case 1188:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 1189:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 1190:
      if (lookahead == 't') ADVANCE(1200);
      END_STATE();
    case 1191:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 1192:
      if (lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 1193:
      if (lookahead == 't') ADVANCE(897);
      END_STATE();
    case 1194:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 1195:
      if (lookahead == 't') ADVANCE(1263);
      END_STATE();
    case 1196:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 1197:
      if (lookahead == 't') ADVANCE(1265);
      END_STATE();
    case 1198:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 1199:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 1200:
      if (lookahead == 't') ADVANCE(875);
      END_STATE();
    case 1201:
      if (lookahead == 't') ADVANCE(1248);
      END_STATE();
    case 1202:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 1203:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 1204:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 1205:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 1206:
      if (lookahead == 't') ADVANCE(894);
      END_STATE();
    case 1207:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 1208:
      if (lookahead == 't') ADVANCE(909);
      END_STATE();
    case 1209:
      if (lookahead == 't') ADVANCE(895);
      END_STATE();
    case 1210:
      if (lookahead == 't') ADVANCE(896);
      END_STATE();
    case 1211:
      if (lookahead == 't') ADVANCE(977);
      END_STATE();
    case 1212:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 1213:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 1214:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 1215:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 1216:
      if (lookahead == 't') ADVANCE(1208);
      END_STATE();
    case 1217:
      if (lookahead == 't') ADVANCE(914);
      END_STATE();
    case 1218:
      if (lookahead == 't') ADVANCE(978);
      END_STATE();
    case 1219:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 1220:
      if (lookahead == 't') ADVANCE(979);
      END_STATE();
    case 1221:
      if (lookahead == 't') ADVANCE(931);
      END_STATE();
    case 1222:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 1223:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 1224:
      if (lookahead == 't') ADVANCE(625);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 1226:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(1221);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 1231:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 1232:
      if (lookahead == 'u') ADVANCE(760);
      END_STATE();
    case 1233:
      if (lookahead == 'u') ADVANCE(1077);
      END_STATE();
    case 1234:
      if (lookahead == 'u') ADVANCE(1019);
      END_STATE();
    case 1235:
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 1236:
      if (lookahead == 'u') ADVANCE(952);
      END_STATE();
    case 1237:
      if (lookahead == 'u') ADVANCE(1079);
      END_STATE();
    case 1238:
      if (lookahead == 'u') ADVANCE(1080);
      END_STATE();
    case 1239:
      if (lookahead == 'u') ADVANCE(1133);
      END_STATE();
    case 1240:
      if (lookahead == 'u') ADVANCE(747);
      END_STATE();
    case 1241:
      if (lookahead == 'u') ADVANCE(718);
      END_STATE();
    case 1242:
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 1243:
      if (lookahead == 'u') ADVANCE(1060);
      END_STATE();
    case 1244:
      if (lookahead == 'u') ADVANCE(1137);
      END_STATE();
    case 1245:
      if (lookahead == 'u') ADVANCE(720);
      END_STATE();
    case 1246:
      if (lookahead == 'u') ADVANCE(1099);
      END_STATE();
    case 1247:
      if (lookahead == 'u') ADVANCE(1138);
      END_STATE();
    case 1248:
      if (lookahead == 'u') ADVANCE(1112);
      END_STATE();
    case 1249:
      if (lookahead == 'u') ADVANCE(1183);
      END_STATE();
    case 1250:
      if (lookahead == 'u') ADVANCE(1173);
      END_STATE();
    case 1251:
      if (lookahead == 'u') ADVANCE(1050);
      END_STATE();
    case 1252:
      if (lookahead == 'u') ADVANCE(1142);
      END_STATE();
    case 1253:
      if (lookahead == 'u') ADVANCE(1143);
      END_STATE();
    case 1254:
      if (lookahead == 'u') ADVANCE(1148);
      END_STATE();
    case 1255:
      if (lookahead == 'u') ADVANCE(1149);
      END_STATE();
    case 1256:
      if (lookahead == 'u') ADVANCE(1193);
      END_STATE();
    case 1257:
      if (lookahead == 'u') ADVANCE(1150);
      END_STATE();
    case 1258:
      if (lookahead == 'u') ADVANCE(1151);
      END_STATE();
    case 1259:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 1260:
      if (lookahead == 'u') ADVANCE(962);
      END_STATE();
    case 1261:
      if (lookahead == 'u') ADVANCE(1100);
      END_STATE();
    case 1262:
      if (lookahead == 'u') ADVANCE(1101);
      END_STATE();
    case 1263:
      if (lookahead == 'u') ADVANCE(1033);
      END_STATE();
    case 1264:
      if (lookahead == 'u') ADVANCE(1103);
      END_STATE();
    case 1265:
      if (lookahead == 'u') ADVANCE(1037);
      END_STATE();
    case 1266:
      if (lookahead == 'u') ADVANCE(804);
      END_STATE();
    case 1267:
      if (lookahead == 'u') ADVANCE(825);
      END_STATE();
    case 1268:
      if (lookahead == 'u') ADVANCE(828);
      END_STATE();
    case 1269:
      if (lookahead == 'u') ADVANCE(1211);
      END_STATE();
    case 1270:
      if (lookahead == 'u') ADVANCE(1215);
      END_STATE();
    case 1271:
      if (lookahead == 'u') ADVANCE(1190);
      END_STATE();
    case 1272:
      if (lookahead == 'u') ADVANCE(1218);
      END_STATE();
    case 1273:
      if (lookahead == 'u') ADVANCE(1216);
      END_STATE();
    case 1274:
      if (lookahead == 'u') ADVANCE(1220);
      END_STATE();
    case 1275:
      if (lookahead == 'u') ADVANCE(1051);
      END_STATE();
    case 1276:
      if (lookahead == 'u') ADVANCE(1058);
      END_STATE();
    case 1277:
      if (lookahead == 'u') ADVANCE(983);
      END_STATE();
    case 1278:
      if (lookahead == 'u') ADVANCE(766);
      END_STATE();
    case 1279:
      if (lookahead == 'u') ADVANCE(1228);
      END_STATE();
    case 1280:
      if (lookahead == 'u') ADVANCE(731);
      END_STATE();
    case 1281:
      if (lookahead == 'v') ADVANCE(411);
      END_STATE();
    case 1282:
      if (lookahead == 'v') ADVANCE(478);
      END_STATE();
    case 1283:
      if (lookahead == 'v') ADVANCE(445);
      END_STATE();
    case 1284:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 1285:
      if (lookahead == 'v') ADVANCE(479);
      END_STATE();
    case 1286:
      if (lookahead == 'w') ADVANCE(1352);
      END_STATE();
    case 1287:
      if (lookahead == 'w') ADVANCE(1450);
      END_STATE();
    case 1288:
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 1289:
      if (lookahead == 'w') ADVANCE(928);
      END_STATE();
    case 1290:
      if (lookahead == 'w') ADVANCE(121);
      END_STATE();
    case 1291:
      if (lookahead == 'w') ADVANCE(579);
      END_STATE();
    case 1292:
      if (lookahead == 'w') ADVANCE(1108);
      END_STATE();
    case 1293:
      if (lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 1294:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 1295:
      if (lookahead == 'w') ADVANCE(578);
      if (lookahead == 'y') ADVANCE(732);
      END_STATE();
    case 1296:
      if (lookahead == 'w') ADVANCE(580);
      END_STATE();
    case 1297:
      if (lookahead == 'w') ADVANCE(581);
      if (lookahead == 'y') ADVANCE(734);
      END_STATE();
    case 1298:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 1299:
      if (lookahead == 'w') ADVANCE(592);
      END_STATE();
    case 1300:
      if (lookahead == 'w') ADVANCE(937);
      END_STATE();
    case 1301:
      if (lookahead == 'w') ADVANCE(619);
      END_STATE();
    case 1302:
      if (lookahead == 'w') ADVANCE(942);
      END_STATE();
    case 1303:
      if (lookahead == 'w') ADVANCE(946);
      END_STATE();
    case 1304:
      if (lookahead == 'w') ADVANCE(1073);
      END_STATE();
    case 1305:
      if (lookahead == 'x') ADVANCE(1376);
      END_STATE();
    case 1306:
      if (lookahead == 'x') ADVANCE(569);
      END_STATE();
    case 1307:
      if (lookahead == 'x') ADVANCE(436);
      END_STATE();
    case 1308:
      if (lookahead == 'y') ADVANCE(1495);
      END_STATE();
    case 1309:
      if (lookahead == 'y') ADVANCE(1452);
      END_STATE();
    case 1310:
      if (lookahead == 'y') ADVANCE(1466);
      END_STATE();
    case 1311:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 1312:
      if (lookahead == 'y') ADVANCE(899);
      END_STATE();
    case 1313:
      if (lookahead == 'y') ADVANCE(810);
      END_STATE();
    case 1314:
      if (lookahead == 'y') ADVANCE(735);
      END_STATE();
    case 1315:
      if (lookahead == 'y') ADVANCE(749);
      END_STATE();
    case 1316:
      if (lookahead == 'y') ADVANCE(694);
      END_STATE();
    case 1317:
      if (lookahead == 'y') ADVANCE(1084);
      END_STATE();
    case 1318:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 1319:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 1320:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 1321:
      if (lookahead == 'y') ADVANCE(922);
      END_STATE();
    case 1322:
      if (lookahead == 'y') ADVANCE(925);
      END_STATE();
    case 1323:
      if (lookahead == 'y') ADVANCE(926);
      END_STATE();
    case 1324:
      if (lookahead == 'z') ADVANCE(377);
      END_STATE();
    case 1325:
      if (lookahead == 'z') ADVANCE(409);
      END_STATE();
    case 1326:
      if (lookahead == 'z') ADVANCE(410);
      END_STATE();
    case 1327:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1557);
      END_STATE();
    case 1328:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1556);
      END_STATE();
    case 1329:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1327);
      END_STATE();
    case 1330:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1329);
      END_STATE();
    case 1331:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1330);
      END_STATE();
    case 1332:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1331);
      END_STATE();
    case 1333:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1332);
      END_STATE();
    case 1334:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1550);
      END_STATE();
    case 1335:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1336:
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1547);
      END_STATE();
    case 1337:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1548);
      END_STATE();
    case 1338:
      if (eof) ADVANCE(1340);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 1339:
      if (eof) ADVANCE(1340);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(1338);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1345);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(1343);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1345);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1345);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_bar);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_criteria_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1361);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_criteria_value_token1);
      if (lookahead == '\\') ADVANCE(1363);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(1362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1363);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_criteria_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(1363);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_accel_profile);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_active_workspace);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_adaptive_sync);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_allow_tearing);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_attach);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_bindgesture);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_binding_mode);
      if (lookahead == '_') ADVANCE(629);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_binding_mode_indicator);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_bindswitch);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_calibration_matrix);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_click_method);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_clickfinger_button_map);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_client_DOTbackground);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused);
      if (lookahead == '_') ADVANCE(573);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused_inactive);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused_tab_title);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_client_DOTplaceholder);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_client_DOTunfocused);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_client_DOTurgent);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_color_profile);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_colors);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_create_output);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_cursor);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_dpms);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_drag);
      if (lookahead == '_') ADVANCE(690);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_drag_lock);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_dwt);
      if (lookahead == 'p') ADVANCE(1398);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_dwtp);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_events);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_floating);
      if (lookahead == '_') ADVANCE(736);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_focused_background);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_focused_separator);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_focused_statusline);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_focused_workspace);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_force_display_urgency_hint);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_force_focus_wrapping);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_gaps);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_hdr);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_hidden_state);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_hide_cursor);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_icon_theme);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_idle_inhibit);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_idle_wake);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_inactive_workspace);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_inhibit_idle);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_keyboard);
      if (lookahead == '_') ADVANCE(518);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_keyboard_grouping);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_left_handed);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_map_from_region);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_map_to_output);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_map_to_region);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_max_render_time);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_middle_emulation);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_modeline);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_natural_scroll);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_new_float);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_new_window);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_pango_markup);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (lookahead == '_') ADVANCE(138);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_pointer_accel);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_pointer_constraint);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_pos);
      if (lookahead == 'i') ADVANCE(1164);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_power);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_primary_selection);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_render_bit_depth);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_repeat_delay);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_repeat_rate);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_res);
      if (lookahead == 'i') ADVANCE(1324);
      if (lookahead == 'o') ADVANCE(716);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_resize);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_resolution);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_rotation_angle);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_scale);
      if (lookahead == '_') ADVANCE(488);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_scale_filter);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_scratchpad);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_scroll_button);
      if (lookahead == '_') ADVANCE(725);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_scroll_button_lock);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_scroll_factor);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_scroll_method);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_seat);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_separator);
      if (lookahead == '_') ADVANCE(1107);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_separator_symbol);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_shortcuts_inhibitor);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_smart_borders);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_smart_gaps);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == 'h') ADVANCE(1488);
      if (lookahead == 't') ADVANCE(1489);
      if (lookahead == 'v') ADVANCE(1490);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_splith);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_splitt);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_splitv);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_status_command);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_status_edge_padding);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_status_padding);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_statusline);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_sticky);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_strip_workspace_name);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_strip_workspace_numbers);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_subpixel);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_swap);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_swaybar_command);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_swaybg_command);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_swaynag_command);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_tablet_pad);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_tablet_tool);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_tap);
      if (lookahead == '_') ADVANCE(222);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_tap_button_map);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      if (lookahead == '_') ADVANCE(1165);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_tiling_drag_threshold);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_title_format);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_titlebar_border_thickness);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_titlebar_padding);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_tool_mode);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_touch);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_tray_bindcode);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_tray_bindsym);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_tray_output);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_tray_padding);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_unbindcode);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_unbindgesture);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_unbindswitch);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_unbindsym);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_unmark);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_unplug);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_urgent);
      if (lookahead == '_') ADVANCE(1302);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_urgent_workspace);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(186);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_workspace_buttons);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_workspace_min_width);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_wrap_scroll);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_xcursor_theme);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_xkb_capslock);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_xkb_file);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_xkb_layout);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_xkb_model);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_xkb_numlock);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_xkb_options);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_xkb_rules);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_xkb_switch_layout);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_xkb_variant);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_xwayland);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1547);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1548);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1550);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1551);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(1571);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1554);
      if (lookahead == 'p') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1552);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(1555);
      if (lookahead == 'p') ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1553);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(1571);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_unit_value);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_unit_value);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(1571);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1328);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1559);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1560);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1560);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\r') ADVANCE(1567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-') ADVANCE(1564);
      if (lookahead == '\\') ADVANCE(1562);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-') ADVANCE(1566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\\') ADVANCE(1562);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_command);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1569);
      if (lookahead == 'x') ADVANCE(1555);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(1571);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1555);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(1571);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1551);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(1571);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_word);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(1571);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1344},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_bindsym] = ACTIONS(1),
    [anon_sym_bindcode] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_exec_always] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_for_window] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_no_focus] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_bar] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_accel_profile] = ACTIONS(1),
    [anon_sym_active_workspace] = ACTIONS(1),
    [anon_sym_adaptive_sync] = ACTIONS(1),
    [anon_sym_allow_tearing] = ACTIONS(1),
    [anon_sym_attach] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_bg] = ACTIONS(1),
    [anon_sym_bindgesture] = ACTIONS(1),
    [anon_sym_binding_mode] = ACTIONS(1),
    [anon_sym_binding_mode_indicator] = ACTIONS(1),
    [anon_sym_bindswitch] = ACTIONS(1),
    [anon_sym_border] = ACTIONS(1),
    [anon_sym_calibration_matrix] = ACTIONS(1),
    [anon_sym_click_method] = ACTIONS(1),
    [anon_sym_clickfinger_button_map] = ACTIONS(1),
    [anon_sym_client_DOTbackground] = ACTIONS(1),
    [anon_sym_client_DOTfocused] = ACTIONS(1),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(1),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(1),
    [anon_sym_client_DOTplaceholder] = ACTIONS(1),
    [anon_sym_client_DOTunfocused] = ACTIONS(1),
    [anon_sym_client_DOTurgent] = ACTIONS(1),
    [anon_sym_color_profile] = ACTIONS(1),
    [anon_sym_colors] = ACTIONS(1),
    [anon_sym_create_output] = ACTIONS(1),
    [anon_sym_cursor] = ACTIONS(1),
    [anon_sym_default_border] = ACTIONS(1),
    [anon_sym_default_floating_border] = ACTIONS(1),
    [anon_sym_default_orientation] = ACTIONS(1),
    [anon_sym_disable] = ACTIONS(1),
    [anon_sym_dpms] = ACTIONS(1),
    [anon_sym_drag] = ACTIONS(1),
    [anon_sym_drag_lock] = ACTIONS(1),
    [anon_sym_dwt] = ACTIONS(1),
    [anon_sym_dwtp] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_events] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_floating] = ACTIONS(1),
    [anon_sym_floating_maximum_size] = ACTIONS(1),
    [anon_sym_floating_minimum_size] = ACTIONS(1),
    [anon_sym_floating_modifier] = ACTIONS(1),
    [anon_sym_focus] = ACTIONS(1),
    [anon_sym_focus_follows_mouse] = ACTIONS(1),
    [anon_sym_focus_on_window_activation] = ACTIONS(1),
    [anon_sym_focus_wrapping] = ACTIONS(1),
    [anon_sym_focused_background] = ACTIONS(1),
    [anon_sym_focused_separator] = ACTIONS(1),
    [anon_sym_focused_statusline] = ACTIONS(1),
    [anon_sym_focused_workspace] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_force_display_urgency_hint] = ACTIONS(1),
    [anon_sym_force_focus_wrapping] = ACTIONS(1),
    [anon_sym_fullscreen] = ACTIONS(1),
    [anon_sym_gaps] = ACTIONS(1),
    [anon_sym_hdr] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_hidden_state] = ACTIONS(1),
    [anon_sym_hide_cursor] = ACTIONS(1),
    [anon_sym_hide_edge_borders] = ACTIONS(1),
    [anon_sym_icon_theme] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_idle_inhibit] = ACTIONS(1),
    [anon_sym_idle_wake] = ACTIONS(1),
    [anon_sym_inactive_workspace] = ACTIONS(1),
    [anon_sym_inhibit_idle] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_keyboard] = ACTIONS(1),
    [anon_sym_keyboard_grouping] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_left_handed] = ACTIONS(1),
    [anon_sym_map_from_region] = ACTIONS(1),
    [anon_sym_map_to_output] = ACTIONS(1),
    [anon_sym_map_to_region] = ACTIONS(1),
    [anon_sym_mark] = ACTIONS(1),
    [anon_sym_max_render_time] = ACTIONS(1),
    [anon_sym_middle_emulation] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_modeline] = ACTIONS(1),
    [anon_sym_modifier] = ACTIONS(1),
    [anon_sym_mouse_warping] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_natural_scroll] = ACTIONS(1),
    [anon_sym_new_float] = ACTIONS(1),
    [anon_sym_new_window] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_pango_markup] = ACTIONS(1),
    [anon_sym_pointer] = ACTIONS(1),
    [anon_sym_pointer_accel] = ACTIONS(1),
    [anon_sym_pointer_constraint] = ACTIONS(1),
    [anon_sym_popup_during_fullscreen] = ACTIONS(1),
    [anon_sym_pos] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_power] = ACTIONS(1),
    [anon_sym_primary_selection] = ACTIONS(1),
    [anon_sym_reload] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
    [anon_sym_render_bit_depth] = ACTIONS(1),
    [anon_sym_repeat_delay] = ACTIONS(1),
    [anon_sym_repeat_rate] = ACTIONS(1),
    [anon_sym_res] = ACTIONS(1),
    [anon_sym_resize] = ACTIONS(1),
    [anon_sym_resolution] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
    [anon_sym_rotation_angle] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [anon_sym_scale_filter] = ACTIONS(1),
    [anon_sym_scratchpad] = ACTIONS(1),
    [anon_sym_scroll_button] = ACTIONS(1),
    [anon_sym_scroll_button_lock] = ACTIONS(1),
    [anon_sym_scroll_factor] = ACTIONS(1),
    [anon_sym_scroll_method] = ACTIONS(1),
    [anon_sym_seat] = ACTIONS(1),
    [anon_sym_separator] = ACTIONS(1),
    [anon_sym_separator_symbol] = ACTIONS(1),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(1),
    [anon_sym_show_marks] = ACTIONS(1),
    [anon_sym_smart_borders] = ACTIONS(1),
    [anon_sym_smart_gaps] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(1),
    [anon_sym_splith] = ACTIONS(1),
    [anon_sym_splitt] = ACTIONS(1),
    [anon_sym_splitv] = ACTIONS(1),
    [anon_sym_status_command] = ACTIONS(1),
    [anon_sym_status_edge_padding] = ACTIONS(1),
    [anon_sym_status_padding] = ACTIONS(1),
    [anon_sym_statusline] = ACTIONS(1),
    [anon_sym_sticky] = ACTIONS(1),
    [anon_sym_strip_workspace_name] = ACTIONS(1),
    [anon_sym_strip_workspace_numbers] = ACTIONS(1),
    [anon_sym_subpixel] = ACTIONS(1),
    [anon_sym_swap] = ACTIONS(1),
    [anon_sym_swaybar_command] = ACTIONS(1),
    [anon_sym_swaybg_command] = ACTIONS(1),
    [anon_sym_swaynag_command] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_tablet_pad] = ACTIONS(1),
    [anon_sym_tablet_tool] = ACTIONS(1),
    [anon_sym_tap] = ACTIONS(1),
    [anon_sym_tap_button_map] = ACTIONS(1),
    [anon_sym_tiling_drag] = ACTIONS(1),
    [anon_sym_tiling_drag_threshold] = ACTIONS(1),
    [anon_sym_title_align] = ACTIONS(1),
    [anon_sym_title_format] = ACTIONS(1),
    [anon_sym_titlebar_border_thickness] = ACTIONS(1),
    [anon_sym_titlebar_padding] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_tool_mode] = ACTIONS(1),
    [anon_sym_touch] = ACTIONS(1),
    [anon_sym_transform] = ACTIONS(1),
    [anon_sym_tray_bindcode] = ACTIONS(1),
    [anon_sym_tray_bindsym] = ACTIONS(1),
    [anon_sym_tray_output] = ACTIONS(1),
    [anon_sym_tray_padding] = ACTIONS(1),
    [anon_sym_unbindcode] = ACTIONS(1),
    [anon_sym_unbindgesture] = ACTIONS(1),
    [anon_sym_unbindswitch] = ACTIONS(1),
    [anon_sym_unbindsym] = ACTIONS(1),
    [anon_sym_unmark] = ACTIONS(1),
    [anon_sym_unplug] = ACTIONS(1),
    [anon_sym_urgent] = ACTIONS(1),
    [anon_sym_urgent_workspace] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(1),
    [anon_sym_workspace_buttons] = ACTIONS(1),
    [anon_sym_workspace_layout] = ACTIONS(1),
    [anon_sym_workspace_min_width] = ACTIONS(1),
    [anon_sym_wrap_scroll] = ACTIONS(1),
    [anon_sym_xcursor_theme] = ACTIONS(1),
    [anon_sym_xkb_capslock] = ACTIONS(1),
    [anon_sym_xkb_file] = ACTIONS(1),
    [anon_sym_xkb_layout] = ACTIONS(1),
    [anon_sym_xkb_model] = ACTIONS(1),
    [anon_sym_xkb_numlock] = ACTIONS(1),
    [anon_sym_xkb_options] = ACTIONS(1),
    [anon_sym_xkb_rules] = ACTIONS(1),
    [anon_sym_xkb_switch_layout] = ACTIONS(1),
    [anon_sym_xkb_variant] = ACTIONS(1),
    [anon_sym_xwayland] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_unit_value] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym_statement] = STATE(4),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_source_file_token1] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(40),
    [anon_sym_set] = ACTIONS(43),
    [anon_sym_bindsym] = ACTIONS(46),
    [anon_sym_bindcode] = ACTIONS(49),
    [anon_sym_exec] = ACTIONS(52),
    [anon_sym_exec_always] = ACTIONS(55),
    [anon_sym_assign] = ACTIONS(58),
    [anon_sym_for_window] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_no_focus] = ACTIONS(64),
    [anon_sym_include] = ACTIONS(67),
    [anon_sym_bar] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_accel_profile] = ACTIONS(76),
    [anon_sym_active_workspace] = ACTIONS(76),
    [anon_sym_adaptive_sync] = ACTIONS(76),
    [anon_sym_allow_tearing] = ACTIONS(76),
    [anon_sym_attach] = ACTIONS(76),
    [anon_sym_background] = ACTIONS(76),
    [anon_sym_bg] = ACTIONS(76),
    [anon_sym_bindgesture] = ACTIONS(76),
    [anon_sym_binding_mode] = ACTIONS(79),
    [anon_sym_binding_mode_indicator] = ACTIONS(76),
    [anon_sym_bindswitch] = ACTIONS(76),
    [anon_sym_border] = ACTIONS(76),
    [anon_sym_calibration_matrix] = ACTIONS(76),
    [anon_sym_click_method] = ACTIONS(76),
    [anon_sym_clickfinger_button_map] = ACTIONS(76),
    [anon_sym_client_DOTbackground] = ACTIONS(76),
    [anon_sym_client_DOTfocused] = ACTIONS(79),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(76),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(76),
    [anon_sym_client_DOTplaceholder] = ACTIONS(76),
    [anon_sym_client_DOTunfocused] = ACTIONS(76),
    [anon_sym_client_DOTurgent] = ACTIONS(76),
    [anon_sym_color_profile] = ACTIONS(76),
    [anon_sym_colors] = ACTIONS(76),
    [anon_sym_create_output] = ACTIONS(76),
    [anon_sym_cursor] = ACTIONS(76),
    [anon_sym_default_border] = ACTIONS(76),
    [anon_sym_default_floating_border] = ACTIONS(76),
    [anon_sym_default_orientation] = ACTIONS(76),
    [anon_sym_disable] = ACTIONS(76),
    [anon_sym_dpms] = ACTIONS(76),
    [anon_sym_drag] = ACTIONS(79),
    [anon_sym_drag_lock] = ACTIONS(76),
    [anon_sym_dwt] = ACTIONS(79),
    [anon_sym_dwtp] = ACTIONS(76),
    [anon_sym_enable] = ACTIONS(76),
    [anon_sym_events] = ACTIONS(76),
    [anon_sym_exit] = ACTIONS(76),
    [anon_sym_fallback] = ACTIONS(76),
    [anon_sym_floating] = ACTIONS(79),
    [anon_sym_floating_maximum_size] = ACTIONS(76),
    [anon_sym_floating_minimum_size] = ACTIONS(76),
    [anon_sym_floating_modifier] = ACTIONS(76),
    [anon_sym_focus] = ACTIONS(79),
    [anon_sym_focus_follows_mouse] = ACTIONS(76),
    [anon_sym_focus_on_window_activation] = ACTIONS(76),
    [anon_sym_focus_wrapping] = ACTIONS(76),
    [anon_sym_focused_background] = ACTIONS(76),
    [anon_sym_focused_separator] = ACTIONS(76),
    [anon_sym_focused_statusline] = ACTIONS(76),
    [anon_sym_focused_workspace] = ACTIONS(76),
    [anon_sym_font] = ACTIONS(76),
    [anon_sym_force_display_urgency_hint] = ACTIONS(76),
    [anon_sym_force_focus_wrapping] = ACTIONS(76),
    [anon_sym_fullscreen] = ACTIONS(76),
    [anon_sym_gaps] = ACTIONS(76),
    [anon_sym_hdr] = ACTIONS(76),
    [anon_sym_height] = ACTIONS(76),
    [anon_sym_hidden_state] = ACTIONS(76),
    [anon_sym_hide_cursor] = ACTIONS(76),
    [anon_sym_hide_edge_borders] = ACTIONS(76),
    [anon_sym_icon_theme] = ACTIONS(76),
    [anon_sym_id] = ACTIONS(79),
    [anon_sym_idle_inhibit] = ACTIONS(76),
    [anon_sym_idle_wake] = ACTIONS(76),
    [anon_sym_inactive_workspace] = ACTIONS(76),
    [anon_sym_inhibit_idle] = ACTIONS(76),
    [anon_sym_input] = ACTIONS(76),
    [anon_sym_keyboard] = ACTIONS(79),
    [anon_sym_keyboard_grouping] = ACTIONS(76),
    [anon_sym_kill] = ACTIONS(76),
    [anon_sym_layout] = ACTIONS(76),
    [anon_sym_left_handed] = ACTIONS(76),
    [anon_sym_map_from_region] = ACTIONS(76),
    [anon_sym_map_to_output] = ACTIONS(76),
    [anon_sym_map_to_region] = ACTIONS(76),
    [anon_sym_mark] = ACTIONS(76),
    [anon_sym_max_render_time] = ACTIONS(76),
    [anon_sym_middle_emulation] = ACTIONS(76),
    [anon_sym_mode] = ACTIONS(79),
    [anon_sym_modeline] = ACTIONS(76),
    [anon_sym_modifier] = ACTIONS(76),
    [anon_sym_mouse_warping] = ACTIONS(76),
    [anon_sym_move] = ACTIONS(76),
    [anon_sym_natural_scroll] = ACTIONS(76),
    [anon_sym_new_float] = ACTIONS(76),
    [anon_sym_new_window] = ACTIONS(76),
    [anon_sym_nop] = ACTIONS(76),
    [anon_sym_opacity] = ACTIONS(76),
    [anon_sym_output] = ACTIONS(76),
    [anon_sym_pango_markup] = ACTIONS(76),
    [anon_sym_pointer] = ACTIONS(79),
    [anon_sym_pointer_accel] = ACTIONS(76),
    [anon_sym_pointer_constraint] = ACTIONS(76),
    [anon_sym_popup_during_fullscreen] = ACTIONS(76),
    [anon_sym_pos] = ACTIONS(79),
    [anon_sym_position] = ACTIONS(76),
    [anon_sym_power] = ACTIONS(76),
    [anon_sym_primary_selection] = ACTIONS(76),
    [anon_sym_reload] = ACTIONS(76),
    [anon_sym_rename] = ACTIONS(76),
    [anon_sym_render_bit_depth] = ACTIONS(76),
    [anon_sym_repeat_delay] = ACTIONS(76),
    [anon_sym_repeat_rate] = ACTIONS(76),
    [anon_sym_res] = ACTIONS(79),
    [anon_sym_resize] = ACTIONS(76),
    [anon_sym_resolution] = ACTIONS(76),
    [anon_sym_restart] = ACTIONS(76),
    [anon_sym_rotation_angle] = ACTIONS(76),
    [anon_sym_scale] = ACTIONS(79),
    [anon_sym_scale_filter] = ACTIONS(76),
    [anon_sym_scratchpad] = ACTIONS(76),
    [anon_sym_scroll_button] = ACTIONS(79),
    [anon_sym_scroll_button_lock] = ACTIONS(76),
    [anon_sym_scroll_factor] = ACTIONS(76),
    [anon_sym_scroll_method] = ACTIONS(76),
    [anon_sym_seat] = ACTIONS(76),
    [anon_sym_separator] = ACTIONS(79),
    [anon_sym_separator_symbol] = ACTIONS(76),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(76),
    [anon_sym_show_marks] = ACTIONS(76),
    [anon_sym_smart_borders] = ACTIONS(76),
    [anon_sym_smart_gaps] = ACTIONS(76),
    [anon_sym_split] = ACTIONS(79),
    [anon_sym_splith] = ACTIONS(76),
    [anon_sym_splitt] = ACTIONS(76),
    [anon_sym_splitv] = ACTIONS(76),
    [anon_sym_status_command] = ACTIONS(76),
    [anon_sym_status_edge_padding] = ACTIONS(76),
    [anon_sym_status_padding] = ACTIONS(76),
    [anon_sym_statusline] = ACTIONS(76),
    [anon_sym_sticky] = ACTIONS(76),
    [anon_sym_strip_workspace_name] = ACTIONS(76),
    [anon_sym_strip_workspace_numbers] = ACTIONS(76),
    [anon_sym_subpixel] = ACTIONS(76),
    [anon_sym_swap] = ACTIONS(76),
    [anon_sym_swaybar_command] = ACTIONS(76),
    [anon_sym_swaybg_command] = ACTIONS(76),
    [anon_sym_swaynag_command] = ACTIONS(76),
    [anon_sym_switch] = ACTIONS(76),
    [anon_sym_tablet_pad] = ACTIONS(76),
    [anon_sym_tablet_tool] = ACTIONS(76),
    [anon_sym_tap] = ACTIONS(79),
    [anon_sym_tap_button_map] = ACTIONS(76),
    [anon_sym_tiling_drag] = ACTIONS(79),
    [anon_sym_tiling_drag_threshold] = ACTIONS(76),
    [anon_sym_title_align] = ACTIONS(76),
    [anon_sym_title_format] = ACTIONS(76),
    [anon_sym_titlebar_border_thickness] = ACTIONS(76),
    [anon_sym_titlebar_padding] = ACTIONS(76),
    [anon_sym_toggle] = ACTIONS(76),
    [anon_sym_tool_mode] = ACTIONS(76),
    [anon_sym_touch] = ACTIONS(76),
    [anon_sym_transform] = ACTIONS(76),
    [anon_sym_tray_bindcode] = ACTIONS(76),
    [anon_sym_tray_bindsym] = ACTIONS(76),
    [anon_sym_tray_output] = ACTIONS(76),
    [anon_sym_tray_padding] = ACTIONS(76),
    [anon_sym_unbindcode] = ACTIONS(76),
    [anon_sym_unbindgesture] = ACTIONS(76),
    [anon_sym_unbindswitch] = ACTIONS(76),
    [anon_sym_unbindsym] = ACTIONS(76),
    [anon_sym_unmark] = ACTIONS(76),
    [anon_sym_unplug] = ACTIONS(76),
    [anon_sym_urgent] = ACTIONS(79),
    [anon_sym_urgent_workspace] = ACTIONS(76),
    [anon_sym_workspace] = ACTIONS(79),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(76),
    [anon_sym_workspace_buttons] = ACTIONS(76),
    [anon_sym_workspace_layout] = ACTIONS(76),
    [anon_sym_workspace_min_width] = ACTIONS(76),
    [anon_sym_wrap_scroll] = ACTIONS(76),
    [anon_sym_xcursor_theme] = ACTIONS(76),
    [anon_sym_xkb_capslock] = ACTIONS(76),
    [anon_sym_xkb_file] = ACTIONS(76),
    [anon_sym_xkb_layout] = ACTIONS(76),
    [anon_sym_xkb_model] = ACTIONS(76),
    [anon_sym_xkb_numlock] = ACTIONS(76),
    [anon_sym_xkb_options] = ACTIONS(76),
    [anon_sym_xkb_rules] = ACTIONS(76),
    [anon_sym_xkb_switch_layout] = ACTIONS(76),
    [anon_sym_xkb_variant] = ACTIONS(76),
    [anon_sym_xwayland] = ACTIONS(76),
  },
  [3] = {
    [sym_statement] = STATE(8),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_token1] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [5] = {
    [sym_statement] = STATE(6),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_source_file_token1] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [6] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [7] = {
    [sym_statement] = STATE(9),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [8] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [9] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [10] = {
    [sym_statement] = STATE(11),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_source_file_token1] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [11] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(78),
    [sym_set_statement] = STATE(78),
    [sym_bindsym_statement] = STATE(78),
    [sym_bindcode_statement] = STATE(78),
    [sym_exec_statement] = STATE(78),
    [sym_exec_always_statement] = STATE(78),
    [sym_assign_statement] = STATE(78),
    [sym_for_window_statement] = STATE(78),
    [sym_no_focus_statement] = STATE(78),
    [sym_criteria_command] = STATE(78),
    [sym_include_statement] = STATE(78),
    [sym_bar_block] = STATE(78),
    [sym_block_statement] = STATE(78),
    [sym_command_statement] = STATE(78),
    [sym_criteria] = STATE(22),
    [sym_keyword] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_no_focus] = ACTIONS(23),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_accel_profile] = ACTIONS(31),
    [anon_sym_active_workspace] = ACTIONS(31),
    [anon_sym_adaptive_sync] = ACTIONS(31),
    [anon_sym_allow_tearing] = ACTIONS(31),
    [anon_sym_attach] = ACTIONS(31),
    [anon_sym_background] = ACTIONS(31),
    [anon_sym_bg] = ACTIONS(31),
    [anon_sym_bindgesture] = ACTIONS(31),
    [anon_sym_binding_mode] = ACTIONS(33),
    [anon_sym_binding_mode_indicator] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_calibration_matrix] = ACTIONS(31),
    [anon_sym_click_method] = ACTIONS(31),
    [anon_sym_clickfinger_button_map] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(33),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_color_profile] = ACTIONS(31),
    [anon_sym_colors] = ACTIONS(31),
    [anon_sym_create_output] = ACTIONS(31),
    [anon_sym_cursor] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_disable] = ACTIONS(31),
    [anon_sym_dpms] = ACTIONS(31),
    [anon_sym_drag] = ACTIONS(33),
    [anon_sym_drag_lock] = ACTIONS(31),
    [anon_sym_dwt] = ACTIONS(33),
    [anon_sym_dwtp] = ACTIONS(31),
    [anon_sym_enable] = ACTIONS(31),
    [anon_sym_events] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fallback] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(33),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(33),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_focused_background] = ACTIONS(31),
    [anon_sym_focused_separator] = ACTIONS(31),
    [anon_sym_focused_statusline] = ACTIONS(31),
    [anon_sym_focused_workspace] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_force_display_urgency_hint] = ACTIONS(31),
    [anon_sym_force_focus_wrapping] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_hdr] = ACTIONS(31),
    [anon_sym_height] = ACTIONS(31),
    [anon_sym_hidden_state] = ACTIONS(31),
    [anon_sym_hide_cursor] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_icon_theme] = ACTIONS(31),
    [anon_sym_id] = ACTIONS(33),
    [anon_sym_idle_inhibit] = ACTIONS(31),
    [anon_sym_idle_wake] = ACTIONS(31),
    [anon_sym_inactive_workspace] = ACTIONS(31),
    [anon_sym_inhibit_idle] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_keyboard] = ACTIONS(33),
    [anon_sym_keyboard_grouping] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_left_handed] = ACTIONS(31),
    [anon_sym_map_from_region] = ACTIONS(31),
    [anon_sym_map_to_output] = ACTIONS(31),
    [anon_sym_map_to_region] = ACTIONS(31),
    [anon_sym_mark] = ACTIONS(31),
    [anon_sym_max_render_time] = ACTIONS(31),
    [anon_sym_middle_emulation] = ACTIONS(31),
    [anon_sym_mode] = ACTIONS(33),
    [anon_sym_modeline] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_natural_scroll] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_pango_markup] = ACTIONS(31),
    [anon_sym_pointer] = ACTIONS(33),
    [anon_sym_pointer_accel] = ACTIONS(31),
    [anon_sym_pointer_constraint] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_pos] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_power] = ACTIONS(31),
    [anon_sym_primary_selection] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_rename] = ACTIONS(31),
    [anon_sym_render_bit_depth] = ACTIONS(31),
    [anon_sym_repeat_delay] = ACTIONS(31),
    [anon_sym_repeat_rate] = ACTIONS(31),
    [anon_sym_res] = ACTIONS(33),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_rotation_angle] = ACTIONS(31),
    [anon_sym_scale] = ACTIONS(33),
    [anon_sym_scale_filter] = ACTIONS(31),
    [anon_sym_scratchpad] = ACTIONS(31),
    [anon_sym_scroll_button] = ACTIONS(33),
    [anon_sym_scroll_button_lock] = ACTIONS(31),
    [anon_sym_scroll_factor] = ACTIONS(31),
    [anon_sym_scroll_method] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_separator] = ACTIONS(33),
    [anon_sym_separator_symbol] = ACTIONS(31),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(33),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitt] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_status_edge_padding] = ACTIONS(31),
    [anon_sym_status_padding] = ACTIONS(31),
    [anon_sym_statusline] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_strip_workspace_name] = ACTIONS(31),
    [anon_sym_strip_workspace_numbers] = ACTIONS(31),
    [anon_sym_subpixel] = ACTIONS(31),
    [anon_sym_swap] = ACTIONS(31),
    [anon_sym_swaybar_command] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_switch] = ACTIONS(31),
    [anon_sym_tablet_pad] = ACTIONS(31),
    [anon_sym_tablet_tool] = ACTIONS(31),
    [anon_sym_tap] = ACTIONS(33),
    [anon_sym_tap_button_map] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(33),
    [anon_sym_tiling_drag_threshold] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_toggle] = ACTIONS(31),
    [anon_sym_tool_mode] = ACTIONS(31),
    [anon_sym_touch] = ACTIONS(31),
    [anon_sym_transform] = ACTIONS(31),
    [anon_sym_tray_bindcode] = ACTIONS(31),
    [anon_sym_tray_bindsym] = ACTIONS(31),
    [anon_sym_tray_output] = ACTIONS(31),
    [anon_sym_tray_padding] = ACTIONS(31),
    [anon_sym_unbindcode] = ACTIONS(31),
    [anon_sym_unbindgesture] = ACTIONS(31),
    [anon_sym_unbindswitch] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_unmark] = ACTIONS(31),
    [anon_sym_unplug] = ACTIONS(31),
    [anon_sym_urgent] = ACTIONS(33),
    [anon_sym_urgent_workspace] = ACTIONS(31),
    [anon_sym_workspace] = ACTIONS(33),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_workspace_buttons] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_workspace_min_width] = ACTIONS(31),
    [anon_sym_wrap_scroll] = ACTIONS(31),
    [anon_sym_xcursor_theme] = ACTIONS(31),
    [anon_sym_xkb_capslock] = ACTIONS(31),
    [anon_sym_xkb_file] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_xkb_numlock] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_rules] = ACTIONS(31),
    [anon_sym_xkb_switch_layout] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_source_file_token1] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_set] = ACTIONS(108),
    [anon_sym_bindsym] = ACTIONS(108),
    [anon_sym_bindcode] = ACTIONS(108),
    [anon_sym_exec] = ACTIONS(110),
    [anon_sym_exec_always] = ACTIONS(108),
    [anon_sym_assign] = ACTIONS(108),
    [anon_sym_for_window] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_no_focus] = ACTIONS(108),
    [anon_sym_include] = ACTIONS(108),
    [anon_sym_bar] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_accel_profile] = ACTIONS(108),
    [anon_sym_active_workspace] = ACTIONS(108),
    [anon_sym_adaptive_sync] = ACTIONS(108),
    [anon_sym_allow_tearing] = ACTIONS(108),
    [anon_sym_attach] = ACTIONS(108),
    [anon_sym_background] = ACTIONS(108),
    [anon_sym_bg] = ACTIONS(108),
    [anon_sym_bindgesture] = ACTIONS(108),
    [anon_sym_binding_mode] = ACTIONS(110),
    [anon_sym_binding_mode_indicator] = ACTIONS(108),
    [anon_sym_bindswitch] = ACTIONS(108),
    [anon_sym_border] = ACTIONS(108),
    [anon_sym_calibration_matrix] = ACTIONS(108),
    [anon_sym_click_method] = ACTIONS(108),
    [anon_sym_clickfinger_button_map] = ACTIONS(108),
    [anon_sym_client_DOTbackground] = ACTIONS(108),
    [anon_sym_client_DOTfocused] = ACTIONS(110),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(108),
    [anon_sym_client_DOTfocused_tab_title] = ACTIONS(108),
    [anon_sym_client_DOTplaceholder] = ACTIONS(108),
    [anon_sym_client_DOTunfocused] = ACTIONS(108),
    [anon_sym_client_DOTurgent] = ACTIONS(108),
    [anon_sym_color_profile] = ACTIONS(108),
    [anon_sym_colors] = ACTIONS(108),
    [anon_sym_create_output] = ACTIONS(108),
    [anon_sym_cursor] = ACTIONS(108),
    [anon_sym_default_border] = ACTIONS(108),
    [anon_sym_default_floating_border] = ACTIONS(108),
    [anon_sym_default_orientation] = ACTIONS(108),
    [anon_sym_disable] = ACTIONS(108),
    [anon_sym_dpms] = ACTIONS(108),
    [anon_sym_drag] = ACTIONS(110),
    [anon_sym_drag_lock] = ACTIONS(108),
    [anon_sym_dwt] = ACTIONS(110),
    [anon_sym_dwtp] = ACTIONS(108),
    [anon_sym_enable] = ACTIONS(108),
    [anon_sym_events] = ACTIONS(108),
    [anon_sym_exit] = ACTIONS(108),
    [anon_sym_fallback] = ACTIONS(108),
    [anon_sym_floating] = ACTIONS(110),
    [anon_sym_floating_maximum_size] = ACTIONS(108),
    [anon_sym_floating_minimum_size] = ACTIONS(108),
    [anon_sym_floating_modifier] = ACTIONS(108),
    [anon_sym_focus] = ACTIONS(110),
    [anon_sym_focus_follows_mouse] = ACTIONS(108),
    [anon_sym_focus_on_window_activation] = ACTIONS(108),
    [anon_sym_focus_wrapping] = ACTIONS(108),
    [anon_sym_focused_background] = ACTIONS(108),
    [anon_sym_focused_separator] = ACTIONS(108),
    [anon_sym_focused_statusline] = ACTIONS(108),
    [anon_sym_focused_workspace] = ACTIONS(108),
    [anon_sym_font] = ACTIONS(108),
    [anon_sym_force_display_urgency_hint] = ACTIONS(108),
    [anon_sym_force_focus_wrapping] = ACTIONS(108),
    [anon_sym_fullscreen] = ACTIONS(108),
    [anon_sym_gaps] = ACTIONS(108),
    [anon_sym_hdr] = ACTIONS(108),
    [anon_sym_height] = ACTIONS(108),
    [anon_sym_hidden_state] = ACTIONS(108),
    [anon_sym_hide_cursor] = ACTIONS(108),
    [anon_sym_hide_edge_borders] = ACTIONS(108),
    [anon_sym_icon_theme] = ACTIONS(108),
    [anon_sym_id] = ACTIONS(110),
    [anon_sym_idle_inhibit] = ACTIONS(108),
    [anon_sym_idle_wake] = ACTIONS(108),
    [anon_sym_inactive_workspace] = ACTIONS(108),
    [anon_sym_inhibit_idle] = ACTIONS(108),
    [anon_sym_input] = ACTIONS(108),
    [anon_sym_keyboard] = ACTIONS(110),
    [anon_sym_keyboard_grouping] = ACTIONS(108),
    [anon_sym_kill] = ACTIONS(108),
    [anon_sym_layout] = ACTIONS(108),
    [anon_sym_left_handed] = ACTIONS(108),
    [anon_sym_map_from_region] = ACTIONS(108),
    [anon_sym_map_to_output] = ACTIONS(108),
    [anon_sym_map_to_region] = ACTIONS(108),
    [anon_sym_mark] = ACTIONS(108),
    [anon_sym_max_render_time] = ACTIONS(108),
    [anon_sym_middle_emulation] = ACTIONS(108),
    [anon_sym_mode] = ACTIONS(110),
    [anon_sym_modeline] = ACTIONS(108),
    [anon_sym_modifier] = ACTIONS(108),
    [anon_sym_mouse_warping] = ACTIONS(108),
    [anon_sym_move] = ACTIONS(108),
    [anon_sym_natural_scroll] = ACTIONS(108),
    [anon_sym_new_float] = ACTIONS(108),
    [anon_sym_new_window] = ACTIONS(108),
    [anon_sym_nop] = ACTIONS(108),
    [anon_sym_opacity] = ACTIONS(108),
    [anon_sym_output] = ACTIONS(108),
    [anon_sym_pango_markup] = ACTIONS(108),
    [anon_sym_pointer] = ACTIONS(110),
    [anon_sym_pointer_accel] = ACTIONS(108),
    [anon_sym_pointer_constraint] = ACTIONS(108),
    [anon_sym_popup_during_fullscreen] = ACTIONS(108),
    [anon_sym_pos] = ACTIONS(110),
    [anon_sym_position] = ACTIONS(108),
    [anon_sym_power] = ACTIONS(108),
    [anon_sym_primary_selection] = ACTIONS(108),
    [anon_sym_reload] = ACTIONS(108),
    [anon_sym_rename] = ACTIONS(108),
    [anon_sym_render_bit_depth] = ACTIONS(108),
    [anon_sym_repeat_delay] = ACTIONS(108),
    [anon_sym_repeat_rate] = ACTIONS(108),
    [anon_sym_res] = ACTIONS(110),
    [anon_sym_resize] = ACTIONS(108),
    [anon_sym_resolution] = ACTIONS(108),
    [anon_sym_restart] = ACTIONS(108),
    [anon_sym_rotation_angle] = ACTIONS(108),
    [anon_sym_scale] = ACTIONS(110),
    [anon_sym_scale_filter] = ACTIONS(108),
    [anon_sym_scratchpad] = ACTIONS(108),
    [anon_sym_scroll_button] = ACTIONS(110),
    [anon_sym_scroll_button_lock] = ACTIONS(108),
    [anon_sym_scroll_factor] = ACTIONS(108),
    [anon_sym_scroll_method] = ACTIONS(108),
    [anon_sym_seat] = ACTIONS(108),
    [anon_sym_separator] = ACTIONS(110),
    [anon_sym_separator_symbol] = ACTIONS(108),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(108),
    [anon_sym_show_marks] = ACTIONS(108),
    [anon_sym_smart_borders] = ACTIONS(108),
    [anon_sym_smart_gaps] = ACTIONS(108),
    [anon_sym_split] = ACTIONS(110),
    [anon_sym_splith] = ACTIONS(108),
    [anon_sym_splitt] = ACTIONS(108),
    [anon_sym_splitv] = ACTIONS(108),
    [anon_sym_status_command] = ACTIONS(108),
    [anon_sym_status_edge_padding] = ACTIONS(108),
    [anon_sym_status_padding] = ACTIONS(108),
    [anon_sym_statusline] = ACTIONS(108),
    [anon_sym_sticky] = ACTIONS(108),
    [anon_sym_strip_workspace_name] = ACTIONS(108),
    [anon_sym_strip_workspace_numbers] = ACTIONS(108),
    [anon_sym_subpixel] = ACTIONS(108),
    [anon_sym_swap] = ACTIONS(108),
    [anon_sym_swaybar_command] = ACTIONS(108),
    [anon_sym_swaybg_command] = ACTIONS(108),
    [anon_sym_swaynag_command] = ACTIONS(108),
    [anon_sym_switch] = ACTIONS(108),
    [anon_sym_tablet_pad] = ACTIONS(108),
    [anon_sym_tablet_tool] = ACTIONS(108),
    [anon_sym_tap] = ACTIONS(110),
    [anon_sym_tap_button_map] = ACTIONS(108),
    [anon_sym_tiling_drag] = ACTIONS(110),
    [anon_sym_tiling_drag_threshold] = ACTIONS(108),
    [anon_sym_title_align] = ACTIONS(108),
    [anon_sym_title_format] = ACTIONS(108),
    [anon_sym_titlebar_border_thickness] = ACTIONS(108),
    [anon_sym_titlebar_padding] = ACTIONS(108),
    [anon_sym_toggle] = ACTIONS(108),
    [anon_sym_tool_mode] = ACTIONS(108),
    [anon_sym_touch] = ACTIONS(108),
    [anon_sym_transform] = ACTIONS(108),
    [anon_sym_tray_bindcode] = ACTIONS(108),
    [anon_sym_tray_bindsym] = ACTIONS(108),
    [anon_sym_tray_output] = ACTIONS(108),
    [anon_sym_tray_padding] = ACTIONS(108),
    [anon_sym_unbindcode] = ACTIONS(108),
    [anon_sym_unbindgesture] = ACTIONS(108),
    [anon_sym_unbindswitch] = ACTIONS(108),
    [anon_sym_unbindsym] = ACTIONS(108),
    [anon_sym_unmark] = ACTIONS(108),
    [anon_sym_unplug] = ACTIONS(108),
    [anon_sym_urgent] = ACTIONS(110),
    [anon_sym_urgent_workspace] = ACTIONS(108),
    [anon_sym_workspace] = ACTIONS(110),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(108),
    [anon_sym_workspace_buttons] = ACTIONS(108),
    [anon_sym_workspace_layout] = ACTIONS(108),
    [anon_sym_workspace_min_width] = ACTIONS(108),
    [anon_sym_wrap_scroll] = ACTIONS(108),
    [anon_sym_xcursor_theme] = ACTIONS(108),
    [anon_sym_xkb_capslock] = ACTIONS(108),
    [anon_sym_xkb_file] = ACTIONS(108),
    [anon_sym_xkb_layout] = ACTIONS(108),
    [anon_sym_xkb_model] = ACTIONS(108),
    [anon_sym_xkb_numlock] = ACTIONS(108),
    [anon_sym_xkb_options] = ACTIONS(108),
    [anon_sym_xkb_rules] = ACTIONS(108),
    [anon_sym_xkb_switch_layout] = ACTIONS(108),
    [anon_sym_xkb_variant] = ACTIONS(108),
    [anon_sym_xwayland] = ACTIONS(108),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(112), 1,
      aux_sym_source_file_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [26] = 6,
    ACTIONS(127), 1,
      sym_color,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    ACTIONS(122), 2,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(124), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [50] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [73] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [96] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [119] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [142] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [165] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [188] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_string,
    STATE(13), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [211] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(24), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [234] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [257] = 6,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      sym_string,
    STATE(14), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [280] = 5,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(19), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [300] = 5,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(23), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [320] = 5,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(15), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [340] = 5,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(17), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [360] = 5,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(18), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [380] = 5,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(20), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [400] = 5,
    ACTIONS(118), 1,
      sym_color,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(116), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [420] = 2,
    ACTIONS(153), 4,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(155), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [433] = 2,
    ACTIONS(157), 4,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(159), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [446] = 2,
    ACTIONS(161), 4,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(163), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [459] = 2,
    ACTIONS(165), 3,
      aux_sym_source_file_token1,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(167), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [471] = 2,
    ACTIONS(169), 3,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(171), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [483] = 4,
    ACTIONS(173), 1,
      aux_sym_criteria_value_token1,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_string,
    STATE(61), 1,
      sym_criteria_value,
  [496] = 4,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_criteria,
    STATE(86), 1,
      sym_for_window_block,
  [509] = 3,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(181), 1,
      sym_criteria_key,
    STATE(39), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [520] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(186), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [531] = 3,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(191), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [542] = 3,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    ACTIONS(195), 1,
      sym_criteria_key,
    STATE(39), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [553] = 3,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(199), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [564] = 3,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(203), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [575] = 3,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(199), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [586] = 3,
    ACTIONS(207), 1,
      sym_flag,
    ACTIONS(210), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_bindsym_statement_repeat1,
  [596] = 3,
    ACTIONS(212), 1,
      sym_flag,
    ACTIONS(214), 1,
      sym_command,
    STATE(50), 1,
      aux_sym_bindsym_statement_repeat1,
  [606] = 3,
    ACTIONS(216), 1,
      sym_keycombo,
    ACTIONS(218), 1,
      sym_flag,
    STATE(48), 1,
      aux_sym_bindsym_statement_repeat1,
  [616] = 3,
    ACTIONS(221), 1,
      sym_keycombo,
    ACTIONS(223), 1,
      sym_flag,
    STATE(48), 1,
      aux_sym_bindsym_statement_repeat1,
  [626] = 3,
    ACTIONS(225), 1,
      sym_flag,
    ACTIONS(227), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_bindsym_statement_repeat1,
  [636] = 3,
    ACTIONS(223), 1,
      sym_flag,
    ACTIONS(229), 1,
      sym_keycombo,
    STATE(48), 1,
      aux_sym_bindsym_statement_repeat1,
  [646] = 3,
    ACTIONS(225), 1,
      sym_flag,
    ACTIONS(231), 1,
      sym_command,
    STATE(46), 1,
      aux_sym_bindsym_statement_repeat1,
  [656] = 3,
    ACTIONS(233), 1,
      sym_keycombo,
    ACTIONS(235), 1,
      sym_flag,
    STATE(49), 1,
      aux_sym_bindsym_statement_repeat1,
  [666] = 2,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(237), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [674] = 2,
    ACTIONS(195), 1,
      sym_criteria_key,
    STATE(42), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [682] = 3,
    ACTIONS(241), 1,
      sym_keycombo,
    ACTIONS(243), 1,
      sym_flag,
    STATE(51), 1,
      aux_sym_bindsym_statement_repeat1,
  [692] = 3,
    ACTIONS(245), 1,
      sym_flag,
    ACTIONS(247), 1,
      sym_command,
    STATE(52), 1,
      aux_sym_bindsym_statement_repeat1,
  [702] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_criteria,
  [709] = 1,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [714] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_criteria,
  [721] = 1,
    ACTIONS(251), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [726] = 1,
    ACTIONS(153), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [731] = 1,
    ACTIONS(157), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [736] = 1,
    ACTIONS(253), 1,
      aux_sym_source_file_token1,
  [740] = 1,
    ACTIONS(255), 1,
      aux_sym_source_file_token1,
  [744] = 1,
    ACTIONS(257), 1,
      aux_sym_source_file_token1,
  [748] = 1,
    ACTIONS(259), 1,
      aux_sym_source_file_token1,
  [752] = 1,
    ACTIONS(261), 1,
      aux_sym_source_file_token1,
  [756] = 1,
    ACTIONS(263), 1,
      aux_sym_source_file_token1,
  [760] = 1,
    ACTIONS(265), 1,
      aux_sym_source_file_token1,
  [764] = 1,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
  [768] = 1,
    ACTIONS(269), 1,
      aux_sym_source_file_token1,
  [772] = 1,
    ACTIONS(271), 1,
      aux_sym_source_file_token1,
  [776] = 1,
    ACTIONS(273), 1,
      aux_sym_comment_token1,
  [780] = 1,
    ACTIONS(275), 1,
      sym_variable,
  [784] = 1,
    ACTIONS(277), 1,
      aux_sym_source_file_token1,
  [788] = 1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [792] = 1,
    ACTIONS(281), 1,
      aux_sym_source_file_token1,
  [796] = 1,
    ACTIONS(283), 1,
      aux_sym_source_file_token1,
  [800] = 1,
    ACTIONS(285), 1,
      aux_sym_source_file_token1,
  [804] = 1,
    ACTIONS(287), 1,
      aux_sym_source_file_token1,
  [808] = 1,
    ACTIONS(289), 1,
      aux_sym_source_file_token1,
  [812] = 1,
    ACTIONS(291), 1,
      aux_sym_source_file_token1,
  [816] = 1,
    ACTIONS(293), 1,
      aux_sym_source_file_token1,
  [820] = 1,
    ACTIONS(295), 1,
      aux_sym_source_file_token1,
  [824] = 1,
    ACTIONS(297), 1,
      aux_sym_source_file_token1,
  [828] = 1,
    ACTIONS(299), 1,
      sym_command,
  [832] = 1,
    ACTIONS(301), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 26,
  [SMALL_STATE(15)] = 50,
  [SMALL_STATE(16)] = 73,
  [SMALL_STATE(17)] = 96,
  [SMALL_STATE(18)] = 119,
  [SMALL_STATE(19)] = 142,
  [SMALL_STATE(20)] = 165,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 211,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 257,
  [SMALL_STATE(25)] = 280,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 320,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 360,
  [SMALL_STATE(30)] = 380,
  [SMALL_STATE(31)] = 400,
  [SMALL_STATE(32)] = 420,
  [SMALL_STATE(33)] = 433,
  [SMALL_STATE(34)] = 446,
  [SMALL_STATE(35)] = 459,
  [SMALL_STATE(36)] = 471,
  [SMALL_STATE(37)] = 483,
  [SMALL_STATE(38)] = 496,
  [SMALL_STATE(39)] = 509,
  [SMALL_STATE(40)] = 520,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 542,
  [SMALL_STATE(43)] = 553,
  [SMALL_STATE(44)] = 564,
  [SMALL_STATE(45)] = 575,
  [SMALL_STATE(46)] = 586,
  [SMALL_STATE(47)] = 596,
  [SMALL_STATE(48)] = 606,
  [SMALL_STATE(49)] = 616,
  [SMALL_STATE(50)] = 626,
  [SMALL_STATE(51)] = 636,
  [SMALL_STATE(52)] = 646,
  [SMALL_STATE(53)] = 656,
  [SMALL_STATE(54)] = 666,
  [SMALL_STATE(55)] = 674,
  [SMALL_STATE(56)] = 682,
  [SMALL_STATE(57)] = 692,
  [SMALL_STATE(58)] = 702,
  [SMALL_STATE(59)] = 709,
  [SMALL_STATE(60)] = 714,
  [SMALL_STATE(61)] = 721,
  [SMALL_STATE(62)] = 726,
  [SMALL_STATE(63)] = 731,
  [SMALL_STATE(64)] = 736,
  [SMALL_STATE(65)] = 740,
  [SMALL_STATE(66)] = 744,
  [SMALL_STATE(67)] = 748,
  [SMALL_STATE(68)] = 752,
  [SMALL_STATE(69)] = 756,
  [SMALL_STATE(70)] = 760,
  [SMALL_STATE(71)] = 764,
  [SMALL_STATE(72)] = 768,
  [SMALL_STATE(73)] = 772,
  [SMALL_STATE(74)] = 776,
  [SMALL_STATE(75)] = 780,
  [SMALL_STATE(76)] = 784,
  [SMALL_STATE(77)] = 788,
  [SMALL_STATE(78)] = 792,
  [SMALL_STATE(79)] = 796,
  [SMALL_STATE(80)] = 800,
  [SMALL_STATE(81)] = 804,
  [SMALL_STATE(82)] = 808,
  [SMALL_STATE(83)] = 812,
  [SMALL_STATE(84)] = 816,
  [SMALL_STATE(85)] = 820,
  [SMALL_STATE(86)] = 824,
  [SMALL_STATE(87)] = 828,
  [SMALL_STATE(88)] = 832,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_statement, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindcode_statement, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindcode_statement, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindsym_statement, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_statement, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_command, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindsym_statement, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_command, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_criteria, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_pair, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_value, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_pair, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_block, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_block, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always_statement, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always_statement, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_block, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_block, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 5, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 6, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_statement, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus_statement, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_i3config(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
