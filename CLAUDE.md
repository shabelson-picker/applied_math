# Project: HIT sem2 (Infi 2 test prep)

This project is **fully portable** — all persistent memory lives inside this directory
(`./memory/`), not in any global `~/.claude` location, so it travels/syncs with the project.

## Memory
At the start of each session, read `./memory/MEMORY.md` (the index) and load any relevant
memory files it points to. When saving new facts, write them into `./memory/` (one file per
fact, with frontmatter) and add a one-line pointer to `./memory/MEMORY.md`. Do **not** write
memory to the global `~/.claude` directory.

## Working style
- When explaining math, do NOT use LaTeX — plain text with unicode symbols (√, ², ∫, ρ, φ, θ, π).
  See `./memory/no-latex-explanations.md`.
