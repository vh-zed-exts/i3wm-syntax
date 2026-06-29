/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "i3config",

  // `,` and `;` are command separators in i3/sway commands, not part of any value.
  extras: ($) => [/[ \t]/, /\\\r?\n/, /[,;]/],

  rules: {
    source_file: ($) => repeat(choice($.statement, /\r?\n/)),

    statement: ($) =>
      seq(
        choice(
          $.comment,
          $.set_statement,
          $.bindsym_statement,
          $.bindcode_statement,
          $.exec_statement,
          $.exec_always_statement,
          $.assign_statement,
          $.for_window_statement,
          $.no_focus_statement,
          $.criteria_command,
          $.bar_block,
          $.block_statement,
          $.include_statement,
          $.command_statement
        ),
        /\r?\n/
      ),

    comment: ($) => seq("#", /[^\n]*/),

    set_statement: ($) =>
      seq("set", $.variable, repeat1($.value)),

    bindsym_statement: ($) =>
      seq(
        "bindsym",
        repeat($.flag),
        choice(
          seq($.keycombo, repeat1($.value)),
          $.bind_block
        )
      ),

    bindcode_statement: ($) =>
      seq(
        "bindcode",
        repeat($.flag),
        choice(
          seq($.keycombo, repeat1($.value)),
          $.bind_block
        )
      ),

    // Block form: `bindsym --to-code { <keycombo> <command> ... }`.
    bind_block: ($) =>
      seq("{", /\r?\n/, repeat(choice($.binding, $.comment, /\r?\n/)), "}"),

    binding: ($) => seq($.keycombo, repeat1($.value)),

    exec_statement: ($) =>
      seq("exec", repeat($.flag), choice($.command, $.exec_block)),

    exec_always_statement: ($) =>
      seq("exec_always", repeat($.flag), choice($.command, $.exec_block)),

    // Block form: `exec_always { <shell command> ... }`. Each inner line is an
    // opaque shell command, so it is kept as a single `command` token.
    exec_block: ($) =>
      seq("{", /\r?\n/, repeat(choice($.comment, $.command, /\r?\n/)), "}"),

    assign_statement: ($) =>
      seq("assign", $.criteria, repeat1($.value)),

    for_window_statement: ($) =>
      seq(
        "for_window",
        choice(
          seq($.criteria, repeat1($.value)),
          $.for_window_block
        )
      ),

    for_window_block: ($) =>
      seq("{", /\r?\n/, repeat(choice($.statement, /\r?\n/)), "}"),

    no_focus_statement: ($) => seq("no_focus", $.criteria),

    // A criteria followed by an optional command, e.g. `[app_id="x"] floating enable`.
    // Also used for the lines inside a `for_window { ... }` block.
    criteria_command: ($) => seq($.criteria, repeat($.value)),

    include_statement: ($) => seq("include", $.command),

    bar_block: ($) =>
      seq("bar", "{", /\r?\n/, repeat(choice($.statement, /\r?\n/)), "}"),

    block_statement: ($) =>
      seq($.keyword, repeat($.value), "{", /\r?\n/, repeat(choice($.statement, /\r?\n/)), "}"),

    command_statement: ($) =>
      seq($.keyword, repeat1($.value)),

    criteria: ($) =>
      seq("[", repeat1($.criteria_pair), "]"),

    criteria_pair: ($) =>
      seq(
        $.criteria_key,
        optional(seq("=", $.criteria_value))
      ),

    criteria_key: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    criteria_value: ($) => choice($.string, /[^\]\s"]+/),

    keyword: ($) =>
      choice(
        "accel_profile",
        "active_workspace",
        "adaptive_sync",
        "allow_tearing",
        "attach",
        "background",
        "bg",
        "bindgesture",
        "binding_mode",
        "binding_mode_indicator",
        "bindswitch",
        "border",
        "calibration_matrix",
        "click_method",
        "clickfinger_button_map",
        "client.background",
        "client.focused",
        "client.focused_inactive",
        "client.focused_tab_title",
        "client.placeholder",
        "client.unfocused",
        "client.urgent",
        "color_profile",
        "colors",
        "create_output",
        "cursor",
        "default_border",
        "default_floating_border",
        "default_orientation",
        "disable",
        "dpms",
        "drag",
        "drag_lock",
        "dwt",
        "dwtp",
        "enable",
        "events",
        "exit",
        "fallback",
        "floating",
        "floating_maximum_size",
        "floating_minimum_size",
        "floating_modifier",
        "focus",
        "focus_follows_mouse",
        "focus_on_window_activation",
        "focus_wrapping",
        "focused_background",
        "focused_separator",
        "focused_statusline",
        "focused_workspace",
        "font",
        "force_display_urgency_hint",
        "force_focus_wrapping",
        "fullscreen",
        "gaps",
        "hdr",
        "height",
        "hidden_state",
        "hide_cursor",
        "hide_edge_borders",
        "icon_theme",
        "id",
        "idle_inhibit",
        "idle_wake",
        "inactive_workspace",
        "inhibit_idle",
        "input",
        "keyboard",
        "keyboard_grouping",
        "kill",
        "layout",
        "left_handed",
        "map_from_region",
        "map_to_output",
        "map_to_region",
        "mark",
        "max_render_time",
        "middle_emulation",
        "mode",
        "modeline",
        "modifier",
        "mouse_warping",
        "move",
        "natural_scroll",
        "new_float",
        "new_window",
        "nop",
        "opacity",
        "output",
        "pango_markup",
        "pointer",
        "pointer_accel",
        "pointer_constraint",
        "popup_during_fullscreen",
        "pos",
        "position",
        "power",
        "primary_selection",
        "reload",
        "rename",
        "render_bit_depth",
        "repeat_delay",
        "repeat_rate",
        "res",
        "resize",
        "resolution",
        "restart",
        "rotation_angle",
        "scale",
        "scale_filter",
        "scratchpad",
        "scroll_button",
        "scroll_button_lock",
        "scroll_factor",
        "scroll_method",
        "seat",
        "separator",
        "separator_symbol",
        "shortcuts_inhibitor",
        "show_marks",
        "smart_borders",
        "smart_gaps",
        "split",
        "splith",
        "splitt",
        "splitv",
        "status_command",
        "status_edge_padding",
        "status_padding",
        "statusline",
        "sticky",
        "strip_workspace_name",
        "strip_workspace_numbers",
        "subpixel",
        "swap",
        "swaybar_command",
        "swaybg_command",
        "swaynag_command",
        "switch",
        "tablet_pad",
        "tablet_tool",
        "tap",
        "tap_button_map",
        "tiling_drag",
        "tiling_drag_threshold",
        "title_align",
        "title_format",
        "titlebar_border_thickness",
        "titlebar_padding",
        "toggle",
        "tool_mode",
        "touch",
        "transform",
        "tray_bindcode",
        "tray_bindsym",
        "tray_output",
        "tray_padding",
        "unbindcode",
        "unbindgesture",
        "unbindswitch",
        "unbindsym",
        "unmark",
        "unplug",
        "urgent",
        "urgent_workspace",
        "workspace",
        "workspace_auto_back_and_forth",
        "workspace_buttons",
        "workspace_layout",
        "workspace_min_width",
        "wrap_scroll",
        "xcursor_theme",
        "xkb_capslock",
        "xkb_file",
        "xkb_layout",
        "xkb_model",
        "xkb_numlock",
        "xkb_options",
        "xkb_rules",
        "xkb_switch_layout",
        "xkb_variant",
        "xwayland"
      ),

    // Key combo: handles $mod+Return, $mod+Shift+q, $mod+$ctrl+m, Escape, etc.
    // Any '+'-separated sequence of $variables and/or key names.
    keycombo: ($) => /\$?[a-zA-Z0-9_]+(\+\$?[a-zA-Z0-9_]+)*/,

    flag: ($) => /--[a-zA-Z0-9_-]+/,

    variable: ($) => /\$[a-zA-Z_][a-zA-Z0-9_]*/,

    value: ($) =>
      choice(
        $.variable,
        $.number,
        $.color,
        $.string,
        $.unit_value,
        $.command_keyword,
        $.command_value,
        $.word
      ),

    // Command verbs and structural directives, highlighted wherever they appear
    // as an argument (e.g. inside bindings or `for_window` commands).
    command_keyword: ($) =>
      choice(
        "allow_tearing",
        "assign",
        "bar",
        "border",
        "container",
        "create_output",
        "exec",
        "exec_always",
        "exit",
        "floating",
        "focus",
        "from",
        "fullscreen",
        "gaps",
        "inhibit_idle",
        "kill",
        "layer",
        "layout",
        "mark",
        "max_render_time",
        "mode",
        "move",
        "nop",
        "opacity",
        "output",
        "position",
        "reload",
        "rename",
        "resize",
        "restart",
        "scratchpad",
        "set",
        "shortcuts_inhibitor",
        "split",
        "splith",
        "splitt",
        "splitv",
        "sticky",
        "swap",
        "title_format",
        "to",
        "unmark",
        "urgent",
        "window",
        "workspace"
      ),

    // Enum / state / direction values used as command arguments.
    command_value: ($) =>
      choice(
        "absolute",
        "all",
        "auto",
        "back_and_forth",
        "bottom",
        "center",
        "child",
        "current",
        "cursor",
        "default",
        "disable",
        "disabled",
        "down",
        "enable",
        "enabled",
        "false",
        "fill",
        "fit",
        "global",
        "grow",
        "hide",
        "horizontal",
        "inner",
        "latest",
        "leave_fullscreen",
        "left",
        "mouse",
        "next",
        "no",
        "none",
        "normal",
        "off",
        "on",
        "outer",
        "overlay",
        "parent",
        "pixel",
        "pointer",
        "prev",
        "px",
        "ppt",
        "right",
        "show",
        "shrink",
        "sibling",
        "smart",
        "solid_color",
        "stacking",
        "stretch",
        "tabbed",
        "tiling",
        "toggle",
        "top",
        "true",
        "up",
        "vertical",
        "yes"
      ),

    number: ($) => /-?\d+(\.\d+)?/,

    unit_value: ($) => /-?\d+(\.\d+)?(?:px|ppt|pt|%)/,

    color: ($) => /#[0-9a-fA-F]{6}([0-9a-fA-F]{2})?/,

    string: ($) =>
      seq('"', repeat(choice(/[^"\\]+/, $.escape_sequence)), '"'),

    escape_sequence: ($) => /\\./,

    command: ($) => /[^\n]+/,

    word: ($) => /[^\s\[\]{}#"\n\\,;]+/,
  },
});
