# New Machine Setup — Infi 2 Project

All project files live in OneDrive and sync automatically. You only need to install the tools below.

---

## 1. Claude Code

Install the CLI:
```
npm install -g @anthropic/claude-code
```
Or download the desktop app from claude.ai/code.

Sign in with your Anthropic account, then open a terminal in this folder and run `claude`.

---

## 2. LaTeX (for compiling worksheets)

### Linux (Ubuntu/Debian)
```
sudo apt install texlive-latex-extra texlive-fonts-recommended texlive-science
```

### Windows
Install [MiKTeX](https://miktex.org/download) — it auto-downloads missing packages on first compile.

### macOS
```
brew install --cask mactex
```

**Packages used in this project:**
`amsmath`, `amssymb`, `amsthm`, `array`, `booktabs`, `enumitem`, `fancyhdr`,
`geometry`, `lmodern`, `mdframed`, `tcolorbox`, `tikz`, `xcolor`, `fontenc`, `inputenc`

---

## 3. Compile a .tex file

```bash
cd exercises/additional_exercises/src
pdflatex -interaction=nonstopmode add_ex_1_limits_continuity.tex
mv *.log *.aux ../src/   # keep src/ clean
```

For the theorems PDF:
```bash
pdflatex -interaction=nonstopmode theorems.tex   # run from infi2/
```

---

## Project structure (for Claude)

```
infi2/
├── CLAUDE.md                    ← Claude config (read automatically)
├── SETUP.md                     ← this file
├── theorems.md / theorems.pdf   ← master reference
├── memory/                      ← session memory (read by Claude on start)
│   ├── MEMORY.md
│   ├── file_index.md            ← content index for all PDFs
│   ├── project_state.md
│   ├── user_profile.md
│   └── feedback_teaching.md
├── lectures/                    ← DT_Lect_1 through DT_Lect_17 PDFs
├── exercises/                   ← List_1–9, Add_List_1–9, Sol_* PDFs
│   └── additional_exercises/   ← self-made exercise sheets
│       ├── *.pdf
│       └── src/                ← .tex source files
└── .claude/settings.local.json ← pre-approved Claude permissions
```

---

## Notes

- No absolute paths anywhere in this project — it runs from any directory.
- `.claude/settings.local.json` pre-approves common pdflatex and file operations so Claude won't ask for permission each time.
- The `memory/` directory is self-contained — Claude rebuilds full context from it at the start of each session.
