import { marked } from 'marked';
import fs from 'node:fs';

const [, , inPath, outPath, title = ''] = process.argv;
let src = fs.readFileSync(inPath, 'utf8');

// --- Protect LaTeX math spans so Markdown doesn't mangle _ ^ { } etc. ---
const mathStore = [];
const stash = (re) => {
  src = src.replace(re, (m) => {
    const i = mathStore.length; mathStore.push(m); return `MATHJAXSPAN${i}ENDSPAN`;
  });
};
// NOTE: single `$` is NOT a math delimiter (would collide with literal "$10,000").
// Inline math uses \( ... \); display math uses $$ ... $$ or \[ ... \].
stash(/\$\$([\s\S]+?)\$\$/g);      // $$ display $$
stash(/\\\[([\s\S]+?)\\\]/g);       // \[ display \]
stash(/\\\(([\s\S]+?)\\\)/g);       // \( inline \)

marked.setOptions({ gfm: true, breaks: false });
let body = marked.parse(src);

// Restore protected math spans verbatim.
body = body.replace(/MATHJAXSPAN(\d+)ENDSPAN/g, (_, i) => mathStore[+i]);

// Turn ```mermaid fenced blocks into <pre class="mermaid"> so mermaid.js renders them.
body = body.replace(
  /<pre><code class="language-mermaid">([\s\S]*?)<\/code><\/pre>/g,
  '<pre class="mermaid">$1</pre>'
);

const here = (f) => fs.readFileSync(new URL('./' + f, import.meta.url), 'utf8');
const mermaidJs = here('mermaid.min.js');
const mathjaxJs = here('mathjax-tex-svg.js');

const css = `
:root { color-scheme: light; }
* { box-sizing: border-box; }
@page { size: A4; margin: 18mm 17mm; }
html, body { margin: 0; }
main {
  font-family: Georgia, "DejaVu Serif", "Noto Serif", serif;
  font-size: 11.5pt; line-height: 1.55; color: #1b1b1b;
  -webkit-print-color-adjust: exact; print-color-adjust: exact;
}
h1, h2, h3, h4 {
  font-family: "DejaVu Sans", "Noto Sans", Arial, sans-serif;
  line-height: 1.25; color: #111; margin: 1.4em 0 .5em; page-break-after: avoid;
}
h1 { font-size: 1.7em; border-bottom: 2px solid #cfcfcf; padding-bottom: .2em; margin-top: 0; }
h2 { font-size: 1.34em; border-bottom: 1px solid #e4e4e4; padding-bottom: .15em; margin-top: 1.6em; }
h3 { font-size: 1.12em; }
h4 { font-size: 1.0em; }
p { margin: .6em 0; }
strong { color: #111; }
code {
  font-family: "DejaVu Sans Mono", "Noto Sans Mono", Consolas, monospace;
  font-size: .9em; background: #f2f4f6; padding: .1em .32em; border-radius: 3px;
}
pre {
  background: #f6f8fa; border: 1px solid #e3e6ea; border-radius: 6px;
  padding: .8em 1em; overflow-x: auto; line-height: 1.42; page-break-inside: avoid;
}
pre code { background: none; padding: 0; font-size: .86em; }
blockquote {
  margin: .8em 0; padding: .35em .95em; border-left: 4px solid #b7c5d6;
  background: #f5f9fc; color: #33475b;
}
blockquote p { margin: .35em 0; }
table { border-collapse: collapse; margin: 1em 0; font-size: .94em; width: 100%; page-break-inside: avoid; }
th, td { border: 1px solid #d3d9df; padding: .42em .6em; text-align: left; vertical-align: top; }
th { background: #eef2f6; font-family: "DejaVu Sans", "Noto Sans", sans-serif; }
tr:nth-child(even) td { background: #fafbfc; }
a { color: #0b66c3; text-decoration: none; }
hr { border: none; border-top: 1px solid #dcdcdc; margin: 1.5em 0; }
ul, ol { margin: .5em 0 .5em 1.35em; }
li { margin: .22em 0; }
.mermaid { text-align: center; background: none; border: none; margin: 1.1em 0; page-break-inside: avoid; }
/* Soften math: MathJax SVG glyphs are filled paths. Force a medium grey past
   MathJax's own injected CSS so the math reads lighter than the black body text. */
mjx-container { overflow-x: auto; overflow-y: hidden; }
mjx-container[jax="SVG"] { color: #565656 !important; }
mjx-container[jax="SVG"] svg { fill: currentColor !important; }
`;

const html = `<!doctype html><html lang="en"><head><meta charset="utf-8">
<title>${title}</title><style>${css}</style>
<script>window.MathJax = {
  tex: { inlineMath: [['\\\\(','\\\\)']], displayMath: [['$$','$$'],['\\\\[','\\\\]']] },
  svg: { fontCache: 'none' },
  options: { skipHtmlTags: ['script','noscript','style','textarea','pre','code'], ignoreHtmlClass: 'mermaid' }
};</script>
</head>
<body><main>${body}</main>
<script>${mathjaxJs}</script>
<script>${mermaidJs}</script>
<script>mermaid.initialize({ startOnLoad: true, theme: 'neutral' });</script>
</body></html>`;

fs.writeFileSync(outPath, html);
