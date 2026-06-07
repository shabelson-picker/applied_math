---
name: feedback_teaching
description: Teaching and interaction preferences for this student
type: feedback
---

Keep responses short and concise — student prefers brevity.

Do NOT use LaTeX notation (e.g. `\sum`, `\int`, `$$...$$`) in chat responses. Use plain Unicode math symbols instead (Σ, ∫, ≤, ∞, etc.).

**Why:** Student explicitly requested this.
**How to apply:** Always write math inline using Unicode. Never render LaTeX-style blocks.

**Why:** Observed preference across the session; student doesn't need hand-holding on setup tasks.
**How to apply:** Lead with the answer or action. Save longer explanations for actual math guidance.

When student asks to "load the project" or "update memory", scan lectures/ and exercises/ directories first, then read any new files before responding.

**Why:** New files are added between sessions; stale file list leads to missed content.
**How to apply:** Always re-glob on session start before assuming what's available.
