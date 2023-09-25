#include <stdio.h>

/*L\tikz[remember picture]{\coordinate (icf);}L*/int maximo(int a, int b) {/*L\tikz[remember picture]{\coordinate (fcf);}L*/
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int potencia(int a, int b) {
  int i, prod = 1;
  for (i = 0; i < b; i++) {
    prod = a * prod;
  }
  return prod;
}

int main() {
  int a, b, maior, pot;
  printf("Entre com a e b\n");
  scanf("%d %d", &a, &b);
  maior = maximo(a, b);
  pot = potencia(a, b);
  printf("Maior: %d\n", maior);
  printf("a^b: %d\n", pot);
  return 0;
}

int maximo(int a, int b);
