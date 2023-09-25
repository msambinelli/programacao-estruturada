#include <stdio.h>

int main() {
  int i, lista[10];
  printf("Digite 10 números\n");
  for (i = 0; i < 10; i++)
    scanf("%d", &lista[i]);
  printf("Positivos\n");
  for (i = 0; i < 10; i++) {
    if (lista[i] > 0)
      printf("%d\n", lista[i]);
  }
  return 0;
}
