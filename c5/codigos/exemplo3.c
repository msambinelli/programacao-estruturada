#include <stdio.h>
#include <stdlib.h>

int main() {/*L\pauseL*/
  double media, *notas; /* será usado como um vetor */
  int i, n; /*L\pauseL*/
  scanf("%d", &n); /*L\pauseL*/
  notas = malloc(n * sizeof(double)); /*L\pauseL*/
  if (notas == NULL) {
    printf("Nao ha memoria suficente!\n");
    exit(1);
  }
  for (i = 0; i < n; i++)
    scanf("%lf", &notas[i]); /*L\pauseL*/
  media = 0;
  for (i = 0; i < n; i++)
    media += notas[i] / n;
  printf("Média: %lf\n", media); /*L\pauseL*/
  free(notas);
  return 0;
}
