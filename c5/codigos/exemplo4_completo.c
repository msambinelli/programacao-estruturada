#include <stdio.h>

int main() {

  char vetor[5] = {1, 2, 3, 4, 5};
  int *ponteiro;


  printf("%llu\n", vetor);
  printf("%llu\n", vetor + 1);
  printf("%llu\n", vetor + 2);


  unsigned long long a = 0x7ffee659a393;
  printf("%llu\n", a);


  // ponteiro = vetor + 2;
  // ponteiro++;
  // printf("%d %d %d", *vetor, *(ponteiro - 1), *ponteiro);

}
