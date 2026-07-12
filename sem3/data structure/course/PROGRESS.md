# Progress tracker — Analysis of Algorithms

Status key: ☐ not started · ◐ in progress · ☑ done · ★ expansion opened

| Module | Chapter | Notes | Problems | Status |
|---|---|---|---|---|
| 0 | Foundations toolbox | ☑ `module-00-foundations.md` | ☑ `module-00-problems.md` | ☑ done |
| 1 | 1 · Analysis of Algorithms | ☑ `module-01-analysis-of-algorithms.md` | ☑ `module-01-problems.md` | ◐ start here |
| 2 | 2 · Recurrence Relations | ☐ | ☐ | ☐ |
| 3 | 3 · Generating Functions | ☐ | ☐ | ☐ |
| 4 | 4 · Asymptotic Approximations | ☐ | ☐ | ☐ |
| 5 | 5 · Analytic Combinatorics | ☐ | ☐ | ☐ |
| 6 | 6 · Trees | ☐ | ☐ | ☐ |
| 7 | 7 · Permutations | ☐ | ☐ | ☐ |
| 8 | 8 · Strings & Tries | ☐ | ☐ | ☐ |
| 9 | 9 · Words & Mappings | ☐ | ☐ | ☐ |

## Book exercises (reference)

All 544 end-of-section exercises are extracted per chapter under `exercises/`
(`chapter-1-…md` … `chapter-9-…md`). Use for self-testing alongside each module.

## Expansions (sub-chapters)

Opened on demand — none yet.

## Log

- **2026-07-11** — Course set up. Stance set to self-contained/thorough. Foundations
  (Module 0) + Module 1 notes & problems ready. 544 book exercises extracted per chapter.
  Reference shelf stocked (CLRS, TAOCP 1–4A, Algorithms 4e, Analytic Combinatorics, Zingaro).
  Starting point: Module 0.
- **2026-07-11** — ✅ Module 0 (Foundations) complete. Notes + all 10 problems worked
  (incl. the E[inversions] indicator derivation). On to Module 1.
- **2026-07-12** — Module 1, read notes §1–§3 (Sessions 1.1–1.2 done). Covered in discussion:
  cost model (corrected A/B/C = universal counts vs machine-specific coefficients, verified in the
  book); quicksort recurrence set-up (recapped correctly — C_N is an *average*, split sizes j−1 &
  N−j, uniform pivot rank); where H_{N+1} pops out (telescope → Σ1/k); harmonic-numbers deep dive;
  randomness preservation + when division breaks it (median-of-three → non-uniform rank; partition
  variants → non-random subarrays; duplicate keys → model breaks). Resume at §4.

## Session log (30–45 min blocks)

**Target: 3 sessions/week → ~6 months** (started 2026-07-11; projected finish ≈ Jan 2027).
Tick each as you finish. ~77 sessions total (see SYLLABUS "Pace & sessions"). Each session
follows `SESSION-PROTOCOL.md` (frame → read → recap → exercises). Module 0 & 1
are broken out concretely below; later modules get split when we reach them.

**Module 0 — Foundations** (~3) ✅
- [x] 0.1 — Notes §0.1 Sums + §0.2 Counting
- [x] 0.2 — Notes §0.3 Binomial coefficients + §0.4 Probability & expectation
- [x] 0.3 — Notes §0.5 Harmonic + §0.6 Logs/Big-O, then problems P1–P10

**Module 1 — Analysis of Algorithms** (~4)
- [x] 1.1 — Notes §1–2 — big idea + cost model (incl. correcting A/B/C = universal counts vs machine coefficients, verified vs book)
- [x] 1.2 — Notes §3 — quicksort recurrence set-up + where H_{N+1} pops out + randomness-preservation deep dive
- [ ] 1.3 — Notes §4–6 (§4 harmonic & §5 randomness already covered in discussion → quick cold retrieval; do §6 + problems P1–P2)
- [ ] 1.4 — Problems P3–P7 (reproduce the quicksort solve unaided)

## Spaced-review queue

Every **third** session opens with a 5-min cold re-derivation of the oldest item here
(see `SESSION-PROTOCOL.md`). Add a line when a key result lands; move it to the bottom with a
new date after each review. Activates ~session 1.3.

| Result / skill | Learned | Last reviewed |
|---|---|---|
| Telescoping: Σ(b₍ₖ₊₁₎ − bₖ) = b_last − b_first | 0.1 | — |
| Binomial basics: C(n,k), Pascal's rule, binomial theorem | 0.2 | — |
| Linearity + indicators: E[Σ 1_A] = Σ P(A) (e.g. E[inversions] = n(n−1)/4) | 0.2 | — |
| Harmonic numbers: H_n ≈ ln n + γ | 0.3 | — |
| Cost model: time = Σ (machine coeff)·(freq); A,B,C = universal counts | 1.1 | — |
| Quicksort recurrence: C_N = N+1 + (1/N)Σ(C_{j−1}+C_{N−j}), C₀=C₁=0 | 1.2 | — |
| Harmonic pop-out: telescope 2/(N+1) terms → Σ1/k → H_{N+1} − 3/2 | 1.2 | — |

## Where I am right now

→ **Module 1 — resume at §4 (Session 1.3).** You've read notes §1–§3, and through discussion
already dug deep into §4 (harmonic numbers) and §5 (randomness preservation). So next session is
short: **spaced review is now active** — open with a cold re-derivation of the oldest queue item;
then a quick cold retrieval of the quicksort recurrence + the harmonic pop-out, skim §6 takeaways,
and start the problem set (P1–P2). Then Session 1.4 = problems P3–P7 (reproduce the solve unaided).
