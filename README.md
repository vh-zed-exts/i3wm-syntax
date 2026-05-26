# i3/Sway Config for Zed

Syntax highlighting for [i3wm](https://i3wm.org/) and [swaywm](https://swaywm.org/) configuration files in the [Zed editor](https://zed.dev/).

## Features

- Tree-sitter based syntax highlighting
- Bracket matching and auto-indentation
- Supports all i3/sway config directives: `bindsym`, `exec`, `set`, `mode`, `bar`, `input`, `output`, `gaps`, `for_window`, etc.
- Highlights variables (`$mod`), key combinations, colors (`#rrggbb`), strings, numbers, criteria (`[app_id="..."]`)

## File Detection

Automatically activates for files with these suffixes:
- `i3/config`
- `*.i3config`
- `*.swayconfig`

For `~/.config/sway/config`, manually set the language to **i3/Sway Config** via the language selector.

## Installation

### Dev Extension (local)

1. Clone this repo
2. In Zed, run `zed: install dev extension`
3. Select the cloned directory

## License

MIT
