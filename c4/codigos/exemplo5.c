struct data {
  int dia;
  int mes;
  int ano;
};

struct ficha_aluno {
  int ra;
  int telefone;
  char nome[30];
  char endereco[100];
  struct data nascimento;
};
