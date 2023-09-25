#include <stdio.h>
#define MAX 1000

void imprime_matriz_quadrada(double M[][MAX], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      printf("%lf ", M[i][j]);
    printf("\n");
  }
}

void le_matriz_quadrada(double M[][MAX], int n) {
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      scanf("%lf", &M[i][j]);
}

void multiplica_quadradas(double A[][MAX], double B[][MAX],
                          double C[][MAX], int n) {
  int i, j, k;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      C[i][j] = 0;
      for (k = 0; k < n; k++)
        C[i][j] += A[i][k] * B[k][j];
    }
}


int main() {
  int n;
  double A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
  scanf("%d", &n);
  le_matriz_quadrada(A, n);
  le_matriz_quadrada(B, n);
  multiplica_quadradas(A, B, C, n);
  imprime_matriz_quadrada(C, n);
  return 0;
}
