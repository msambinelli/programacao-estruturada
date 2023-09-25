#include <stdio.h>
#define MAX 1000

int tamanho(char string[]) {
  int i;
  for (i = 0; string[i] != '\0'; i++) ;
  return i;
}

int ocorre(char texto[], int pos, char padrao[]) {
  int j;
  for (j = 0; padrao[j] != '\0'; j++)
    if (texto[pos + j] == '\0' ||
        (texto[pos + j] != padrao[j] && padrao[j] != '*'))
      return 0;
  return 1;
}

void imprime_trecho(char texto[], int ini, int tam) {
  int j;
  printf("%d: ", ini);
  for (j = 0; j < tam; j++)
    printf("%c", texto[ini + j]);
  printf("\n");
}

int main() {
  int i;
  char texto[MAX], padrao[MAX];
  scanf("%s ", padrao);
  fgets(texto, MAX, stdin);
  printf("Procurando por %s no texto: %s\n", padrao, texto);
  for (i = 0; texto[i] != '\0'; i++)
    if (ocorre(texto, i, padrao))
      imprime_trecho(texto, i, tamanho(padrao));
  return 0;
}
