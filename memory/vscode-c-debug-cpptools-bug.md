---
name: vscode-c-debug-cpptools-bug
description: VS Code C debugging freezes with cpptools 1.32.x on this machine; pinned to 1.29.3. Root cause is an unreachable DEBUGINFOD_URLS.
metadata:
  type: project
---

VS Code C debugging (cppdbg/gdb) freezes on this machine with **ms-vscode.cpptools 1.32.2**:
the session starts, prints `warning: GDB: Failed to set controlling terminal: Operation not
permitted`, then hangs — no breakpoints hit, no variables, no stack. Fixed on 2026-08-14 by
**downgrading the C/C++ extension to 1.29.3**. Extension auto-update is ON, so an automatic
bump back to 1.32.x will silently re-break it.

**Why:** `/etc/profile.d/debuginfod.sh` sets `DEBUGINFOD_URLS=https://debuginfod.ubuntu.com`
system-wide, and that host is unreachable from here. Under cpptools 1.32.x, gdb blocks on a
network poll fetching debug symbols before reaching main. Verified by A/B test: with the
variable set the session hangs; with it removed the breakpoint hits in ~0.2s. Plain
`gdb` from a terminal was never affected. Upstream: vscode-cpptools issues #14458, #14466.

**How to apply:** if C debugging freezes again, check the cpptools version first — don't
re-debug the launch.json. Second lever if the downgrade is ever undone: unset
`DEBUGINFOD_URLS` in the environment VS Code inherits. `~/.config/gdb/gdbinit` was created
with `set debuginfod enabled off` (helps terminal gdb; cpptools 1.32.x ignored it).

The `.vscode/` configs live at three roots — `sem3/advanced-c/`, `.../exec/`, `.../subs/` —
because VS Code only reads `.vscode` at the folder you actually open. Default build task
compiles **every `.c` in the open file's folder**, not just the active file; the
VS Code-generated `${file}` task breaks any multi-file exercise with `undefined reference`.
See [[no-latex-explanations]].
