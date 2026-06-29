; Comments
(comment) @comment

; Keywords
(set_statement "set" @keyword)
(bindsym_statement "bindsym" @keyword)
(bindcode_statement "bindcode" @keyword)
(exec_statement "exec" @keyword)
(exec_always_statement "exec_always" @keyword)
(assign_statement "assign" @keyword)
(for_window_statement "for_window" @keyword)
(no_focus_statement "no_focus" @keyword)
(include_statement "include" @keyword)
(bar_block "bar" @keyword)
(command_statement (keyword) @keyword)
(block_statement (keyword) @keyword)

; Command verbs / directives and enum values used as arguments
(command_keyword) @keyword
(command_value) @constant.builtin

; Variables
(variable) @variable

; Flags
(flag) @constant

; Key combinations
(keycombo) @string.special

; Criteria
(criteria "[" @punctuation.bracket)
(criteria "]" @punctuation.bracket)
(criteria_key) @property
(criteria_value) @string

; Strings
(string) @string
(escape_sequence) @string.escape

; Numbers and colors
(number) @number
(unit_value) @number
(color) @constant

; Blocks
(bar_block "{" @punctuation.bracket)
(bar_block "}" @punctuation.bracket)
(block_statement "{" @punctuation.bracket)
(block_statement "}" @punctuation.bracket)
