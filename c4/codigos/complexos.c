#include <stdio.h>/*L\tikz[remember picture] \node (l2) {};L*/
#include <math.h>/*L\tikz[remember picture] \node (l3) {};L*/
#include "complexos.h"/*L\tikz[remember picture] \node (l1) {};L*/

Complexo complexo(double real, double imag) {
  Complexo c;
  c.real = real;
  c.imag = imag;
  return c;
}

Complexo complexo_soma(Complexo a, Complexo b) {
  return complexo(a.real + b.real, a.imag + b.imag);
}

Complexo complexo_le() {
  Complexo a;
  scanf("%lf %lf", &a.real, &a.imag);
  return a;
}

double complexo_absoluto(Complexo a) {
  return sqrt(a.real*a.real + a.imag*a.imag);
}

void complexo_imprime(Complexo a) {
  printf("%lf + %lfi\n", a.real, a.imag);
}

int complexos_iguais(Complexo a, Complexo b) {
  return (a.real == b.real) && (a.imag == b.imag);
}

Complexo complexo_multiplicao(Complexo a, Complexo b) {
  return complexo(a.real*b.real - a.imag*b.imag, a.real*b.imag + b.real*a.imag);
}

Complexo complexo_conjugado(Complexo a) {
  return complexo(a.real, - a.imag);
}
