#include <stdio.h>
#include <math.h>

typedef struct {
  double real;
  double imag;
} Complexo;

int main() {
  Complexo a, b, c;
  scanf("%lf %lf", &a.real, &a.imag);
  scanf("%lf %lf", &b.real, &b.imag);
  c.real = a.real + b.real;
  c.imag = a.imag + b.imag;
  printf("%lf\n", sqrt(c.real * c.real + c.imag * c.imag));
  return 0;
}
