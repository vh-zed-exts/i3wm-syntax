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
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_include = 11,
  anon_sym_mode = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_bar = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_EQ = 18,
  sym_criteria_key = 19,
  aux_sym_criteria_value_token1 = 20,
  anon_sym_workspace = 21,
  anon_sym_output = 22,
  anon_sym_floating_modifier = 23,
  anon_sym_default_orientation = 24,
  anon_sym_workspace_layout = 25,
  anon_sym_font = 26,
  anon_sym_focus_follows_mouse = 27,
  anon_sym_focus_on_window_activation = 28,
  anon_sym_focus_wrapping = 29,
  anon_sym_mouse_warping = 30,
  anon_sym_popup_during_fullscreen = 31,
  anon_sym_default_border = 32,
  anon_sym_default_floating_border = 33,
  anon_sym_hide_edge_borders = 34,
  anon_sym_smart_borders = 35,
  anon_sym_smart_gaps = 36,
  anon_sym_gaps = 37,
  anon_sym_border = 38,
  anon_sym_new_window = 39,
  anon_sym_new_float = 40,
  anon_sym_floating_minimum_size = 41,
  anon_sym_floating_maximum_size = 42,
  anon_sym_focus = 43,
  anon_sym_move = 44,
  anon_sym_layout = 45,
  anon_sym_split = 46,
  anon_sym_splith = 47,
  anon_sym_splitv = 48,
  anon_sym_sticky = 49,
  anon_sym_resize = 50,
  anon_sym_kill = 51,
  anon_sym_reload = 52,
  anon_sym_restart = 53,
  anon_sym_exit = 54,
  anon_sym_fullscreen = 55,
  anon_sym_floating = 56,
  anon_sym_input = 57,
  anon_sym_seat = 58,
  anon_sym_xwayland = 59,
  anon_sym_titlebar_border_thickness = 60,
  anon_sym_titlebar_padding = 61,
  anon_sym_title_format = 62,
  anon_sym_title_align = 63,
  anon_sym_client_DOTfocused = 64,
  anon_sym_client_DOTfocused_inactive = 65,
  anon_sym_client_DOTunfocused = 66,
  anon_sym_client_DOTurgent = 67,
  anon_sym_client_DOTplaceholder = 68,
  anon_sym_client_DOTbackground = 69,
  anon_sym_swaybg_command = 70,
  anon_sym_swaynag_command = 71,
  anon_sym_unbindsym = 72,
  anon_sym_bindswitch = 73,
  anon_sym_tiling_drag = 74,
  anon_sym_show_marks = 75,
  anon_sym_workspace_auto_back_and_forth = 76,
  anon_sym_position = 77,
  anon_sym_status_command = 78,
  anon_sym_xkb_layout = 79,
  anon_sym_xkb_options = 80,
  anon_sym_xkb_variant = 81,
  anon_sym_xkb_model = 82,
  anon_sym_resolution = 83,
  sym_keycombo = 84,
  sym_flag = 85,
  sym_variable = 86,
  sym_number = 87,
  sym_unit_value = 88,
  sym_color = 89,
  anon_sym_DQUOTE = 90,
  aux_sym_string_token1 = 91,
  sym_escape_sequence = 92,
  sym_command = 93,
  sym_word = 94,
  sym_source_file = 95,
  sym_statement = 96,
  sym_comment = 97,
  sym_set_statement = 98,
  sym_bindsym_statement = 99,
  sym_bindcode_statement = 100,
  sym_exec_statement = 101,
  sym_exec_always_statement = 102,
  sym_assign_statement = 103,
  sym_for_window_statement = 104,
  sym_include_statement = 105,
  sym_mode_block = 106,
  sym_bar_block = 107,
  sym_block_statement = 108,
  sym_command_statement = 109,
  sym_criteria = 110,
  sym_criteria_pair = 111,
  sym_criteria_value = 112,
  sym_keyword = 113,
  sym_value = 114,
  sym_string = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_set_statement_repeat1 = 117,
  aux_sym_bindsym_statement_repeat1 = 118,
  aux_sym_criteria_repeat1 = 119,
  aux_sym_string_repeat1 = 120,
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
  [anon_sym_include] = "include",
  [anon_sym_mode] = "mode",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_bar] = "bar",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_criteria_key] = "criteria_key",
  [aux_sym_criteria_value_token1] = "criteria_value_token1",
  [anon_sym_workspace] = "workspace",
  [anon_sym_output] = "output",
  [anon_sym_floating_modifier] = "floating_modifier",
  [anon_sym_default_orientation] = "default_orientation",
  [anon_sym_workspace_layout] = "workspace_layout",
  [anon_sym_font] = "font",
  [anon_sym_focus_follows_mouse] = "focus_follows_mouse",
  [anon_sym_focus_on_window_activation] = "focus_on_window_activation",
  [anon_sym_focus_wrapping] = "focus_wrapping",
  [anon_sym_mouse_warping] = "mouse_warping",
  [anon_sym_popup_during_fullscreen] = "popup_during_fullscreen",
  [anon_sym_default_border] = "default_border",
  [anon_sym_default_floating_border] = "default_floating_border",
  [anon_sym_hide_edge_borders] = "hide_edge_borders",
  [anon_sym_smart_borders] = "smart_borders",
  [anon_sym_smart_gaps] = "smart_gaps",
  [anon_sym_gaps] = "gaps",
  [anon_sym_border] = "border",
  [anon_sym_new_window] = "new_window",
  [anon_sym_new_float] = "new_float",
  [anon_sym_floating_minimum_size] = "floating_minimum_size",
  [anon_sym_floating_maximum_size] = "floating_maximum_size",
  [anon_sym_focus] = "focus",
  [anon_sym_move] = "move",
  [anon_sym_layout] = "layout",
  [anon_sym_split] = "split",
  [anon_sym_splith] = "splith",
  [anon_sym_splitv] = "splitv",
  [anon_sym_sticky] = "sticky",
  [anon_sym_resize] = "resize",
  [anon_sym_kill] = "kill",
  [anon_sym_reload] = "reload",
  [anon_sym_restart] = "restart",
  [anon_sym_exit] = "exit",
  [anon_sym_fullscreen] = "fullscreen",
  [anon_sym_floating] = "floating",
  [anon_sym_input] = "input",
  [anon_sym_seat] = "seat",
  [anon_sym_xwayland] = "xwayland",
  [anon_sym_titlebar_border_thickness] = "titlebar_border_thickness",
  [anon_sym_titlebar_padding] = "titlebar_padding",
  [anon_sym_title_format] = "title_format",
  [anon_sym_title_align] = "title_align",
  [anon_sym_client_DOTfocused] = "client.focused",
  [anon_sym_client_DOTfocused_inactive] = "client.focused_inactive",
  [anon_sym_client_DOTunfocused] = "client.unfocused",
  [anon_sym_client_DOTurgent] = "client.urgent",
  [anon_sym_client_DOTplaceholder] = "client.placeholder",
  [anon_sym_client_DOTbackground] = "client.background",
  [anon_sym_swaybg_command] = "swaybg_command",
  [anon_sym_swaynag_command] = "swaynag_command",
  [anon_sym_unbindsym] = "unbindsym",
  [anon_sym_bindswitch] = "bindswitch",
  [anon_sym_tiling_drag] = "tiling_drag",
  [anon_sym_show_marks] = "show_marks",
  [anon_sym_workspace_auto_back_and_forth] = "workspace_auto_back_and_forth",
  [anon_sym_position] = "position",
  [anon_sym_status_command] = "status_command",
  [anon_sym_xkb_layout] = "xkb_layout",
  [anon_sym_xkb_options] = "xkb_options",
  [anon_sym_xkb_variant] = "xkb_variant",
  [anon_sym_xkb_model] = "xkb_model",
  [anon_sym_resolution] = "resolution",
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
  [sym_include_statement] = "include_statement",
  [sym_mode_block] = "mode_block",
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
  [anon_sym_include] = anon_sym_include,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_bar] = anon_sym_bar,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_criteria_key] = sym_criteria_key,
  [aux_sym_criteria_value_token1] = aux_sym_criteria_value_token1,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_floating_modifier] = anon_sym_floating_modifier,
  [anon_sym_default_orientation] = anon_sym_default_orientation,
  [anon_sym_workspace_layout] = anon_sym_workspace_layout,
  [anon_sym_font] = anon_sym_font,
  [anon_sym_focus_follows_mouse] = anon_sym_focus_follows_mouse,
  [anon_sym_focus_on_window_activation] = anon_sym_focus_on_window_activation,
  [anon_sym_focus_wrapping] = anon_sym_focus_wrapping,
  [anon_sym_mouse_warping] = anon_sym_mouse_warping,
  [anon_sym_popup_during_fullscreen] = anon_sym_popup_during_fullscreen,
  [anon_sym_default_border] = anon_sym_default_border,
  [anon_sym_default_floating_border] = anon_sym_default_floating_border,
  [anon_sym_hide_edge_borders] = anon_sym_hide_edge_borders,
  [anon_sym_smart_borders] = anon_sym_smart_borders,
  [anon_sym_smart_gaps] = anon_sym_smart_gaps,
  [anon_sym_gaps] = anon_sym_gaps,
  [anon_sym_border] = anon_sym_border,
  [anon_sym_new_window] = anon_sym_new_window,
  [anon_sym_new_float] = anon_sym_new_float,
  [anon_sym_floating_minimum_size] = anon_sym_floating_minimum_size,
  [anon_sym_floating_maximum_size] = anon_sym_floating_maximum_size,
  [anon_sym_focus] = anon_sym_focus,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_splith] = anon_sym_splith,
  [anon_sym_splitv] = anon_sym_splitv,
  [anon_sym_sticky] = anon_sym_sticky,
  [anon_sym_resize] = anon_sym_resize,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_reload] = anon_sym_reload,
  [anon_sym_restart] = anon_sym_restart,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_fullscreen] = anon_sym_fullscreen,
  [anon_sym_floating] = anon_sym_floating,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_seat] = anon_sym_seat,
  [anon_sym_xwayland] = anon_sym_xwayland,
  [anon_sym_titlebar_border_thickness] = anon_sym_titlebar_border_thickness,
  [anon_sym_titlebar_padding] = anon_sym_titlebar_padding,
  [anon_sym_title_format] = anon_sym_title_format,
  [anon_sym_title_align] = anon_sym_title_align,
  [anon_sym_client_DOTfocused] = anon_sym_client_DOTfocused,
  [anon_sym_client_DOTfocused_inactive] = anon_sym_client_DOTfocused_inactive,
  [anon_sym_client_DOTunfocused] = anon_sym_client_DOTunfocused,
  [anon_sym_client_DOTurgent] = anon_sym_client_DOTurgent,
  [anon_sym_client_DOTplaceholder] = anon_sym_client_DOTplaceholder,
  [anon_sym_client_DOTbackground] = anon_sym_client_DOTbackground,
  [anon_sym_swaybg_command] = anon_sym_swaybg_command,
  [anon_sym_swaynag_command] = anon_sym_swaynag_command,
  [anon_sym_unbindsym] = anon_sym_unbindsym,
  [anon_sym_bindswitch] = anon_sym_bindswitch,
  [anon_sym_tiling_drag] = anon_sym_tiling_drag,
  [anon_sym_show_marks] = anon_sym_show_marks,
  [anon_sym_workspace_auto_back_and_forth] = anon_sym_workspace_auto_back_and_forth,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_status_command] = anon_sym_status_command,
  [anon_sym_xkb_layout] = anon_sym_xkb_layout,
  [anon_sym_xkb_options] = anon_sym_xkb_options,
  [anon_sym_xkb_variant] = anon_sym_xkb_variant,
  [anon_sym_xkb_model] = anon_sym_xkb_model,
  [anon_sym_resolution] = anon_sym_resolution,
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
  [sym_include_statement] = sym_include_statement,
  [sym_mode_block] = sym_mode_block,
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
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
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
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_orientation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font] = {
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
  [anon_sym_mouse_warping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popup_during_fullscreen] = {
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
  [anon_sym_hide_edge_borders] = {
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
  [anon_sym_gaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new_window] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_minimum_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating_maximum_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
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
  [anon_sym_splitv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sticky] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullscreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xwayland] = {
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
  [anon_sym_title_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title_align] = {
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
  [anon_sym_client_DOTunfocused] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTurgent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTplaceholder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_DOTbackground] = {
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
  [anon_sym_unbindsym] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bindswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tiling_drag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show_marks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace_auto_back_and_forth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xkb_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolution] = {
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
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_block] = {
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
  [44] = 44,
  [45] = 42,
  [46] = 39,
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
  [58] = 47,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 33,
  [63] = 36,
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
  [89] = 89,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(536);
      ADVANCE_MAP(
        '\n', 537,
        '\r', 1,
        '"', 633,
        '#', 538,
        '$', 531,
        '-', 8,
        '=', 555,
        '[', 553,
        '\\', 535,
        ']', 554,
        'a', 427,
        'b', 39,
        'c', 260,
        'd', 146,
        'e', 510,
        'f', 261,
        'g', 40,
        'h', 212,
        'i', 299,
        'k', 237,
        'l', 41,
        'm', 337,
        'n', 147,
        'o', 476,
        'p', 338,
        'r', 148,
        's', 149,
        't', 213,
        'u', 300,
        'w', 339,
        'x', 250,
        '{', 550,
        '}', 551,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(537);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(530);
      if (lookahead == '$') ADVANCE(646);
      if (lookahead == '{') ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(530);
      if (lookahead == '$') ADVANCE(646);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '{') ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(557);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(532);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(534);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(555);
      if (lookahead == ']') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(459);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(504);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(440);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(349);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(374);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(375);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(468);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(601);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(603);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'w') ADVANCE(406);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(496);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 191:
      if (lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(370);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(611);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(567);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(566);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(598);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(403);
      END_STATE();
    case 203:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 205:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 206:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 208:
      if (lookahead == 'h') ADVANCE(610);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(613);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 250:
      if (lookahead == 'k') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 251:
      if (lookahead == 'k') ADVANCE(513);
      END_STATE();
    case 252:
      if (lookahead == 'k') ADVANCE(429);
      END_STATE();
    case 253:
      if (lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 254:
      if (lookahead == 'k') ADVANCE(420);
      END_STATE();
    case 255:
      if (lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 256:
      if (lookahead == 'k') ADVANCE(34);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(609);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(481);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 296:
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 297:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(495);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(546);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 376:
      if (lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 377:
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead == 'x') ADVANCE(629);
      END_STATE();
    case 379:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(471);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(580);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(573);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(572);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(458);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(453);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(466);
      END_STATE();
    case 488:
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 489:
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(470);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 495:
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 497:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 498:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 499:
      if (lookahead == 'w') ADVANCE(547);
      END_STATE();
    case 500:
      if (lookahead == 'w') ADVANCE(576);
      END_STATE();
    case 501:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 502:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 503:
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 504:
      if (lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 505:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 506:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 507:
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 508:
      if (lookahead == 'w') ADVANCE(228);
      if (lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 509:
      if (lookahead == 'w') ADVANCE(59);
      END_STATE();
    case 510:
      if (lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 511:
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 512:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 513:
      if (lookahead == 'y') ADVANCE(586);
      END_STATE();
    case 514:
      if (lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 515:
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 516:
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 517:
      if (lookahead == 'y') ADVANCE(422);
      END_STATE();
    case 518:
      if (lookahead == 'y') ADVANCE(366);
      END_STATE();
    case 519:
      if (lookahead == 'y') ADVANCE(367);
      END_STATE();
    case 520:
      if (lookahead == 'z') ADVANCE(154);
      END_STATE();
    case 521:
      if (lookahead == 'z') ADVANCE(159);
      END_STATE();
    case 522:
      if (lookahead == 'z') ADVANCE(160);
      END_STATE();
    case 523:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 524:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(632);
      END_STATE();
    case 525:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(631);
      END_STATE();
    case 526:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 527:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 528:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 531:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 532:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 533:
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 534:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 535:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_bindsym);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_bindcode);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_exec_always);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_for_window);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_bar);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_criteria_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_criteria_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_floating_modifier);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_default_orientation);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_workspace_layout);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_font);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_focus_follows_mouse);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_focus_on_window_activation);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_focus_wrapping);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_mouse_warping);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_popup_during_fullscreen);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_default_border);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_default_floating_border);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_hide_edge_borders);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_smart_borders);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_smart_gaps);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_gaps);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_border);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_new_window);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_new_float);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_floating_minimum_size);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_floating_maximum_size);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == 'h') ADVANCE(584);
      if (lookahead == 'v') ADVANCE(585);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_splith);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_splitv);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_sticky);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_resize);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_fullscreen);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_floating);
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_seat);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_xwayland);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_titlebar_border_thickness);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_titlebar_padding);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_title_format);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_title_align);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused);
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_client_DOTfocused_inactive);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_client_DOTunfocused);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_client_DOTurgent);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_client_DOTplaceholder);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_client_DOTbackground);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_swaybg_command);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_swaynag_command);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_unbindsym);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_bindswitch);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_tiling_drag);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_show_marks);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_workspace_auto_back_and_forth);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_status_command);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_xkb_layout);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_xkb_options);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_xkb_variant);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_xkb_model);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_resolution);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_keycombo);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(629);
      if (lookahead == 'p') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '%') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_unit_value);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_unit_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(557);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_command);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(645);
      if (lookahead == 'x') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(648);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(648);
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
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
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
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
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 523},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 539},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
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
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_bar] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_floating_modifier] = ACTIONS(1),
    [anon_sym_default_orientation] = ACTIONS(1),
    [anon_sym_workspace_layout] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_focus_follows_mouse] = ACTIONS(1),
    [anon_sym_focus_on_window_activation] = ACTIONS(1),
    [anon_sym_focus_wrapping] = ACTIONS(1),
    [anon_sym_mouse_warping] = ACTIONS(1),
    [anon_sym_popup_during_fullscreen] = ACTIONS(1),
    [anon_sym_default_border] = ACTIONS(1),
    [anon_sym_default_floating_border] = ACTIONS(1),
    [anon_sym_hide_edge_borders] = ACTIONS(1),
    [anon_sym_smart_borders] = ACTIONS(1),
    [anon_sym_smart_gaps] = ACTIONS(1),
    [anon_sym_gaps] = ACTIONS(1),
    [anon_sym_border] = ACTIONS(1),
    [anon_sym_new_window] = ACTIONS(1),
    [anon_sym_new_float] = ACTIONS(1),
    [anon_sym_floating_minimum_size] = ACTIONS(1),
    [anon_sym_floating_maximum_size] = ACTIONS(1),
    [anon_sym_focus] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(1),
    [anon_sym_splith] = ACTIONS(1),
    [anon_sym_splitv] = ACTIONS(1),
    [anon_sym_sticky] = ACTIONS(1),
    [anon_sym_resize] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_reload] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_fullscreen] = ACTIONS(1),
    [anon_sym_floating] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_seat] = ACTIONS(1),
    [anon_sym_xwayland] = ACTIONS(1),
    [anon_sym_titlebar_border_thickness] = ACTIONS(1),
    [anon_sym_titlebar_padding] = ACTIONS(1),
    [anon_sym_title_format] = ACTIONS(1),
    [anon_sym_title_align] = ACTIONS(1),
    [anon_sym_client_DOTfocused] = ACTIONS(1),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(1),
    [anon_sym_client_DOTunfocused] = ACTIONS(1),
    [anon_sym_client_DOTurgent] = ACTIONS(1),
    [anon_sym_client_DOTplaceholder] = ACTIONS(1),
    [anon_sym_client_DOTbackground] = ACTIONS(1),
    [anon_sym_swaybg_command] = ACTIONS(1),
    [anon_sym_swaynag_command] = ACTIONS(1),
    [anon_sym_unbindsym] = ACTIONS(1),
    [anon_sym_bindswitch] = ACTIONS(1),
    [anon_sym_tiling_drag] = ACTIONS(1),
    [anon_sym_show_marks] = ACTIONS(1),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_status_command] = ACTIONS(1),
    [anon_sym_xkb_layout] = ACTIONS(1),
    [anon_sym_xkb_options] = ACTIONS(1),
    [anon_sym_xkb_variant] = ACTIONS(1),
    [anon_sym_xkb_model] = ACTIONS(1),
    [anon_sym_resolution] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_unit_value] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_statement] = STATE(3),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_source_file_token1] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(38),
    [anon_sym_set] = ACTIONS(41),
    [anon_sym_bindsym] = ACTIONS(44),
    [anon_sym_bindcode] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(50),
    [anon_sym_exec_always] = ACTIONS(53),
    [anon_sym_assign] = ACTIONS(56),
    [anon_sym_for_window] = ACTIONS(59),
    [anon_sym_include] = ACTIONS(62),
    [anon_sym_mode] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_bar] = ACTIONS(68),
    [anon_sym_workspace] = ACTIONS(71),
    [anon_sym_output] = ACTIONS(74),
    [anon_sym_floating_modifier] = ACTIONS(74),
    [anon_sym_default_orientation] = ACTIONS(74),
    [anon_sym_workspace_layout] = ACTIONS(74),
    [anon_sym_font] = ACTIONS(74),
    [anon_sym_focus_follows_mouse] = ACTIONS(74),
    [anon_sym_focus_on_window_activation] = ACTIONS(74),
    [anon_sym_focus_wrapping] = ACTIONS(74),
    [anon_sym_mouse_warping] = ACTIONS(74),
    [anon_sym_popup_during_fullscreen] = ACTIONS(74),
    [anon_sym_default_border] = ACTIONS(74),
    [anon_sym_default_floating_border] = ACTIONS(74),
    [anon_sym_hide_edge_borders] = ACTIONS(74),
    [anon_sym_smart_borders] = ACTIONS(74),
    [anon_sym_smart_gaps] = ACTIONS(74),
    [anon_sym_gaps] = ACTIONS(74),
    [anon_sym_border] = ACTIONS(74),
    [anon_sym_new_window] = ACTIONS(74),
    [anon_sym_new_float] = ACTIONS(74),
    [anon_sym_floating_minimum_size] = ACTIONS(74),
    [anon_sym_floating_maximum_size] = ACTIONS(74),
    [anon_sym_focus] = ACTIONS(71),
    [anon_sym_move] = ACTIONS(74),
    [anon_sym_layout] = ACTIONS(74),
    [anon_sym_split] = ACTIONS(71),
    [anon_sym_splith] = ACTIONS(74),
    [anon_sym_splitv] = ACTIONS(74),
    [anon_sym_sticky] = ACTIONS(74),
    [anon_sym_resize] = ACTIONS(74),
    [anon_sym_kill] = ACTIONS(74),
    [anon_sym_reload] = ACTIONS(74),
    [anon_sym_restart] = ACTIONS(74),
    [anon_sym_exit] = ACTIONS(74),
    [anon_sym_fullscreen] = ACTIONS(74),
    [anon_sym_floating] = ACTIONS(71),
    [anon_sym_input] = ACTIONS(74),
    [anon_sym_seat] = ACTIONS(74),
    [anon_sym_xwayland] = ACTIONS(74),
    [anon_sym_titlebar_border_thickness] = ACTIONS(74),
    [anon_sym_titlebar_padding] = ACTIONS(74),
    [anon_sym_title_format] = ACTIONS(74),
    [anon_sym_title_align] = ACTIONS(74),
    [anon_sym_client_DOTfocused] = ACTIONS(71),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(74),
    [anon_sym_client_DOTunfocused] = ACTIONS(74),
    [anon_sym_client_DOTurgent] = ACTIONS(74),
    [anon_sym_client_DOTplaceholder] = ACTIONS(74),
    [anon_sym_client_DOTbackground] = ACTIONS(74),
    [anon_sym_swaybg_command] = ACTIONS(74),
    [anon_sym_swaynag_command] = ACTIONS(74),
    [anon_sym_unbindsym] = ACTIONS(74),
    [anon_sym_bindswitch] = ACTIONS(74),
    [anon_sym_tiling_drag] = ACTIONS(74),
    [anon_sym_show_marks] = ACTIONS(74),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(74),
    [anon_sym_position] = ACTIONS(74),
    [anon_sym_status_command] = ACTIONS(74),
    [anon_sym_xkb_layout] = ACTIONS(74),
    [anon_sym_xkb_options] = ACTIONS(74),
    [anon_sym_xkb_variant] = ACTIONS(74),
    [anon_sym_xkb_model] = ACTIONS(74),
    [anon_sym_resolution] = ACTIONS(74),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [5] = {
    [sym_statement] = STATE(8),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_token1] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [6] = {
    [sym_statement] = STATE(12),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_source_file_token1] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [7] = {
    [sym_statement] = STATE(9),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_source_file_token1] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [8] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [9] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [10] = {
    [sym_statement] = STATE(13),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_source_file_token1] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [11] = {
    [sym_statement] = STATE(4),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_source_file_token1] = ACTIONS(101),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [12] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [13] = {
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(71),
    [sym_set_statement] = STATE(71),
    [sym_bindsym_statement] = STATE(71),
    [sym_bindcode_statement] = STATE(71),
    [sym_exec_statement] = STATE(71),
    [sym_exec_always_statement] = STATE(71),
    [sym_assign_statement] = STATE(71),
    [sym_for_window_statement] = STATE(71),
    [sym_include_statement] = STATE(71),
    [sym_mode_block] = STATE(71),
    [sym_bar_block] = STATE(71),
    [sym_block_statement] = STATE(71),
    [sym_command_statement] = STATE(71),
    [sym_keyword] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_set] = ACTIONS(9),
    [anon_sym_bindsym] = ACTIONS(11),
    [anon_sym_bindcode] = ACTIONS(13),
    [anon_sym_exec] = ACTIONS(15),
    [anon_sym_exec_always] = ACTIONS(17),
    [anon_sym_assign] = ACTIONS(19),
    [anon_sym_for_window] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_mode] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_bar] = ACTIONS(27),
    [anon_sym_workspace] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_floating_modifier] = ACTIONS(31),
    [anon_sym_default_orientation] = ACTIONS(31),
    [anon_sym_workspace_layout] = ACTIONS(31),
    [anon_sym_font] = ACTIONS(31),
    [anon_sym_focus_follows_mouse] = ACTIONS(31),
    [anon_sym_focus_on_window_activation] = ACTIONS(31),
    [anon_sym_focus_wrapping] = ACTIONS(31),
    [anon_sym_mouse_warping] = ACTIONS(31),
    [anon_sym_popup_during_fullscreen] = ACTIONS(31),
    [anon_sym_default_border] = ACTIONS(31),
    [anon_sym_default_floating_border] = ACTIONS(31),
    [anon_sym_hide_edge_borders] = ACTIONS(31),
    [anon_sym_smart_borders] = ACTIONS(31),
    [anon_sym_smart_gaps] = ACTIONS(31),
    [anon_sym_gaps] = ACTIONS(31),
    [anon_sym_border] = ACTIONS(31),
    [anon_sym_new_window] = ACTIONS(31),
    [anon_sym_new_float] = ACTIONS(31),
    [anon_sym_floating_minimum_size] = ACTIONS(31),
    [anon_sym_floating_maximum_size] = ACTIONS(31),
    [anon_sym_focus] = ACTIONS(29),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_layout] = ACTIONS(31),
    [anon_sym_split] = ACTIONS(29),
    [anon_sym_splith] = ACTIONS(31),
    [anon_sym_splitv] = ACTIONS(31),
    [anon_sym_sticky] = ACTIONS(31),
    [anon_sym_resize] = ACTIONS(31),
    [anon_sym_kill] = ACTIONS(31),
    [anon_sym_reload] = ACTIONS(31),
    [anon_sym_restart] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(31),
    [anon_sym_fullscreen] = ACTIONS(31),
    [anon_sym_floating] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_seat] = ACTIONS(31),
    [anon_sym_xwayland] = ACTIONS(31),
    [anon_sym_titlebar_border_thickness] = ACTIONS(31),
    [anon_sym_titlebar_padding] = ACTIONS(31),
    [anon_sym_title_format] = ACTIONS(31),
    [anon_sym_title_align] = ACTIONS(31),
    [anon_sym_client_DOTfocused] = ACTIONS(29),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(31),
    [anon_sym_client_DOTunfocused] = ACTIONS(31),
    [anon_sym_client_DOTurgent] = ACTIONS(31),
    [anon_sym_client_DOTplaceholder] = ACTIONS(31),
    [anon_sym_client_DOTbackground] = ACTIONS(31),
    [anon_sym_swaybg_command] = ACTIONS(31),
    [anon_sym_swaynag_command] = ACTIONS(31),
    [anon_sym_unbindsym] = ACTIONS(31),
    [anon_sym_bindswitch] = ACTIONS(31),
    [anon_sym_tiling_drag] = ACTIONS(31),
    [anon_sym_show_marks] = ACTIONS(31),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_status_command] = ACTIONS(31),
    [anon_sym_xkb_layout] = ACTIONS(31),
    [anon_sym_xkb_options] = ACTIONS(31),
    [anon_sym_xkb_variant] = ACTIONS(31),
    [anon_sym_xkb_model] = ACTIONS(31),
    [anon_sym_resolution] = ACTIONS(31),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [aux_sym_source_file_token1] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_set] = ACTIONS(107),
    [anon_sym_bindsym] = ACTIONS(107),
    [anon_sym_bindcode] = ACTIONS(107),
    [anon_sym_exec] = ACTIONS(109),
    [anon_sym_exec_always] = ACTIONS(107),
    [anon_sym_assign] = ACTIONS(107),
    [anon_sym_for_window] = ACTIONS(107),
    [anon_sym_include] = ACTIONS(107),
    [anon_sym_mode] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_bar] = ACTIONS(107),
    [anon_sym_workspace] = ACTIONS(109),
    [anon_sym_output] = ACTIONS(107),
    [anon_sym_floating_modifier] = ACTIONS(107),
    [anon_sym_default_orientation] = ACTIONS(107),
    [anon_sym_workspace_layout] = ACTIONS(107),
    [anon_sym_font] = ACTIONS(107),
    [anon_sym_focus_follows_mouse] = ACTIONS(107),
    [anon_sym_focus_on_window_activation] = ACTIONS(107),
    [anon_sym_focus_wrapping] = ACTIONS(107),
    [anon_sym_mouse_warping] = ACTIONS(107),
    [anon_sym_popup_during_fullscreen] = ACTIONS(107),
    [anon_sym_default_border] = ACTIONS(107),
    [anon_sym_default_floating_border] = ACTIONS(107),
    [anon_sym_hide_edge_borders] = ACTIONS(107),
    [anon_sym_smart_borders] = ACTIONS(107),
    [anon_sym_smart_gaps] = ACTIONS(107),
    [anon_sym_gaps] = ACTIONS(107),
    [anon_sym_border] = ACTIONS(107),
    [anon_sym_new_window] = ACTIONS(107),
    [anon_sym_new_float] = ACTIONS(107),
    [anon_sym_floating_minimum_size] = ACTIONS(107),
    [anon_sym_floating_maximum_size] = ACTIONS(107),
    [anon_sym_focus] = ACTIONS(109),
    [anon_sym_move] = ACTIONS(107),
    [anon_sym_layout] = ACTIONS(107),
    [anon_sym_split] = ACTIONS(109),
    [anon_sym_splith] = ACTIONS(107),
    [anon_sym_splitv] = ACTIONS(107),
    [anon_sym_sticky] = ACTIONS(107),
    [anon_sym_resize] = ACTIONS(107),
    [anon_sym_kill] = ACTIONS(107),
    [anon_sym_reload] = ACTIONS(107),
    [anon_sym_restart] = ACTIONS(107),
    [anon_sym_exit] = ACTIONS(107),
    [anon_sym_fullscreen] = ACTIONS(107),
    [anon_sym_floating] = ACTIONS(109),
    [anon_sym_input] = ACTIONS(107),
    [anon_sym_seat] = ACTIONS(107),
    [anon_sym_xwayland] = ACTIONS(107),
    [anon_sym_titlebar_border_thickness] = ACTIONS(107),
    [anon_sym_titlebar_padding] = ACTIONS(107),
    [anon_sym_title_format] = ACTIONS(107),
    [anon_sym_title_align] = ACTIONS(107),
    [anon_sym_client_DOTfocused] = ACTIONS(109),
    [anon_sym_client_DOTfocused_inactive] = ACTIONS(107),
    [anon_sym_client_DOTunfocused] = ACTIONS(107),
    [anon_sym_client_DOTurgent] = ACTIONS(107),
    [anon_sym_client_DOTplaceholder] = ACTIONS(107),
    [anon_sym_client_DOTbackground] = ACTIONS(107),
    [anon_sym_swaybg_command] = ACTIONS(107),
    [anon_sym_swaynag_command] = ACTIONS(107),
    [anon_sym_unbindsym] = ACTIONS(107),
    [anon_sym_bindswitch] = ACTIONS(107),
    [anon_sym_tiling_drag] = ACTIONS(107),
    [anon_sym_show_marks] = ACTIONS(107),
    [anon_sym_workspace_auto_back_and_forth] = ACTIONS(107),
    [anon_sym_position] = ACTIONS(107),
    [anon_sym_status_command] = ACTIONS(107),
    [anon_sym_xkb_layout] = ACTIONS(107),
    [anon_sym_xkb_options] = ACTIONS(107),
    [anon_sym_xkb_variant] = ACTIONS(107),
    [anon_sym_xkb_model] = ACTIONS(107),
    [anon_sym_resolution] = ACTIONS(107),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(111), 1,
      aux_sym_source_file_token1,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [26] = 6,
    ACTIONS(126), 1,
      sym_color,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    ACTIONS(121), 2,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(123), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [50] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      aux_sym_source_file_token1,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [73] = 7,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      sym_flag,
    STATE(35), 1,
      sym_string,
    STATE(90), 1,
      sym_value,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [98] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      aux_sym_source_file_token1,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [121] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      aux_sym_source_file_token1,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [144] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_source_file_token1,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [167] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      aux_sym_source_file_token1,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [190] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      aux_sym_source_file_token1,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [213] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_source_file_token1,
    STATE(35), 1,
      sym_string,
    STATE(16), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [236] = 6,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_string,
    STATE(15), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [259] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(23), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [279] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(17), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [299] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(19), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [319] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(20), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [339] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(22), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [359] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(24), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [379] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(21), 2,
      sym_value,
      aux_sym_set_statement_repeat1,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [399] = 2,
    ACTIONS(152), 4,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(154), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [412] = 5,
    ACTIONS(117), 1,
      sym_color,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(75), 1,
      sym_value,
    ACTIONS(115), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [431] = 2,
    ACTIONS(156), 4,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(158), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [444] = 2,
    ACTIONS(160), 4,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(162), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [457] = 2,
    ACTIONS(134), 3,
      anon_sym_LBRACE,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(164), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [469] = 2,
    ACTIONS(168), 2,
      sym_color,
      anon_sym_DQUOTE,
    ACTIONS(166), 4,
      sym_variable,
      sym_number,
      sym_unit_value,
      sym_word,
  [480] = 4,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      aux_sym_string_token1,
    ACTIONS(174), 1,
      sym_escape_sequence,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [493] = 3,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(178), 1,
      sym_criteria_key,
    STATE(41), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [504] = 3,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    ACTIONS(182), 1,
      sym_criteria_key,
    STATE(41), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [515] = 4,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      aux_sym_string_token1,
    ACTIONS(189), 1,
      sym_escape_sequence,
    STATE(39), 1,
      aux_sym_string_repeat1,
  [528] = 4,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      aux_sym_string_token1,
    ACTIONS(196), 1,
      sym_escape_sequence,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [541] = 4,
    ACTIONS(199), 1,
      aux_sym_criteria_value_token1,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_criteria_value,
    STATE(60), 1,
      sym_string,
  [554] = 4,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_string_token1,
    ACTIONS(207), 1,
      sym_escape_sequence,
    STATE(46), 1,
      aux_sym_string_repeat1,
  [567] = 4,
    ACTIONS(172), 1,
      aux_sym_string_token1,
    ACTIONS(174), 1,
      sym_escape_sequence,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [580] = 3,
    ACTIONS(211), 1,
      sym_keycombo,
    ACTIONS(213), 1,
      sym_flag,
    STATE(47), 1,
      aux_sym_bindsym_statement_repeat1,
  [590] = 2,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(216), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [598] = 3,
    ACTIONS(220), 1,
      sym_keycombo,
    ACTIONS(222), 1,
      sym_flag,
    STATE(47), 1,
      aux_sym_bindsym_statement_repeat1,
  [608] = 3,
    ACTIONS(224), 1,
      sym_flag,
    ACTIONS(226), 1,
      sym_command,
    STATE(58), 1,
      aux_sym_bindsym_statement_repeat1,
  [618] = 3,
    ACTIONS(224), 1,
      sym_flag,
    ACTIONS(228), 1,
      sym_command,
    STATE(58), 1,
      aux_sym_bindsym_statement_repeat1,
  [628] = 2,
    ACTIONS(178), 1,
      sym_criteria_key,
    STATE(40), 2,
      sym_criteria_pair,
      aux_sym_criteria_repeat1,
  [636] = 3,
    ACTIONS(230), 1,
      sym_flag,
    ACTIONS(232), 1,
      sym_command,
    STATE(51), 1,
      aux_sym_bindsym_statement_repeat1,
  [646] = 3,
    ACTIONS(234), 1,
      sym_keycombo,
    ACTIONS(236), 1,
      sym_flag,
    STATE(57), 1,
      aux_sym_bindsym_statement_repeat1,
  [656] = 3,
    ACTIONS(238), 1,
      sym_keycombo,
    ACTIONS(240), 1,
      sym_flag,
    STATE(49), 1,
      aux_sym_bindsym_statement_repeat1,
  [666] = 3,
    ACTIONS(242), 1,
      sym_flag,
    ACTIONS(244), 1,
      sym_command,
    STATE(50), 1,
      aux_sym_bindsym_statement_repeat1,
  [676] = 3,
    ACTIONS(222), 1,
      sym_flag,
    ACTIONS(246), 1,
      sym_keycombo,
    STATE(47), 1,
      aux_sym_bindsym_statement_repeat1,
  [686] = 3,
    ACTIONS(248), 1,
      sym_flag,
    ACTIONS(251), 1,
      sym_command,
    STATE(58), 1,
      aux_sym_bindsym_statement_repeat1,
  [696] = 1,
    ACTIONS(253), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [701] = 1,
    ACTIONS(255), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [706] = 2,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_criteria,
  [713] = 1,
    ACTIONS(152), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [718] = 1,
    ACTIONS(160), 2,
      anon_sym_RBRACK,
      sym_criteria_key,
  [723] = 2,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_criteria,
  [730] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [734] = 1,
    ACTIONS(261), 1,
      aux_sym_source_file_token1,
  [738] = 1,
    ACTIONS(263), 1,
      aux_sym_source_file_token1,
  [742] = 1,
    ACTIONS(265), 1,
      aux_sym_source_file_token1,
  [746] = 1,
    ACTIONS(267), 1,
      aux_sym_source_file_token1,
  [750] = 1,
    ACTIONS(269), 1,
      aux_sym_source_file_token1,
  [754] = 1,
    ACTIONS(271), 1,
      aux_sym_source_file_token1,
  [758] = 1,
    ACTIONS(273), 1,
      aux_sym_source_file_token1,
  [762] = 1,
    ACTIONS(275), 1,
      aux_sym_source_file_token1,
  [766] = 1,
    ACTIONS(277), 1,
      aux_sym_source_file_token1,
  [770] = 1,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
  [774] = 1,
    ACTIONS(281), 1,
      aux_sym_source_file_token1,
  [778] = 1,
    ACTIONS(283), 1,
      aux_sym_source_file_token1,
  [782] = 1,
    ACTIONS(285), 1,
      aux_sym_source_file_token1,
  [786] = 1,
    ACTIONS(287), 1,
      aux_sym_source_file_token1,
  [790] = 1,
    ACTIONS(289), 1,
      aux_sym_source_file_token1,
  [794] = 1,
    ACTIONS(291), 1,
      aux_sym_source_file_token1,
  [798] = 1,
    ACTIONS(293), 1,
      sym_command,
  [802] = 1,
    ACTIONS(295), 1,
      aux_sym_source_file_token1,
  [806] = 1,
    ACTIONS(297), 1,
      aux_sym_source_file_token1,
  [810] = 1,
    ACTIONS(299), 1,
      aux_sym_source_file_token1,
  [814] = 1,
    ACTIONS(301), 1,
      aux_sym_source_file_token1,
  [818] = 1,
    ACTIONS(303), 1,
      aux_sym_comment_token1,
  [822] = 1,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
  [826] = 1,
    ACTIONS(307), 1,
      sym_variable,
  [830] = 1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
  [834] = 1,
    ACTIONS(311), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 26,
  [SMALL_STATE(17)] = 50,
  [SMALL_STATE(18)] = 73,
  [SMALL_STATE(19)] = 98,
  [SMALL_STATE(20)] = 121,
  [SMALL_STATE(21)] = 144,
  [SMALL_STATE(22)] = 167,
  [SMALL_STATE(23)] = 190,
  [SMALL_STATE(24)] = 213,
  [SMALL_STATE(25)] = 236,
  [SMALL_STATE(26)] = 259,
  [SMALL_STATE(27)] = 279,
  [SMALL_STATE(28)] = 299,
  [SMALL_STATE(29)] = 319,
  [SMALL_STATE(30)] = 339,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 399,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 431,
  [SMALL_STATE(36)] = 444,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 469,
  [SMALL_STATE(39)] = 480,
  [SMALL_STATE(40)] = 493,
  [SMALL_STATE(41)] = 504,
  [SMALL_STATE(42)] = 515,
  [SMALL_STATE(43)] = 528,
  [SMALL_STATE(44)] = 541,
  [SMALL_STATE(45)] = 554,
  [SMALL_STATE(46)] = 567,
  [SMALL_STATE(47)] = 580,
  [SMALL_STATE(48)] = 590,
  [SMALL_STATE(49)] = 598,
  [SMALL_STATE(50)] = 608,
  [SMALL_STATE(51)] = 618,
  [SMALL_STATE(52)] = 628,
  [SMALL_STATE(53)] = 636,
  [SMALL_STATE(54)] = 646,
  [SMALL_STATE(55)] = 656,
  [SMALL_STATE(56)] = 666,
  [SMALL_STATE(57)] = 676,
  [SMALL_STATE(58)] = 686,
  [SMALL_STATE(59)] = 696,
  [SMALL_STATE(60)] = 701,
  [SMALL_STATE(61)] = 706,
  [SMALL_STATE(62)] = 713,
  [SMALL_STATE(63)] = 718,
  [SMALL_STATE(64)] = 723,
  [SMALL_STATE(65)] = 730,
  [SMALL_STATE(66)] = 734,
  [SMALL_STATE(67)] = 738,
  [SMALL_STATE(68)] = 742,
  [SMALL_STATE(69)] = 746,
  [SMALL_STATE(70)] = 750,
  [SMALL_STATE(71)] = 754,
  [SMALL_STATE(72)] = 758,
  [SMALL_STATE(73)] = 762,
  [SMALL_STATE(74)] = 766,
  [SMALL_STATE(75)] = 770,
  [SMALL_STATE(76)] = 774,
  [SMALL_STATE(77)] = 778,
  [SMALL_STATE(78)] = 782,
  [SMALL_STATE(79)] = 786,
  [SMALL_STATE(80)] = 790,
  [SMALL_STATE(81)] = 794,
  [SMALL_STATE(82)] = 798,
  [SMALL_STATE(83)] = 802,
  [SMALL_STATE(84)] = 806,
  [SMALL_STATE(85)] = 810,
  [SMALL_STATE(86)] = 814,
  [SMALL_STATE(87)] = 818,
  [SMALL_STATE(88)] = 822,
  [SMALL_STATE(89)] = 826,
  [SMALL_STATE(90)] = 830,
  [SMALL_STATE(91)] = 834,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_statement, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindcode_statement, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_window_statement, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindsym_statement, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindcode_statement, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bindsym_statement, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_criteria, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_pair, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bindsym_statement_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_pair, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_criteria_value, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always_statement, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_block, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_always_statement, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_block, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar_block, 5, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_block, 6, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 6, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_block, 7, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 0),
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
