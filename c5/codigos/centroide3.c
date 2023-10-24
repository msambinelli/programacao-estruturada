#include <stdio.h>
#define MAX 100

struct ponto {
  double x, y;
};/*L \pause L*/

int main() {
  struct ponto v[MAX], centro;/*L \pause L*/
  int i, n;
  scanf("%d", &n);/*L \pause L*/
  for (i = 0; i < n; i++)
    scanf("%lf %lf", &v[i].x, &v[i].y);/*L \pause L*/
  centro.x = centro.y = 0;/*L \pause L*/
  for (i = 0; i < n; i++) {
    centro.x += v[i].x/n;
    centro.y += v[i].y/n;
  }/*L \pause L*/
  printf("%lf %lf\n", centro.x, centro.y);/*L \pause L*/
  return 0;
}
