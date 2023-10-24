#include <stdlib.h>
#include <stdio.h>

void imprime_invertido(int v[10], int *n) {
  while (*n > 0) {
    printf("%d ", v[*n-1]);
    (*n)--;
  }
}

int main() {
  int n = 10, v[10] = {0,1,2,3,4,5,6,7,8,9};
  imprime_invertido(v, &n);
  printf("%d\n", n);
  return 0;
}
