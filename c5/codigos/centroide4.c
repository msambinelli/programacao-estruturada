#include <stdio.h>
#include <stdlib.h>

struct ponto {
  double x, y;
};/*L \pause L*/

int main() {
  struct ponto *v, centro;/*L \pause L*/
  int i, n;
  scanf("%d", &n);/*L \pause L*/
  v = malloc(n * sizeof(struct ponto));/*L \pause L*/
  if (v == NULL) {
    printf("Nao ha memoria suficente!\n");
    exit(1);
  }
  for (i = 0; i < n; i++)
    scanf("%lf %lf", &v[i].x, &v[i].y);/*L \pause L*/
  centro.x = centro.y = 0;/*L \pause L*/
  for (i = 0; i < n; i++) {
    centro.x += v[i].x/n;
    centro.y += v[i].y/n;
  }/*L \pause L*/
  printf("%lf %lf\n", centro.x, centro.y);/*L \pause L*/
  free(v);/*L \pause L*/
  return 0;
}
