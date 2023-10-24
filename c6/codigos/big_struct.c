#include <stdio.h>

struct data {
  int dia, mes, ano;
};

struct aluno {
  int ra, curso;
  double cr;
  char nome[50], endereco[200], email[50];
  struct data nascimento, ingresso;
};

void imprime_aluno(struct aluno a) {
  ...
}

void atualiza_email(struct aluno *a, char *novo_email) {
  ...
}


int main() {
  printf("%lu\n", sizeof(struct aluno));
  printf("%lu\n", sizeof(struct aluno *));
  return 0;
}
