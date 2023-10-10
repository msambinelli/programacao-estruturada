#include <stdio.h>

int main(int argc, char *argv[])
{
 
  int idade; char sexo;

  printf("Entre com a sua idade:");
  scanf("%d", &idade);
  getchar(); // consome o caracter \n

  printf("Entre com o seu sexo:");
  scanf("%c", &sexo);
  return 0;
}
