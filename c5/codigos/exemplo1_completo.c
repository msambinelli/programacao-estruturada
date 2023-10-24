#include <stdio.h>

int main(void) {
  int variavel = 90;
  int * const endereco  = &variavel;
  printf("Variavel: %d\n", variavel);
  printf("Variavel: %d\n", *endereco);
  printf("Endereço: %p\n", endereco);
  printf("Endereço: %p\n", &variavel);
}
