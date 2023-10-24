#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, m, n, **matriz;
  scanf("%d %d", &m, &n);
  matriz = malloc(m * sizeof(int *));
  for (i = 0; i < m; i++)
    matriz[i] = malloc(n * sizeof(int));
  ...
  for (i = 0; i < m; i++)
    free(matriz[i]);
  free(matriz);
  return 0;
}
