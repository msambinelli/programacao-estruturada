#include <stdio.h>
#define MAX 100/*L\pauseL*/

int main() {
  double x[MAX], y[MAX];/*L\pauseL*/
  double cx, cy;/*L\pauseL*/
  int i, n; /*L\pauseL*/
  scanf("%d", &n); /*L\pauseL*/
  for (i = 0; i < n; i++)
    scanf("%lf %lf", &x[i], &y[i]);/*L\pauseL*/
  cx = cy = 0; /*L\pauseL*/
  for (i = 0; i < n; i++) { /*L\pauseL*/
    cx += x[i] / n;
    cy += y[i] / n;
  } /*L\pauseL*/
  printf("%lf %lf\n", cx, cy); /*L\pauseL*/
  return 0;
}
