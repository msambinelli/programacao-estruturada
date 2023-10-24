#include <stdlib.h>
#include <stdio.h>

void imprime_invertido(int v[10], int n) {
  while (n > 0) {
    printf("%d ", v[n-1]);
    n--;
  }
}

int main() {
  int n = 10, v[10] = {0,1,2,3,4,5,6,7,8,9};
  imprime_invertido(v, n);
  printf("%d\n", n);
  return 0;
}

void soma_um(int v[10], int n) {
  int i;
  for (i = 0; i < n; i++)
    v[i]++;
}

void imprime_e_remove_ultimo(int v[10], int *n) {
  printf("%d\n", v[*n - 1]);
  (*n)--;
}

void aloca_e_zera(int **v, int n) {
  int i;
  *v = malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
    (*v)[i] = 0;
}

int **aloca_matriz(int m, int n) {
  int i, **matriz;
  matriz = malloc(m * sizeof(int *));
  for (i = 0; i < m; i++)
    matriz[i] = malloc(n * sizeof(int));
  return matriz;
}
