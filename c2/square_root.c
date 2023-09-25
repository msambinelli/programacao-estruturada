#include <stdio.h>
#include <math.h>
#define ERRO 1e-12

double square_root(double x) {
  double y = x, anterior;
  do {
    anterior = y;
    y = (y + x / y) / 2;
  } while (fabs(anterior - y) > ERRO);
  return y;
}

int main() {
  double x;
  printf("Entre com o numero:\n");
  scanf("%lf", &x);
  printf("Raiz quadrada: %lf\n", square_root(x));
  return 0;
}
