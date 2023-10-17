#ifndef COMPLEXO_H
#define COMPLEXO_H

struct complexo { double real; double imag; }; 

typedef struct complexo Complexo;

Complexo complexo(double real, double imag);

Complexo complexo_le();
void complexo_imprime(Complexo a);

int complexos_iguais(Complexo a, Complexo b);

Complexo complexo_soma(Complexo a, Complexo b);
Complexo complexo_multiplicacao(Complexo a, Complexo b);

double complexo_absoluto(Complexo a);
Complexo complexo_conjugado(Complexo a);

#endif
