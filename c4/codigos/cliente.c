#include <stdio.h>
#include "complexos.h"/*L\tikz[remember picture] \node (l2) {};L*/

int main() {
  Complexo a, b, c;
  a = complexo_le();
  b = complexo_le();
  c = complexo_soma(a, b);
  complexo_imprime(c);
  printf("%lf\n", complexo_absoluto(c));
  return 0;
}
