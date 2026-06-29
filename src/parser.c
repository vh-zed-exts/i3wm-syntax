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
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 307
#define ALIAS_COUNT 0
#define TOKEN_COUNT 272
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
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_exec = 9,
  anon_sym_exec_always = 10,
  anon_sym_assign = 11,
  anon_sym_for_window = 12,
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
  anon_sym_container = 207,
  anon_sym_from = 208,
  anon_sym_layer = 209,
  anon_sym_to = 210,
  anon_sym_window = 211,
  anon_sym_absolute = 212,
  anon_sym_all = 213,
  anon_sym_auto = 214,
  anon_sym_back_and_forth = 215,
  anon_sym_bottom = 216,
  anon_sym_center = 217,
  anon_sym_child = 218,
  anon_sym_current = 219,
  anon_sym_default = 220,
  anon_sym_disabled = 221,
  anon_sym_down = 222,
  anon_sym_enabled = 223,
  anon_sym_false = 224,
  anon_sym_fill = 225,
  anon_sym_fit = 226,
  anon_sym_global = 227,
  anon_sym_grow = 228,
  anon_sym_hide = 229,
  anon_sym_horizontal = 230,
  anon_sym_inner = 231,
  anon_sym_latest = 232,
  anon_sym_leave_fullscreen = 233,
  anon_sym_left = 234,
  anon_sym_mouse = 235,
  anon_sym_next = 236,
  anon_sym_no = 237,
  anon_sym_none = 238,
  anon_sym_normal = 239,
  anon_sym_off = 240,
  anon_sym_on = 241,
  anon_sym_outer = 242,
  anon_sym_overlay = 243,
  anon_sym_parent = 244,
  anon_sym_pixel = 245,
  anon_sym_prev = 246,
  anon_sym_px = 247,
  anon_sym_ppt = 248,
  anon_sym_right = 249,
  anon_sym_show = 250,
  anon_sym_shrink = 251,
  anon_sym_sibling = 252,
  anon_sym_smart = 253,
  anon_sym_solid_color = 254,
  anon_sym_stacking = 255,
  anon_sym_stretch = 256,
  anon_sym_tabbed = 257,
  anon_sym_tiling = 258,
  anon_sym_top = 259,
  anon_sym_true = 260,
  anon_sym_up = 261,
  anon_sym_vertical = 262,
  anon_sym_yes = 263,
  sym_number = 264,
  sym_unit_value = 265,
  sym_color = 266,
  anon_sym_DQUOTE = 267,
  aux_sym_string_token1 = 268,
  sym_escape_sequence = 269,
  sym_command = 270,
  sym_word = 271,
  sym_source_file = 272,
  sym_statement = 273,
  sym_comment = 274,
  sym_set_statement = 275,
  sym_bindsym_statement = 276,
  sym_bindcode_statement = 277,
  sym_bind_block = 278,
  sym_binding = 279,
  sym_exec_statement = 280,
  sym_exec_always_statement = 281,
  sym_exec_block = 282,
  sym_assign_statement = 283,
  sym_for_window_statement = 284,
  sym_for_window_block = 285,
  sym_no_focus_statement = 286,
  sym_criteria_command = 287,
  sym_include_statement = 288,
  sym_bar_block = 289,
  sym_block_statement = 290,
  sym_command_statement = 291,
  sym_criteria = 292,
  sym_criteria_pair = 293,
  sym_criteria_value = 294,
  sym_keyword = 295,
  sym_value = 296,
  sym_command_keyword = 297,
  sym_command_value = 298,
  sym_string = 299,
  aux_sym_source_file_repeat1 = 300,
  aux_sym_set_statement_repeat1 = 301,
  aux_sym_bindsym_statement_repeat1 = 302,
  aux_sym_bind_block_repeat1 = 303,
  aux_sym_exec_block_repeat1 = 304,
  aux_sym_criteria_repeat1 = 305,
  aux_sym_string_repeat1 = 306,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_set] = "set",
  [anon_sym_bindsym] = "bindsym",
  [anon_sym_bindcode] = "bindcode",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_exec] = "exec",
  [anon_sym_exec_always] = "exec_always",
  [anon_sym_assign] = "assign",
  [anon_sym_for_window] = "for_window",
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
  [anon_sym_container] = "container",
  [anon_sym_from] = "from",
  [anon_sym_layer] = "layer",
  [anon_sym_to] = "to",
  [anon_sym_window] = "window",
  [anon_sym_absolute] = "absolute",
  [anon_sym_all] = "all",
  [anon_sym_auto] = "auto",
  [anon_sym_back_and_forth] = "back_and_forth",
  [anon_sym_bottom] = "bottom",
  [anon_sym_center] = "center",
  [anon_sym_child] = "child",
  [anon_sym_current] = "current",
  [anon_sym_default] = "default",
  [anon_sym_disabled] = "disabled",
  [anon_sym_down] = "down",
  [anon_sym_enabled] = "enabled",
  [anon_sym_false] = "false",
  [anon_sym_fill] = "fill",
  [anon_sym_fit] = "fit",
  [anon_sym_global] = "global",
  [anon_sym_grow] = "grow",
  [anon_sym_hide] = "hide",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_inner] = "inner",
  [anon_sym_latest] = "latest",
  [anon_sym_leave_fullscreen] = "leave_fullscreen",
  [anon_sym_left] = "left",
  [anon_sym_mouse] = "mouse",
  [anon_sym_next] = "next",
  [anon_sym_no] = "no",
  [anon_sym_none] = "none",
  [anon_sym_normal] = "normal",
  [anon_sym_off] = "off",
  [anon_sym_on] = "on",
  [anon_sym_outer] = "outer",
  [anon_sym_overlay] = "overlay",
  [anon_sym_parent] = "parent",
  [anon_sym_pixel] = "pixel",
  [anon_sym_prev] = "prev",
  [anon_sym_px] = "px",
  [anon_sym_ppt] = "ppt",
  [anon_sym_right] = "right",
  [anon_sym_show] = "show",
  [anon_sym_shrink] = "shrink",
  [anon_sym_sibling] = "sibling",
  [anon_sym_smart] = "smart",
  [anon_sym_solid_color] = "solid_color",
  [anon_sym_stacking] = "stacking",
  [anon_sym_stretch] = "stretch",
  [anon_sym_tabbed] = "tabbed",
  [anon_sym_tiling] = "tiling",
  [anon_sym_top] = "top",
  [anon_sym_true] = "true",
  [anon_sym_up] = "up",
  [anon_sym_vertical] = "vertical",
  [anon_sym_yes] = "yes",
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
  [sym_bind_block] = "bind_block",
  [sym_binding] = "binding",
  [sym_exec_statement] = "exec_statement",
  [sym_exec_always_statement] = "exec_always_statement",
  [sym_exec_block] = "exec_block",
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
  [sym_command_keyword] = "command_keyword",
  [sym_command_value] = "command_value",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_set_statement_repeat1] = "set_statement_repeat1",
  [aux_sym_bindsym_statement_repeat1] = "bindsym_statement_repeat1",
  [aux_sym_bind_block_repeat1] = "bind_block_repeat1",
  [aux_sym_exec_block_repeat1] = "exec_block_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_exec_always] = anon_sym_exec_always,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_for_window] = anon_sym_for_window,
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
  [anon_sym_container] = anon_sym_container,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_layer] = anon_sym_layer,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_window] = anon_sym_window,
  [anon_sym_absolute] = anon_sym_absolute,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_back_and_forth] = anon_sym_back_and_forth,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_child] = anon_sym_child,
  [anon_sym_current] = anon_sym_current,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_enabled] = anon_sym_enabled,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_fit] = anon_sym_fit,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_grow] = anon_sym_grow,
  [anon_sym_hide] = anon_sym_hide,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_inner] = anon_sym_inner,
  [anon_sym_latest] = anon_sym_latest,
  [anon_sym_leave_fullscreen] = anon_sym_leave_fullscreen,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_mouse] = anon_sym_mouse,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_normal] = anon_sym_normal,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_outer] = anon_sym_outer,
  [anon_sym_overlay] = anon_sym_overlay,
  [anon_sym_parent] = anon_sym_parent,
  [anon_sym_pixel] = anon_sym_pixel,
  [anon_sym_prev] = anon_sym_prev,
  [anon_sym_px] = anon_sym_px,
  [anon_sym_ppt] = anon_sym_ppt,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_shrink] = anon_sym_shrink,
  [anon_sym_sibling] = anon_sym_sibling,
  [anon_sym_smart] = anon_sym_smart,
  [anon_sym_solid_color] = anon_sym_solid_color,
  [anon_sym_stacking] = anon_sym_stacking,
  [anon_sym_stretch] = anon_sym_stretch,
  [anon_sym_tabbed] = anon_sym_tabbed,
  [anon_sym_tiling] = anon_sym_tiling,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_yes] = anon_sym_yes,
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
  [sym_bind_block] = sym_bind_block,
  [sym_binding] = sym_binding,
  [sym_exec_statement] = sym_exec_statement,
  [sym_exec_always_statement] = sym_exec_always_statement,
  [sym_exec_block] = sym_exec_block,
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
  [sym_command_keyword] = sym_command_keyword,
  [sym_command_value] = sym_command_value,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_set_statement_repeat1] = aux_sym_set_statement_repeat1,
  [aux_sym_bindsym_statement_repeat1] = aux_sym_bindsym_statement_repeat1,
  [aux_sym_bind_block_repeat1] = aux_sym_bind_block_repeat1,
  [aux_sym_exec_block_repeat1] = aux_sym_exec_block_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_container] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_back_and_forth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_child] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_current] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_latest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pixel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_px] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ppt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sibling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solid_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stacking] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stretch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tabbed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tiling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
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
  [sym_bind_block] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
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
  [sym_exec_block] = {
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
  [sym_command_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_command_value] = {
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
  [aux_sym_bind_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exec_block_repeat1] = {
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
  [16] = 13,
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
  [40] = 38,
  [41] = 35,
  [42] = 37,
  [43] = 39,
  [44] = 36,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 65,
  [72] = 68,
  [73] = 70,
  [74] = 62,
  [75] = 70,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 38,
  [83] = 39,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
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
      if (eof) ADVANCE(1560);
      ADVANCE_MAP(
        '\n', 1561,
        '\r', 1,
        '"', 2439,
        '#', 1563,
        '$', 1552,
        '-', 19,
        '=', 1594,
        '[', 1592,
      );
      if (lookahead == '\\') SKIP(1556);
      if (lookahead == ']') ADVANCE(1593);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'k') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(565);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(906);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead == 'w') ADVANCE(691);
      if (lookahead == 'x') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(479);
      if (lookahead == '{') ADVANCE(1573);
      if (lookahead == '}') ADVANCE(1575);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2431);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1561);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(2439);
      if (lookahead == '#') ADVANCE(1563);
      if (lookahead == '$') ADVANCE(2842);
      if (lookahead == '-') ADVANCE(2843);
      if (lookahead == '\\') SKIP(7);
      if (lookahead == 'a') ADVANCE(1910);
      if (lookahead == 'b') ADVANCE(1875);
      if (lookahead == 'c') ADVANCE(1965);
      if (lookahead == 'd') ADVANCE(1946);
      if (lookahead == 'e') ADVANCE(2090);
      if (lookahead == 'f') ADVANCE(1880);
      if (lookahead == 'g') ADVANCE(1876);
      if (lookahead == 'h') ADVANCE(2017);
      if (lookahead == 'i') ADVANCE(2091);
      if (lookahead == 'k') ADVANCE(2021);
      if (lookahead == 'l') ADVANCE(1877);
      if (lookahead == 'm') ADVANCE(1878);
      if (lookahead == 'n') ADVANCE(1947);
      if (lookahead == 'o') ADVANCE(1997);
      if (lookahead == 'p') ADVANCE(1883);
      if (lookahead == 'r') ADVANCE(1948);
      if (lookahead == 's') ADVANCE(1924);
      if (lookahead == 't') ADVANCE(1882);
      if (lookahead == 'u') ADVANCE(2092);
      if (lookahead == 'v') ADVANCE(1970);
      if (lookahead == 'w') ADVANCE(2020);
      if (lookahead == 'y') ADVANCE(1968);
      if (lookahead == '}') ADVANCE(1575);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(2847);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(2439);
      if (lookahead == '#') ADVANCE(1545);
      if (lookahead == '$') ADVANCE(2845);
      if (lookahead == '-') ADVANCE(2843);
      if (lookahead == '\\') SKIP(9);
      if (lookahead == 'a') ADVANCE(2498);
      if (lookahead == 'b') ADVANCE(2463);
      if (lookahead == 'c') ADVANCE(2553);
      if (lookahead == 'd') ADVANCE(2534);
      if (lookahead == 'e') ADVANCE(2678);
      if (lookahead == 'f') ADVANCE(2468);
      if (lookahead == 'g') ADVANCE(2464);
      if (lookahead == 'h') ADVANCE(2605);
      if (lookahead == 'i') ADVANCE(2679);
      if (lookahead == 'k') ADVANCE(2609);
      if (lookahead == 'l') ADVANCE(2465);
      if (lookahead == 'm') ADVANCE(2466);
      if (lookahead == 'n') ADVANCE(2535);
      if (lookahead == 'o') ADVANCE(2585);
      if (lookahead == 'p') ADVANCE(2471);
      if (lookahead == 'r') ADVANCE(2536);
      if (lookahead == 's') ADVANCE(2512);
      if (lookahead == 't') ADVANCE(2470);
      if (lookahead == 'u') ADVANCE(2680);
      if (lookahead == 'v') ADVANCE(2558);
      if (lookahead == 'w') ADVANCE(2608);
      if (lookahead == 'y') ADVANCE(2556);
      if (lookahead == '{') ADVANCE(1573);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(2847);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1562);
      if (lookahead == '$') ADVANCE(1553);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\\') SKIP(11);
      if (lookahead == '{') ADVANCE(1573);
      if (lookahead == '}') ADVANCE(1575);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2255);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 1561,
        '\r', 2443,
        '#', 1564,
        '\\', 2445,
        '}', 1576,
        '\t', 2444,
        ' ', 2444,
        ',', 2444,
        ';', 2444,
      );
      if (lookahead != 0) ADVANCE(2450);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(2);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\r') SKIP(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(3);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\r') SKIP(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(4);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(2442);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(2439);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(2440);
      if (lookahead != 0) ADVANCE(2441);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(2439);
      if (lookahead == '\\') ADVANCE(1597);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(1596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1597);
      END_STATE();
    case 17:
      if (lookahead == '$') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2255);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(1554);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(1554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2431);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(2447);
      if (lookahead == '\\') ADVANCE(2445);
      if (lookahead == '{') ADVANCE(1574);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(2446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(268);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(1594);
      if (lookahead == '\\') SKIP(14);
      if (lookahead == ']') ADVANCE(1593);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1595);
      END_STATE();
    case 23:
      if (lookahead == '\\') ADVANCE(2445);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(2448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(571);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(569);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(663);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(271);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(384);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(406);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(269);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(1129);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(273);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(1098);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(262);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(343);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(1513);
      if (lookahead == 'c') ADVANCE(488);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(567);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(1504);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(1130);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(895);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(1191);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(1518);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(274);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(318);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(403);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'g') ADVANCE(1189);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(888);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(1303);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(1296);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(650);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(1095);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(1277);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(696);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(739);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(487);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(923);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(1350);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(224);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(1392);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(1366);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(1417);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(1283);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(572);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(884);
      if (lookahead == 'f') ADVANCE(710);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(1511);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(1289);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(878);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(648);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(1505);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(1231);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(877);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(1151);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(395);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(861);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(1457);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(1379);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(261);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(889);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(1302);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(890);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(578);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(270);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(892);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(1515);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(1514);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(898);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(1433);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(1311);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(582);
      if (lookahead == 'p') ADVANCE(1723);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(275);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(1517);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(1150);
      if (lookahead == 's') ADVANCE(1625);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(346);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(583);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'g') ADVANCE(1606);
      if (lookahead == 'i') ADVANCE(925);
      if (lookahead == 'o') ADVANCE(1180);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(1119);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(1119);
      if (lookahead == 'l') ADVANCE(1012);
      if (lookahead == 'r') ADVANCE(1007);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(1390);
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(1113);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(1113);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(927);
      if (lookahead == 'i') ADVANCE(1521);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead == 'p') ADVANCE(1316);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead == 'x') ADVANCE(2380);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == 'o') ADVANCE(2271);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(1491);
      if (lookahead == 'f') ADVANCE(1319);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(1114);
      if (lookahead == 'i') ADVANCE(1351);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(936);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(936);
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == 'h') ADVANCE(655);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(798);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 'u') ADVANCE(1153);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == 'l') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(797);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 'u') ADVANCE(1218);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(1125);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(1529);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1004);
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'c') ADVANCE(792);
      if (lookahead == 'h') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == 'p') ADVANCE(1447);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'c') ADVANCE(792);
      if (lookahead == 'h') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(1447);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == 'l') ADVANCE(1064);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == 'u') ADVANCE(793);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(1389);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(2351);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(1389);
      if (lookahead == 'e') ADVANCE(1501);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead == 'd') ADVANCE(505);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(1120);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(1525);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(1445);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(1536);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(1134);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(1532);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(1116);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(1526);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(1321);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 't') ADVANCE(1568);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(1117);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(1475);
      if (lookahead == 'b') ADVANCE(1481);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(713);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(1190);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(1183);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(1406);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(996);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(1032);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(1426);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(1355);
      if (lookahead == 'o') ADVANCE(814);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(1181);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(863);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(1188);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(1253);
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(926);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(1201);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(1373);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(1185);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(1336);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(1383);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(1247);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(1384);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(1408);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(1341);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(1402);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'g') ADVANCE(1606);
      if (lookahead == 'i') ADVANCE(925);
      if (lookahead == 'o') ADVANCE(1179);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(1126);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(1194);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(1197);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(1215);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(1533);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(1132);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(1403);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(1209);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(1371);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(986);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead == 'f') ADVANCE(1050);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(1213);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == 'u') ADVANCE(873);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(974);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'l') ADVANCE(1064);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(793);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(1410);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(1416);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(1419);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(959);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(960);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(963);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(965);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(993);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(1467);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(1391);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(1418);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(1421);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(1537);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(1431);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(1241);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(1434);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(1002);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(1538);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(1539);
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(1149);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(1244);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 242:
      if (lookahead == 'b') ADVANCE(1274);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(774);
      if (lookahead == 's') ADVANCE(1272);
      if (lookahead == 't') ADVANCE(1352);
      if (lookahead == 'u') ADVANCE(1353);
      END_STATE();
    case 243:
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(1812);
      END_STATE();
    case 244:
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 245:
      if (lookahead == 'b') ADVANCE(1121);
      END_STATE();
    case 246:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 247:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 248:
      if (lookahead == 'b') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(796);
      END_STATE();
    case 249:
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 250:
      if (lookahead == 'b') ADVANCE(190);
      END_STATE();
    case 251:
      if (lookahead == 'b') ADVANCE(1251);
      END_STATE();
    case 252:
      if (lookahead == 'b') ADVANCE(743);
      END_STATE();
    case 253:
      if (lookahead == 'b') ADVANCE(1074);
      END_STATE();
    case 254:
      if (lookahead == 'b') ADVANCE(809);
      END_STATE();
    case 255:
      if (lookahead == 'b') ADVANCE(680);
      END_STATE();
    case 256:
      if (lookahead == 'b') ADVANCE(837);
      END_STATE();
    case 257:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 258:
      if (lookahead == 'b') ADVANCE(1053);
      END_STATE();
    case 259:
      if (lookahead == 'b') ADVANCE(813);
      END_STATE();
    case 260:
      if (lookahead == 'b') ADVANCE(1455);
      END_STATE();
    case 261:
      if (lookahead == 'b') ADVANCE(686);
      END_STATE();
    case 262:
      if (lookahead == 'b') ADVANCE(1055);
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 263:
      if (lookahead == 'b') ADVANCE(688);
      END_STATE();
    case 264:
      if (lookahead == 'b') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(1812);
      END_STATE();
    case 265:
      if (lookahead == 'b') ADVANCE(831);
      END_STATE();
    case 266:
      if (lookahead == 'b') ADVANCE(832);
      END_STATE();
    case 267:
      if (lookahead == 'b') ADVANCE(530);
      END_STATE();
    case 268:
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(1093);
      if (lookahead == 'p') ADVANCE(838);
      if (lookahead == 'u') ADVANCE(984);
      END_STATE();
    case 269:
      if (lookahead == 'b') ADVANCE(1479);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 270:
      if (lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 271:
      if (lookahead == 'b') ADVANCE(717);
      if (lookahead == 'o') ADVANCE(1458);
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 272:
      if (lookahead == 'b') ADVANCE(1101);
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 273:
      if (lookahead == 'b') ADVANCE(1105);
      if (lookahead == 'f') ADVANCE(862);
      if (lookahead == 'o') ADVANCE(1207);
      END_STATE();
    case 274:
      if (lookahead == 'b') ADVANCE(1107);
      END_STATE();
    case 275:
      if (lookahead == 'b') ADVANCE(1109);
      END_STATE();
    case 276:
      if (lookahead == 'b') ADVANCE(1487);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead == 'w') ADVANCE(1106);
      END_STATE();
    case 278:
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 's') ADVANCE(1272);
      if (lookahead == 't') ADVANCE(1352);
      END_STATE();
    case 279:
      ADVANCE_MAP(
        'c', 140,
        'e', 145,
        'h', 1005,
        'i', 256,
        'm', 189,
        'o', 801,
        'p', 803,
        't', 118,
        'u', 245,
        'w', 115,
      );
      END_STATE();
    case 280:
      ADVANCE_MAP(
        'c', 140,
        'e', 145,
        'h', 1009,
        'm', 205,
        'p', 803,
        't', 222,
        'u', 245,
        'w', 115,
      );
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(1437);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(122);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(748);
      if (lookahead == 'r') ADVANCE(1589);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(1579);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(1600);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(1439);
      if (lookahead == 'n') ADVANCE(1318);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(625);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(750);
      if (lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(492);
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(1011);
      if (lookahead == 'd') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(1011);
      if (lookahead == 'd') ADVANCE(1684);
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(770);
      if (lookahead == 't') ADVANCE(1444);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(644);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(628);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(640);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(754);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(1065);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == 'i') ADVANCE(934);
      if (lookahead == 's') ADVANCE(1509);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(756);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(764);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(761);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(634);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(1029);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(1230);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(1044);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(675);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(1199);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(1393);
      END_STATE();
    case 322:
      ADVANCE_MAP(
        'c', 184,
        'f', 711,
        'l', 137,
        'm', 1030,
        'n', 1438,
        'o', 1139,
        'r', 1449,
        's', 1510,
        'v', 187,
      );
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(1468);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(1534);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(1466);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(1470);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(1217);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(1456);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(1223);
      END_STATE();
    case 332:
      if (lookahead == 'c') ADVANCE(1451);
      END_STATE();
    case 333:
      if (lookahead == 'c') ADVANCE(1413);
      END_STATE();
    case 334:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 335:
      if (lookahead == 'c') ADVANCE(1381);
      END_STATE();
    case 336:
      if (lookahead == 'c') ADVANCE(1069);
      if (lookahead == 'g') ADVANCE(561);
      if (lookahead == 's') ADVANCE(1512);
      END_STATE();
    case 337:
      if (lookahead == 'c') ADVANCE(1415);
      END_STATE();
    case 338:
      if (lookahead == 'c') ADVANCE(1083);
      if (lookahead == 's') ADVANCE(1528);
      END_STATE();
    case 339:
      if (lookahead == 'c') ADVANCE(768);
      if (lookahead == 'r') ADVANCE(1589);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(1436);
      END_STATE();
    case 341:
      if (lookahead == 'c') ADVANCE(1235);
      END_STATE();
    case 342:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 343:
      if (lookahead == 'c') ADVANCE(1483);
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 344:
      if (lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 345:
      if (lookahead == 'c') ADVANCE(1110);
      END_STATE();
    case 346:
      if (lookahead == 'c') ADVANCE(1111);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(1112);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(2293);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(1745);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(2410);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(1692);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(1862);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(1605);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(1765);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(1810);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(1615);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(1771);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(1618);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(1793);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(1807);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(1806);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(1808);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(1622);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(1617);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(1665);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(1700);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(1815);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(1182);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(1154);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(1279);
      if (lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(1297);
      if (lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(2326);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(1014);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(844);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead == 'f') ADVANCE(1033);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(1017);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(745);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(1061);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(543);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(1219);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(1367);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(614);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(700);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(1469);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(825);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(541);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(559);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(726);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(727);
      END_STATE();
    case 419:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 420:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 421:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 422:
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(1310);
      if (lookahead == 'o') ADVANCE(1500);
      if (lookahead == 'p') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 'w') ADVANCE(1314);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(1527);
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(1397);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'o') ADVANCE(1397);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(1317);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(1712);
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(1717);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(2353);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(2419);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(2311);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(2344);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(1646);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(1748);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(1755);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(1637);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(1588);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(2275);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(1572);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1854);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(1686);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1845);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(1683);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1796);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(1607);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1753);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1608);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1680);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(1688);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1598);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1624);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1833);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(1852);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(1762);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(1707);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1599);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1668);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(1667);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(1687);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1662);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(1800);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(1656);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(1657);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(1619);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(1620);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(1644);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(1635);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(1825);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(1489);
      if (lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1254);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(1186);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(1187);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(1156);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(1281);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(1157);
      if (lookahead == 'o') ADVANCE(1450);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'p') ADVANCE(1452);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(1299);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(1260);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1193);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(1359);
      if (lookahead == 'i') ADVANCE(1124);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(1163);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(1280);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(920);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(1165);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(1376);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(1293);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(1168);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(1172);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(1203);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(1176);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(1222);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(1394);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(1133);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(1152);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 549:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 550:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 551:
      if (lookahead == 'e') ADVANCE(972);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 556:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 559:
      if (lookahead == 'e') ADVANCE(1225);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(1312);
      if (lookahead == 'p') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 'w') ADVANCE(1314);
      END_STATE();
    case 561:
      if (lookahead == 'e') ADVANCE(1304);
      END_STATE();
    case 562:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 564:
      if (lookahead == 'f') ADVANCE(2359);
      END_STATE();
    case 565:
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'n') ADVANCE(2362);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(1315);
      if (lookahead == 'v') ADVANCE(481);
      END_STATE();
    case 566:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 567:
      if (lookahead == 'f') ADVANCE(1485);
      END_STATE();
    case 568:
      if (lookahead == 'f') ADVANCE(716);
      END_STATE();
    case 569:
      if (lookahead == 'f') ADVANCE(846);
      if (lookahead == 'w') ADVANCE(712);
      END_STATE();
    case 570:
      if (lookahead == 'f') ADVANCE(1070);
      if (lookahead == 'o') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(1224);
      END_STATE();
    case 571:
      if (lookahead == 'f') ADVANCE(1192);
      if (lookahead == 't') ADVANCE(1034);
      END_STATE();
    case 572:
      if (lookahead == 'f') ADVANCE(1072);
      END_STATE();
    case 573:
      if (lookahead == 'f') ADVANCE(1386);
      END_STATE();
    case 574:
      if (lookahead == 'f') ADVANCE(673);
      END_STATE();
    case 575:
      if (lookahead == 'f') ADVANCE(1047);
      END_STATE();
    case 576:
      if (lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 577:
      if (lookahead == 'f') ADVANCE(729);
      END_STATE();
    case 578:
      if (lookahead == 'f') ADVANCE(1077);
      END_STATE();
    case 579:
      if (lookahead == 'f') ADVANCE(721);
      END_STATE();
    case 580:
      if (lookahead == 'f') ADVANCE(1097);
      END_STATE();
    case 581:
      if (lookahead == 'f') ADVANCE(724);
      END_STATE();
    case 582:
      if (lookahead == 'f') ADVANCE(1099);
      END_STATE();
    case 583:
      if (lookahead == 'f') ADVANCE(1488);
      END_STATE();
    case 584:
      if (lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 585:
      if (lookahead == 'g') ADVANCE(1640);
      END_STATE();
    case 586:
      if (lookahead == 'g') ADVANCE(2413);
      END_STATE();
    case 587:
      if (lookahead == 'g') ADVANCE(1839);
      END_STATE();
    case 588:
      if (lookahead == 'g') ADVANCE(2395);
      END_STATE();
    case 589:
      if (lookahead == 'g') ADVANCE(1654);
      END_STATE();
    case 590:
      if (lookahead == 'g') ADVANCE(2404);
      END_STATE();
    case 591:
      if (lookahead == 'g') ADVANCE(1831);
      END_STATE();
    case 592:
      if (lookahead == 'g') ADVANCE(1601);
      END_STATE();
    case 593:
      if (lookahead == 'g') ADVANCE(1664);
      END_STATE();
    case 594:
      if (lookahead == 'g') ADVANCE(1795);
      END_STATE();
    case 595:
      if (lookahead == 'g') ADVANCE(1821);
      END_STATE();
    case 596:
      if (lookahead == 'g') ADVANCE(1693);
      END_STATE();
    case 597:
      if (lookahead == 'g') ADVANCE(1794);
      END_STATE();
    case 598:
      if (lookahead == 'g') ADVANCE(1671);
      END_STATE();
    case 599:
      if (lookahead == 'g') ADVANCE(1814);
      END_STATE();
    case 600:
      if (lookahead == 'g') ADVANCE(1716);
      END_STATE();
    case 601:
      if (lookahead == 'g') ADVANCE(611);
      if (lookahead == 'o') ADVANCE(859);
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 602:
      if (lookahead == 'g') ADVANCE(909);
      END_STATE();
    case 603:
      if (lookahead == 'g') ADVANCE(1025);
      END_STATE();
    case 604:
      if (lookahead == 'g') ADVANCE(1189);
      END_STATE();
    case 605:
      if (lookahead == 'g') ADVANCE(913);
      END_STATE();
    case 606:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 607:
      if (lookahead == 'g') ADVANCE(1204);
      END_STATE();
    case 608:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 609:
      if (lookahead == 'g') ADVANCE(540);
      END_STATE();
    case 610:
      if (lookahead == 'g') ADVANCE(637);
      END_STATE();
    case 611:
      if (lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 612:
      if (lookahead == 'g') ADVANCE(677);
      END_STATE();
    case 613:
      if (lookahead == 'g') ADVANCE(678);
      END_STATE();
    case 614:
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 615:
      if (lookahead == 'g') ADVANCE(529);
      END_STATE();
    case 616:
      if (lookahead == 'g') ADVANCE(829);
      END_STATE();
    case 617:
      if (lookahead == 'g') ADVANCE(522);
      END_STATE();
    case 618:
      if (lookahead == 'g') ADVANCE(1229);
      END_STATE();
    case 619:
      if (lookahead == 'g') ADVANCE(551);
      END_STATE();
    case 620:
      if (lookahead == 'g') ADVANCE(1234);
      END_STATE();
    case 621:
      if (lookahead == 'g') ADVANCE(554);
      END_STATE();
    case 622:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 623:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 624:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 625:
      if (lookahead == 'h') ADVANCE(1604);
      END_STATE();
    case 626:
      if (lookahead == 'h') ADVANCE(1809);
      END_STATE();
    case 627:
      if (lookahead == 'h') ADVANCE(2407);
      END_STATE();
    case 628:
      if (lookahead == 'h') ADVANCE(1610);
      END_STATE();
    case 629:
      if (lookahead == 'h') ADVANCE(1834);
      END_STATE();
    case 630:
      if (lookahead == 'h') ADVANCE(2284);
      END_STATE();
    case 631:
      if (lookahead == 'h') ADVANCE(1751);
      END_STATE();
    case 632:
      if (lookahead == 'h') ADVANCE(1850);
      END_STATE();
    case 633:
      if (lookahead == 'h') ADVANCE(1847);
      END_STATE();
    case 634:
      if (lookahead == 'h') ADVANCE(1826);
      END_STATE();
    case 635:
      if (lookahead == 'h') ADVANCE(1323);
      END_STATE();
    case 636:
      if (lookahead == 'h') ADVANCE(544);
      END_STATE();
    case 637:
      if (lookahead == 'h') ADVANCE(1327);
      END_STATE();
    case 638:
      if (lookahead == 'h') ADVANCE(719);
      END_STATE();
    case 639:
      if (lookahead == 'h') ADVANCE(1039);
      END_STATE();
    case 640:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 641:
      if (lookahead == 'h') ADVANCE(1041);
      END_STATE();
    case 642:
      if (lookahead == 'h') ADVANCE(1063);
      END_STATE();
    case 643:
      if (lookahead == 'h') ADVANCE(1227);
      END_STATE();
    case 644:
      if (lookahead == 'h') ADVANCE(1128);
      END_STATE();
    case 645:
      if (lookahead == 'h') ADVANCE(698);
      END_STATE();
    case 646:
      if (lookahead == 'h') ADVANCE(1051);
      END_STATE();
    case 647:
      if (lookahead == 'h') ADVANCE(548);
      END_STATE();
    case 648:
      if (lookahead == 'h') ADVANCE(722);
      END_STATE();
    case 649:
      if (lookahead == 'h') ADVANCE(741);
      END_STATE();
    case 650:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(1540);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(1519);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(1494);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(932);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(931);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(994);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(933);
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(962);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(1276);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(1024);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(1325);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(1028);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(1031);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(1349);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(1035);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(1038);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(1040);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(1378);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(1042);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(1045);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(1365);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(1368);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(1380);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(1375);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(1340);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(1422);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(929);
      if (lookahead == 'o') ADVANCE(1178);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(1490);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(1542);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(1071);
      END_STATE();
    case 696:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 697:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 698:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(971);
      END_STATE();
    case 700:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 701:
      if (lookahead == 'i') ADVANCE(938);
      END_STATE();
    case 702:
      if (lookahead == 'i') ADVANCE(1543);
      END_STATE();
    case 703:
      if (lookahead == 'i') ADVANCE(1124);
      END_STATE();
    case 704:
      if (lookahead == 'i') ADVANCE(935);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 706:
      if (lookahead == 'i') ADVANCE(937);
      END_STATE();
    case 707:
      if (lookahead == 'i') ADVANCE(979);
      END_STATE();
    case 708:
      if (lookahead == 'i') ADVANCE(881);
      END_STATE();
    case 709:
      if (lookahead == 'i') ADVANCE(939);
      END_STATE();
    case 710:
      if (lookahead == 'i') ADVANCE(940);
      END_STATE();
    case 711:
      if (lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 712:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 713:
      if (lookahead == 'i') ADVANCE(982);
      END_STATE();
    case 714:
      if (lookahead == 'i') ADVANCE(987);
      END_STATE();
    case 715:
      if (lookahead == 'i') ADVANCE(942);
      END_STATE();
    case 716:
      if (lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 717:
      if (lookahead == 'i') ADVANCE(945);
      END_STATE();
    case 718:
      if (lookahead == 'i') ADVANCE(977);
      END_STATE();
    case 719:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 720:
      if (lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 721:
      if (lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 722:
      if (lookahead == 'i') ADVANCE(978);
      END_STATE();
    case 723:
      if (lookahead == 'i') ADVANCE(946);
      END_STATE();
    case 724:
      if (lookahead == 'i') ADVANCE(828);
      END_STATE();
    case 725:
      if (lookahead == 'i') ADVANCE(989);
      END_STATE();
    case 726:
      if (lookahead == 'i') ADVANCE(947);
      END_STATE();
    case 727:
      if (lookahead == 'i') ADVANCE(949);
      END_STATE();
    case 728:
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 729:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 730:
      if (lookahead == 'i') ADVANCE(951);
      END_STATE();
    case 731:
      if (lookahead == 'i') ADVANCE(953);
      END_STATE();
    case 732:
      if (lookahead == 'i') ADVANCE(966);
      END_STATE();
    case 733:
      if (lookahead == 'i') ADVANCE(990);
      END_STATE();
    case 734:
      if (lookahead == 'i') ADVANCE(956);
      END_STATE();
    case 735:
      if (lookahead == 'i') ADVANCE(992);
      END_STATE();
    case 736:
      if (lookahead == 'i') ADVANCE(1522);
      END_STATE();
    case 737:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 738:
      if (lookahead == 'i') ADVANCE(1492);
      END_STATE();
    case 739:
      if (lookahead == 'i') ADVANCE(998);
      END_STATE();
    case 740:
      if (lookahead == 'i') ADVANCE(1493);
      END_STATE();
    case 741:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 742:
      if (lookahead == 'i') ADVANCE(1081);
      END_STATE();
    case 743:
      if (lookahead == 'i') ADVANCE(1420);
      END_STATE();
    case 744:
      if (lookahead == 'i') ADVANCE(997);
      if (lookahead == 'p') ADVANCE(1465);
      if (lookahead == 's') ADVANCE(1739);
      if (lookahead == 'w') ADVANCE(495);
      END_STATE();
    case 745:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 746:
      if (lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 747:
      if (lookahead == 'i') ADVANCE(1495);
      END_STATE();
    case 748:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 749:
      if (lookahead == 'k') ADVANCE(1704);
      END_STATE();
    case 750:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 751:
      if (lookahead == 'k') ADVANCE(2392);
      END_STATE();
    case 752:
      if (lookahead == 'k') ADVANCE(1836);
      END_STATE();
    case 753:
      if (lookahead == 'k') ADVANCE(1652);
      END_STATE();
    case 754:
      if (lookahead == 'k') ADVANCE(1641);
      END_STATE();
    case 755:
      if (lookahead == 'k') ADVANCE(1857);
      END_STATE();
    case 756:
      if (lookahead == 'k') ADVANCE(1853);
      END_STATE();
    case 757:
      if (lookahead == 'k') ADVANCE(1769);
      END_STATE();
    case 758:
      if (lookahead == 'k') ADVANCE(1523);
      END_STATE();
    case 759:
      if (lookahead == 'k') ADVANCE(1442);
      END_STATE();
    case 760:
      if (lookahead == 'k') ADVANCE(1273);
      END_STATE();
    case 761:
      if (lookahead == 'k') ADVANCE(991);
      END_STATE();
    case 762:
      if (lookahead == 'k') ADVANCE(447);
      END_STATE();
    case 763:
      if (lookahead == 'k') ADVANCE(1267);
      END_STATE();
    case 764:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 765:
      if (lookahead == 'k') ADVANCE(1294);
      END_STATE();
    case 766:
      if (lookahead == 'k') ADVANCE(618);
      END_STATE();
    case 767:
      if (lookahead == 'k') ADVANCE(1300);
      END_STATE();
    case 768:
      if (lookahead == 'k') ADVANCE(604);
      END_STATE();
    case 769:
      if (lookahead == 'k') ADVANCE(1305);
      END_STATE();
    case 770:
      if (lookahead == 'k') ADVANCE(709);
      END_STATE();
    case 771:
      if (lookahead == 'k') ADVANCE(1308);
      END_STATE();
    case 772:
      if (lookahead == 'k') ADVANCE(1309);
      END_STATE();
    case 773:
      if (lookahead == 'k') ADVANCE(620);
      END_STATE();
    case 774:
      if (lookahead == 'l') ADVANCE(2279);
      END_STATE();
    case 775:
      if (lookahead == 'l') ADVANCE(836);
      END_STATE();
    case 776:
      if (lookahead == 'l') ADVANCE(2314);
      END_STATE();
    case 777:
      if (lookahead == 'l') ADVANCE(1694);
      END_STATE();
    case 778:
      if (lookahead == 'l') ADVANCE(2374);
      END_STATE();
    case 779:
      if (lookahead == 'l') ADVANCE(2320);
      END_STATE();
    case 780:
      if (lookahead == 'l') ADVANCE(2356);
      END_STATE();
    case 781:
      if (lookahead == 'l') ADVANCE(1802);
      END_STATE();
    case 782:
      if (lookahead == 'l') ADVANCE(2425);
      END_STATE();
    case 783:
      if (lookahead == 'l') ADVANCE(1856);
      END_STATE();
    case 784:
      if (lookahead == 'l') ADVANCE(2329);
      END_STATE();
    case 785:
      if (lookahead == 'l') ADVANCE(1811);
      END_STATE();
    case 786:
      if (lookahead == 'l') ADVANCE(1851);
      END_STATE();
    case 787:
      if (lookahead == 'l') ADVANCE(1736);
      END_STATE();
    case 788:
      if (lookahead == 'l') ADVANCE(1720);
      END_STATE();
    case 789:
      if (lookahead == 'l') ADVANCE(1774);
      END_STATE();
    case 790:
      if (lookahead == 'l') ADVANCE(776);
      if (lookahead == 't') ADVANCE(2317);
      END_STATE();
    case 791:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 792:
      if (lookahead == 'l') ADVANCE(1441);
      END_STATE();
    case 793:
      if (lookahead == 'l') ADVANCE(799);
      END_STATE();
    case 794:
      if (lookahead == 'l') ADVANCE(1503);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 796:
      if (lookahead == 'l') ADVANCE(1440);
      END_STATE();
    case 797:
      if (lookahead == 'l') ADVANCE(1016);
      END_STATE();
    case 798:
      if (lookahead == 'l') ADVANCE(1016);
      if (lookahead == 'n') ADVANCE(1360);
      END_STATE();
    case 799:
      if (lookahead == 'l') ADVANCE(1275);
      END_STATE();
    case 800:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 801:
      if (lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 802:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 803:
      if (lookahead == 'l') ADVANCE(669);
      END_STATE();
    case 804:
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 805:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 806:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 807:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 808:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 809:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 810:
      if (lookahead == 'l') ADVANCE(1067);
      END_STATE();
    case 811:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 812:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 813:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 814:
      if (lookahead == 'l') ADVANCE(812);
      END_STATE();
    case 815:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 816:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 817:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 818:
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 819:
      if (lookahead == 'l') ADVANCE(1022);
      END_STATE();
    case 820:
      if (lookahead == 'l') ADVANCE(786);
      END_STATE();
    case 821:
      if (lookahead == 'l') ADVANCE(788);
      END_STATE();
    case 822:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 823:
      if (lookahead == 'l') ADVANCE(1334);
      END_STATE();
    case 824:
      if (lookahead == 'l') ADVANCE(835);
      END_STATE();
    case 825:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 826:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 827:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 828:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 829:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 830:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 831:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 832:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 833:
      if (lookahead == 'l') ADVANCE(1388);
      END_STATE();
    case 834:
      if (lookahead == 'l') ADVANCE(1026);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead == 's') ADVANCE(1754);
      END_STATE();
    case 835:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 836:
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 837:
      if (lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 838:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 839:
      if (lookahead == 'l') ADVANCE(1010);
      END_STATE();
    case 840:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 841:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 842:
      if (lookahead == 'l') ADVANCE(1454);
      END_STATE();
    case 843:
      if (lookahead == 'l') ADVANCE(1473);
      END_STATE();
    case 844:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 845:
      if (lookahead == 'l') ADVANCE(1054);
      END_STATE();
    case 846:
      if (lookahead == 'l') ADVANCE(1079);
      END_STATE();
    case 847:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 848:
      if (lookahead == 'l') ADVANCE(1301);
      END_STATE();
    case 849:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 850:
      if (lookahead == 'l') ADVANCE(1078);
      END_STATE();
    case 851:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 852:
      if (lookahead == 'l') ADVANCE(1423);
      END_STATE();
    case 853:
      if (lookahead == 'l') ADVANCE(1306);
      END_STATE();
    case 854:
      if (lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 855:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 856:
      if (lookahead == 'l') ADVANCE(1085);
      END_STATE();
    case 857:
      if (lookahead == 'l') ADVANCE(733);
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 858:
      if (lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 859:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 860:
      if (lookahead == 'l') ADVANCE(853);
      END_STATE();
    case 861:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 862:
      if (lookahead == 'l') ADVANCE(1102);
      END_STATE();
    case 863:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 864:
      if (lookahead == 'm') ADVANCE(2263);
      END_STATE();
    case 865:
      if (lookahead == 'm') ADVANCE(2287);
      END_STATE();
    case 866:
      if (lookahead == 'm') ADVANCE(1571);
      END_STATE();
    case 867:
      if (lookahead == 'm') ADVANCE(1827);
      END_STATE();
    case 868:
      if (lookahead == 'm') ADVANCE(1835);
      END_STATE();
    case 869:
      if (lookahead == 'm') ADVANCE(1829);
      END_STATE();
    case 870:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 871:
      if (lookahead == 'm') ADVANCE(1255);
      END_STATE();
    case 872:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 873:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 874:
      if (lookahead == 'm') ADVANCE(1446);
      END_STATE();
    case 875:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 876:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 877:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 878:
      if (lookahead == 'm') ADVANCE(1084);
      END_STATE();
    case 879:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 880:
      if (lookahead == 'm') ADVANCE(461);
      END_STATE();
    case 881:
      if (lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 882:
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 883:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 884:
      if (lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 885:
      if (lookahead == 'm') ADVANCE(1453);
      END_STATE();
    case 886:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 887:
      if (lookahead == 'm') ADVANCE(896);
      END_STATE();
    case 888:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 889:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 890:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 891:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 892:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 893:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 894:
      if (lookahead == 'm') ADVANCE(850);
      END_STATE();
    case 895:
      if (lookahead == 'm') ADVANCE(1073);
      END_STATE();
    case 896:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 897:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 898:
      if (lookahead == 'm') ADVANCE(1086);
      END_STATE();
    case 899:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 900:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 901:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 902:
      if (lookahead == 'm') ADVANCE(897);
      END_STATE();
    case 903:
      if (lookahead == 'm') ADVANCE(899);
      END_STATE();
    case 904:
      if (lookahead == 'm') ADVANCE(900);
      END_STATE();
    case 905:
      if (lookahead == 'm') ADVANCE(1486);
      END_STATE();
    case 906:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(2422);
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 907:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 908:
      if (lookahead == 'n') ADVANCE(2305);
      END_STATE();
    case 909:
      if (lookahead == 'n') ADVANCE(1583);
      END_STATE();
    case 910:
      if (lookahead == 'n') ADVANCE(1740);
      END_STATE();
    case 911:
      if (lookahead == 'n') ADVANCE(1672);
      END_STATE();
    case 912:
      if (lookahead == 'n') ADVANCE(1758);
      END_STATE();
    case 913:
      if (lookahead == 'n') ADVANCE(1816);
      END_STATE();
    case 914:
      if (lookahead == 'n') ADVANCE(1703);
      END_STATE();
    case 915:
      if (lookahead == 'n') ADVANCE(1768);
      END_STATE();
    case 916:
      if (lookahead == 'n') ADVANCE(1701);
      END_STATE();
    case 917:
      if (lookahead == 'n') ADVANCE(2338);
      END_STATE();
    case 918:
      if (lookahead == 'n') ADVANCE(1710);
      END_STATE();
    case 919:
      if (lookahead == 'n') ADVANCE(1744);
      END_STATE();
    case 920:
      if (lookahead == 'n') ADVANCE(1738);
      END_STATE();
    case 921:
      if (lookahead == 'n') ADVANCE(1663);
      END_STATE();
    case 922:
      if (lookahead == 'n') ADVANCE(1634);
      END_STATE();
    case 923:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 924:
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == 'x') ADVANCE(428);
      END_STATE();
    case 925:
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 926:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 927:
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 928:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 929:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 930:
      if (lookahead == 'n') ADVANCE(1407);
      END_STATE();
    case 931:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 932:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 933:
      if (lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 934:
      if (lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 935:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 936:
      if (lookahead == 'n') ADVANCE(1271);
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 937:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 938:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 939:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 940:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 941:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 942:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 943:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 944:
      if (lookahead == 'n') ADVANCE(1361);
      END_STATE();
    case 945:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 946:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 947:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 948:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 949:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 950:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 951:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 952:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 953:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 954:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 955:
      if (lookahead == 'n') ADVANCE(1262);
      END_STATE();
    case 956:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 957:
      if (lookahead == 'n') ADVANCE(1263);
      END_STATE();
    case 958:
      if (lookahead == 'n') ADVANCE(1326);
      END_STATE();
    case 959:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 960:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 961:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 962:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 963:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 964:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 965:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 966:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 967:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 968:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 969:
      if (lookahead == 'n') ADVANCE(1331);
      END_STATE();
    case 970:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 971:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 972:
      if (lookahead == 'n') ADVANCE(1332);
      END_STATE();
    case 973:
      if (lookahead == 'n') ADVANCE(1333);
      END_STATE();
    case 974:
      if (lookahead == 'n') ADVANCE(1339);
      END_STATE();
    case 975:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 976:
      if (lookahead == 'n') ADVANCE(1342);
      END_STATE();
    case 977:
      if (lookahead == 'n') ADVANCE(1347);
      END_STATE();
    case 978:
      if (lookahead == 'n') ADVANCE(1348);
      END_STATE();
    case 979:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 980:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 981:
      if (lookahead == 'n') ADVANCE(1288);
      END_STATE();
    case 982:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 983:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 984:
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 985:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 986:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 987:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 988:
      if (lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 989:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 990:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 991:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 992:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 993:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 994:
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 995:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 996:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 997:
      if (lookahead == 'n') ADVANCE(1414);
      END_STATE();
    case 998:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 999:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 1000:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 1001:
      if (lookahead == 'n') ADVANCE(1430);
      END_STATE();
    case 1002:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 1003:
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == 'x') ADVANCE(428);
      END_STATE();
    case 1004:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 1005:
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 1006:
      if (lookahead == 'o') ADVANCE(2281);
      END_STATE();
    case 1007:
      if (lookahead == 'o') ADVANCE(1496);
      END_STATE();
    case 1008:
      if (lookahead == 'o') ADVANCE(864);
      END_STATE();
    case 1009:
      if (lookahead == 'o') ADVANCE(1196);
      END_STATE();
    case 1010:
      if (lookahead == 'o') ADVANCE(1507);
      END_STATE();
    case 1011:
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 1012:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 1013:
      if (lookahead == 'o') ADVANCE(1178);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 1014:
      if (lookahead == 'o') ADVANCE(1497);
      END_STATE();
    case 1015:
      if (lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 1016:
      if (lookahead == 'o') ADVANCE(1155);
      END_STATE();
    case 1017:
      if (lookahead == 'o') ADVANCE(1498);
      END_STATE();
    case 1018:
      if (lookahead == 'o') ADVANCE(893);
      END_STATE();
    case 1019:
      if (lookahead == 'o') ADVANCE(988);
      END_STATE();
    case 1020:
      if (lookahead == 'o') ADVANCE(1499);
      END_STATE();
    case 1021:
      if (lookahead == 'o') ADVANCE(1476);
      END_STATE();
    case 1022:
      if (lookahead == 'o') ADVANCE(1508);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 1024:
      if (lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 1025:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 1026:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 1027:
      if (lookahead == 'o') ADVANCE(1484);
      END_STATE();
    case 1028:
      if (lookahead == 'o') ADVANCE(912);
      END_STATE();
    case 1029:
      if (lookahead == 'o') ADVANCE(887);
      END_STATE();
    case 1030:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 1031:
      if (lookahead == 'o') ADVANCE(955);
      END_STATE();
    case 1032:
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 1033:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 1034:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 1035:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 1036:
      if (lookahead == 'o') ADVANCE(1162);
      END_STATE();
    case 1037:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 1038:
      if (lookahead == 'o') ADVANCE(916);
      END_STATE();
    case 1039:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 1040:
      if (lookahead == 'o') ADVANCE(918);
      END_STATE();
    case 1041:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 1042:
      if (lookahead == 'o') ADVANCE(919);
      END_STATE();
    case 1043:
      if (lookahead == 'o') ADVANCE(1249);
      END_STATE();
    case 1044:
      if (lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 1045:
      if (lookahead == 'o') ADVANCE(921);
      END_STATE();
    case 1046:
      if (lookahead == 'o') ADVANCE(922);
      END_STATE();
    case 1047:
      if (lookahead == 'o') ADVANCE(1184);
      END_STATE();
    case 1048:
      if (lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 1049:
      if (lookahead == 'o') ADVANCE(1166);
      END_STATE();
    case 1050:
      if (lookahead == 'o') ADVANCE(1221);
      END_STATE();
    case 1051:
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 1052:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 1053:
      if (lookahead == 'o') ADVANCE(789);
      END_STATE();
    case 1054:
      if (lookahead == 'o') ADVANCE(1167);
      END_STATE();
    case 1055:
      if (lookahead == 'o') ADVANCE(1233);
      END_STATE();
    case 1056:
      if (lookahead == 'o') ADVANCE(1169);
      END_STATE();
    case 1057:
      if (lookahead == 'o') ADVANCE(1171);
      END_STATE();
    case 1058:
      if (lookahead == 'o') ADVANCE(1173);
      END_STATE();
    case 1059:
      if (lookahead == 'o') ADVANCE(1174);
      END_STATE();
    case 1060:
      if (lookahead == 'o') ADVANCE(1175);
      END_STATE();
    case 1061:
      if (lookahead == 'o') ADVANCE(1506);
      END_STATE();
    case 1062:
      if (lookahead == 'o') ADVANCE(1450);
      END_STATE();
    case 1063:
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 1064:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 1065:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 1066:
      if (lookahead == 'o') ADVANCE(957);
      END_STATE();
    case 1067:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 1068:
      if (lookahead == 'o') ADVANCE(1048);
      END_STATE();
    case 1069:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 1070:
      if (lookahead == 'o') ADVANCE(818);
      END_STATE();
    case 1071:
      if (lookahead == 'o') ADVANCE(964);
      END_STATE();
    case 1072:
      if (lookahead == 'o') ADVANCE(1211);
      END_STATE();
    case 1073:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 1074:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 1075:
      if (lookahead == 'o') ADVANCE(820);
      END_STATE();
    case 1076:
      if (lookahead == 'o') ADVANCE(968);
      END_STATE();
    case 1077:
      if (lookahead == 'o') ADVANCE(1212);
      END_STATE();
    case 1078:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 1079:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 1080:
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 1081:
      if (lookahead == 'o') ADVANCE(999);
      END_STATE();
    case 1082:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 1083:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 1084:
      if (lookahead == 'o') ADVANCE(1472);
      END_STATE();
    case 1085:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 1086:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 1087:
      if (lookahead == 'o') ADVANCE(1459);
      END_STATE();
    case 1088:
      if (lookahead == 'o') ADVANCE(1463);
      END_STATE();
    case 1089:
      if (lookahead == 'o') ADVANCE(1464);
      END_STATE();
    case 1090:
      if (lookahead == 'o') ADVANCE(1228);
      END_STATE();
    case 1091:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 1092:
      if (lookahead == 'o') ADVANCE(1477);
      END_STATE();
    case 1093:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 1094:
      if (lookahead == 'o') ADVANCE(1000);
      END_STATE();
    case 1095:
      if (lookahead == 'o') ADVANCE(1480);
      END_STATE();
    case 1096:
      if (lookahead == 'o') ADVANCE(1478);
      END_STATE();
    case 1097:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 1098:
      if (lookahead == 'o') ADVANCE(1482);
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 1099:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 1100:
      if (lookahead == 'o') ADVANCE(1243);
      END_STATE();
    case 1101:
      if (lookahead == 'o') ADVANCE(1237);
      END_STATE();
    case 1102:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 1103:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 1104:
      if (lookahead == 'o') ADVANCE(1245);
      END_STATE();
    case 1105:
      if (lookahead == 'o') ADVANCE(1239);
      END_STATE();
    case 1106:
      if (lookahead == 'o') ADVANCE(1246);
      END_STATE();
    case 1107:
      if (lookahead == 'o') ADVANCE(1240);
      END_STATE();
    case 1108:
      if (lookahead == 'o') ADVANCE(1248);
      END_STATE();
    case 1109:
      if (lookahead == 'o') ADVANCE(1242);
      END_STATE();
    case 1110:
      if (lookahead == 'o') ADVANCE(902);
      END_STATE();
    case 1111:
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 1112:
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 1113:
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(749);
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 1114:
      if (lookahead == 'p') ADVANCE(1803);
      if (lookahead == 'y') ADVANCE(244);
      END_STATE();
    case 1115:
      if (lookahead == 'p') ADVANCE(1732);
      END_STATE();
    case 1116:
      if (lookahead == 'p') ADVANCE(1813);
      END_STATE();
    case 1117:
      if (lookahead == 'p') ADVANCE(1616);
      END_STATE();
    case 1118:
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(1428);
      END_STATE();
    case 1119:
      if (lookahead == 'p') ADVANCE(1256);
      END_STATE();
    case 1120:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 1121:
      if (lookahead == 'p') ADVANCE(736);
      END_STATE();
    case 1122:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 1123:
      if (lookahead == 'p') ADVANCE(1313);
      if (lookahead == 't' ||
          lookahead == 'x') ADVANCE(2435);
      END_STATE();
    case 1124:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 1125:
      if (lookahead == 'p') ADVANCE(1432);
      END_STATE();
    case 1126:
      if (lookahead == 'p') ADVANCE(1307);
      END_STATE();
    case 1127:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 1128:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 1129:
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 't') ADVANCE(1068);
      END_STATE();
    case 1130:
      if (lookahead == 'p') ADVANCE(1198);
      END_STATE();
    case 1131:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 1132:
      if (lookahead == 'p') ADVANCE(1268);
      END_STATE();
    case 1133:
      if (lookahead == 'p') ADVANCE(1364);
      END_STATE();
    case 1134:
      if (lookahead == 'p') ADVANCE(1145);
      END_STATE();
    case 1135:
      if (lookahead == 'p') ADVANCE(1452);
      END_STATE();
    case 1136:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 1137:
      if (lookahead == 'p') ADVANCE(817);
      END_STATE();
    case 1138:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 1139:
      if (lookahead == 'p') ADVANCE(1399);
      END_STATE();
    case 1140:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 1141:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 1142:
      if (lookahead == 'p') ADVANCE(1460);
      END_STATE();
    case 1143:
      if (lookahead == 'p') ADVANCE(1461);
      END_STATE();
    case 1144:
      if (lookahead == 'p') ADVANCE(1462);
      END_STATE();
    case 1145:
      if (lookahead == 'p') ADVANCE(723);
      END_STATE();
    case 1146:
      if (lookahead == 'p') ADVANCE(728);
      END_STATE();
    case 1147:
      if (lookahead == 'p') ADVANCE(731);
      END_STATE();
    case 1148:
      if (lookahead == 'p') ADVANCE(734);
      END_STATE();
    case 1149:
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1150:
      if (lookahead == 'p') ADVANCE(1250);
      END_STATE();
    case 1151:
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 1152:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 1153:
      if (lookahead == 'r') ADVANCE(1236);
      END_STATE();
    case 1154:
      if (lookahead == 'r') ADVANCE(1678);
      END_STATE();
    case 1155:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 1156:
      if (lookahead == 'r') ADVANCE(2332);
      END_STATE();
    case 1157:
      if (lookahead == 'r') ADVANCE(2266);
      END_STATE();
    case 1158:
      if (lookahead == 'r') ADVANCE(2365);
      END_STATE();
    case 1159:
      if (lookahead == 'r') ADVANCE(1743);
      END_STATE();
    case 1160:
      if (lookahead == 'r') ADVANCE(1611);
      END_STATE();
    case 1161:
      if (lookahead == 'r') ADVANCE(2290);
      END_STATE();
    case 1162:
      if (lookahead == 'r') ADVANCE(1629);
      END_STATE();
    case 1163:
      if (lookahead == 'r') ADVANCE(1734);
      END_STATE();
    case 1164:
      if (lookahead == 'r') ADVANCE(1715);
      END_STATE();
    case 1165:
      if (lookahead == 'r') ADVANCE(2260);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(1773);
      END_STATE();
    case 1167:
      if (lookahead == 'r') ADVANCE(2401);
      END_STATE();
    case 1168:
      if (lookahead == 'r') ADVANCE(1764);
      END_STATE();
    case 1169:
      if (lookahead == 'r') ADVANCE(1770);
      END_STATE();
    case 1170:
      if (lookahead == 'r') ADVANCE(1658);
      END_STATE();
    case 1171:
      if (lookahead == 'r') ADVANCE(1666);
      END_STATE();
    case 1172:
      if (lookahead == 'r') ADVANCE(1621);
      END_STATE();
    case 1173:
      if (lookahead == 'r') ADVANCE(1775);
      END_STATE();
    case 1174:
      if (lookahead == 'r') ADVANCE(1609);
      END_STATE();
    case 1175:
      if (lookahead == 'r') ADVANCE(1681);
      END_STATE();
    case 1176:
      if (lookahead == 'r') ADVANCE(1632);
      END_STATE();
    case 1177:
      if (lookahead == 'r') ADVANCE(1633);
      END_STATE();
    case 1178:
      if (lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 1179:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 1180:
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 't') ADVANCE(1356);
      END_STATE();
    case 1181:
      if (lookahead == 'r') ADVANCE(1535);
      END_STATE();
    case 1182:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 1183:
      if (lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 1184:
      if (lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 1185:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 1186:
      if (lookahead == 'r') ADVANCE(1363);
      END_STATE();
    case 1187:
      if (lookahead == 'r') ADVANCE(808);
      END_STATE();
    case 1188:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 1189:
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 1190:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 1191:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 1192:
      if (lookahead == 'r') ADVANCE(1018);
      END_STATE();
    case 1193:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 1194:
      if (lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 1195:
      if (lookahead == 'r') ADVANCE(1357);
      if (lookahead == 'w') ADVANCE(2389);
      END_STATE();
    case 1196:
      if (lookahead == 'r') ADVANCE(1357);
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 1197:
      if (lookahead == 'r') ADVANCE(1324);
      END_STATE();
    case 1198:
      if (lookahead == 'r') ADVANCE(1091);
      END_STATE();
    case 1199:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 1200:
      if (lookahead == 'r') ADVANCE(1264);
      END_STATE();
    case 1201:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 1202:
      if (lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 1203:
      if (lookahead == 'r') ADVANCE(1269);
      END_STATE();
    case 1204:
      if (lookahead == 'r') ADVANCE(1027);
      END_STATE();
    case 1205:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 1206:
      if (lookahead == 'r') ADVANCE(1270);
      END_STATE();
    case 1207:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 1208:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 1209:
      if (lookahead == 'r') ADVANCE(1335);
      END_STATE();
    case 1210:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 1211:
      if (lookahead == 'r') ADVANCE(1362);
      END_STATE();
    case 1212:
      if (lookahead == 'r') ADVANCE(1369);
      END_STATE();
    case 1213:
      if (lookahead == 'r') ADVANCE(1387);
      END_STATE();
    case 1214:
      if (lookahead == 'r') ADVANCE(1290);
      END_STATE();
    case 1215:
      if (lookahead == 'r') ADVANCE(763);
      END_STATE();
    case 1216:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 1217:
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 1218:
      if (lookahead == 'r') ADVANCE(1278);
      END_STATE();
    case 1219:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 1220:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 1221:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 1222:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 1223:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 1224:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 1225:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 1226:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 1227:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 1228:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 1229:
      if (lookahead == 'r') ADVANCE(1092);
      END_STATE();
    case 1230:
      if (lookahead == 'r') ADVANCE(1075);
      END_STATE();
    case 1231:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 1232:
      if (lookahead == 'r') ADVANCE(1298);
      END_STATE();
    case 1233:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 1234:
      if (lookahead == 'r') ADVANCE(1096);
      END_STATE();
    case 1235:
      if (lookahead == 'r') ADVANCE(1080);
      END_STATE();
    case 1236:
      if (lookahead == 'r') ADVANCE(553);
      if (lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 1237:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 1238:
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 1239:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 1240:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 1241:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 1242:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 1243:
      if (lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 1244:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 1245:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 1246:
      if (lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 1247:
      if (lookahead == 'r') ADVANCE(1148);
      END_STATE();
    case 1248:
      if (lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 1249:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 1250:
      if (lookahead == 'r') ADVANCE(1103);
      END_STATE();
    case 1251:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 1252:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 1253:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 1254:
      if (lookahead == 's') ADVANCE(2428);
      END_STATE();
    case 1255:
      if (lookahead == 's') ADVANCE(1639);
      END_STATE();
    case 1256:
      if (lookahead == 's') ADVANCE(1675);
      END_STATE();
    case 1257:
      if (lookahead == 's') ADVANCE(1660);
      END_STATE();
    case 1258:
      if (lookahead == 's') ADVANCE(1648);
      END_STATE();
    case 1259:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 1260:
      if (lookahead == 's') ADVANCE(1859);
      END_STATE();
    case 1261:
      if (lookahead == 's') ADVANCE(1580);
      END_STATE();
    case 1262:
      if (lookahead == 's') ADVANCE(1858);
      END_STATE();
    case 1263:
      if (lookahead == 's') ADVANCE(1848);
      END_STATE();
    case 1264:
      if (lookahead == 's') ADVANCE(1801);
      END_STATE();
    case 1265:
      if (lookahead == 's') ADVANCE(1820);
      END_STATE();
    case 1266:
      if (lookahead == 's') ADVANCE(1587);
      END_STATE();
    case 1267:
      if (lookahead == 's') ADVANCE(1778);
      END_STATE();
    case 1268:
      if (lookahead == 's') ADVANCE(1780);
      END_STATE();
    case 1269:
      if (lookahead == 's') ADVANCE(1779);
      END_STATE();
    case 1270:
      if (lookahead == 's') ADVANCE(1682);
      END_STATE();
    case 1271:
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 1272:
      if (lookahead == 's') ADVANCE(658);
      END_STATE();
    case 1273:
      if (lookahead == 's') ADVANCE(1127);
      END_STATE();
    case 1274:
      if (lookahead == 's') ADVANCE(1023);
      END_STATE();
    case 1275:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 1276:
      if (lookahead == 's') ADVANCE(1137);
      END_STATE();
    case 1277:
      if (lookahead == 's') ADVANCE(1531);
      END_STATE();
    case 1278:
      if (lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 1279:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 1280:
      if (lookahead == 's') ADVANCE(1265);
      END_STATE();
    case 1281:
      if (lookahead == 's') ADVANCE(1328);
      END_STATE();
    case 1282:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 1283:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 1284:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 1285:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 1286:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 1287:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 1288:
      if (lookahead == 's') ADVANCE(1385);
      END_STATE();
    case 1289:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 1290:
      if (lookahead == 's') ADVANCE(1043);
      END_STATE();
    case 1291:
      if (lookahead == 's') ADVANCE(1530);
      END_STATE();
    case 1292:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 1293:
      if (lookahead == 's') ADVANCE(642);
      END_STATE();
    case 1294:
      if (lookahead == 's') ADVANCE(1131);
      END_STATE();
    case 1295:
      if (lookahead == 's') ADVANCE(840);
      END_STATE();
    case 1296:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 1297:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 1298:
      if (lookahead == 's') ADVANCE(1060);
      END_STATE();
    case 1299:
      if (lookahead == 's') ADVANCE(1400);
      END_STATE();
    case 1300:
      if (lookahead == 's') ADVANCE(1136);
      END_STATE();
    case 1301:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 1302:
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 1303:
      if (lookahead == 's') ADVANCE(1412);
      END_STATE();
    case 1304:
      if (lookahead == 's') ADVANCE(1404);
      END_STATE();
    case 1305:
      if (lookahead == 's') ADVANCE(1138);
      END_STATE();
    case 1306:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 1307:
      if (lookahead == 's') ADVANCE(854);
      END_STATE();
    case 1308:
      if (lookahead == 's') ADVANCE(1140);
      END_STATE();
    case 1309:
      if (lookahead == 's') ADVANCE(1141);
      END_STATE();
    case 1310:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 1311:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 1312:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 1313:
      if (lookahead == 't') ADVANCE(2435);
      END_STATE();
    case 1314:
      if (lookahead == 't') ADVANCE(1642);
      END_STATE();
    case 1315:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 1316:
      if (lookahead == 't') ADVANCE(2383);
      END_STATE();
    case 1317:
      if (lookahead == 't') ADVANCE(1649);
      END_STATE();
    case 1318:
      if (lookahead == 't') ADVANCE(1669);
      END_STATE();
    case 1319:
      if (lookahead == 't') ADVANCE(2341);
      END_STATE();
    case 1320:
      if (lookahead == 't') ADVANCE(2347);
      END_STATE();
    case 1321:
      if (lookahead == 't') ADVANCE(1772);
      END_STATE();
    case 1322:
      if (lookahead == 't') ADVANCE(1691);
      END_STATE();
    case 1323:
      if (lookahead == 't') ADVANCE(2386);
      END_STATE();
    case 1324:
      if (lookahead == 't') ADVANCE(2398);
      END_STATE();
    case 1325:
      if (lookahead == 't') ADVANCE(1782);
      END_STATE();
    case 1326:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 1327:
      if (lookahead == 't') ADVANCE(1679);
      END_STATE();
    case 1328:
      if (lookahead == 't') ADVANCE(2335);
      END_STATE();
    case 1329:
      if (lookahead == 't') ADVANCE(1697);
      END_STATE();
    case 1330:
      if (lookahead == 't') ADVANCE(1729);
      END_STATE();
    case 1331:
      if (lookahead == 't') ADVANCE(2371);
      END_STATE();
    case 1332:
      if (lookahead == 't') ADVANCE(1841);
      END_STATE();
    case 1333:
      if (lookahead == 't') ADVANCE(2296);
      END_STATE();
    case 1334:
      if (lookahead == 't') ADVANCE(2299);
      END_STATE();
    case 1335:
      if (lookahead == 't') ADVANCE(1759);
      END_STATE();
    case 1336:
      if (lookahead == 't') ADVANCE(1721);
      END_STATE();
    case 1337:
      if (lookahead == 't') ADVANCE(1855);
      END_STATE();
    case 1338:
      if (lookahead == 't') ADVANCE(1830);
      END_STATE();
    case 1339:
      if (lookahead == 't') ADVANCE(1861);
      END_STATE();
    case 1340:
      if (lookahead == 't') ADVANCE(1685);
      END_STATE();
    case 1341:
      if (lookahead == 't') ADVANCE(1817);
      END_STATE();
    case 1342:
      if (lookahead == 't') ADVANCE(1623);
      END_STATE();
    case 1343:
      if (lookahead == 't') ADVANCE(1626);
      END_STATE();
    case 1344:
      if (lookahead == 't') ADVANCE(1702);
      END_STATE();
    case 1345:
      if (lookahead == 't') ADVANCE(1849);
      END_STATE();
    case 1346:
      if (lookahead == 't') ADVANCE(1860);
      END_STATE();
    case 1347:
      if (lookahead == 't') ADVANCE(1737);
      END_STATE();
    case 1348:
      if (lookahead == 't') ADVANCE(1670);
      END_STATE();
    case 1349:
      if (lookahead == 't') ADVANCE(1524);
      END_STATE();
    case 1350:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 1351:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 1352:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 1353:
      if (lookahead == 't') ADVANCE(1006);
      END_STATE();
    case 1354:
      if (lookahead == 't') ADVANCE(1142);
      END_STATE();
    case 1355:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 1356:
      if (lookahead == 't') ADVANCE(1015);
      END_STATE();
    case 1357:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 1358:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 1359:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 1360:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 1361:
      if (lookahead == 't') ADVANCE(1258);
      END_STATE();
    case 1362:
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 1363:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 1364:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 1365:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 1366:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 1367:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 1368:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 1369:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 1370:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 1371:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 1372:
      if (lookahead == 't') ADVANCE(1282);
      END_STATE();
    case 1373:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 1374:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 1375:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 1376:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 1377:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 1378:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 1379:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 1380:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 1381:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 1382:
      if (lookahead == 't') ADVANCE(1037);
      END_STATE();
    case 1383:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 1384:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 1385:
      if (lookahead == 't') ADVANCE(1216);
      END_STATE();
    case 1386:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 1387:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 1388:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 1389:
      if (lookahead == 't') ADVANCE(1443);
      END_STATE();
    case 1390:
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'y') ADVANCE(486);
      END_STATE();
    case 1391:
      if (lookahead == 't') ADVANCE(1444);
      END_STATE();
    case 1392:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 1393:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 1394:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 1395:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 1396:
      if (lookahead == 't') ADVANCE(1066);
      END_STATE();
    case 1397:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 1398:
      if (lookahead == 't') ADVANCE(1052);
      END_STATE();
    case 1399:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 1400:
      if (lookahead == 't') ADVANCE(1471);
      END_STATE();
    case 1401:
      if (lookahead == 't') ADVANCE(1425);
      END_STATE();
    case 1402:
      if (lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 1403:
      if (lookahead == 't') ADVANCE(1049);
      END_STATE();
    case 1404:
      if (lookahead == 't') ADVANCE(1474);
      END_STATE();
    case 1405:
      if (lookahead == 't') ADVANCE(1382);
      END_STATE();
    case 1406:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 1407:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 1408:
      if (lookahead == 't') ADVANCE(1448);
      END_STATE();
    case 1409:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 1410:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 1411:
      if (lookahead == 't') ADVANCE(1396);
      END_STATE();
    case 1412:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 1413:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 1414:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 1415:
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 1416:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 1417:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 1418:
      if (lookahead == 't') ADVANCE(1057);
      END_STATE();
    case 1419:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 1420:
      if (lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 1421:
      if (lookahead == 't') ADVANCE(1059);
      END_STATE();
    case 1422:
      if (lookahead == 't') ADVANCE(830);
      END_STATE();
    case 1423:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 1424:
      if (lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 1425:
      if (lookahead == 't') ADVANCE(1076);
      END_STATE();
    case 1426:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 1427:
      if (lookahead == 't') ADVANCE(1144);
      END_STATE();
    case 1428:
      if (lookahead == 't') ADVANCE(1135);
      END_STATE();
    case 1429:
      if (lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 1430:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 1431:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 1432:
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 1433:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 1434:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 1435:
      if (lookahead == 't') ADVANCE(1429);
      END_STATE();
    case 1436:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 1437:
      if (lookahead == 'u') ADVANCE(1214);
      END_STATE();
    case 1438:
      if (lookahead == 'u') ADVANCE(894);
      END_STATE();
    case 1439:
      if (lookahead == 'u') ADVANCE(1257);
      END_STATE();
    case 1440:
      if (lookahead == 'u') ADVANCE(587);
      END_STATE();
    case 1441:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 1442:
      if (lookahead == 'u') ADVANCE(1115);
      END_STATE();
    case 1443:
      if (lookahead == 'u') ADVANCE(1226);
      END_STATE();
    case 1444:
      if (lookahead == 'u') ADVANCE(1259);
      END_STATE();
    case 1445:
      if (lookahead == 'u') ADVANCE(823);
      END_STATE();
    case 1446:
      if (lookahead == 'u') ADVANCE(879);
      END_STATE();
    case 1447:
      if (lookahead == 'u') ADVANCE(1322);
      END_STATE();
    case 1448:
      if (lookahead == 'u') ADVANCE(1295);
      END_STATE();
    case 1449:
      if (lookahead == 'u') ADVANCE(841);
      END_STATE();
    case 1450:
      if (lookahead == 'u') ADVANCE(1329);
      END_STATE();
    case 1451:
      if (lookahead == 'u') ADVANCE(1266);
      END_STATE();
    case 1452:
      if (lookahead == 'u') ADVANCE(1330);
      END_STATE();
    case 1453:
      if (lookahead == 'u') ADVANCE(851);
      END_STATE();
    case 1454:
      if (lookahead == 'u') ADVANCE(1377);
      END_STATE();
    case 1455:
      if (lookahead == 'u') ADVANCE(1401);
      END_STATE();
    case 1456:
      if (lookahead == 'u') ADVANCE(1372);
      END_STATE();
    case 1457:
      if (lookahead == 'u') ADVANCE(1220);
      END_STATE();
    case 1458:
      if (lookahead == 'u') ADVANCE(1354);
      END_STATE();
    case 1459:
      if (lookahead == 'u') ADVANCE(1337);
      END_STATE();
    case 1460:
      if (lookahead == 'u') ADVANCE(1338);
      END_STATE();
    case 1461:
      if (lookahead == 'u') ADVANCE(1343);
      END_STATE();
    case 1462:
      if (lookahead == 'u') ADVANCE(1344);
      END_STATE();
    case 1463:
      if (lookahead == 'u') ADVANCE(1345);
      END_STATE();
    case 1464:
      if (lookahead == 'u') ADVANCE(1346);
      END_STATE();
    case 1465:
      if (lookahead == 'u') ADVANCE(1122);
      END_STATE();
    case 1466:
      if (lookahead == 'u') ADVANCE(1285);
      END_STATE();
    case 1467:
      if (lookahead == 'u') ADVANCE(833);
      END_STATE();
    case 1468:
      if (lookahead == 'u') ADVANCE(1284);
      END_STATE();
    case 1469:
      if (lookahead == 'u') ADVANCE(1238);
      END_STATE();
    case 1470:
      if (lookahead == 'u') ADVANCE(1286);
      END_STATE();
    case 1471:
      if (lookahead == 'u') ADVANCE(1208);
      END_STATE();
    case 1472:
      if (lookahead == 'u') ADVANCE(1287);
      END_STATE();
    case 1473:
      if (lookahead == 'u') ADVANCE(1395);
      END_STATE();
    case 1474:
      if (lookahead == 'u') ADVANCE(1210);
      END_STATE();
    case 1475:
      if (lookahead == 'u') ADVANCE(1398);
      END_STATE();
    case 1476:
      if (lookahead == 'u') ADVANCE(948);
      END_STATE();
    case 1477:
      if (lookahead == 'u') ADVANCE(967);
      END_STATE();
    case 1478:
      if (lookahead == 'u') ADVANCE(970);
      END_STATE();
    case 1479:
      if (lookahead == 'u') ADVANCE(1405);
      END_STATE();
    case 1480:
      if (lookahead == 'u') ADVANCE(1424);
      END_STATE();
    case 1481:
      if (lookahead == 'u') ADVANCE(1411);
      END_STATE();
    case 1482:
      if (lookahead == 'u') ADVANCE(1427);
      END_STATE();
    case 1483:
      if (lookahead == 'u') ADVANCE(1232);
      END_STATE();
    case 1484:
      if (lookahead == 'u') ADVANCE(1146);
      END_STATE();
    case 1485:
      if (lookahead == 'u') ADVANCE(858);
      END_STATE();
    case 1486:
      if (lookahead == 'u') ADVANCE(901);
      END_STATE();
    case 1487:
      if (lookahead == 'u') ADVANCE(1435);
      END_STATE();
    case 1488:
      if (lookahead == 'u') ADVANCE(860);
      END_STATE();
    case 1489:
      if (lookahead == 'v') ADVANCE(2377);
      END_STATE();
    case 1490:
      if (lookahead == 'v') ADVANCE(473);
      END_STATE();
    case 1491:
      if (lookahead == 'v') ADVANCE(490);
      END_STATE();
    case 1492:
      if (lookahead == 'v') ADVANCE(562);
      END_STATE();
    case 1493:
      if (lookahead == 'v') ADVANCE(550);
      END_STATE();
    case 1494:
      if (lookahead == 'v') ADVANCE(213);
      END_STATE();
    case 1495:
      if (lookahead == 'v') ADVANCE(563);
      END_STATE();
    case 1496:
      if (lookahead == 'w') ADVANCE(2323);
      END_STATE();
    case 1497:
      if (lookahead == 'w') ADVANCE(2272);
      END_STATE();
    case 1498:
      if (lookahead == 'w') ADVANCE(1586);
      END_STATE();
    case 1499:
      if (lookahead == 'w') ADVANCE(1722);
      END_STATE();
    case 1500:
      if (lookahead == 'w') ADVANCE(908);
      END_STATE();
    case 1501:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 1502:
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(1320);
      END_STATE();
    case 1503:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 1504:
      if (lookahead == 'w') ADVANCE(1090);
      END_STATE();
    case 1505:
      if (lookahead == 'w') ADVANCE(676);
      END_STATE();
    case 1506:
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 1507:
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 1508:
      if (lookahead == 'w') ADVANCE(1292);
      END_STATE();
    case 1509:
      if (lookahead == 'w') ADVANCE(683);
      if (lookahead == 'y') ADVANCE(866);
      END_STATE();
    case 1510:
      if (lookahead == 'w') ADVANCE(685);
      END_STATE();
    case 1511:
      if (lookahead == 'w') ADVANCE(178);
      END_STATE();
    case 1512:
      if (lookahead == 'w') ADVANCE(687);
      if (lookahead == 'y') ADVANCE(868);
      END_STATE();
    case 1513:
      if (lookahead == 'w') ADVANCE(707);
      END_STATE();
    case 1514:
      if (lookahead == 'w') ADVANCE(1100);
      END_STATE();
    case 1515:
      if (lookahead == 'w') ADVANCE(725);
      END_STATE();
    case 1516:
      if (lookahead == 'w') ADVANCE(1104);
      END_STATE();
    case 1517:
      if (lookahead == 'w') ADVANCE(1108);
      END_STATE();
    case 1518:
      if (lookahead == 'w') ADVANCE(1252);
      END_STATE();
    case 1519:
      if (lookahead == 'x') ADVANCE(1614);
      END_STATE();
    case 1520:
      if (lookahead == 'x') ADVANCE(667);
      END_STATE();
    case 1521:
      if (lookahead == 'x') ADVANCE(498);
      END_STATE();
    case 1522:
      if (lookahead == 'x') ADVANCE(509);
      END_STATE();
    case 1523:
      if (lookahead == 'y') ADVANCE(1797);
      END_STATE();
    case 1524:
      if (lookahead == 'y') ADVANCE(1726);
      END_STATE();
    case 1525:
      if (lookahead == 'y') ADVANCE(2368);
      END_STATE();
    case 1526:
      if (lookahead == 'y') ADVANCE(1752);
      END_STATE();
    case 1527:
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 1528:
      if (lookahead == 'y') ADVANCE(869);
      END_STATE();
    case 1529:
      if (lookahead == 'y') ADVANCE(849);
      END_STATE();
    case 1530:
      if (lookahead == 'y') ADVANCE(872);
      END_STATE();
    case 1531:
      if (lookahead == 'y') ADVANCE(952);
      END_STATE();
    case 1532:
      if (lookahead == 'y') ADVANCE(1261);
      END_STATE();
    case 1533:
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 1534:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 1535:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 1536:
      if (lookahead == 'y') ADVANCE(1087);
      END_STATE();
    case 1537:
      if (lookahead == 'y') ADVANCE(1088);
      END_STATE();
    case 1538:
      if (lookahead == 'y') ADVANCE(1089);
      END_STATE();
    case 1539:
      if (lookahead == 'y') ADVANCE(1062);
      END_STATE();
    case 1540:
      if (lookahead == 'z') ADVANCE(1019);
      END_STATE();
    case 1541:
      if (lookahead == 'z') ADVANCE(439);
      END_STATE();
    case 1542:
      if (lookahead == 'z') ADVANCE(471);
      END_STATE();
    case 1543:
      if (lookahead == 'z') ADVANCE(472);
      END_STATE();
    case 1544:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2432);
      END_STATE();
    case 1545:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1551);
      END_STATE();
    case 1546:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2438);
      END_STATE();
    case 1547:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2437);
      END_STATE();
    case 1548:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1546);
      END_STATE();
    case 1549:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1548);
      END_STATE();
    case 1550:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1549);
      END_STATE();
    case 1551:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1550);
      END_STATE();
    case 1552:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2258);
      END_STATE();
    case 1553:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2255);
      END_STATE();
    case 1554:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2256);
      END_STATE();
    case 1555:
      if (eof) ADVANCE(1560);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 1556:
      if (eof) ADVANCE(1560);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(1555);
      END_STATE();
    case 1557:
      if (eof) ADVANCE(1560);
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1562);
      if (lookahead == '[') ADVANCE(1592);
      if (lookahead == '\\') SKIP(1559);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(1003);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'k') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(1118);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(907);
      if (lookahead == 'w') ADVANCE(1013);
      if (lookahead == 'x') ADVANCE(281);
      if (lookahead == '}') ADVANCE(1575);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') SKIP(1557);
      END_STATE();
    case 1558:
      if (eof) ADVANCE(1560);
      if (lookahead == '\n') SKIP(1557);
      END_STATE();
    case 1559:
      if (eof) ADVANCE(1560);
      if (lookahead == '\n') SKIP(1557);
      if (lookahead == '\r') SKIP(1558);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1551);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(1567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(1565);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(1566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1567);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_set);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(1900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(2488);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_exec_always);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_exec_always);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_assign);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_assign);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_no_focus);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_bar);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_bar);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_bar);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym_criteria_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1595);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_criteria_value_token1);
      if (lookahead == '\\') ADVANCE(1597);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(1596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1597);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_criteria_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(1597);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_accel_profile);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_active_workspace);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_adaptive_sync);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_allow_tearing);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_allow_tearing);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_allow_tearing);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_attach);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_background);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_bindgesture);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_binding_mode);
      if (lookahead == '_') ADVANCE(732);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_binding_mode_indicator);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_bindswitch);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_border);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_calibration_matrix);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_click_method);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_clickfinger_button_map);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_client_DOTbackground);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused);
      if (lookahead == '_') ADVANCE(670);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused_inactive);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused_tab_title);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_client_DOTplaceholder);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_client_DOTunfocused);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_client_DOTurgent);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_color_profile);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_colors);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_create_output);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_create_output);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_create_output);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_cursor);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_cursor);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_disable);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(2303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_disable);
      if (lookahead == 'd') ADVANCE(2302);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_disable);
      if (lookahead == 'd') ADVANCE(2304);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_dpms);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_drag);
      if (lookahead == '_') ADVANCE(810);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_drag_lock);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_dwt);
      if (lookahead == 'p') ADVANCE(1643);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_dwtp);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_enable);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(2309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_enable);
      if (lookahead == 'd') ADVANCE(2308);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_enable);
      if (lookahead == 'd') ADVANCE(2310);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_events);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_exit);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_exit);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_floating);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_floating);
      if (lookahead == '_') ADVANCE(870);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_floating);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(570);
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_focus);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_focused_background);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_focused_separator);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_focused_statusline);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_focused_workspace);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_force_display_urgency_hint);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_force_focus_wrapping);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_gaps);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_gaps);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_gaps);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_hdr);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_hidden_state);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_hide_cursor);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_icon_theme);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_idle_inhibit);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_idle_wake);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_inactive_workspace);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_inhibit_idle);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_inhibit_idle);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_inhibit_idle);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_keyboard);
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_keyboard_grouping);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_kill);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_kill);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_layout);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_left_handed);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_map_from_region);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_map_to_output);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_map_to_region);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_mark);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_mark);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_mark);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_max_render_time);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_max_render_time);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_max_render_time);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_middle_emulation);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_mode);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_modeline);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_modifier);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_move);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_move);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_natural_scroll);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_new_float);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_new_window);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_nop);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_opacity);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_output);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_pango_markup);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_pointer);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_pointer_accel);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_pointer_constraint);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_pos);
      if (lookahead == 'i') ADVANCE(1370);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_position);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_power);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_primary_selection);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_reload);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_reload);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_rename);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_rename);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_render_bit_depth);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(anon_sym_repeat_delay);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(anon_sym_repeat_rate);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_res);
      if (lookahead == 'i') ADVANCE(1541);
      if (lookahead == 'o') ADVANCE(843);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_resize);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_resize);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_resize);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_resolution);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_restart);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_restart);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_rotation_angle);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_scale);
      if (lookahead == '_') ADVANCE(574);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(anon_sym_scale_filter);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_scratchpad);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_scratchpad);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_scratchpad);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(anon_sym_scroll_button);
      if (lookahead == '_') ADVANCE(856);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(anon_sym_scroll_button_lock);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(anon_sym_scroll_factor);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(anon_sym_scroll_method);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(anon_sym_seat);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(anon_sym_separator);
      if (lookahead == '_') ADVANCE(1291);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(anon_sym_separator_symbol);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(anon_sym_shortcuts_inhibitor);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(anon_sym_shortcuts_inhibitor);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(anon_sym_shortcuts_inhibitor);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_smart_borders);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_smart_gaps);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'h') ADVANCE(1785);
      if (lookahead == 't') ADVANCE(1788);
      if (lookahead == 'v') ADVANCE(1791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == 'h') ADVANCE(1784);
      if (lookahead == 't') ADVANCE(1787);
      if (lookahead == 'v') ADVANCE(1790);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == 'h') ADVANCE(1786);
      if (lookahead == 't') ADVANCE(1789);
      if (lookahead == 'v') ADVANCE(1792);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_splith);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_splith);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_splith);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_splitt);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(anon_sym_splitt);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_splitt);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(anon_sym_splitv);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_splitv);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(anon_sym_splitv);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_status_command);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(anon_sym_status_edge_padding);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(anon_sym_status_padding);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_statusline);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(anon_sym_sticky);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(anon_sym_sticky);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(anon_sym_sticky);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(anon_sym_strip_workspace_name);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(anon_sym_strip_workspace_numbers);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(anon_sym_subpixel);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(anon_sym_swap);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(anon_sym_swap);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(anon_sym_swap);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(anon_sym_swaybar_command);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(anon_sym_swaybg_command);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(anon_sym_swaynag_command);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(anon_sym_tablet_pad);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(anon_sym_tablet_tool);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(anon_sym_tap);
      if (lookahead == '_') ADVANCE(260);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(anon_sym_tap_button_map);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      if (lookahead == '_') ADVANCE(1374);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(anon_sym_tiling_drag_threshold);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(anon_sym_title_format);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(anon_sym_title_format);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_title_format);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_titlebar_border_thickness);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(anon_sym_titlebar_padding);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(anon_sym_toggle);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(anon_sym_toggle);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_tool_mode);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_touch);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_tray_bindcode);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_tray_bindsym);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_tray_output);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_tray_padding);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_unbindcode);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_unbindgesture);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_unbindswitch);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_unbindsym);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_unmark);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_unmark);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_unmark);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_unplug);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_urgent);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_urgent);
      if (lookahead == '_') ADVANCE(1516);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_urgent);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_urgent_workspace);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_workspace);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_workspace_buttons);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_workspace_min_width);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_wrap_scroll);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_xcursor_theme);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_xkb_capslock);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_xkb_file);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_xkb_layout);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_xkb_model);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_xkb_numlock);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_xkb_options);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_xkb_rules);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_xkb_switch_layout);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_xkb_variant);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_xwayland);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '%') ADVANCE(2436);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '.') ADVANCE(2844);
      if (lookahead == 'p') ADVANCE(2137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1863);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(1998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(1928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(1906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == '_') ADVANCE(2000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1919);
      if (lookahead == 'o') ADVANCE(2152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2136);
      if (lookahead == 'l') ADVANCE(2120);
      if (lookahead == 'r') ADVANCE(2118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2222);
      if (lookahead == 'e') ADVANCE(1879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2153);
      if (lookahead == 'o') ADVANCE(1940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2240);
      if (lookahead == 'f') ADVANCE(2191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2061);
      if (lookahead == 'i') ADVANCE(2066);
      if (lookahead == 'l') ADVANCE(2131);
      if (lookahead == 'o') ADVANCE(1921);
      if (lookahead == 'r') ADVANCE(2119);
      if (lookahead == 'u') ADVANCE(2077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1911);
      if (lookahead == 'i') ADVANCE(2064);
      if (lookahead == 'o') ADVANCE(2269);
      if (lookahead == 'r') ADVANCE(2230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2157);
      if (lookahead == 'i') ADVANCE(2247);
      if (lookahead == 'o') ADVANCE(2044);
      if (lookahead == 'p') ADVANCE(2188);
      if (lookahead == 'r') ADVANCE(1967);
      if (lookahead == 'x') ADVANCE(2381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1925);
      if (lookahead == 'i') ADVANCE(1926);
      if (lookahead == 'r') ADVANCE(1990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(2165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'a') ADVANCE(1918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(2178);
      if (lookahead == 'l') ADVANCE(2052);
      if (lookahead == 's') ADVANCE(2176);
      if (lookahead == 'u') ADVANCE(2209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(1913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(1897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(1974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(2043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(2067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(2071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(2041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'b') ADVANCE(2073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2049);
      if (lookahead == 'r') ADVANCE(1590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(1577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(sym_keycombo);
      ADVANCE_MAP(
        '+', 2451,
        'c', 2170,
        'e', 2189,
        'h', 2116,
        'i', 1915,
        'm', 1907,
        'o', 2063,
        'p', 2078,
        't', 1888,
        'w', 1881,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(1962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(2234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'c') ADVANCE(1901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(2294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(2411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1950);
      if (lookahead == 'u') ADVANCE(2181);
      if (lookahead == 'v') ADVANCE(1951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(2121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(2074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'd') ADVANCE(1989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1999);
      if (lookahead == 'i') ADVANCE(2185);
      if (lookahead == 'o') ADVANCE(2244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2246);
      if (lookahead == 'o') ADVANCE(2350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2076);
      if (lookahead == 'i') ADVANCE(2002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2100);
      if (lookahead == 'h') ADVANCE(2028);
      if (lookahead == 'o') ADVANCE(2102);
      if (lookahead == 'r') ADVANCE(1971);
      if (lookahead == 'u') ADVANCE(2141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1920);
      if (lookahead == 'i') ADVANCE(2190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2143);
      if (lookahead == 'o') ADVANCE(2232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2144);
      if (lookahead == 'p') ADVANCE(2233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(1988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'e') ADVANCE(2110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'f') ADVANCE(2360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'f') ADVANCE(1996);
      if (lookahead == 'n') ADVANCE(2363);
      if (lookahead == 'p') ADVANCE(1884);
      if (lookahead == 'u') ADVANCE(2187);
      if (lookahead == 'v') ADVANCE(1973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'f') ADVANCE(2238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'f') ADVANCE(1885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'f') ADVANCE(2132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'f') ADVANCE(2127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(2015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(2414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(2396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(2405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(2094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(2072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(1994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'h') ADVANCE(2408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'h') ADVANCE(2285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'h') ADVANCE(2025);
      if (lookahead == 'n') ADVANCE(1976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'h') ADVANCE(2138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'h') ADVANCE(2193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'h') ADVANCE(2027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(1938);
      if (lookahead == 'o') ADVANCE(2154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2253);
      if (lookahead == 't') ADVANCE(1908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2098);
      if (lookahead == 'o') ADVANCE(2155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(1939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(1917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(1914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(1933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(1944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'i') ADVANCE(2115);
      if (lookahead == 's') ADVANCE(2036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'k') ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'k') ADVANCE(2248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'k') ADVANCE(2393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'k') ADVANCE(1837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'k') ADVANCE(1867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'k') ADVANCE(2177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'k') ADVANCE(2035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2026);
      if (lookahead == 't') ADVANCE(2070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2053);
      if (lookahead == 't') ADVANCE(2318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(1963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2123);
      if (lookahead == 'n') ADVANCE(1886);
      if (lookahead == 's') ADVANCE(2019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'l') ADVANCE(2081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'm') ADVANCE(2264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'm') ADVANCE(2288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'm') ADVANCE(1957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'm') ADVANCE(1964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'm') ADVANCE(1894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'm') ADVANCE(1898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'm') ADVANCE(1903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1904);
      if (lookahead == 'x') ADVANCE(1966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2087);
      if (lookahead == 'p') ADVANCE(2423);
      if (lookahead == 'r') ADVANCE(2010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(2228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2161);
      if (lookahead == 'r') ADVANCE(2023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(1912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(1890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(1896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'p') ADVANCE(1804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'p') ADVANCE(2173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'p') ADVANCE(2186);
      if (lookahead == 't' ||
          lookahead == 'x') ADVANCE(2254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'p') ADVANCE(1891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'p') ADVANCE(1892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'p') ADVANCE(2236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1943);
      if (lookahead == 't') ADVANCE(2223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2045);
      if (lookahead == 'x') ADVANCE(1873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2221);
      if (lookahead == 'w') ADVANCE(2390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(2089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'r') ADVANCE(1995);
      if (lookahead == 's') ADVANCE(2126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(2429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(2022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(2139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(2124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(2196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 's') ADVANCE(1909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1977);
      if (lookahead == 'y') ADVANCE(1978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(2130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 't') ADVANCE(1986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(1953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'u') ADVANCE(2082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'v') ADVANCE(2378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'v') ADVANCE(1969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'w') ADVANCE(2324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'w') ADVANCE(2273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'w') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'w') ADVANCE(2093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'w') ADVANCE(1889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'x') ADVANCE(2192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'x') ADVANCE(1982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'y') ADVANCE(1798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'y') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'y') ADVANCE(2369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'y') ADVANCE(2175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'z') ADVANCE(2134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'z') ADVANCE(1958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2255);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2256);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2258);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2259);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(anon_sym_container);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(anon_sym_container);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(anon_sym_from);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(anon_sym_layer);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(anon_sym_layer);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(anon_sym_layer);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'g') ADVANCE(2009);
      if (lookahead == 'p') ADVANCE(2417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == 'g') ADVANCE(2597);
      if (lookahead == 'p') ADVANCE(2418);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == 'g') ADVANCE(611);
      if (lookahead == 'p') ADVANCE(2416);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(anon_sym_window);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(anon_sym_window);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(anon_sym_window);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(anon_sym_absolute);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(anon_sym_absolute);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(anon_sym_absolute);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'o') ADVANCE(2243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == 'o') ADVANCE(1507);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(anon_sym_all);
      if (lookahead == 'o') ADVANCE(2831);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(anon_sym_auto);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(anon_sym_back_and_forth);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(anon_sym_bottom);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(anon_sym_center);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(anon_sym_child);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(anon_sym_child);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(anon_sym_child);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(anon_sym_current);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(anon_sym_current);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(anon_sym_current);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(anon_sym_default);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(anon_sym_disabled);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(anon_sym_down);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(anon_sym_down);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(anon_sym_enabled);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(anon_sym_enabled);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(anon_sym_false);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(anon_sym_fill);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(anon_sym_fit);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(anon_sym_fit);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(anon_sym_fit);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(anon_sym_global);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(anon_sym_grow);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(anon_sym_grow);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(anon_sym_grow);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(anon_sym_hide);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(anon_sym_hide);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(anon_sym_hide);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(anon_sym_inner);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(anon_sym_inner);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(anon_sym_latest);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(anon_sym_latest);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(anon_sym_latest);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(anon_sym_leave_fullscreen);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(anon_sym_left);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(anon_sym_mouse);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(anon_sym_mouse);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(anon_sym_mouse);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(anon_sym_next);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '+') ADVANCE(2451);
      if (lookahead == 'n') ADVANCE(1952);
      if (lookahead == 'p') ADVANCE(1724);
      if (lookahead == 'r') ADVANCE(2088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(1723);
      if (lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(2540);
      if (lookahead == 'p') ADVANCE(1725);
      if (lookahead == 'r') ADVANCE(2676);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(anon_sym_none);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(anon_sym_normal);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(anon_sym_normal);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(anon_sym_off);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(anon_sym_on);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(anon_sym_outer);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(anon_sym_outer);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(anon_sym_outer);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(anon_sym_overlay);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(anon_sym_overlay);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(anon_sym_parent);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(anon_sym_pixel);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(anon_sym_pixel);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(anon_sym_pixel);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(anon_sym_prev);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(anon_sym_prev);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(anon_sym_prev);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(anon_sym_px);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(anon_sym_px);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(anon_sym_px);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(anon_sym_ppt);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(anon_sym_ppt);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(anon_sym_ppt);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(anon_sym_right);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(anon_sym_show);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(anon_sym_show);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(anon_sym_shrink);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(anon_sym_shrink);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(anon_sym_shrink);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(anon_sym_sibling);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(anon_sym_sibling);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(anon_sym_sibling);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(anon_sym_smart);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(anon_sym_smart);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(anon_sym_smart);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(anon_sym_solid_color);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(anon_sym_solid_color);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(anon_sym_solid_color);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(anon_sym_stacking);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(anon_sym_stacking);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(anon_sym_stacking);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(anon_sym_stretch);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(anon_sym_stretch);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(anon_sym_stretch);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(anon_sym_tabbed);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(anon_sym_tabbed);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(anon_sym_tabbed);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(anon_sym_tiling);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(anon_sym_tiling);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(anon_sym_tiling);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(anon_sym_top);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(anon_sym_true);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(anon_sym_up);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(anon_sym_up);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(anon_sym_vertical);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '+') ADVANCE(2451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(anon_sym_yes);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(2435);
      if (lookahead == '.') ADVANCE(1544);
      if (lookahead == 'p') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2431);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(2435);
      if (lookahead == 'p') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2432);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(2436);
      if (lookahead == '.') ADVANCE(2844);
      if (lookahead == 'p') ADVANCE(2723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2433);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(2436);
      if (lookahead == 'p') ADVANCE(2723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2434);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(sym_unit_value);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(sym_unit_value);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1547);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(2440);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(2441);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(2441);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\n') ADVANCE(1561);
      if (lookahead != 0) ADVANCE(2450);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(sym_command);
      ADVANCE_MAP(
        '\r', 2443,
        '#', 1564,
        '\\', 2445,
        '}', 1576,
        '\t', 2444,
        ' ', 2444,
        ',', 2444,
        ';', 2444,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\r') ADVANCE(2450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-') ADVANCE(2447);
      if (lookahead == '\\') ADVANCE(2445);
      if (lookahead == '{') ADVANCE(1574);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(2446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-') ADVANCE(2449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\\') ADVANCE(2445);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ';') ADVANCE(2448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(sym_command);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2450);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '$') ADVANCE(2846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2586);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2589);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2516);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2494);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2721);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2619);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2626);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2812);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2806);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2751);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(2588);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2507);
      if (lookahead == 'o') ADVANCE(2740);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2725);
      if (lookahead == 'l') ADVANCE(2708);
      if (lookahead == 'r') ADVANCE(2706);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2810);
      if (lookahead == 'e') ADVANCE(2467);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2741);
      if (lookahead == 'o') ADVANCE(2528);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2828);
      if (lookahead == 'f') ADVANCE(2779);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2649);
      if (lookahead == 'i') ADVANCE(2654);
      if (lookahead == 'l') ADVANCE(2719);
      if (lookahead == 'o') ADVANCE(2509);
      if (lookahead == 'r') ADVANCE(2707);
      if (lookahead == 'u') ADVANCE(2665);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2724);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2499);
      if (lookahead == 'i') ADVANCE(2652);
      if (lookahead == 'o') ADVANCE(2270);
      if (lookahead == 'r') ADVANCE(2818);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2745);
      if (lookahead == 'i') ADVANCE(2835);
      if (lookahead == 'o') ADVANCE(2632);
      if (lookahead == 'p') ADVANCE(2776);
      if (lookahead == 'r') ADVANCE(2555);
      if (lookahead == 'x') ADVANCE(2382);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2518);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2819);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2673);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2838);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2513);
      if (lookahead == 'i') ADVANCE(2514);
      if (lookahead == 'r') ADVANCE(2578);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2839);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2523);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2525);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2515);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2620);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2744);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2807);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2804);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2644);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2798);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2645);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2650);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2646);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2647);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2792);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2504);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2748);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2699);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2750);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2753);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(2506);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2766);
      if (lookahead == 'l') ADVANCE(2640);
      if (lookahead == 's') ADVANCE(2764);
      if (lookahead == 'u') ADVANCE(2797);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2501);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2485);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2562);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2631);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2655);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2659);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2629);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(2661);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2637);
      if (lookahead == 'r') ADVANCE(1591);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1578);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2817);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2602);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2599);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(sym_word);
      ADVANCE_MAP(
        'c', 2758,
        'e', 2777,
        'h', 2704,
        'i', 2503,
        'm', 2495,
        'o', 2651,
        'p', 2666,
        't', 2476,
        'w', 2469,
      );
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2639);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2634);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2515:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2550);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2516:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2716);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2752);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2518:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2628);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2519:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2756);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2520:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2822);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2521:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(2489);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2522:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2295);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2523:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1747);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2524:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2412);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1767);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2526:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2537);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2527:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2454);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2528:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2538);
      if (lookahead == 'u') ADVANCE(2769);
      if (lookahead == 'v') ADVANCE(2539);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2709);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2530:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2462);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2531:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2569);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2532:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2663);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2533:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(2577);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2534:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2587);
      if (lookahead == 'i') ADVANCE(2773);
      if (lookahead == 'o') ADVANCE(2832);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2535:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2834);
      if (lookahead == 'o') ADVANCE(2352);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2536:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2664);
      if (lookahead == 'i') ADVANCE(2590);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2537:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2328);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2538:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1713);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2539:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1719);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2540:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2355);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2541:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2421);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2542:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2313);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2543:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2346);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2544:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1647);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2545:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1750);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2546:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1757);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2547:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1824);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2548:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1638);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2549:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2277);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2550:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1846);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2551:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1690);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2552:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1709);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2553:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2689);
      if (lookahead == 'h') ADVANCE(2616);
      if (lookahead == 'o') ADVANCE(2692);
      if (lookahead == 'r') ADVANCE(2559);
      if (lookahead == 'u') ADVANCE(2729);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2554:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2508);
      if (lookahead == 'i') ADVANCE(2778);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2555:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2827);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2556:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2760);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2557:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2452);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2558:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2746);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2559:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2483);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2560:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2453);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2561:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2747);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2562:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2524);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2563:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2456);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2564:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2730);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2565:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2770);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2566:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2731);
      if (lookahead == 'o') ADVANCE(2820);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2567:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2732);
      if (lookahead == 'p') ADVANCE(2821);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2568:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2702);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2569:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2733);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2570:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2643);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2571:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2734);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2572:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2493);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2573:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2684);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2574:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2736);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2575:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2737);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2576:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2685);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2577:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2755);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2578:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2799);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2579:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2573);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2580:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2576);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2581:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2696);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2582:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2697);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2583:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(2698);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2584:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(2361);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2585:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(2584);
      if (lookahead == 'n') ADVANCE(2364);
      if (lookahead == 'p') ADVANCE(2472);
      if (lookahead == 'u') ADVANCE(2775);
      if (lookahead == 'v') ADVANCE(2561);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2586:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(2826);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2587:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(2473);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2588:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(2720);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2589:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(2715);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2590:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(2603);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2591:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(2415);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2592:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(2397);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2593:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(1655);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2594:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(2406);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2595:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(1603);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2596:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(2682);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2597:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(2660);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2598:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(2582);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2599:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(2409);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2600:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(2286);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2601:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(2613);
      if (lookahead == 'n') ADVANCE(2564);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2602:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(2726);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2603:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(2781);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2604:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(2615);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2605:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2526);
      if (lookahead == 'o') ADVANCE(2742);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2606:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2840);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2607:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2841);
      if (lookahead == 't') ADVANCE(2496);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2608:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2686);
      if (lookahead == 'o') ADVANCE(2743);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2609:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2656);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2610:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2596);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2611:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2691);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2612:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2527);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2613:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2505);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2614:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2688);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2615:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2502);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2616:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2648);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2617:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2690);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2618:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2521);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2619:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2532);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2620:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2701);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2621:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2693);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2622:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2713);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2623:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2694);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2624:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2805);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2625:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2695);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2626:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2687);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2627:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2783);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2628:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2794);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2629:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2801);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2630:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2674);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2631:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2813);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2632:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(2703);
      if (lookahead == 's') ADVANCE(2624);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2633:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(1706);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2634:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(2836);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2635:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(2394);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2636:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(1838);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2637:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(2455);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2638:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(2765);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2639:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(2623);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2640:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2280);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2641:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2316);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2642:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1696);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2643:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2376);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2644:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2322);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2645:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2358);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2646:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2427);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2647:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2331);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2648:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2522);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2649:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2768);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2650:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2833);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2651:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2612);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2652:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2614);
      if (lookahead == 't') ADVANCE(2658);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2653:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2767);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2654:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2641);
      if (lookahead == 't') ADVANCE(2319);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2655:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2617);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2656:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2642);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2657:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2475);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2658:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2560);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2659:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2544);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2660:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2547);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2661:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2548);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2662:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2790);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2663:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2551);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2664:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2711);
      if (lookahead == 'n') ADVANCE(2474);
      if (lookahead == 's') ADVANCE(2607);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2665:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2653);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2666:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2627);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2667:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2825);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2668:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2717);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2669:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2772);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2670:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(2669);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2671:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(2265);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2672:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(2289);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2673:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(2545);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2674:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(2552);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2675:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(2482);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2676:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(2487);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2677:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(2491);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2678:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2492);
      if (lookahead == 'x') ADVANCE(2554);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2679:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2601);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2680:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2675);
      if (lookahead == 'p') ADVANCE(2424);
      if (lookahead == 'r') ADVANCE(2598);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2681:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2307);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2682:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1585);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2683:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1742);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2684:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1674);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2685:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2340);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2686:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2529);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2687:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2604);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2688:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2591);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2689:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2814);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2690:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2592);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2691:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2635);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2692:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2800);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2693:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2593);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2694:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2594);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2695:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2595);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2696:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2787);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2697:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2788);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2698:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2789);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2699:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2530);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2700:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2815);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2701:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2575);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2702:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2533);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2703:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(2816);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2704:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2749);
      if (lookahead == 'r') ADVANCE(2611);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2705:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2283);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2706:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2829);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2707:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2671);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2708:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2500);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2709:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2830);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2710:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2672);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2711:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2478);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2712:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2667);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2713:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2683);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2714:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2735);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2715:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2757);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2716:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2668);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2717:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2738);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2718:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2739);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2719:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2484);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2720:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2754);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2721:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2823);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2722:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(2700);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2723:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(2774);
      if (lookahead == 't' ||
          lookahead == 'x') ADVANCE(2436);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2724:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1805);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2725:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(2761);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2726:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(2479);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2727:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(2480);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2728:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(2824);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2729:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2759);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2730:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2334);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2731:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2268);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2732:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2367);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2733:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1613);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2734:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2292);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2735:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1631);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2736:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1735);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2737:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2262);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2738:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2403);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2739:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1777);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2740:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2531);
      if (lookahead == 't') ADVANCE(2811);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2741:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2633);
      if (lookahead == 'x') ADVANCE(2461);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2742:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2606);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2743:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2638);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2744:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2636);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2745:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2581);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2746:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2802);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2747:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2657);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2748:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2625);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2749:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2809);
      if (lookahead == 'w') ADVANCE(2391);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2750:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2782);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2751:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2568);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2752:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2579);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2753:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2791);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2754:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2796);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2755:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2460);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2756:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2580);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2757:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2677);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2758:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2486);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2759:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(2583);
      if (lookahead == 's') ADVANCE(2714);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2760:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2430);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2761:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1677);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2762:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1661);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2763:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1582);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2764:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2610);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2765:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2727);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2766:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2712);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2767:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2517);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2768:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2542);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2769:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2543);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2770:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2784);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2771:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2458);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2772:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2519);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2773:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(2497);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2774:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2436);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2775:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2567);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2776:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2385);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2777:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1570);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2778:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1651);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2779:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2343);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2780:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2349);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2781:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2388);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2782:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2400);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2783:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1783);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2784:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2337);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2785:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1699);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2786:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1731);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2787:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2373);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2788:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1842);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2789:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2298);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2790:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2301);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2791:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1761);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2792:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1819);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2793:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1628);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2794:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2837);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2795:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2728);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2796:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2600);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2797:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2705);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2798:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2510);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2799:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2511);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2800:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2481);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2801:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2457);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2802:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2618);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2803:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2771);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2804:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2621);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2805:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2622);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2806:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2630);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2807:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2563);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2808:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2549);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2809:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2520);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2810:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2565);
      if (lookahead == 'y') ADVANCE(2566);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2811:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2710);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2572);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2718);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2571);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2490);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(2574);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2762);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2541);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2662);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2785);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2786);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2803);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2795);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2793);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2808);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(2670);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(2379);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(2557);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(2325);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(2274);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(2459);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(2681);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(2477);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(2780);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'x') ADVANCE(2570);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(1799);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(1728);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(2370);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(2763);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'z') ADVANCE(2722);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'z') ADVANCE(2546);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2433);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2434);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2259);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2254);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(sym_word);
      if ((!eof && set_contains(sym_word_character_set_1, 9, lookahead))) ADVANCE(2847);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1557},
  [2] = {.lex_state = 1557},
  [3] = {.lex_state = 1557},
  [4] = {.lex_state = 1557},
  [5] = {.lex_state = 1557},
  [6] = {.lex_state = 1557},
  [7] = {.lex_state = 1557},
  [8] = {.lex_state = 1557},
  [9] = {.lex_state = 1557},
  [10] = {.lex_state = 1557},
  [11] = {.lex_state = 1557},
  [12] = {.lex_state = 1557},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1566},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1566},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_bindsym] = ACTIONS(1),
    [anon_sym_bindcode] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_exec_always] = ACTIONS(1),
    [anon_sym_assign] = ACTIONS(1),
    [anon_sym_for_window] = ACTIONS(1),
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
    [anon_sym_map_from_region] = ACTIONS(1),
    [anon_sym_map_to_output] = ACTIONS(1),
    [anon_sym_map_to_region] = ACTIONS(1),
    [anon_sym_mark] = ACTIONS(1),
    [anon_sym_max_render_time] = ACTIONS(1),
    [anon_sym_middle_emulation] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_modeline] = ACTIONS(1),
    [anon_sym_modifier] = ACTIONS(1),
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
    [anon_sym_title_align] = ACTIONS(1),
    [anon_sym_title_format] = ACTIONS(1),
    [anon_sym_titlebar_border_thickness] = ACTIONS(1),
    [anon_sym_titlebar_padding] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
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
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_layer] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_window] = ACTIONS(1),
    [anon_sym_absolute] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_back_and_forth] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_child] = ACTIONS(1),
    [anon_sym_current] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_disabled] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_enabled] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_fit] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_grow] = ACTIONS(1),
    [anon_sym_hide] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_inner] = ACTIONS(1),
    [anon_sym_latest] = ACTIONS(1),
    [anon_sym_leave_fullscreen] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_mouse] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_outer] = ACTIONS(1),
    [anon_sym_overlay] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_pixel] = ACTIONS(1),
    [anon_sym_prev] = ACTIONS(1),
    [anon_sym_px] = ACTIONS(1),
    [anon_sym_ppt] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_shrink] = ACTIONS(1),
    [anon_sym_sibling] = ACTIONS(1),
    [anon_sym_smart] = ACTIONS(1),
    [anon_sym_solid_color] = ACTIONS(1),
    [anon_sym_stacking] = ACTIONS(1),
    [anon_sym_stretch] = ACTIONS(1),
    [anon_sym_tabbed] = ACTIONS(1),
    [anon_sym_tiling] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_unit_value] = ACTIONS(1),
    [sym_color] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(97),
    [sym_statement] = STATE(4),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
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
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_source_file_token1] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(40),
    [anon_sym_set] = ACTIONS(43),
    [anon_sym_bindsym] = ACTIONS(46),
    [anon_sym_bindcode] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_exec] = ACTIONS(52),
    [anon_sym_exec_always] = ACTIONS(55),
    [anon_sym_assign] = ACTIONS(58),
    [anon_sym_for_window] = ACTIONS(61),
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
    [sym_statement] = STATE(10),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_source_file_token1] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(84),
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
  [4] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
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
    [sym_statement] = STATE(7),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_source_file_token1] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(92),
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
  [6] = {
    [sym_statement] = STATE(9),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(96),
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
  [7] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(98),
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
  [8] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(100),
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
  [9] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(84),
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
  [10] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(102),
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
  [11] = {
    [sym_statement] = STATE(8),
    [sym_comment] = STATE(104),
    [sym_set_statement] = STATE(104),
    [sym_bindsym_statement] = STATE(104),
    [sym_bindcode_statement] = STATE(104),
    [sym_exec_statement] = STATE(104),
    [sym_exec_always_statement] = STATE(104),
    [sym_assign_statement] = STATE(104),
    [sym_for_window_statement] = STATE(104),
    [sym_no_focus_statement] = STATE(104),
    [sym_criteria_command] = STATE(104),
    [sym_include_statement] = STATE(104),
    [sym_bar_block] = STATE(104),
    [sym_block_statement] = STATE(104),
    [sym_command_statement] = STATE(104),
    [sym_criteria] = STATE(26),
    [sym_keyword] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_token1] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(106),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_source_file_token1] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_set] = ACTIONS(108),
    [anon_sym_bindsym] = ACTIONS(108),
    [anon_sym_bindcode] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_exec] = ACTIONS(110),
    [anon_sym_exec_always] = ACTIONS(108),
    [anon_sym_assign] = ACTIONS(108),
    [anon_sym_for_window] = ACTIONS(108),
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
  [13] = {
    [sym_value] = STATE(13),
    [sym_command_keyword] = STATE(37),
    [sym_command_value] = STATE(37),
    [sym_string] = STATE(37),
    [aux_sym_set_statement_repeat1] = STATE(13),
    [aux_sym_source_file_token1] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_set] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_exec] = ACTIONS(116),
    [anon_sym_exec_always] = ACTIONS(116),
    [anon_sym_assign] = ACTIONS(116),
    [anon_sym_bar] = ACTIONS(116),
    [anon_sym_allow_tearing] = ACTIONS(116),
    [anon_sym_border] = ACTIONS(116),
    [anon_sym_create_output] = ACTIONS(116),
    [anon_sym_cursor] = ACTIONS(119),
    [anon_sym_disable] = ACTIONS(119),
    [anon_sym_enable] = ACTIONS(119),
    [anon_sym_exit] = ACTIONS(116),
    [anon_sym_floating] = ACTIONS(116),
    [anon_sym_focus] = ACTIONS(116),
    [anon_sym_fullscreen] = ACTIONS(116),
    [anon_sym_gaps] = ACTIONS(116),
    [anon_sym_inhibit_idle] = ACTIONS(116),
    [anon_sym_kill] = ACTIONS(116),
    [anon_sym_layout] = ACTIONS(116),
    [anon_sym_mark] = ACTIONS(116),
    [anon_sym_max_render_time] = ACTIONS(116),
    [anon_sym_mode] = ACTIONS(116),
    [anon_sym_move] = ACTIONS(116),
    [anon_sym_nop] = ACTIONS(116),
    [anon_sym_opacity] = ACTIONS(116),
    [anon_sym_output] = ACTIONS(116),
    [anon_sym_pointer] = ACTIONS(119),
    [anon_sym_position] = ACTIONS(116),
    [anon_sym_reload] = ACTIONS(116),
    [anon_sym_rename] = ACTIONS(116),
    [anon_sym_resize] = ACTIONS(116),
    [anon_sym_restart] = ACTIONS(116),
    [anon_sym_scratchpad] = ACTIONS(116),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(116),
    [anon_sym_split] = ACTIONS(116),
    [anon_sym_splith] = ACTIONS(116),
    [anon_sym_splitt] = ACTIONS(116),
    [anon_sym_splitv] = ACTIONS(116),
    [anon_sym_sticky] = ACTIONS(116),
    [anon_sym_swap] = ACTIONS(116),
    [anon_sym_title_format] = ACTIONS(116),
    [anon_sym_toggle] = ACTIONS(119),
    [anon_sym_unmark] = ACTIONS(116),
    [anon_sym_urgent] = ACTIONS(116),
    [anon_sym_workspace] = ACTIONS(116),
    [sym_keycombo] = ACTIONS(114),
    [sym_variable] = ACTIONS(122),
    [anon_sym_container] = ACTIONS(116),
    [anon_sym_from] = ACTIONS(116),
    [anon_sym_layer] = ACTIONS(116),
    [anon_sym_to] = ACTIONS(116),
    [anon_sym_window] = ACTIONS(116),
    [anon_sym_absolute] = ACTIONS(119),
    [anon_sym_all] = ACTIONS(119),
    [anon_sym_auto] = ACTIONS(119),
    [anon_sym_back_and_forth] = ACTIONS(119),
    [anon_sym_bottom] = ACTIONS(119),
    [anon_sym_center] = ACTIONS(119),
    [anon_sym_child] = ACTIONS(119),
    [anon_sym_current] = ACTIONS(119),
    [anon_sym_default] = ACTIONS(119),
    [anon_sym_disabled] = ACTIONS(119),
    [anon_sym_down] = ACTIONS(119),
    [anon_sym_enabled] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(119),
    [anon_sym_fill] = ACTIONS(119),
    [anon_sym_fit] = ACTIONS(119),
    [anon_sym_global] = ACTIONS(119),
    [anon_sym_grow] = ACTIONS(119),
    [anon_sym_hide] = ACTIONS(119),
    [anon_sym_horizontal] = ACTIONS(119),
    [anon_sym_inner] = ACTIONS(119),
    [anon_sym_latest] = ACTIONS(119),
    [anon_sym_leave_fullscreen] = ACTIONS(119),
    [anon_sym_left] = ACTIONS(119),
    [anon_sym_mouse] = ACTIONS(119),
    [anon_sym_next] = ACTIONS(119),
    [anon_sym_no] = ACTIONS(119),
    [anon_sym_none] = ACTIONS(119),
    [anon_sym_normal] = ACTIONS(119),
    [anon_sym_off] = ACTIONS(119),
    [anon_sym_on] = ACTIONS(119),
    [anon_sym_outer] = ACTIONS(119),
    [anon_sym_overlay] = ACTIONS(119),
    [anon_sym_parent] = ACTIONS(119),
    [anon_sym_pixel] = ACTIONS(119),
    [anon_sym_prev] = ACTIONS(119),
    [anon_sym_px] = ACTIONS(119),
    [anon_sym_ppt] = ACTIONS(119),
    [anon_sym_right] = ACTIONS(119),
    [anon_sym_show] = ACTIONS(119),
    [anon_sym_shrink] = ACTIONS(119),
    [anon_sym_sibling] = ACTIONS(119),
    [anon_sym_smart] = ACTIONS(119),
    [anon_sym_solid_color] = ACTIONS(119),
    [anon_sym_stacking] = ACTIONS(119),
    [anon_sym_stretch] = ACTIONS(119),
    [anon_sym_tabbed] = ACTIONS(119),
    [anon_sym_tiling] = ACTIONS(119),
    [anon_sym_top] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_up] = ACTIONS(119),
    [anon_sym_vertical] = ACTIONS(119),
    [anon_sym_yes] = ACTIONS(119),
    [sym_number] = ACTIONS(122),
    [sym_unit_value] = ACTIONS(122),
    [sym_color] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [sym_word] = ACTIONS(122),
  },
  [14] = {
    [sym_value] = STATE(13),
    [sym_command_keyword] = STATE(37),
    [sym_command_value] = STATE(37),
    [sym_string] = STATE(37),
    [aux_sym_set_statement_repeat1] = STATE(13),
    [aux_sym_source_file_token1] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(133),
    [anon_sym_set] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_exec] = ACTIONS(135),
    [anon_sym_exec_always] = ACTIONS(135),
    [anon_sym_assign] = ACTIONS(135),
    [anon_sym_bar] = ACTIONS(135),
    [anon_sym_allow_tearing] = ACTIONS(135),
    [anon_sym_border] = ACTIONS(135),
    [anon_sym_create_output] = ACTIONS(135),
    [anon_sym_cursor] = ACTIONS(137),
    [anon_sym_disable] = ACTIONS(137),
    [anon_sym_enable] = ACTIONS(137),
    [anon_sym_exit] = ACTIONS(135),
    [anon_sym_floating] = ACTIONS(135),
    [anon_sym_focus] = ACTIONS(135),
    [anon_sym_fullscreen] = ACTIONS(135),
    [anon_sym_gaps] = ACTIONS(135),
    [anon_sym_inhibit_idle] = ACTIONS(135),
    [anon_sym_kill] = ACTIONS(135),
    [anon_sym_layout] = ACTIONS(135),
    [anon_sym_mark] = ACTIONS(135),
    [anon_sym_max_render_time] = ACTIONS(135),
    [anon_sym_mode] = ACTIONS(135),
    [anon_sym_move] = ACTIONS(135),
    [anon_sym_nop] = ACTIONS(135),
    [anon_sym_opacity] = ACTIONS(135),
    [anon_sym_output] = ACTIONS(135),
    [anon_sym_pointer] = ACTIONS(137),
    [anon_sym_position] = ACTIONS(135),
    [anon_sym_reload] = ACTIONS(135),
    [anon_sym_rename] = ACTIONS(135),
    [anon_sym_resize] = ACTIONS(135),
    [anon_sym_restart] = ACTIONS(135),
    [anon_sym_scratchpad] = ACTIONS(135),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(135),
    [anon_sym_split] = ACTIONS(135),
    [anon_sym_splith] = ACTIONS(135),
    [anon_sym_splitt] = ACTIONS(135),
    [anon_sym_splitv] = ACTIONS(135),
    [anon_sym_sticky] = ACTIONS(135),
    [anon_sym_swap] = ACTIONS(135),
    [anon_sym_title_format] = ACTIONS(135),
    [anon_sym_toggle] = ACTIONS(137),
    [anon_sym_unmark] = ACTIONS(135),
    [anon_sym_urgent] = ACTIONS(135),
    [anon_sym_workspace] = ACTIONS(135),
    [sym_keycombo] = ACTIONS(133),
    [sym_variable] = ACTIONS(139),
    [anon_sym_container] = ACTIONS(135),
    [anon_sym_from] = ACTIONS(135),
    [anon_sym_layer] = ACTIONS(135),
    [anon_sym_to] = ACTIONS(135),
    [anon_sym_window] = ACTIONS(135),
    [anon_sym_absolute] = ACTIONS(137),
    [anon_sym_all] = ACTIONS(137),
    [anon_sym_auto] = ACTIONS(137),
    [anon_sym_back_and_forth] = ACTIONS(137),
    [anon_sym_bottom] = ACTIONS(137),
    [anon_sym_center] = ACTIONS(137),
    [anon_sym_child] = ACTIONS(137),
    [anon_sym_current] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_disabled] = ACTIONS(137),
    [anon_sym_down] = ACTIONS(137),
    [anon_sym_enabled] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_fill] = ACTIONS(137),
    [anon_sym_fit] = ACTIONS(137),
    [anon_sym_global] = ACTIONS(137),
    [anon_sym_grow] = ACTIONS(137),
    [anon_sym_hide] = ACTIONS(137),
    [anon_sym_horizontal] = ACTIONS(137),
    [anon_sym_inner] = ACTIONS(137),
    [anon_sym_latest] = ACTIONS(137),
    [anon_sym_leave_fullscreen] = ACTIONS(137),
    [anon_sym_left] = ACTIONS(137),
    [anon_sym_mouse] = ACTIONS(137),
    [anon_sym_next] = ACTIONS(137),
    [anon_sym_no] = ACTIONS(137),
    [anon_sym_none] = ACTIONS(137),
    [anon_sym_normal] = ACTIONS(137),
    [anon_sym_off] = ACTIONS(137),
    [anon_sym_on] = ACTIONS(137),
    [anon_sym_outer] = ACTIONS(137),
    [anon_sym_overlay] = ACTIONS(137),
    [anon_sym_parent] = ACTIONS(137),
    [anon_sym_pixel] = ACTIONS(137),
    [anon_sym_prev] = ACTIONS(137),
    [anon_sym_px] = ACTIONS(137),
    [anon_sym_ppt] = ACTIONS(137),
    [anon_sym_right] = ACTIONS(137),
    [anon_sym_show] = ACTIONS(137),
    [anon_sym_shrink] = ACTIONS(137),
    [anon_sym_sibling] = ACTIONS(137),
    [anon_sym_smart] = ACTIONS(137),
    [anon_sym_solid_color] = ACTIONS(137),
    [anon_sym_stacking] = ACTIONS(137),
    [anon_sym_stretch] = ACTIONS(137),
    [anon_sym_tabbed] = ACTIONS(137),
    [anon_sym_tiling] = ACTIONS(137),
    [anon_sym_top] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_up] = ACTIONS(137),
    [anon_sym_vertical] = ACTIONS(137),
    [anon_sym_yes] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_unit_value] = ACTIONS(139),
    [sym_color] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_word] = ACTIONS(139),
  },
  [15] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [16] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(112),
    [anon_sym_set] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_exec] = ACTIONS(159),
    [anon_sym_exec_always] = ACTIONS(159),
    [anon_sym_assign] = ACTIONS(159),
    [anon_sym_bar] = ACTIONS(159),
    [anon_sym_allow_tearing] = ACTIONS(159),
    [anon_sym_border] = ACTIONS(159),
    [anon_sym_create_output] = ACTIONS(159),
    [anon_sym_cursor] = ACTIONS(162),
    [anon_sym_disable] = ACTIONS(162),
    [anon_sym_enable] = ACTIONS(162),
    [anon_sym_exit] = ACTIONS(159),
    [anon_sym_floating] = ACTIONS(159),
    [anon_sym_focus] = ACTIONS(159),
    [anon_sym_fullscreen] = ACTIONS(159),
    [anon_sym_gaps] = ACTIONS(159),
    [anon_sym_inhibit_idle] = ACTIONS(159),
    [anon_sym_kill] = ACTIONS(159),
    [anon_sym_layout] = ACTIONS(159),
    [anon_sym_mark] = ACTIONS(159),
    [anon_sym_max_render_time] = ACTIONS(159),
    [anon_sym_mode] = ACTIONS(159),
    [anon_sym_move] = ACTIONS(159),
    [anon_sym_nop] = ACTIONS(159),
    [anon_sym_opacity] = ACTIONS(159),
    [anon_sym_output] = ACTIONS(159),
    [anon_sym_pointer] = ACTIONS(162),
    [anon_sym_position] = ACTIONS(159),
    [anon_sym_reload] = ACTIONS(159),
    [anon_sym_rename] = ACTIONS(159),
    [anon_sym_resize] = ACTIONS(159),
    [anon_sym_restart] = ACTIONS(159),
    [anon_sym_scratchpad] = ACTIONS(159),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(159),
    [anon_sym_split] = ACTIONS(159),
    [anon_sym_splith] = ACTIONS(159),
    [anon_sym_splitt] = ACTIONS(159),
    [anon_sym_splitv] = ACTIONS(159),
    [anon_sym_sticky] = ACTIONS(159),
    [anon_sym_swap] = ACTIONS(159),
    [anon_sym_title_format] = ACTIONS(159),
    [anon_sym_toggle] = ACTIONS(162),
    [anon_sym_unmark] = ACTIONS(159),
    [anon_sym_urgent] = ACTIONS(159),
    [anon_sym_workspace] = ACTIONS(159),
    [sym_variable] = ACTIONS(165),
    [anon_sym_container] = ACTIONS(159),
    [anon_sym_from] = ACTIONS(159),
    [anon_sym_layer] = ACTIONS(159),
    [anon_sym_to] = ACTIONS(159),
    [anon_sym_window] = ACTIONS(159),
    [anon_sym_absolute] = ACTIONS(162),
    [anon_sym_all] = ACTIONS(162),
    [anon_sym_auto] = ACTIONS(162),
    [anon_sym_back_and_forth] = ACTIONS(162),
    [anon_sym_bottom] = ACTIONS(162),
    [anon_sym_center] = ACTIONS(162),
    [anon_sym_child] = ACTIONS(162),
    [anon_sym_current] = ACTIONS(162),
    [anon_sym_default] = ACTIONS(162),
    [anon_sym_disabled] = ACTIONS(162),
    [anon_sym_down] = ACTIONS(162),
    [anon_sym_enabled] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [anon_sym_fill] = ACTIONS(162),
    [anon_sym_fit] = ACTIONS(162),
    [anon_sym_global] = ACTIONS(162),
    [anon_sym_grow] = ACTIONS(162),
    [anon_sym_hide] = ACTIONS(162),
    [anon_sym_horizontal] = ACTIONS(162),
    [anon_sym_inner] = ACTIONS(162),
    [anon_sym_latest] = ACTIONS(162),
    [anon_sym_leave_fullscreen] = ACTIONS(162),
    [anon_sym_left] = ACTIONS(162),
    [anon_sym_mouse] = ACTIONS(162),
    [anon_sym_next] = ACTIONS(162),
    [anon_sym_no] = ACTIONS(162),
    [anon_sym_none] = ACTIONS(162),
    [anon_sym_normal] = ACTIONS(162),
    [anon_sym_off] = ACTIONS(162),
    [anon_sym_on] = ACTIONS(162),
    [anon_sym_outer] = ACTIONS(162),
    [anon_sym_overlay] = ACTIONS(162),
    [anon_sym_parent] = ACTIONS(162),
    [anon_sym_pixel] = ACTIONS(162),
    [anon_sym_prev] = ACTIONS(162),
    [anon_sym_px] = ACTIONS(162),
    [anon_sym_ppt] = ACTIONS(162),
    [anon_sym_right] = ACTIONS(162),
    [anon_sym_show] = ACTIONS(162),
    [anon_sym_shrink] = ACTIONS(162),
    [anon_sym_sibling] = ACTIONS(162),
    [anon_sym_smart] = ACTIONS(162),
    [anon_sym_solid_color] = ACTIONS(162),
    [anon_sym_stacking] = ACTIONS(162),
    [anon_sym_stretch] = ACTIONS(162),
    [anon_sym_tabbed] = ACTIONS(162),
    [anon_sym_tiling] = ACTIONS(162),
    [anon_sym_top] = ACTIONS(162),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_up] = ACTIONS(162),
    [anon_sym_vertical] = ACTIONS(162),
    [anon_sym_yes] = ACTIONS(162),
    [sym_number] = ACTIONS(165),
    [sym_unit_value] = ACTIONS(165),
    [sym_color] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym_word] = ACTIONS(165),
  },
  [17] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(174),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [18] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(176),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [19] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(178),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [20] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(180),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [21] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(182),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [22] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(184),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [23] = {
    [sym_value] = STATE(15),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(15),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [24] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(188),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [25] = {
    [sym_value] = STATE(16),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(16),
    [aux_sym_source_file_token1] = ACTIONS(190),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [26] = {
    [sym_value] = STATE(17),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(17),
    [aux_sym_source_file_token1] = ACTIONS(192),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [27] = {
    [sym_value] = STATE(25),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(25),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [28] = {
    [sym_value] = STATE(24),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(24),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [29] = {
    [sym_value] = STATE(18),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(18),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [30] = {
    [sym_value] = STATE(14),
    [sym_command_keyword] = STATE(37),
    [sym_command_value] = STATE(37),
    [sym_string] = STATE(37),
    [aux_sym_set_statement_repeat1] = STATE(14),
    [anon_sym_set] = ACTIONS(135),
    [anon_sym_exec] = ACTIONS(135),
    [anon_sym_exec_always] = ACTIONS(135),
    [anon_sym_assign] = ACTIONS(135),
    [anon_sym_bar] = ACTIONS(135),
    [anon_sym_allow_tearing] = ACTIONS(135),
    [anon_sym_border] = ACTIONS(135),
    [anon_sym_create_output] = ACTIONS(135),
    [anon_sym_cursor] = ACTIONS(137),
    [anon_sym_disable] = ACTIONS(137),
    [anon_sym_enable] = ACTIONS(137),
    [anon_sym_exit] = ACTIONS(135),
    [anon_sym_floating] = ACTIONS(135),
    [anon_sym_focus] = ACTIONS(135),
    [anon_sym_fullscreen] = ACTIONS(135),
    [anon_sym_gaps] = ACTIONS(135),
    [anon_sym_inhibit_idle] = ACTIONS(135),
    [anon_sym_kill] = ACTIONS(135),
    [anon_sym_layout] = ACTIONS(135),
    [anon_sym_mark] = ACTIONS(135),
    [anon_sym_max_render_time] = ACTIONS(135),
    [anon_sym_mode] = ACTIONS(135),
    [anon_sym_move] = ACTIONS(135),
    [anon_sym_nop] = ACTIONS(135),
    [anon_sym_opacity] = ACTIONS(135),
    [anon_sym_output] = ACTIONS(135),
    [anon_sym_pointer] = ACTIONS(137),
    [anon_sym_position] = ACTIONS(135),
    [anon_sym_reload] = ACTIONS(135),
    [anon_sym_rename] = ACTIONS(135),
    [anon_sym_resize] = ACTIONS(135),
    [anon_sym_restart] = ACTIONS(135),
    [anon_sym_scratchpad] = ACTIONS(135),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(135),
    [anon_sym_split] = ACTIONS(135),
    [anon_sym_splith] = ACTIONS(135),
    [anon_sym_splitt] = ACTIONS(135),
    [anon_sym_splitv] = ACTIONS(135),
    [anon_sym_sticky] = ACTIONS(135),
    [anon_sym_swap] = ACTIONS(135),
    [anon_sym_title_format] = ACTIONS(135),
    [anon_sym_toggle] = ACTIONS(137),
    [anon_sym_unmark] = ACTIONS(135),
    [anon_sym_urgent] = ACTIONS(135),
    [anon_sym_workspace] = ACTIONS(135),
    [sym_variable] = ACTIONS(139),
    [anon_sym_container] = ACTIONS(135),
    [anon_sym_from] = ACTIONS(135),
    [anon_sym_layer] = ACTIONS(135),
    [anon_sym_to] = ACTIONS(135),
    [anon_sym_window] = ACTIONS(135),
    [anon_sym_absolute] = ACTIONS(137),
    [anon_sym_all] = ACTIONS(137),
    [anon_sym_auto] = ACTIONS(137),
    [anon_sym_back_and_forth] = ACTIONS(137),
    [anon_sym_bottom] = ACTIONS(137),
    [anon_sym_center] = ACTIONS(137),
    [anon_sym_child] = ACTIONS(137),
    [anon_sym_current] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_disabled] = ACTIONS(137),
    [anon_sym_down] = ACTIONS(137),
    [anon_sym_enabled] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_fill] = ACTIONS(137),
    [anon_sym_fit] = ACTIONS(137),
    [anon_sym_global] = ACTIONS(137),
    [anon_sym_grow] = ACTIONS(137),
    [anon_sym_hide] = ACTIONS(137),
    [anon_sym_horizontal] = ACTIONS(137),
    [anon_sym_inner] = ACTIONS(137),
    [anon_sym_latest] = ACTIONS(137),
    [anon_sym_leave_fullscreen] = ACTIONS(137),
    [anon_sym_left] = ACTIONS(137),
    [anon_sym_mouse] = ACTIONS(137),
    [anon_sym_next] = ACTIONS(137),
    [anon_sym_no] = ACTIONS(137),
    [anon_sym_none] = ACTIONS(137),
    [anon_sym_normal] = ACTIONS(137),
    [anon_sym_off] = ACTIONS(137),
    [anon_sym_on] = ACTIONS(137),
    [anon_sym_outer] = ACTIONS(137),
    [anon_sym_overlay] = ACTIONS(137),
    [anon_sym_parent] = ACTIONS(137),
    [anon_sym_pixel] = ACTIONS(137),
    [anon_sym_prev] = ACTIONS(137),
    [anon_sym_px] = ACTIONS(137),
    [anon_sym_ppt] = ACTIONS(137),
    [anon_sym_right] = ACTIONS(137),
    [anon_sym_show] = ACTIONS(137),
    [anon_sym_shrink] = ACTIONS(137),
    [anon_sym_sibling] = ACTIONS(137),
    [anon_sym_smart] = ACTIONS(137),
    [anon_sym_solid_color] = ACTIONS(137),
    [anon_sym_stacking] = ACTIONS(137),
    [anon_sym_stretch] = ACTIONS(137),
    [anon_sym_tabbed] = ACTIONS(137),
    [anon_sym_tiling] = ACTIONS(137),
    [anon_sym_top] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_up] = ACTIONS(137),
    [anon_sym_vertical] = ACTIONS(137),
    [anon_sym_yes] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_unit_value] = ACTIONS(139),
    [sym_color] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_word] = ACTIONS(139),
  },
  [31] = {
    [sym_value] = STATE(19),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(19),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [32] = {
    [sym_value] = STATE(20),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(20),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [33] = {
    [sym_value] = STATE(21),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(21),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [34] = {
    [sym_value] = STATE(22),
    [sym_command_keyword] = STATE(42),
    [sym_command_value] = STATE(42),
    [sym_string] = STATE(42),
    [aux_sym_set_statement_repeat1] = STATE(22),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_exec] = ACTIONS(147),
    [anon_sym_exec_always] = ACTIONS(147),
    [anon_sym_assign] = ACTIONS(147),
    [anon_sym_bar] = ACTIONS(147),
    [anon_sym_allow_tearing] = ACTIONS(147),
    [anon_sym_border] = ACTIONS(147),
    [anon_sym_create_output] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(151),
    [anon_sym_disable] = ACTIONS(151),
    [anon_sym_enable] = ACTIONS(151),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_floating] = ACTIONS(147),
    [anon_sym_focus] = ACTIONS(147),
    [anon_sym_fullscreen] = ACTIONS(147),
    [anon_sym_gaps] = ACTIONS(147),
    [anon_sym_inhibit_idle] = ACTIONS(147),
    [anon_sym_kill] = ACTIONS(147),
    [anon_sym_layout] = ACTIONS(147),
    [anon_sym_mark] = ACTIONS(147),
    [anon_sym_max_render_time] = ACTIONS(147),
    [anon_sym_mode] = ACTIONS(147),
    [anon_sym_move] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_opacity] = ACTIONS(147),
    [anon_sym_output] = ACTIONS(147),
    [anon_sym_pointer] = ACTIONS(151),
    [anon_sym_position] = ACTIONS(147),
    [anon_sym_reload] = ACTIONS(147),
    [anon_sym_rename] = ACTIONS(147),
    [anon_sym_resize] = ACTIONS(147),
    [anon_sym_restart] = ACTIONS(147),
    [anon_sym_scratchpad] = ACTIONS(147),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(147),
    [anon_sym_split] = ACTIONS(147),
    [anon_sym_splith] = ACTIONS(147),
    [anon_sym_splitt] = ACTIONS(147),
    [anon_sym_splitv] = ACTIONS(147),
    [anon_sym_sticky] = ACTIONS(147),
    [anon_sym_swap] = ACTIONS(147),
    [anon_sym_title_format] = ACTIONS(147),
    [anon_sym_toggle] = ACTIONS(151),
    [anon_sym_unmark] = ACTIONS(147),
    [anon_sym_urgent] = ACTIONS(147),
    [anon_sym_workspace] = ACTIONS(147),
    [sym_variable] = ACTIONS(153),
    [anon_sym_container] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_layer] = ACTIONS(147),
    [anon_sym_to] = ACTIONS(147),
    [anon_sym_window] = ACTIONS(147),
    [anon_sym_absolute] = ACTIONS(151),
    [anon_sym_all] = ACTIONS(151),
    [anon_sym_auto] = ACTIONS(151),
    [anon_sym_back_and_forth] = ACTIONS(151),
    [anon_sym_bottom] = ACTIONS(151),
    [anon_sym_center] = ACTIONS(151),
    [anon_sym_child] = ACTIONS(151),
    [anon_sym_current] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_disabled] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_enabled] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_fill] = ACTIONS(151),
    [anon_sym_fit] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_grow] = ACTIONS(151),
    [anon_sym_hide] = ACTIONS(151),
    [anon_sym_horizontal] = ACTIONS(151),
    [anon_sym_inner] = ACTIONS(151),
    [anon_sym_latest] = ACTIONS(151),
    [anon_sym_leave_fullscreen] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_mouse] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_no] = ACTIONS(151),
    [anon_sym_none] = ACTIONS(151),
    [anon_sym_normal] = ACTIONS(151),
    [anon_sym_off] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_outer] = ACTIONS(151),
    [anon_sym_overlay] = ACTIONS(151),
    [anon_sym_parent] = ACTIONS(151),
    [anon_sym_pixel] = ACTIONS(151),
    [anon_sym_prev] = ACTIONS(151),
    [anon_sym_px] = ACTIONS(151),
    [anon_sym_ppt] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_show] = ACTIONS(151),
    [anon_sym_shrink] = ACTIONS(151),
    [anon_sym_sibling] = ACTIONS(151),
    [anon_sym_smart] = ACTIONS(151),
    [anon_sym_solid_color] = ACTIONS(151),
    [anon_sym_stacking] = ACTIONS(151),
    [anon_sym_stretch] = ACTIONS(151),
    [anon_sym_tabbed] = ACTIONS(151),
    [anon_sym_tiling] = ACTIONS(151),
    [anon_sym_top] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_vertical] = ACTIONS(151),
    [anon_sym_yes] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_unit_value] = ACTIONS(153),
    [sym_color] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_word] = ACTIONS(153),
  },
  [35] = {
    [aux_sym_source_file_token1] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_set] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_exec] = ACTIONS(196),
    [anon_sym_exec_always] = ACTIONS(196),
    [anon_sym_assign] = ACTIONS(196),
    [anon_sym_bar] = ACTIONS(196),
    [anon_sym_allow_tearing] = ACTIONS(196),
    [anon_sym_border] = ACTIONS(196),
    [anon_sym_create_output] = ACTIONS(196),
    [anon_sym_cursor] = ACTIONS(196),
    [anon_sym_disable] = ACTIONS(196),
    [anon_sym_enable] = ACTIONS(196),
    [anon_sym_exit] = ACTIONS(196),
    [anon_sym_floating] = ACTIONS(196),
    [anon_sym_focus] = ACTIONS(196),
    [anon_sym_fullscreen] = ACTIONS(196),
    [anon_sym_gaps] = ACTIONS(196),
    [anon_sym_inhibit_idle] = ACTIONS(196),
    [anon_sym_kill] = ACTIONS(196),
    [anon_sym_layout] = ACTIONS(196),
    [anon_sym_mark] = ACTIONS(196),
    [anon_sym_max_render_time] = ACTIONS(196),
    [anon_sym_mode] = ACTIONS(196),
    [anon_sym_move] = ACTIONS(196),
    [anon_sym_nop] = ACTIONS(196),
    [anon_sym_opacity] = ACTIONS(196),
    [anon_sym_output] = ACTIONS(196),
    [anon_sym_pointer] = ACTIONS(196),
    [anon_sym_position] = ACTIONS(196),
    [anon_sym_reload] = ACTIONS(196),
    [anon_sym_rename] = ACTIONS(196),
    [anon_sym_resize] = ACTIONS(196),
    [anon_sym_restart] = ACTIONS(196),
    [anon_sym_scratchpad] = ACTIONS(196),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(196),
    [anon_sym_split] = ACTIONS(196),
    [anon_sym_splith] = ACTIONS(196),
    [anon_sym_splitt] = ACTIONS(196),
    [anon_sym_splitv] = ACTIONS(196),
    [anon_sym_sticky] = ACTIONS(196),
    [anon_sym_swap] = ACTIONS(196),
    [anon_sym_title_format] = ACTIONS(196),
    [anon_sym_toggle] = ACTIONS(196),
    [anon_sym_unmark] = ACTIONS(196),
    [anon_sym_urgent] = ACTIONS(196),
    [anon_sym_workspace] = ACTIONS(196),
    [sym_keycombo] = ACTIONS(196),
    [sym_variable] = ACTIONS(196),
    [anon_sym_container] = ACTIONS(196),
    [anon_sym_from] = ACTIONS(196),
    [anon_sym_layer] = ACTIONS(196),
    [anon_sym_to] = ACTIONS(196),
    [anon_sym_window] = ACTIONS(196),
    [anon_sym_absolute] = ACTIONS(196),
    [anon_sym_all] = ACTIONS(196),
    [anon_sym_auto] = ACTIONS(196),
    [anon_sym_back_and_forth] = ACTIONS(196),
    [anon_sym_bottom] = ACTIONS(196),
    [anon_sym_center] = ACTIONS(196),
    [anon_sym_child] = ACTIONS(196),
    [anon_sym_current] = ACTIONS(196),
    [anon_sym_default] = ACTIONS(196),
    [anon_sym_disabled] = ACTIONS(196),
    [anon_sym_down] = ACTIONS(196),
    [anon_sym_enabled] = ACTIONS(196),
    [anon_sym_false] = ACTIONS(196),
    [anon_sym_fill] = ACTIONS(196),
    [anon_sym_fit] = ACTIONS(196),
    [anon_sym_global] = ACTIONS(196),
    [anon_sym_grow] = ACTIONS(196),
    [anon_sym_hide] = ACTIONS(196),
    [anon_sym_horizontal] = ACTIONS(196),
    [anon_sym_inner] = ACTIONS(196),
    [anon_sym_latest] = ACTIONS(196),
    [anon_sym_leave_fullscreen] = ACTIONS(196),
    [anon_sym_left] = ACTIONS(196),
    [anon_sym_mouse] = ACTIONS(196),
    [anon_sym_next] = ACTIONS(196),
    [anon_sym_no] = ACTIONS(196),
    [anon_sym_none] = ACTIONS(196),
    [anon_sym_normal] = ACTIONS(196),
    [anon_sym_off] = ACTIONS(196),
    [anon_sym_on] = ACTIONS(196),
    [anon_sym_outer] = ACTIONS(196),
    [anon_sym_overlay] = ACTIONS(196),
    [anon_sym_parent] = ACTIONS(196),
    [anon_sym_pixel] = ACTIONS(196),
    [anon_sym_prev] = ACTIONS(196),
    [anon_sym_px] = ACTIONS(196),
    [anon_sym_ppt] = ACTIONS(196),
    [anon_sym_right] = ACTIONS(196),
    [anon_sym_show] = ACTIONS(196),
    [anon_sym_shrink] = ACTIONS(196),
    [anon_sym_sibling] = ACTIONS(196),
    [anon_sym_smart] = ACTIONS(196),
    [anon_sym_solid_color] = ACTIONS(196),
    [anon_sym_stacking] = ACTIONS(196),
    [anon_sym_stretch] = ACTIONS(196),
    [anon_sym_tabbed] = ACTIONS(196),
    [anon_sym_tiling] = ACTIONS(196),
    [anon_sym_top] = ACTIONS(196),
    [anon_sym_true] = ACTIONS(196),
    [anon_sym_up] = ACTIONS(196),
    [anon_sym_vertical] = ACTIONS(196),
    [anon_sym_yes] = ACTIONS(196),
    [sym_number] = ACTIONS(196),
    [sym_unit_value] = ACTIONS(196),
    [sym_color] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [sym_word] = ACTIONS(196),
  },
  [36] = {
    [aux_sym_source_file_token1] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(200),
    [anon_sym_set] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_exec] = ACTIONS(200),
    [anon_sym_exec_always] = ACTIONS(200),
    [anon_sym_assign] = ACTIONS(200),
    [anon_sym_bar] = ACTIONS(200),
    [anon_sym_allow_tearing] = ACTIONS(200),
    [anon_sym_border] = ACTIONS(200),
    [anon_sym_create_output] = ACTIONS(200),
    [anon_sym_cursor] = ACTIONS(200),
    [anon_sym_disable] = ACTIONS(200),
    [anon_sym_enable] = ACTIONS(200),
    [anon_sym_exit] = ACTIONS(200),
    [anon_sym_floating] = ACTIONS(200),
    [anon_sym_focus] = ACTIONS(200),
    [anon_sym_fullscreen] = ACTIONS(200),
    [anon_sym_gaps] = ACTIONS(200),
    [anon_sym_inhibit_idle] = ACTIONS(200),
    [anon_sym_kill] = ACTIONS(200),
    [anon_sym_layout] = ACTIONS(200),
    [anon_sym_mark] = ACTIONS(200),
    [anon_sym_max_render_time] = ACTIONS(200),
    [anon_sym_mode] = ACTIONS(200),
    [anon_sym_move] = ACTIONS(200),
    [anon_sym_nop] = ACTIONS(200),
    [anon_sym_opacity] = ACTIONS(200),
    [anon_sym_output] = ACTIONS(200),
    [anon_sym_pointer] = ACTIONS(200),
    [anon_sym_position] = ACTIONS(200),
    [anon_sym_reload] = ACTIONS(200),
    [anon_sym_rename] = ACTIONS(200),
    [anon_sym_resize] = ACTIONS(200),
    [anon_sym_restart] = ACTIONS(200),
    [anon_sym_scratchpad] = ACTIONS(200),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(200),
    [anon_sym_split] = ACTIONS(200),
    [anon_sym_splith] = ACTIONS(200),
    [anon_sym_splitt] = ACTIONS(200),
    [anon_sym_splitv] = ACTIONS(200),
    [anon_sym_sticky] = ACTIONS(200),
    [anon_sym_swap] = ACTIONS(200),
    [anon_sym_title_format] = ACTIONS(200),
    [anon_sym_toggle] = ACTIONS(200),
    [anon_sym_unmark] = ACTIONS(200),
    [anon_sym_urgent] = ACTIONS(200),
    [anon_sym_workspace] = ACTIONS(200),
    [sym_keycombo] = ACTIONS(200),
    [sym_variable] = ACTIONS(200),
    [anon_sym_container] = ACTIONS(200),
    [anon_sym_from] = ACTIONS(200),
    [anon_sym_layer] = ACTIONS(200),
    [anon_sym_to] = ACTIONS(200),
    [anon_sym_window] = ACTIONS(200),
    [anon_sym_absolute] = ACTIONS(200),
    [anon_sym_all] = ACTIONS(200),
    [anon_sym_auto] = ACTIONS(200),
    [anon_sym_back_and_forth] = ACTIONS(200),
    [anon_sym_bottom] = ACTIONS(200),
    [anon_sym_center] = ACTIONS(200),
    [anon_sym_child] = ACTIONS(200),
    [anon_sym_current] = ACTIONS(200),
    [anon_sym_default] = ACTIONS(200),
    [anon_sym_disabled] = ACTIONS(200),
    [anon_sym_down] = ACTIONS(200),
    [anon_sym_enabled] = ACTIONS(200),
    [anon_sym_false] = ACTIONS(200),
    [anon_sym_fill] = ACTIONS(200),
    [anon_sym_fit] = ACTIONS(200),
    [anon_sym_global] = ACTIONS(200),
    [anon_sym_grow] = ACTIONS(200),
    [anon_sym_hide] = ACTIONS(200),
    [anon_sym_horizontal] = ACTIONS(200),
    [anon_sym_inner] = ACTIONS(200),
    [anon_sym_latest] = ACTIONS(200),
    [anon_sym_leave_fullscreen] = ACTIONS(200),
    [anon_sym_left] = ACTIONS(200),
    [anon_sym_mouse] = ACTIONS(200),
    [anon_sym_next] = ACTIONS(200),
    [anon_sym_no] = ACTIONS(200),
    [anon_sym_none] = ACTIONS(200),
    [anon_sym_normal] = ACTIONS(200),
    [anon_sym_off] = ACTIONS(200),
    [anon_sym_on] = ACTIONS(200),
    [anon_sym_outer] = ACTIONS(200),
    [anon_sym_overlay] = ACTIONS(200),
    [anon_sym_parent] = ACTIONS(200),
    [anon_sym_pixel] = ACTIONS(200),
    [anon_sym_prev] = ACTIONS(200),
    [anon_sym_px] = ACTIONS(200),
    [anon_sym_ppt] = ACTIONS(200),
    [anon_sym_right] = ACTIONS(200),
    [anon_sym_show] = ACTIONS(200),
    [anon_sym_shrink] = ACTIONS(200),
    [anon_sym_sibling] = ACTIONS(200),
    [anon_sym_smart] = ACTIONS(200),
    [anon_sym_solid_color] = ACTIONS(200),
    [anon_sym_stacking] = ACTIONS(200),
    [anon_sym_stretch] = ACTIONS(200),
    [anon_sym_tabbed] = ACTIONS(200),
    [anon_sym_tiling] = ACTIONS(200),
    [anon_sym_top] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(200),
    [anon_sym_up] = ACTIONS(200),
    [anon_sym_vertical] = ACTIONS(200),
    [anon_sym_yes] = ACTIONS(200),
    [sym_number] = ACTIONS(200),
    [sym_unit_value] = ACTIONS(200),
    [sym_color] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [sym_word] = ACTIONS(200),
  },
  [37] = {
    [aux_sym_source_file_token1] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(204),
    [anon_sym_set] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_exec] = ACTIONS(204),
    [anon_sym_exec_always] = ACTIONS(204),
    [anon_sym_assign] = ACTIONS(204),
    [anon_sym_bar] = ACTIONS(204),
    [anon_sym_allow_tearing] = ACTIONS(204),
    [anon_sym_border] = ACTIONS(204),
    [anon_sym_create_output] = ACTIONS(204),
    [anon_sym_cursor] = ACTIONS(204),
    [anon_sym_disable] = ACTIONS(204),
    [anon_sym_enable] = ACTIONS(204),
    [anon_sym_exit] = ACTIONS(204),
    [anon_sym_floating] = ACTIONS(204),
    [anon_sym_focus] = ACTIONS(204),
    [anon_sym_fullscreen] = ACTIONS(204),
    [anon_sym_gaps] = ACTIONS(204),
    [anon_sym_inhibit_idle] = ACTIONS(204),
    [anon_sym_kill] = ACTIONS(204),
    [anon_sym_layout] = ACTIONS(204),
    [anon_sym_mark] = ACTIONS(204),
    [anon_sym_max_render_time] = ACTIONS(204),
    [anon_sym_mode] = ACTIONS(204),
    [anon_sym_move] = ACTIONS(204),
    [anon_sym_nop] = ACTIONS(204),
    [anon_sym_opacity] = ACTIONS(204),
    [anon_sym_output] = ACTIONS(204),
    [anon_sym_pointer] = ACTIONS(204),
    [anon_sym_position] = ACTIONS(204),
    [anon_sym_reload] = ACTIONS(204),
    [anon_sym_rename] = ACTIONS(204),
    [anon_sym_resize] = ACTIONS(204),
    [anon_sym_restart] = ACTIONS(204),
    [anon_sym_scratchpad] = ACTIONS(204),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(204),
    [anon_sym_split] = ACTIONS(204),
    [anon_sym_splith] = ACTIONS(204),
    [anon_sym_splitt] = ACTIONS(204),
    [anon_sym_splitv] = ACTIONS(204),
    [anon_sym_sticky] = ACTIONS(204),
    [anon_sym_swap] = ACTIONS(204),
    [anon_sym_title_format] = ACTIONS(204),
    [anon_sym_toggle] = ACTIONS(204),
    [anon_sym_unmark] = ACTIONS(204),
    [anon_sym_urgent] = ACTIONS(204),
    [anon_sym_workspace] = ACTIONS(204),
    [sym_keycombo] = ACTIONS(204),
    [sym_variable] = ACTIONS(204),
    [anon_sym_container] = ACTIONS(204),
    [anon_sym_from] = ACTIONS(204),
    [anon_sym_layer] = ACTIONS(204),
    [anon_sym_to] = ACTIONS(204),
    [anon_sym_window] = ACTIONS(204),
    [anon_sym_absolute] = ACTIONS(204),
    [anon_sym_all] = ACTIONS(204),
    [anon_sym_auto] = ACTIONS(204),
    [anon_sym_back_and_forth] = ACTIONS(204),
    [anon_sym_bottom] = ACTIONS(204),
    [anon_sym_center] = ACTIONS(204),
    [anon_sym_child] = ACTIONS(204),
    [anon_sym_current] = ACTIONS(204),
    [anon_sym_default] = ACTIONS(204),
    [anon_sym_disabled] = ACTIONS(204),
    [anon_sym_down] = ACTIONS(204),
    [anon_sym_enabled] = ACTIONS(204),
    [anon_sym_false] = ACTIONS(204),
    [anon_sym_fill] = ACTIONS(204),
    [anon_sym_fit] = ACTIONS(204),
    [anon_sym_global] = ACTIONS(204),
    [anon_sym_grow] = ACTIONS(204),
    [anon_sym_hide] = ACTIONS(204),
    [anon_sym_horizontal] = ACTIONS(204),
    [anon_sym_inner] = ACTIONS(204),
    [anon_sym_latest] = ACTIONS(204),
    [anon_sym_leave_fullscreen] = ACTIONS(204),
    [anon_sym_left] = ACTIONS(204),
    [anon_sym_mouse] = ACTIONS(204),
    [anon_sym_next] = ACTIONS(204),
    [anon_sym_no] = ACTIONS(204),
    [anon_sym_none] = ACTIONS(204),
    [anon_sym_normal] = ACTIONS(204),
    [anon_sym_off] = ACTIONS(204),
    [anon_sym_on] = ACTIONS(204),
    [anon_sym_outer] = ACTIONS(204),
    [anon_sym_overlay] = ACTIONS(204),
    [anon_sym_parent] = ACTIONS(204),
    [anon_sym_pixel] = ACTIONS(204),
    [anon_sym_prev] = ACTIONS(204),
    [anon_sym_px] = ACTIONS(204),
    [anon_sym_ppt] = ACTIONS(204),
    [anon_sym_right] = ACTIONS(204),
    [anon_sym_show] = ACTIONS(204),
    [anon_sym_shrink] = ACTIONS(204),
    [anon_sym_sibling] = ACTIONS(204),
    [anon_sym_smart] = ACTIONS(204),
    [anon_sym_solid_color] = ACTIONS(204),
    [anon_sym_stacking] = ACTIONS(204),
    [anon_sym_stretch] = ACTIONS(204),
    [anon_sym_tabbed] = ACTIONS(204),
    [anon_sym_tiling] = ACTIONS(204),
    [anon_sym_top] = ACTIONS(204),
    [anon_sym_true] = ACTIONS(204),
    [anon_sym_up] = ACTIONS(204),
    [anon_sym_vertical] = ACTIONS(204),
    [anon_sym_yes] = ACTIONS(204),
    [sym_number] = ACTIONS(204),
    [sym_unit_value] = ACTIONS(204),
    [sym_color] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [sym_word] = ACTIONS(204),
  },
  [38] = {
    [aux_sym_source_file_token1] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_set] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_exec] = ACTIONS(208),
    [anon_sym_exec_always] = ACTIONS(208),
    [anon_sym_assign] = ACTIONS(208),
    [anon_sym_bar] = ACTIONS(208),
    [anon_sym_allow_tearing] = ACTIONS(208),
    [anon_sym_border] = ACTIONS(208),
    [anon_sym_create_output] = ACTIONS(208),
    [anon_sym_cursor] = ACTIONS(208),
    [anon_sym_disable] = ACTIONS(208),
    [anon_sym_enable] = ACTIONS(208),
    [anon_sym_exit] = ACTIONS(208),
    [anon_sym_floating] = ACTIONS(208),
    [anon_sym_focus] = ACTIONS(208),
    [anon_sym_fullscreen] = ACTIONS(208),
    [anon_sym_gaps] = ACTIONS(208),
    [anon_sym_inhibit_idle] = ACTIONS(208),
    [anon_sym_kill] = ACTIONS(208),
    [anon_sym_layout] = ACTIONS(208),
    [anon_sym_mark] = ACTIONS(208),
    [anon_sym_max_render_time] = ACTIONS(208),
    [anon_sym_mode] = ACTIONS(208),
    [anon_sym_move] = ACTIONS(208),
    [anon_sym_nop] = ACTIONS(208),
    [anon_sym_opacity] = ACTIONS(208),
    [anon_sym_output] = ACTIONS(208),
    [anon_sym_pointer] = ACTIONS(208),
    [anon_sym_position] = ACTIONS(208),
    [anon_sym_reload] = ACTIONS(208),
    [anon_sym_rename] = ACTIONS(208),
    [anon_sym_resize] = ACTIONS(208),
    [anon_sym_restart] = ACTIONS(208),
    [anon_sym_scratchpad] = ACTIONS(208),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(208),
    [anon_sym_split] = ACTIONS(208),
    [anon_sym_splith] = ACTIONS(208),
    [anon_sym_splitt] = ACTIONS(208),
    [anon_sym_splitv] = ACTIONS(208),
    [anon_sym_sticky] = ACTIONS(208),
    [anon_sym_swap] = ACTIONS(208),
    [anon_sym_title_format] = ACTIONS(208),
    [anon_sym_toggle] = ACTIONS(208),
    [anon_sym_unmark] = ACTIONS(208),
    [anon_sym_urgent] = ACTIONS(208),
    [anon_sym_workspace] = ACTIONS(208),
    [sym_keycombo] = ACTIONS(208),
    [sym_variable] = ACTIONS(208),
    [anon_sym_container] = ACTIONS(208),
    [anon_sym_from] = ACTIONS(208),
    [anon_sym_layer] = ACTIONS(208),
    [anon_sym_to] = ACTIONS(208),
    [anon_sym_window] = ACTIONS(208),
    [anon_sym_absolute] = ACTIONS(208),
    [anon_sym_all] = ACTIONS(208),
    [anon_sym_auto] = ACTIONS(208),
    [anon_sym_back_and_forth] = ACTIONS(208),
    [anon_sym_bottom] = ACTIONS(208),
    [anon_sym_center] = ACTIONS(208),
    [anon_sym_child] = ACTIONS(208),
    [anon_sym_current] = ACTIONS(208),
    [anon_sym_default] = ACTIONS(208),
    [anon_sym_disabled] = ACTIONS(208),
    [anon_sym_down] = ACTIONS(208),
    [anon_sym_enabled] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_fill] = ACTIONS(208),
    [anon_sym_fit] = ACTIONS(208),
    [anon_sym_global] = ACTIONS(208),
    [anon_sym_grow] = ACTIONS(208),
    [anon_sym_hide] = ACTIONS(208),
    [anon_sym_horizontal] = ACTIONS(208),
    [anon_sym_inner] = ACTIONS(208),
    [anon_sym_latest] = ACTIONS(208),
    [anon_sym_leave_fullscreen] = ACTIONS(208),
    [anon_sym_left] = ACTIONS(208),
    [anon_sym_mouse] = ACTIONS(208),
    [anon_sym_next] = ACTIONS(208),
    [anon_sym_no] = ACTIONS(208),
    [anon_sym_none] = ACTIONS(208),
    [anon_sym_normal] = ACTIONS(208),
    [anon_sym_off] = ACTIONS(208),
    [anon_sym_on] = ACTIONS(208),
    [anon_sym_outer] = ACTIONS(208),
    [anon_sym_overlay] = ACTIONS(208),
    [anon_sym_parent] = ACTIONS(208),
    [anon_sym_pixel] = ACTIONS(208),
    [anon_sym_prev] = ACTIONS(208),
    [anon_sym_px] = ACTIONS(208),
    [anon_sym_ppt] = ACTIONS(208),
    [anon_sym_right] = ACTIONS(208),
    [anon_sym_show] = ACTIONS(208),
    [anon_sym_shrink] = ACTIONS(208),
    [anon_sym_sibling] = ACTIONS(208),
    [anon_sym_smart] = ACTIONS(208),
    [anon_sym_solid_color] = ACTIONS(208),
    [anon_sym_stacking] = ACTIONS(208),
    [anon_sym_stretch] = ACTIONS(208),
    [anon_sym_tabbed] = ACTIONS(208),
    [anon_sym_tiling] = ACTIONS(208),
    [anon_sym_top] = ACTIONS(208),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_up] = ACTIONS(208),
    [anon_sym_vertical] = ACTIONS(208),
    [anon_sym_yes] = ACTIONS(208),
    [sym_number] = ACTIONS(208),
    [sym_unit_value] = ACTIONS(208),
    [sym_color] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [sym_word] = ACTIONS(208),
  },
  [39] = {
    [aux_sym_source_file_token1] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(212),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_exec] = ACTIONS(212),
    [anon_sym_exec_always] = ACTIONS(212),
    [anon_sym_assign] = ACTIONS(212),
    [anon_sym_bar] = ACTIONS(212),
    [anon_sym_allow_tearing] = ACTIONS(212),
    [anon_sym_border] = ACTIONS(212),
    [anon_sym_create_output] = ACTIONS(212),
    [anon_sym_cursor] = ACTIONS(212),
    [anon_sym_disable] = ACTIONS(212),
    [anon_sym_enable] = ACTIONS(212),
    [anon_sym_exit] = ACTIONS(212),
    [anon_sym_floating] = ACTIONS(212),
    [anon_sym_focus] = ACTIONS(212),
    [anon_sym_fullscreen] = ACTIONS(212),
    [anon_sym_gaps] = ACTIONS(212),
    [anon_sym_inhibit_idle] = ACTIONS(212),
    [anon_sym_kill] = ACTIONS(212),
    [anon_sym_layout] = ACTIONS(212),
    [anon_sym_mark] = ACTIONS(212),
    [anon_sym_max_render_time] = ACTIONS(212),
    [anon_sym_mode] = ACTIONS(212),
    [anon_sym_move] = ACTIONS(212),
    [anon_sym_nop] = ACTIONS(212),
    [anon_sym_opacity] = ACTIONS(212),
    [anon_sym_output] = ACTIONS(212),
    [anon_sym_pointer] = ACTIONS(212),
    [anon_sym_position] = ACTIONS(212),
    [anon_sym_reload] = ACTIONS(212),
    [anon_sym_rename] = ACTIONS(212),
    [anon_sym_resize] = ACTIONS(212),
    [anon_sym_restart] = ACTIONS(212),
    [anon_sym_scratchpad] = ACTIONS(212),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(212),
    [anon_sym_split] = ACTIONS(212),
    [anon_sym_splith] = ACTIONS(212),
    [anon_sym_splitt] = ACTIONS(212),
    [anon_sym_splitv] = ACTIONS(212),
    [anon_sym_sticky] = ACTIONS(212),
    [anon_sym_swap] = ACTIONS(212),
    [anon_sym_title_format] = ACTIONS(212),
    [anon_sym_toggle] = ACTIONS(212),
    [anon_sym_unmark] = ACTIONS(212),
    [anon_sym_urgent] = ACTIONS(212),
    [anon_sym_workspace] = ACTIONS(212),
    [sym_keycombo] = ACTIONS(212),
    [sym_variable] = ACTIONS(212),
    [anon_sym_container] = ACTIONS(212),
    [anon_sym_from] = ACTIONS(212),
    [anon_sym_layer] = ACTIONS(212),
    [anon_sym_to] = ACTIONS(212),
    [anon_sym_window] = ACTIONS(212),
    [anon_sym_absolute] = ACTIONS(212),
    [anon_sym_all] = ACTIONS(212),
    [anon_sym_auto] = ACTIONS(212),
    [anon_sym_back_and_forth] = ACTIONS(212),
    [anon_sym_bottom] = ACTIONS(212),
    [anon_sym_center] = ACTIONS(212),
    [anon_sym_child] = ACTIONS(212),
    [anon_sym_current] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(212),
    [anon_sym_disabled] = ACTIONS(212),
    [anon_sym_down] = ACTIONS(212),
    [anon_sym_enabled] = ACTIONS(212),
    [anon_sym_false] = ACTIONS(212),
    [anon_sym_fill] = ACTIONS(212),
    [anon_sym_fit] = ACTIONS(212),
    [anon_sym_global] = ACTIONS(212),
    [anon_sym_grow] = ACTIONS(212),
    [anon_sym_hide] = ACTIONS(212),
    [anon_sym_horizontal] = ACTIONS(212),
    [anon_sym_inner] = ACTIONS(212),
    [anon_sym_latest] = ACTIONS(212),
    [anon_sym_leave_fullscreen] = ACTIONS(212),
    [anon_sym_left] = ACTIONS(212),
    [anon_sym_mouse] = ACTIONS(212),
    [anon_sym_next] = ACTIONS(212),
    [anon_sym_no] = ACTIONS(212),
    [anon_sym_none] = ACTIONS(212),
    [anon_sym_normal] = ACTIONS(212),
    [anon_sym_off] = ACTIONS(212),
    [anon_sym_on] = ACTIONS(212),
    [anon_sym_outer] = ACTIONS(212),
    [anon_sym_overlay] = ACTIONS(212),
    [anon_sym_parent] = ACTIONS(212),
    [anon_sym_pixel] = ACTIONS(212),
    [anon_sym_prev] = ACTIONS(212),
    [anon_sym_px] = ACTIONS(212),
    [anon_sym_ppt] = ACTIONS(212),
    [anon_sym_right] = ACTIONS(212),
    [anon_sym_show] = ACTIONS(212),
    [anon_sym_shrink] = ACTIONS(212),
    [anon_sym_sibling] = ACTIONS(212),
    [anon_sym_smart] = ACTIONS(212),
    [anon_sym_solid_color] = ACTIONS(212),
    [anon_sym_stacking] = ACTIONS(212),
    [anon_sym_stretch] = ACTIONS(212),
    [anon_sym_tabbed] = ACTIONS(212),
    [anon_sym_tiling] = ACTIONS(212),
    [anon_sym_top] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(212),
    [anon_sym_up] = ACTIONS(212),
    [anon_sym_vertical] = ACTIONS(212),
    [anon_sym_yes] = ACTIONS(212),
    [sym_number] = ACTIONS(212),
    [sym_unit_value] = ACTIONS(212),
    [sym_color] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym_word] = ACTIONS(212),
  },
  [40] = {
    [aux_sym_source_file_token1] = ACTIONS(206),
    [anon_sym_set] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_exec] = ACTIONS(208),
    [anon_sym_exec_always] = ACTIONS(208),
    [anon_sym_assign] = ACTIONS(208),
    [anon_sym_bar] = ACTIONS(208),
    [anon_sym_allow_tearing] = ACTIONS(208),
    [anon_sym_border] = ACTIONS(208),
    [anon_sym_create_output] = ACTIONS(208),
    [anon_sym_cursor] = ACTIONS(208),
    [anon_sym_disable] = ACTIONS(208),
    [anon_sym_enable] = ACTIONS(208),
    [anon_sym_exit] = ACTIONS(208),
    [anon_sym_floating] = ACTIONS(208),
    [anon_sym_focus] = ACTIONS(208),
    [anon_sym_fullscreen] = ACTIONS(208),
    [anon_sym_gaps] = ACTIONS(208),
    [anon_sym_inhibit_idle] = ACTIONS(208),
    [anon_sym_kill] = ACTIONS(208),
    [anon_sym_layout] = ACTIONS(208),
    [anon_sym_mark] = ACTIONS(208),
    [anon_sym_max_render_time] = ACTIONS(208),
    [anon_sym_mode] = ACTIONS(208),
    [anon_sym_move] = ACTIONS(208),
    [anon_sym_nop] = ACTIONS(208),
    [anon_sym_opacity] = ACTIONS(208),
    [anon_sym_output] = ACTIONS(208),
    [anon_sym_pointer] = ACTIONS(208),
    [anon_sym_position] = ACTIONS(208),
    [anon_sym_reload] = ACTIONS(208),
    [anon_sym_rename] = ACTIONS(208),
    [anon_sym_resize] = ACTIONS(208),
    [anon_sym_restart] = ACTIONS(208),
    [anon_sym_scratchpad] = ACTIONS(208),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(208),
    [anon_sym_split] = ACTIONS(208),
    [anon_sym_splith] = ACTIONS(208),
    [anon_sym_splitt] = ACTIONS(208),
    [anon_sym_splitv] = ACTIONS(208),
    [anon_sym_sticky] = ACTIONS(208),
    [anon_sym_swap] = ACTIONS(208),
    [anon_sym_title_format] = ACTIONS(208),
    [anon_sym_toggle] = ACTIONS(208),
    [anon_sym_unmark] = ACTIONS(208),
    [anon_sym_urgent] = ACTIONS(208),
    [anon_sym_workspace] = ACTIONS(208),
    [sym_variable] = ACTIONS(208),
    [anon_sym_container] = ACTIONS(208),
    [anon_sym_from] = ACTIONS(208),
    [anon_sym_layer] = ACTIONS(208),
    [anon_sym_to] = ACTIONS(208),
    [anon_sym_window] = ACTIONS(208),
    [anon_sym_absolute] = ACTIONS(208),
    [anon_sym_all] = ACTIONS(208),
    [anon_sym_auto] = ACTIONS(208),
    [anon_sym_back_and_forth] = ACTIONS(208),
    [anon_sym_bottom] = ACTIONS(208),
    [anon_sym_center] = ACTIONS(208),
    [anon_sym_child] = ACTIONS(208),
    [anon_sym_current] = ACTIONS(208),
    [anon_sym_default] = ACTIONS(208),
    [anon_sym_disabled] = ACTIONS(208),
    [anon_sym_down] = ACTIONS(208),
    [anon_sym_enabled] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_fill] = ACTIONS(208),
    [anon_sym_fit] = ACTIONS(208),
    [anon_sym_global] = ACTIONS(208),
    [anon_sym_grow] = ACTIONS(208),
    [anon_sym_hide] = ACTIONS(208),
    [anon_sym_horizontal] = ACTIONS(208),
    [anon_sym_inner] = ACTIONS(208),
    [anon_sym_latest] = ACTIONS(208),
    [anon_sym_leave_fullscreen] = ACTIONS(208),
    [anon_sym_left] = ACTIONS(208),
    [anon_sym_mouse] = ACTIONS(208),
    [anon_sym_next] = ACTIONS(208),
    [anon_sym_no] = ACTIONS(208),
    [anon_sym_none] = ACTIONS(208),
    [anon_sym_normal] = ACTIONS(208),
    [anon_sym_off] = ACTIONS(208),
    [anon_sym_on] = ACTIONS(208),
    [anon_sym_outer] = ACTIONS(208),
    [anon_sym_overlay] = ACTIONS(208),
    [anon_sym_parent] = ACTIONS(208),
    [anon_sym_pixel] = ACTIONS(208),
    [anon_sym_prev] = ACTIONS(208),
    [anon_sym_px] = ACTIONS(208),
    [anon_sym_ppt] = ACTIONS(208),
    [anon_sym_right] = ACTIONS(208),
    [anon_sym_show] = ACTIONS(208),
    [anon_sym_shrink] = ACTIONS(208),
    [anon_sym_sibling] = ACTIONS(208),
    [anon_sym_smart] = ACTIONS(208),
    [anon_sym_solid_color] = ACTIONS(208),
    [anon_sym_stacking] = ACTIONS(208),
    [anon_sym_stretch] = ACTIONS(208),
    [anon_sym_tabbed] = ACTIONS(208),
    [anon_sym_tiling] = ACTIONS(208),
    [anon_sym_top] = ACTIONS(208),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_up] = ACTIONS(208),
    [anon_sym_vertical] = ACTIONS(208),
    [anon_sym_yes] = ACTIONS(208),
    [sym_number] = ACTIONS(208),
    [sym_unit_value] = ACTIONS(208),
    [sym_color] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [sym_word] = ACTIONS(208),
  },
  [41] = {
    [aux_sym_source_file_token1] = ACTIONS(194),
    [anon_sym_set] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_exec] = ACTIONS(196),
    [anon_sym_exec_always] = ACTIONS(196),
    [anon_sym_assign] = ACTIONS(196),
    [anon_sym_bar] = ACTIONS(196),
    [anon_sym_allow_tearing] = ACTIONS(196),
    [anon_sym_border] = ACTIONS(196),
    [anon_sym_create_output] = ACTIONS(196),
    [anon_sym_cursor] = ACTIONS(196),
    [anon_sym_disable] = ACTIONS(196),
    [anon_sym_enable] = ACTIONS(196),
    [anon_sym_exit] = ACTIONS(196),
    [anon_sym_floating] = ACTIONS(196),
    [anon_sym_focus] = ACTIONS(196),
    [anon_sym_fullscreen] = ACTIONS(196),
    [anon_sym_gaps] = ACTIONS(196),
    [anon_sym_inhibit_idle] = ACTIONS(196),
    [anon_sym_kill] = ACTIONS(196),
    [anon_sym_layout] = ACTIONS(196),
    [anon_sym_mark] = ACTIONS(196),
    [anon_sym_max_render_time] = ACTIONS(196),
    [anon_sym_mode] = ACTIONS(196),
    [anon_sym_move] = ACTIONS(196),
    [anon_sym_nop] = ACTIONS(196),
    [anon_sym_opacity] = ACTIONS(196),
    [anon_sym_output] = ACTIONS(196),
    [anon_sym_pointer] = ACTIONS(196),
    [anon_sym_position] = ACTIONS(196),
    [anon_sym_reload] = ACTIONS(196),
    [anon_sym_rename] = ACTIONS(196),
    [anon_sym_resize] = ACTIONS(196),
    [anon_sym_restart] = ACTIONS(196),
    [anon_sym_scratchpad] = ACTIONS(196),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(196),
    [anon_sym_split] = ACTIONS(196),
    [anon_sym_splith] = ACTIONS(196),
    [anon_sym_splitt] = ACTIONS(196),
    [anon_sym_splitv] = ACTIONS(196),
    [anon_sym_sticky] = ACTIONS(196),
    [anon_sym_swap] = ACTIONS(196),
    [anon_sym_title_format] = ACTIONS(196),
    [anon_sym_toggle] = ACTIONS(196),
    [anon_sym_unmark] = ACTIONS(196),
    [anon_sym_urgent] = ACTIONS(196),
    [anon_sym_workspace] = ACTIONS(196),
    [sym_variable] = ACTIONS(196),
    [anon_sym_container] = ACTIONS(196),
    [anon_sym_from] = ACTIONS(196),
    [anon_sym_layer] = ACTIONS(196),
    [anon_sym_to] = ACTIONS(196),
    [anon_sym_window] = ACTIONS(196),
    [anon_sym_absolute] = ACTIONS(196),
    [anon_sym_all] = ACTIONS(196),
    [anon_sym_auto] = ACTIONS(196),
    [anon_sym_back_and_forth] = ACTIONS(196),
    [anon_sym_bottom] = ACTIONS(196),
    [anon_sym_center] = ACTIONS(196),
    [anon_sym_child] = ACTIONS(196),
    [anon_sym_current] = ACTIONS(196),
    [anon_sym_default] = ACTIONS(196),
    [anon_sym_disabled] = ACTIONS(196),
    [anon_sym_down] = ACTIONS(196),
    [anon_sym_enabled] = ACTIONS(196),
    [anon_sym_false] = ACTIONS(196),
    [anon_sym_fill] = ACTIONS(196),
    [anon_sym_fit] = ACTIONS(196),
    [anon_sym_global] = ACTIONS(196),
    [anon_sym_grow] = ACTIONS(196),
    [anon_sym_hide] = ACTIONS(196),
    [anon_sym_horizontal] = ACTIONS(196),
    [anon_sym_inner] = ACTIONS(196),
    [anon_sym_latest] = ACTIONS(196),
    [anon_sym_leave_fullscreen] = ACTIONS(196),
    [anon_sym_left] = ACTIONS(196),
    [anon_sym_mouse] = ACTIONS(196),
    [anon_sym_next] = ACTIONS(196),
    [anon_sym_no] = ACTIONS(196),
    [anon_sym_none] = ACTIONS(196),
    [anon_sym_normal] = ACTIONS(196),
    [anon_sym_off] = ACTIONS(196),
    [anon_sym_on] = ACTIONS(196),
    [anon_sym_outer] = ACTIONS(196),
    [anon_sym_overlay] = ACTIONS(196),
    [anon_sym_parent] = ACTIONS(196),
    [anon_sym_pixel] = ACTIONS(196),
    [anon_sym_prev] = ACTIONS(196),
    [anon_sym_px] = ACTIONS(196),
    [anon_sym_ppt] = ACTIONS(196),
    [anon_sym_right] = ACTIONS(196),
    [anon_sym_show] = ACTIONS(196),
    [anon_sym_shrink] = ACTIONS(196),
    [anon_sym_sibling] = ACTIONS(196),
    [anon_sym_smart] = ACTIONS(196),
    [anon_sym_solid_color] = ACTIONS(196),
    [anon_sym_stacking] = ACTIONS(196),
    [anon_sym_stretch] = ACTIONS(196),
    [anon_sym_tabbed] = ACTIONS(196),
    [anon_sym_tiling] = ACTIONS(196),
    [anon_sym_top] = ACTIONS(196),
    [anon_sym_true] = ACTIONS(196),
    [anon_sym_up] = ACTIONS(196),
    [anon_sym_vertical] = ACTIONS(196),
    [anon_sym_yes] = ACTIONS(196),
    [sym_number] = ACTIONS(196),
    [sym_unit_value] = ACTIONS(196),
    [sym_color] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [sym_word] = ACTIONS(196),
  },
  [42] = {
    [aux_sym_source_file_token1] = ACTIONS(202),
    [anon_sym_set] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_exec] = ACTIONS(204),
    [anon_sym_exec_always] = ACTIONS(204),
    [anon_sym_assign] = ACTIONS(204),
    [anon_sym_bar] = ACTIONS(204),
    [anon_sym_allow_tearing] = ACTIONS(204),
    [anon_sym_border] = ACTIONS(204),
    [anon_sym_create_output] = ACTIONS(204),
    [anon_sym_cursor] = ACTIONS(204),
    [anon_sym_disable] = ACTIONS(204),
    [anon_sym_enable] = ACTIONS(204),
    [anon_sym_exit] = ACTIONS(204),
    [anon_sym_floating] = ACTIONS(204),
    [anon_sym_focus] = ACTIONS(204),
    [anon_sym_fullscreen] = ACTIONS(204),
    [anon_sym_gaps] = ACTIONS(204),
    [anon_sym_inhibit_idle] = ACTIONS(204),
    [anon_sym_kill] = ACTIONS(204),
    [anon_sym_layout] = ACTIONS(204),
    [anon_sym_mark] = ACTIONS(204),
    [anon_sym_max_render_time] = ACTIONS(204),
    [anon_sym_mode] = ACTIONS(204),
    [anon_sym_move] = ACTIONS(204),
    [anon_sym_nop] = ACTIONS(204),
    [anon_sym_opacity] = ACTIONS(204),
    [anon_sym_output] = ACTIONS(204),
    [anon_sym_pointer] = ACTIONS(204),
    [anon_sym_position] = ACTIONS(204),
    [anon_sym_reload] = ACTIONS(204),
    [anon_sym_rename] = ACTIONS(204),
    [anon_sym_resize] = ACTIONS(204),
    [anon_sym_restart] = ACTIONS(204),
    [anon_sym_scratchpad] = ACTIONS(204),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(204),
    [anon_sym_split] = ACTIONS(204),
    [anon_sym_splith] = ACTIONS(204),
    [anon_sym_splitt] = ACTIONS(204),
    [anon_sym_splitv] = ACTIONS(204),
    [anon_sym_sticky] = ACTIONS(204),
    [anon_sym_swap] = ACTIONS(204),
    [anon_sym_title_format] = ACTIONS(204),
    [anon_sym_toggle] = ACTIONS(204),
    [anon_sym_unmark] = ACTIONS(204),
    [anon_sym_urgent] = ACTIONS(204),
    [anon_sym_workspace] = ACTIONS(204),
    [sym_variable] = ACTIONS(204),
    [anon_sym_container] = ACTIONS(204),
    [anon_sym_from] = ACTIONS(204),
    [anon_sym_layer] = ACTIONS(204),
    [anon_sym_to] = ACTIONS(204),
    [anon_sym_window] = ACTIONS(204),
    [anon_sym_absolute] = ACTIONS(204),
    [anon_sym_all] = ACTIONS(204),
    [anon_sym_auto] = ACTIONS(204),
    [anon_sym_back_and_forth] = ACTIONS(204),
    [anon_sym_bottom] = ACTIONS(204),
    [anon_sym_center] = ACTIONS(204),
    [anon_sym_child] = ACTIONS(204),
    [anon_sym_current] = ACTIONS(204),
    [anon_sym_default] = ACTIONS(204),
    [anon_sym_disabled] = ACTIONS(204),
    [anon_sym_down] = ACTIONS(204),
    [anon_sym_enabled] = ACTIONS(204),
    [anon_sym_false] = ACTIONS(204),
    [anon_sym_fill] = ACTIONS(204),
    [anon_sym_fit] = ACTIONS(204),
    [anon_sym_global] = ACTIONS(204),
    [anon_sym_grow] = ACTIONS(204),
    [anon_sym_hide] = ACTIONS(204),
    [anon_sym_horizontal] = ACTIONS(204),
    [anon_sym_inner] = ACTIONS(204),
    [anon_sym_latest] = ACTIONS(204),
    [anon_sym_leave_fullscreen] = ACTIONS(204),
    [anon_sym_left] = ACTIONS(204),
    [anon_sym_mouse] = ACTIONS(204),
    [anon_sym_next] = ACTIONS(204),
    [anon_sym_no] = ACTIONS(204),
    [anon_sym_none] = ACTIONS(204),
    [anon_sym_normal] = ACTIONS(204),
    [anon_sym_off] = ACTIONS(204),
    [anon_sym_on] = ACTIONS(204),
    [anon_sym_outer] = ACTIONS(204),
    [anon_sym_overlay] = ACTIONS(204),
    [anon_sym_parent] = ACTIONS(204),
    [anon_sym_pixel] = ACTIONS(204),
    [anon_sym_prev] = ACTIONS(204),
    [anon_sym_px] = ACTIONS(204),
    [anon_sym_ppt] = ACTIONS(204),
    [anon_sym_right] = ACTIONS(204),
    [anon_sym_show] = ACTIONS(204),
    [anon_sym_shrink] = ACTIONS(204),
    [anon_sym_sibling] = ACTIONS(204),
    [anon_sym_smart] = ACTIONS(204),
    [anon_sym_solid_color] = ACTIONS(204),
    [anon_sym_stacking] = ACTIONS(204),
    [anon_sym_stretch] = ACTIONS(204),
    [anon_sym_tabbed] = ACTIONS(204),
    [anon_sym_tiling] = ACTIONS(204),
    [anon_sym_top] = ACTIONS(204),
    [anon_sym_true] = ACTIONS(204),
    [anon_sym_up] = ACTIONS(204),
    [anon_sym_vertical] = ACTIONS(204),
    [anon_sym_yes] = ACTIONS(204),
    [sym_number] = ACTIONS(204),
    [sym_unit_value] = ACTIONS(204),
    [sym_color] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [sym_word] = ACTIONS(204),
  },
  [43] = {
    [aux_sym_source_file_token1] = ACTIONS(210),
    [anon_sym_set] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_exec] = ACTIONS(212),
    [anon_sym_exec_always] = ACTIONS(212),
    [anon_sym_assign] = ACTIONS(212),
    [anon_sym_bar] = ACTIONS(212),
    [anon_sym_allow_tearing] = ACTIONS(212),
    [anon_sym_border] = ACTIONS(212),
    [anon_sym_create_output] = ACTIONS(212),
    [anon_sym_cursor] = ACTIONS(212),
    [anon_sym_disable] = ACTIONS(212),
    [anon_sym_enable] = ACTIONS(212),
    [anon_sym_exit] = ACTIONS(212),
    [anon_sym_floating] = ACTIONS(212),
    [anon_sym_focus] = ACTIONS(212),
    [anon_sym_fullscreen] = ACTIONS(212),
    [anon_sym_gaps] = ACTIONS(212),
    [anon_sym_inhibit_idle] = ACTIONS(212),
    [anon_sym_kill] = ACTIONS(212),
    [anon_sym_layout] = ACTIONS(212),
    [anon_sym_mark] = ACTIONS(212),
    [anon_sym_max_render_time] = ACTIONS(212),
    [anon_sym_mode] = ACTIONS(212),
    [anon_sym_move] = ACTIONS(212),
    [anon_sym_nop] = ACTIONS(212),
    [anon_sym_opacity] = ACTIONS(212),
    [anon_sym_output] = ACTIONS(212),
    [anon_sym_pointer] = ACTIONS(212),
    [anon_sym_position] = ACTIONS(212),
    [anon_sym_reload] = ACTIONS(212),
    [anon_sym_rename] = ACTIONS(212),
    [anon_sym_resize] = ACTIONS(212),
    [anon_sym_restart] = ACTIONS(212),
    [anon_sym_scratchpad] = ACTIONS(212),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(212),
    [anon_sym_split] = ACTIONS(212),
    [anon_sym_splith] = ACTIONS(212),
    [anon_sym_splitt] = ACTIONS(212),
    [anon_sym_splitv] = ACTIONS(212),
    [anon_sym_sticky] = ACTIONS(212),
    [anon_sym_swap] = ACTIONS(212),
    [anon_sym_title_format] = ACTIONS(212),
    [anon_sym_toggle] = ACTIONS(212),
    [anon_sym_unmark] = ACTIONS(212),
    [anon_sym_urgent] = ACTIONS(212),
    [anon_sym_workspace] = ACTIONS(212),
    [sym_variable] = ACTIONS(212),
    [anon_sym_container] = ACTIONS(212),
    [anon_sym_from] = ACTIONS(212),
    [anon_sym_layer] = ACTIONS(212),
    [anon_sym_to] = ACTIONS(212),
    [anon_sym_window] = ACTIONS(212),
    [anon_sym_absolute] = ACTIONS(212),
    [anon_sym_all] = ACTIONS(212),
    [anon_sym_auto] = ACTIONS(212),
    [anon_sym_back_and_forth] = ACTIONS(212),
    [anon_sym_bottom] = ACTIONS(212),
    [anon_sym_center] = ACTIONS(212),
    [anon_sym_child] = ACTIONS(212),
    [anon_sym_current] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(212),
    [anon_sym_disabled] = ACTIONS(212),
    [anon_sym_down] = ACTIONS(212),
    [anon_sym_enabled] = ACTIONS(212),
    [anon_sym_false] = ACTIONS(212),
    [anon_sym_fill] = ACTIONS(212),
    [anon_sym_fit] = ACTIONS(212),
    [anon_sym_global] = ACTIONS(212),
    [anon_sym_grow] = ACTIONS(212),
    [anon_sym_hide] = ACTIONS(212),
    [anon_sym_horizontal] = ACTIONS(212),
    [anon_sym_inner] = ACTIONS(212),
    [anon_sym_latest] = ACTIONS(212),
    [anon_sym_leave_fullscreen] = ACTIONS(212),
    [anon_sym_left] = ACTIONS(212),
    [anon_sym_mouse] = ACTIONS(212),
    [anon_sym_next] = ACTIONS(212),
    [anon_sym_no] = ACTIONS(212),
    [anon_sym_none] = ACTIONS(212),
    [anon_sym_normal] = ACTIONS(212),
    [anon_sym_off] = ACTIONS(212),
    [anon_sym_on] = ACTIONS(212),
    [anon_sym_outer] = ACTIONS(212),
    [anon_sym_overlay] = ACTIONS(212),
    [anon_sym_parent] = ACTIONS(212),
    [anon_sym_pixel] = ACTIONS(212),
    [anon_sym_prev] = ACTIONS(212),
    [anon_sym_px] = ACTIONS(212),
    [anon_sym_ppt] = ACTIONS(212),
    [anon_sym_right] = ACTIONS(212),
    [anon_sym_show] = ACTIONS(212),
    [anon_sym_shrink] = ACTIONS(212),
    [anon_sym_sibling] = ACTIONS(212),
    [anon_sym_smart] = ACTIONS(212),
    [anon_sym_solid_color] = ACTIONS(212),
    [anon_sym_stacking] = ACTIONS(212),
    [anon_sym_stretch] = ACTIONS(212),
    [anon_sym_tabbed] = ACTIONS(212),
    [anon_sym_tiling] = ACTIONS(212),
    [anon_sym_top] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(212),
    [anon_sym_up] = ACTIONS(212),
    [anon_sym_vertical] = ACTIONS(212),
    [anon_sym_yes] = ACTIONS(212),
    [sym_number] = ACTIONS(212),
    [sym_unit_value] = ACTIONS(212),
    [sym_color] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym_word] = ACTIONS(212),
  },
  [44] = {
    [aux_sym_source_file_token1] = ACTIONS(198),
    [anon_sym_set] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_exec] = ACTIONS(200),
    [anon_sym_exec_always] = ACTIONS(200),
    [anon_sym_assign] = ACTIONS(200),
    [anon_sym_bar] = ACTIONS(200),
    [anon_sym_allow_tearing] = ACTIONS(200),
    [anon_sym_border] = ACTIONS(200),
    [anon_sym_create_output] = ACTIONS(200),
    [anon_sym_cursor] = ACTIONS(200),
    [anon_sym_disable] = ACTIONS(200),
    [anon_sym_enable] = ACTIONS(200),
    [anon_sym_exit] = ACTIONS(200),
    [anon_sym_floating] = ACTIONS(200),
    [anon_sym_focus] = ACTIONS(200),
    [anon_sym_fullscreen] = ACTIONS(200),
    [anon_sym_gaps] = ACTIONS(200),
    [anon_sym_inhibit_idle] = ACTIONS(200),
    [anon_sym_kill] = ACTIONS(200),
    [anon_sym_layout] = ACTIONS(200),
    [anon_sym_mark] = ACTIONS(200),
    [anon_sym_max_render_time] = ACTIONS(200),
    [anon_sym_mode] = ACTIONS(200),
    [anon_sym_move] = ACTIONS(200),
    [anon_sym_nop] = ACTIONS(200),
    [anon_sym_opacity] = ACTIONS(200),
    [anon_sym_output] = ACTIONS(200),
    [anon_sym_pointer] = ACTIONS(200),
    [anon_sym_position] = ACTIONS(200),
    [anon_sym_reload] = ACTIONS(200),
    [anon_sym_rename] = ACTIONS(200),
    [anon_sym_resize] = ACTIONS(200),
    [anon_sym_restart] = ACTIONS(200),
    [anon_sym_scratchpad] = ACTIONS(200),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(200),
    [anon_sym_split] = ACTIONS(200),
    [anon_sym_splith] = ACTIONS(200),
    [anon_sym_splitt] = ACTIONS(200),
    [anon_sym_splitv] = ACTIONS(200),
    [anon_sym_sticky] = ACTIONS(200),
    [anon_sym_swap] = ACTIONS(200),
    [anon_sym_title_format] = ACTIONS(200),
    [anon_sym_toggle] = ACTIONS(200),
    [anon_sym_unmark] = ACTIONS(200),
    [anon_sym_urgent] = ACTIONS(200),
    [anon_sym_workspace] = ACTIONS(200),
    [sym_variable] = ACTIONS(200),
    [anon_sym_container] = ACTIONS(200),
    [anon_sym_from] = ACTIONS(200),
    [anon_sym_layer] = ACTIONS(200),
    [anon_sym_to] = ACTIONS(200),
    [anon_sym_window] = ACTIONS(200),
    [anon_sym_absolute] = ACTIONS(200),
    [anon_sym_all] = ACTIONS(200),
    [anon_sym_auto] = ACTIONS(200),
    [anon_sym_back_and_forth] = ACTIONS(200),
    [anon_sym_bottom] = ACTIONS(200),
    [anon_sym_center] = ACTIONS(200),
    [anon_sym_child] = ACTIONS(200),
    [anon_sym_current] = ACTIONS(200),
    [anon_sym_default] = ACTIONS(200),
    [anon_sym_disabled] = ACTIONS(200),
    [anon_sym_down] = ACTIONS(200),
    [anon_sym_enabled] = ACTIONS(200),
    [anon_sym_false] = ACTIONS(200),
    [anon_sym_fill] = ACTIONS(200),
    [anon_sym_fit] = ACTIONS(200),
    [anon_sym_global] = ACTIONS(200),
    [anon_sym_grow] = ACTIONS(200),
    [anon_sym_hide] = ACTIONS(200),
    [anon_sym_horizontal] = ACTIONS(200),
    [anon_sym_inner] = ACTIONS(200),
    [anon_sym_latest] = ACTIONS(200),
    [anon_sym_leave_fullscreen] = ACTIONS(200),
    [anon_sym_left] = ACTIONS(200),
    [anon_sym_mouse] = ACTIONS(200),
    [anon_sym_next] = ACTIONS(200),
    [anon_sym_no] = ACTIONS(200),
    [anon_sym_none] = ACTIONS(200),
    [anon_sym_normal] = ACTIONS(200),
    [anon_sym_off] = ACTIONS(200),
    [anon_sym_on] = ACTIONS(200),
    [anon_sym_outer] = ACTIONS(200),
    [anon_sym_overlay] = ACTIONS(200),
    [anon_sym_parent] = ACTIONS(200),
    [anon_sym_pixel] = ACTIONS(200),
    [anon_sym_prev] = ACTIONS(200),
    [anon_sym_px] = ACTIONS(200),
    [anon_sym_ppt] = ACTIONS(200),
    [anon_sym_right] = ACTIONS(200),
    [anon_sym_show] = ACTIONS(200),
    [anon_sym_shrink] = ACTIONS(200),
    [anon_sym_sibling] = ACTIONS(200),
    [anon_sym_smart] = ACTIONS(200),
    [anon_sym_solid_color] = ACTIONS(200),
    [anon_sym_stacking] = ACTIONS(200),
    [anon_sym_stretch] = ACTIONS(200),
    [anon_sym_tabbed] = ACTIONS(200),
    [anon_sym_tiling] = ACTIONS(200),
    [anon_sym_top] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(200),
    [anon_sym_up] = ACTIONS(200),
    [anon_sym_vertical] = ACTIONS(200),
    [anon_sym_yes] = ACTIONS(200),
    [sym_number] = ACTIONS(200),
    [sym_unit_value] = ACTIONS(200),
    [sym_color] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [sym_word] = ACTIONS(200),
  },
  [45] = {
    [anon_sym_set] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_exec] = ACTIONS(214),
    [anon_sym_exec_always] = ACTIONS(214),
    [anon_sym_assign] = ACTIONS(214),
    [anon_sym_bar] = ACTIONS(214),
    [anon_sym_allow_tearing] = ACTIONS(214),
    [anon_sym_border] = ACTIONS(214),
    [anon_sym_create_output] = ACTIONS(214),
    [anon_sym_cursor] = ACTIONS(214),
    [anon_sym_disable] = ACTIONS(214),
    [anon_sym_enable] = ACTIONS(214),
    [anon_sym_exit] = ACTIONS(214),
    [anon_sym_floating] = ACTIONS(214),
    [anon_sym_focus] = ACTIONS(214),
    [anon_sym_fullscreen] = ACTIONS(214),
    [anon_sym_gaps] = ACTIONS(214),
    [anon_sym_inhibit_idle] = ACTIONS(214),
    [anon_sym_kill] = ACTIONS(214),
    [anon_sym_layout] = ACTIONS(214),
    [anon_sym_mark] = ACTIONS(214),
    [anon_sym_max_render_time] = ACTIONS(214),
    [anon_sym_mode] = ACTIONS(214),
    [anon_sym_move] = ACTIONS(214),
    [anon_sym_nop] = ACTIONS(214),
    [anon_sym_opacity] = ACTIONS(214),
    [anon_sym_output] = ACTIONS(214),
    [anon_sym_pointer] = ACTIONS(214),
    [anon_sym_position] = ACTIONS(214),
    [anon_sym_reload] = ACTIONS(214),
    [anon_sym_rename] = ACTIONS(214),
    [anon_sym_resize] = ACTIONS(214),
    [anon_sym_restart] = ACTIONS(214),
    [anon_sym_scratchpad] = ACTIONS(214),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(214),
    [anon_sym_split] = ACTIONS(214),
    [anon_sym_splith] = ACTIONS(214),
    [anon_sym_splitt] = ACTIONS(214),
    [anon_sym_splitv] = ACTIONS(214),
    [anon_sym_sticky] = ACTIONS(214),
    [anon_sym_swap] = ACTIONS(214),
    [anon_sym_title_format] = ACTIONS(214),
    [anon_sym_toggle] = ACTIONS(214),
    [anon_sym_unmark] = ACTIONS(214),
    [anon_sym_urgent] = ACTIONS(214),
    [anon_sym_workspace] = ACTIONS(214),
    [sym_variable] = ACTIONS(214),
    [anon_sym_container] = ACTIONS(214),
    [anon_sym_from] = ACTIONS(214),
    [anon_sym_layer] = ACTIONS(214),
    [anon_sym_to] = ACTIONS(214),
    [anon_sym_window] = ACTIONS(214),
    [anon_sym_absolute] = ACTIONS(214),
    [anon_sym_all] = ACTIONS(214),
    [anon_sym_auto] = ACTIONS(214),
    [anon_sym_back_and_forth] = ACTIONS(214),
    [anon_sym_bottom] = ACTIONS(214),
    [anon_sym_center] = ACTIONS(214),
    [anon_sym_child] = ACTIONS(214),
    [anon_sym_current] = ACTIONS(214),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_disabled] = ACTIONS(214),
    [anon_sym_down] = ACTIONS(214),
    [anon_sym_enabled] = ACTIONS(214),
    [anon_sym_false] = ACTIONS(214),
    [anon_sym_fill] = ACTIONS(214),
    [anon_sym_fit] = ACTIONS(214),
    [anon_sym_global] = ACTIONS(214),
    [anon_sym_grow] = ACTIONS(214),
    [anon_sym_hide] = ACTIONS(214),
    [anon_sym_horizontal] = ACTIONS(214),
    [anon_sym_inner] = ACTIONS(214),
    [anon_sym_latest] = ACTIONS(214),
    [anon_sym_leave_fullscreen] = ACTIONS(214),
    [anon_sym_left] = ACTIONS(214),
    [anon_sym_mouse] = ACTIONS(214),
    [anon_sym_next] = ACTIONS(214),
    [anon_sym_no] = ACTIONS(214),
    [anon_sym_none] = ACTIONS(214),
    [anon_sym_normal] = ACTIONS(214),
    [anon_sym_off] = ACTIONS(214),
    [anon_sym_on] = ACTIONS(214),
    [anon_sym_outer] = ACTIONS(214),
    [anon_sym_overlay] = ACTIONS(214),
    [anon_sym_parent] = ACTIONS(214),
    [anon_sym_pixel] = ACTIONS(214),
    [anon_sym_prev] = ACTIONS(214),
    [anon_sym_px] = ACTIONS(214),
    [anon_sym_ppt] = ACTIONS(214),
    [anon_sym_right] = ACTIONS(214),
    [anon_sym_show] = ACTIONS(214),
    [anon_sym_shrink] = ACTIONS(214),
    [anon_sym_sibling] = ACTIONS(214),
    [anon_sym_smart] = ACTIONS(214),
    [anon_sym_solid_color] = ACTIONS(214),
    [anon_sym_stacking] = ACTIONS(214),
    [anon_sym_stretch] = ACTIONS(214),
    [anon_sym_tabbed] = ACTIONS(214),
    [anon_sym_tiling] = ACTIONS(214),
    [anon_sym_top] = ACTIONS(214),
    [anon_sym_true] = ACTIONS(214),
    [anon_sym_up] = ACTIONS(214),
    [anon_sym_vertical] = ACTIONS(214),
    [anon_sym_yes] = ACTIONS(214),
    [sym_number] = ACTIONS(214),
    [sym_unit_value] = ACTIONS(214),
    [sym_color] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [sym_word] = ACTIONS(214),
  },
  [46] = {
    [aux_sym_source_file_token1] = ACTIONS(218),
    [anon_sym_set] = ACTIONS(220),
    [anon_sym_exec] = ACTIONS(220),
    [anon_sym_exec_always] = ACTIONS(220),
    [anon_sym_assign] = ACTIONS(220),
    [anon_sym_bar] = ACTIONS(220),
    [anon_sym_allow_tearing] = ACTIONS(220),
    [anon_sym_border] = ACTIONS(220),
    [anon_sym_create_output] = ACTIONS(220),
    [anon_sym_cursor] = ACTIONS(220),
    [anon_sym_disable] = ACTIONS(220),
    [anon_sym_enable] = ACTIONS(220),
    [anon_sym_exit] = ACTIONS(220),
    [anon_sym_floating] = ACTIONS(220),
    [anon_sym_focus] = ACTIONS(220),
    [anon_sym_fullscreen] = ACTIONS(220),
    [anon_sym_gaps] = ACTIONS(220),
    [anon_sym_inhibit_idle] = ACTIONS(220),
    [anon_sym_kill] = ACTIONS(220),
    [anon_sym_layout] = ACTIONS(220),
    [anon_sym_mark] = ACTIONS(220),
    [anon_sym_max_render_time] = ACTIONS(220),
    [anon_sym_mode] = ACTIONS(220),
    [anon_sym_move] = ACTIONS(220),
    [anon_sym_nop] = ACTIONS(220),
    [anon_sym_opacity] = ACTIONS(220),
    [anon_sym_output] = ACTIONS(220),
    [anon_sym_pointer] = ACTIONS(220),
    [anon_sym_position] = ACTIONS(220),
    [anon_sym_reload] = ACTIONS(220),
    [anon_sym_rename] = ACTIONS(220),
    [anon_sym_resize] = ACTIONS(220),
    [anon_sym_restart] = ACTIONS(220),
    [anon_sym_scratchpad] = ACTIONS(220),
    [anon_sym_shortcuts_inhibitor] = ACTIONS(220),
    [anon_sym_split] = ACTIONS(220),
    [anon_sym_splith] = ACTIONS(220),
    [anon_sym_splitt] = ACTIONS(220),
    [anon_sym_splitv] = ACTIONS(220),
    [anon_sym_sticky] = ACTIONS(220),
    [anon_sym_swap] = ACTIONS(220),
    [anon_sym_title_format] = ACTIONS(220),
    [anon_sym_toggle] = ACTIONS(220),
    [anon_sym_unmark] = ACTIONS(220),
    [anon_sym_urgent] = ACTIONS(220),
    [anon_sym_workspace] = ACTIONS(220),
    [sym_variable] = ACTIONS(220),
    [anon_sym_container] = ACTIONS(220),
    [anon_sym_from] = ACTIONS(220),
    [anon_sym_layer] = ACTIONS(220),
    [anon_sym_to] = ACTIONS(220),
    [anon_sym_window] = ACTIONS(220),
    [anon_sym_absolute] = ACTIONS(220),
    [anon_sym_all] = ACTIONS(220),
    [anon_sym_auto] = ACTIONS(220),
    [anon_sym_back_and_forth] = ACTIONS(220),
    [anon_sym_bottom] = ACTIONS(220),
    [anon_sym_center] = ACTIONS(220),
    [anon_sym_child] = ACTIONS(220),
    [anon_sym_current] = ACTIONS(220),
    [anon_sym_default] = ACTIONS(220),
    [anon_sym_disabled] = ACTIONS(220),
    [anon_sym_down] = ACTIONS(220),
    [anon_sym_enabled] = ACTIONS(220),
    [anon_sym_false] = ACTIONS(220),
    [anon_sym_fill] = ACTIONS(220),
    [anon_sym_fit] = ACTIONS(220),
    [anon_sym_global] = ACTIONS(220),
    [anon_sym_grow] = ACTIONS(220),
    [anon_sym_hide] = ACTIONS(220),
    [anon_sym_horizontal] = ACTIONS(220),
    [anon_sym_inner] = ACTIONS(220),
    [anon_sym_latest] = ACTIONS(220),
    [anon_sym_leave_fullscreen] = ACTIONS(220),
    [anon_sym_left] = ACTIONS(220),
    [anon_sym_mouse] = ACTIONS(220),
    [anon_sym_next] = ACTIONS(220),
    [anon_sym_no] = ACTIONS(220),
    [anon_sym_none] = ACTIONS(220),
    [anon_sym_normal] = ACTIONS(220),
    [anon_sym_off] = ACTIONS(220),
    [anon_sym_on] = ACTIONS(220),
    [anon_sym_outer] = ACTIONS(220),
    [anon_sym_overlay] = ACTIONS(220),
    [anon_sym_parent] = ACTIONS(220),
    [anon_sym_pixel] = ACTIONS(220),
    [anon_sym_prev] = ACTIONS(220),
    [anon_sym_px] = ACTIONS(220),
    [anon_sym_ppt] = ACTIONS(220),
    [anon_sym_right] = ACTIONS(220),
    [anon_sym_show] = ACTIONS(220),
    [anon_sym_shrink] = ACTIONS(220),
    [anon_sym_sibling] = ACTIONS(220),
    [anon_sym_smart] = ACTIONS(220),
    [anon_sym_solid_color] = ACTIONS(220),
    [anon_sym_stacking] = ACTIONS(220),
    [anon_sym_stretch] = ACTIONS(220),
    [anon_sym_tabbed] = ACTIONS(220),
    [anon_sym_tiling] = ACTIONS(220),
    [anon_sym_top] = ACTIONS(220),
    [anon_sym_true] = ACTIONS(220),
    [anon_sym_up] = ACTIONS(220),
    [anon_sym_vertical] = ACTIONS(220),
    [anon_sym_yes] = ACTIONS(220),
    [sym_number] = ACTIONS(220),
    [sym_unit_value] = ACTIONS(220),
    [sym_color] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [sym_word] = ACTIONS(220),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(222), 1,
      aux_sym_source_file_token1,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      sym_keycombo,
    STATE(47), 3,
      sym_comment,
      sym_binding,
      aux_sym_bind_block_repeat1,
  [18] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      aux_sym_source_file_token1,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      sym_keycombo,
    STATE(47), 3,
      sym_comment,
      sym_binding,
      aux_sym_bind_block_repeat1,
  [36] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      sym_keycombo,
    ACTIONS(239), 1,
      aux_sym_source_file_token1,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(48), 3,
      sym_comment,
      sym_binding,
      aux_sym_bind_block_repeat1,
  [54] = 4,
    ACTIONS(246), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 2,
      aux_sym_source_file_token1,
      sym_command,
    STATE(50), 2,
      sym_comment,
      aux_sym_exec_block_repeat1,
  [69] = 4,
    ACTIONS(253), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 2,
      aux_sym_source_file_token1,
      sym_command,
    STATE(50), 2,
      sym_comment,
      aux_sym_exec_block_repeat1,
  [84] = 4,
    ACTIONS(253), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 2,
      aux_sym_source_file_token1,
      sym_command,
    STATE(51), 2,
      sym_comment,
      aux_sym_exec_block_repeat1,
  [99] = 5,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      sym_flag,
    ACTIONS(265), 1,
      sym_command,
    STATE(57), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(109), 1,
      sym_exec_block,
  [115] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      sym_keycombo,
    ACTIONS(271), 1,
      sym_flag,
    STATE(65), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(103), 1,
      sym_bind_block,
  [131] = 5,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      sym_flag,
    ACTIONS(275), 1,
      sym_command,
    STATE(71), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(106), 1,
      sym_exec_block,
  [147] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      sym_flag,
    ACTIONS(277), 1,
      sym_keycombo,
    STATE(65), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(93), 1,
      sym_bind_block,
  [163] = 5,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      sym_flag,
    ACTIONS(279), 1,
      sym_command,
    STATE(71), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(107), 1,
      sym_exec_block,
  [179] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      sym_keycombo,
    ACTIONS(283), 1,
      sym_flag,
    STATE(54), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(89), 1,
      sym_bind_block,
  [195] = 5,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      sym_flag,
    ACTIONS(287), 1,
      sym_command,
    STATE(55), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(101), 1,
      sym_exec_block,
  [211] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      sym_keycombo,
    ACTIONS(291), 1,
      sym_flag,
    STATE(56), 1,
      aux_sym_bindsym_statement_repeat1,
    STATE(88), 1,
      sym_bind_block,
  [227] = 4,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_criteria,
    STATE(117), 1,
      sym_for_window_block,
  [240] = 3,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(297), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [251] = 4,
    ACTIONS(299), 1,
      aux_sym_criteria_value_token1,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_string,
    STATE(81), 1,
      sym_criteria_value,
  [264] = 3,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    ACTIONS(305), 1,
      sym_criteria_key,
    STATE(64), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [275] = 3,
    ACTIONS(310), 1,
      sym_flag,
    STATE(65), 1,
      aux_sym_bindsym_statement_repeat1,
    ACTIONS(308), 2,
      anon_sym_LBRACE,
      sym_keycombo,
  [286] = 3,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(297), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [297] = 3,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(317), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [308] = 1,
    ACTIONS(320), 4,
      aux_sym_source_file_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym_command,
  [315] = 3,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      sym_criteria_key,
    STATE(64), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [326] = 3,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(328), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [337] = 3,
    ACTIONS(332), 1,
      sym_flag,
    STATE(71), 1,
      aux_sym_bindsym_statement_repeat1,
    ACTIONS(330), 2,
      anon_sym_LBRACE,
      sym_command,
  [348] = 1,
    ACTIONS(335), 4,
      aux_sym_source_file_token1,
      anon_sym_POUND,
      anon_sym_RBRACE,
      sym_keycombo,
  [355] = 3,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat1,
    ACTIONS(339), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [366] = 3,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(297), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [377] = 3,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(345), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [388] = 2,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(347), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [396] = 2,
    ACTIONS(324), 1,
      sym_criteria_key,
    STATE(69), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [404] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_criteria,
  [411] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_criteria,
  [418] = 1,
    ACTIONS(351), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [423] = 1,
    ACTIONS(353), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [428] = 1,
    ACTIONS(206), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [433] = 1,
    ACTIONS(210), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [438] = 1,
    ACTIONS(355), 1,
      aux_sym_source_file_token1,
  [442] = 1,
    ACTIONS(357), 1,
      aux_sym_source_file_token1,
  [446] = 1,
    ACTIONS(359), 1,
      aux_sym_source_file_token1,
  [450] = 1,
    ACTIONS(361), 1,
      aux_sym_source_file_token1,
  [454] = 1,
    ACTIONS(363), 1,
      aux_sym_source_file_token1,
  [458] = 1,
    ACTIONS(365), 1,
      aux_sym_source_file_token1,
  [462] = 1,
    ACTIONS(367), 1,
      aux_sym_source_file_token1,
  [466] = 1,
    ACTIONS(369), 1,
      aux_sym_source_file_token1,
  [470] = 1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
  [474] = 1,
    ACTIONS(180), 1,
      aux_sym_source_file_token1,
  [478] = 1,
    ACTIONS(373), 1,
      aux_sym_source_file_token1,
  [482] = 1,
    ACTIONS(375), 1,
      sym_variable,
  [486] = 1,
    ACTIONS(377), 1,
      aux_sym_source_file_token1,
  [490] = 1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [494] = 1,
    ACTIONS(381), 1,
      aux_sym_source_file_token1,
  [498] = 1,
    ACTIONS(383), 1,
      aux_sym_source_file_token1,
  [502] = 1,
    ACTIONS(385), 1,
      sym_command,
  [506] = 1,
    ACTIONS(387), 1,
      aux_sym_source_file_token1,
  [510] = 1,
    ACTIONS(389), 1,
      aux_sym_source_file_token1,
  [514] = 1,
    ACTIONS(178), 1,
      aux_sym_source_file_token1,
  [518] = 1,
    ACTIONS(391), 1,
      aux_sym_source_file_token1,
  [522] = 1,
    ACTIONS(393), 1,
      aux_sym_source_file_token1,
  [526] = 1,
    ACTIONS(395), 1,
      aux_sym_source_file_token1,
  [530] = 1,
    ACTIONS(397), 1,
      aux_sym_source_file_token1,
  [534] = 1,
    ACTIONS(399), 1,
      aux_sym_source_file_token1,
  [538] = 1,
    ACTIONS(401), 1,
      aux_sym_source_file_token1,
  [542] = 1,
    ACTIONS(403), 1,
      aux_sym_source_file_token1,
  [546] = 1,
    ACTIONS(405), 1,
      aux_sym_comment_token1,
  [550] = 1,
    ACTIONS(407), 1,
      aux_sym_source_file_token1,
  [554] = 1,
    ACTIONS(409), 1,
      aux_sym_comment_token1,
  [558] = 1,
    ACTIONS(411), 1,
      aux_sym_source_file_token1,
  [562] = 1,
    ACTIONS(413), 1,
      aux_sym_source_file_token1,
  [566] = 1,
    ACTIONS(415), 1,
      aux_sym_source_file_token1,
  [570] = 1,
    ACTIONS(417), 1,
      aux_sym_source_file_token1,
  [574] = 1,
    ACTIONS(419), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(47)] = 0,
  [SMALL_STATE(48)] = 18,
  [SMALL_STATE(49)] = 36,
  [SMALL_STATE(50)] = 54,
  [SMALL_STATE(51)] = 69,
  [SMALL_STATE(52)] = 84,
  [SMALL_STATE(53)] = 99,
  [SMALL_STATE(54)] = 115,
  [SMALL_STATE(55)] = 131,
  [SMALL_STATE(56)] = 147,
  [SMALL_STATE(57)] = 163,
  [SMALL_STATE(58)] = 179,
  [SMALL_STATE(59)] = 195,
  [SMALL_STATE(60)] = 211,
  [SMALL_STATE(61)] = 227,
  [SMALL_STATE(62)] = 240,
  [SMALL_STATE(63)] = 251,
  [SMALL_STATE(64)] = 264,
  [SMALL_STATE(65)] = 275,
  [SMALL_STATE(66)] = 286,
  [SMALL_STATE(67)] = 297,
  [SMALL_STATE(68)] = 308,
  [SMALL_STATE(69)] = 315,
  [SMALL_STATE(70)] = 326,
  [SMALL_STATE(71)] = 337,
  [SMALL_STATE(72)] = 348,
  [SMALL_STATE(73)] = 355,
  [SMALL_STATE(74)] = 366,
  [SMALL_STATE(75)] = 377,
  [SMALL_STATE(76)] = 388,
  [SMALL_STATE(77)] = 396,
  [SMALL_STATE(78)] = 404,
  [SMALL_STATE(79)] = 411,
  [SMALL_STATE(80)] = 418,
  [SMALL_STATE(81)] = 423,
  [SMALL_STATE(82)] = 428,
  [SMALL_STATE(83)] = 433,
  [SMALL_STATE(84)] = 438,
  [SMALL_STATE(85)] = 442,
  [SMALL_STATE(86)] = 446,
  [SMALL_STATE(87)] = 450,
  [SMALL_STATE(88)] = 454,
  [SMALL_STATE(89)] = 458,
  [SMALL_STATE(90)] = 462,
  [SMALL_STATE(91)] = 466,
  [SMALL_STATE(92)] = 470,
  [SMALL_STATE(93)] = 474,
  [SMALL_STATE(94)] = 478,
  [SMALL_STATE(95)] = 482,
  [SMALL_STATE(96)] = 486,
  [SMALL_STATE(97)] = 490,
  [SMALL_STATE(98)] = 494,
  [SMALL_STATE(99)] = 498,
  [SMALL_STATE(100)] = 502,
  [SMALL_STATE(101)] = 506,
  [SMALL_STATE(102)] = 510,
  [SMALL_STATE(103)] = 514,
  [SMALL_STATE(104)] = 518,
  [SMALL_STATE(105)] = 522,
  [SMALL_STATE(106)] = 526,
  [SMALL_STATE(107)] = 530,
  [SMALL_STATE(108)] = 534,
  [SMALL_STATE(109)] = 538,
  [SMALL_STATE(110)] = 542,
  [SMALL_STATE(111)] = 546,
  [SMALL_STATE(112)] = 550,
  [SMALL_STATE(113)] = 554,
  [SMALL_STATE(114)] = 558,
  [SMALL_STATE(115)] = 562,
  [SMALL_STATE(116)] = 566,
  [SMALL_STATE(117)] = 570,
  [SMALL_STATE(118)] = 574,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_statement, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_command, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindsym_statement, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindcode_statement, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_statement, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindcode_statement, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindsym_statement, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_command, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_keyword, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_keyword, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_value, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_value, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_criteria, 3, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bind_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bind_block_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bind_block_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bind_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exec_block_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exec_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exec_block_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_pair, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_value, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_pair, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_block, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_block, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_focus_statement, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindcode_statement, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindsym_statement, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_block, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_block, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_block, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 6, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always_statement, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_block, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always_statement, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_block, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_block, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_statement, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 5, 0, 0),
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
