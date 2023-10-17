#include <stdio.h>
#define MAX 100

struct ponto {
  double x, y;
};/*L \pause L*/

int main() {
  struct ponto v[MAX], centroide;/*L \pause L*/
  int i, n;
  scanf("%d", &n);/*L \pause L*/
  for (i = 0; i < n; i++)
    scanf("%lf %lf", &v[i].x, &v[i].y);/*L \pause L*/
  centroide.x = 0;
  centroide.y = 0;/*L \pause L*/
  for (i = 0; i < n; i++) {
    centroide.x += v[i].x / n;
    centroide.y += v[i].y / n;
  }/*L \pause L*/
  printf("%lf %lf\n", centroide.x, centroide.y);/*L \pause L*/
  return 0;
}
