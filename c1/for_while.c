for (inicializacao/*L\tikz[remember picture]\coordinate(ini);L*/; condicao/*L\tikz[remember picture]\coordinate(cond);L*/; atualizacao/*L\tikz[remember picture]\coordinate(atu);L*/) {/*L\tikz[remember picture]\coordinate (f);L*/
  ...
}

while (condicao) {
  .../*L\tikz[remember picture]{\node (while) {};}L*/
}

do {
  .../*L\tikz[remember picture]{\node (do) {};}L*/
} while (condicao);

inicializacao;
while (condicao) {
  ...
  atualizacao;
}
