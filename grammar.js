/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "i3config",

  extras: ($) => [/[ \t]/],

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
          $.mode_block,
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
        $.keycombo,
        repeat1($.value)
      ),

    bindcode_statement: ($) =>
      seq(
        "bindcode",
        repeat($.flag),
        $.keycombo,
        repeat1($.value)
      ),

    exec_statement: ($) =>
      seq("exec", repeat($.flag), $.command),

    exec_always_statement: ($) =>
      seq("exec_always", repeat($.flag), $.command),

    assign_statement: ($) =>
      seq("assign", $.criteria, repeat1($.value)),

    for_window_statement: ($) =>
      seq("for_window", $.criteria, repeat1($.value)),

    include_statement: ($) => seq("include", $.command),

    mode_block: ($) =>
      prec(1, seq("mode", optional($.flag), $.value, "{", /\r?\n/, repeat(choice($.statement, /\r?\n/)), "}")),

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

    criteria_value: ($) => choice($.string, /[^\]\s]+/),

    keyword: ($) =>
      choice(
        "workspace",
        "output",
        "floating_modifier",
        "default_orientation",
        "workspace_layout",
        "font",
        "focus_follows_mouse",
        "focus_on_window_activation",
        "focus_wrapping",
        "mouse_warping",
        "popup_during_fullscreen",
        "default_border",
        "default_floating_border",
        "hide_edge_borders",
        "smart_borders",
        "smart_gaps",
        "gaps",
        "border",
        "new_window",
        "new_float",
        "floating_minimum_size",
        "floating_maximum_size",
        "focus",
        "move",
        "layout",
        "split",
        "splith",
        "splitv",
        "sticky",
        "resize",
        "kill",
        "reload",
        "restart",
        "exit",
        "fullscreen",
        "floating",
        "input",
        "seat",
        "xwayland",
        "titlebar_border_thickness",
        "titlebar_padding",
        "title_format",
        "title_align",
        "client.focused",
        "client.focused_inactive",
        "client.unfocused",
        "client.urgent",
        "client.placeholder",
        "client.background",
        "swaybg_command",
        "swaynag_command",
        "unbindsym",
        "bindswitch",
        "tiling_drag",
        "show_marks",
        "workspace_auto_back_and_forth",
        "position",
        "status_command",
        "xkb_layout",
        "xkb_options",
        "xkb_variant",
        "xkb_model",
        "resolution",
        "mode"
      ),

    // Key combo: handles things like $mod+Return, $mod+Shift+q, Escape, etc.
    keycombo: ($) => /(\$[a-zA-Z_][a-zA-Z0-9_]*\+)?[a-zA-Z0-9_+]+/,

    flag: ($) => /--[a-zA-Z0-9_-]+/,

    variable: ($) => /\$[a-zA-Z_][a-zA-Z0-9_]*/,

    value: ($) =>
      choice(
        $.variable,
        $.number,
        $.color,
        $.string,
        $.unit_value,
        $.word
      ),

    number: ($) => /\d+/,

    unit_value: ($) => /\d+(?:px|ppt|%)/,

    color: ($) => /#[0-9a-fA-F]{6}([0-9a-fA-F]{2})?/,

    string: ($) =>
      seq('"', repeat(choice(/[^"\\]+/, $.escape_sequence)), '"'),

    escape_sequence: ($) => /\\./,

    command: ($) => /[^\n]+/,

    word: ($) => /[^\s\[\]{}#"\n][^\s\[\]{}#"\n]*/,
  },
});
