/***********************************************************
 * Created: seg 23 out 2023 21:30:20
 *
 * Author: Maycon Sambinelli, msambinelli@gmail.com
 *
 ***********************************************************/
 
#include <stdio.h>
#include <stdlib.h>

struct aluno {
  char sexo;
  char humanoide;
  int idade;
  char UF_origem;
  int ra;
  char UF2_origem;
};

int main(int argc, char *argv[])
{
  struct aluno* marvin = malloc(sizeof(struct aluno*));

  printf("marvin: %llu\n", marvin);
  printf("&(*marvin): %llu\n", &(*marvin));
  printf("&(*marvin).sexo): %llu\n", &(*marvin).sexo);
  printf("&(*marvin).humanoide): %llu\n", &(*marvin).humanoide);
  printf("&(*marvin).idade): %llu\n", &(*marvin).idade);
  printf("&(*marvin).UF_origem): %llu\n", &(*marvin).UF_origem);
  printf("&(*marvin).ra): %llu\n", &(*marvin).ra);
  printf("&(*marvin).UF2_origem): %llu\n", &(*marvin).UF2_origem);

  return 0;
}
