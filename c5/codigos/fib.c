/***********************************************************
 * Created: seg 23 out 2023 21:20:05
 *
 * Author: Maycon Sambinelli, msambinelli@gmail.com
 *
 ***********************************************************/

#include <stdio.h>

void fib2(int n) {
  int a;
  printf("fib2 addr: %llu\n", &a);
}

void fib1(int n) {
  int a;
  printf("fib1 addr: %llu\n", &a);
  fib2(10);
}
 
int main(int argc, char *argv[])
{
  int a;
  printf("fib addr: %llu\n", &a);
  fib1(12);


  int *p = malloc(sizeof(int) * 10);
  printf("p addr: %llu\n", p);

  int *b = malloc(sizeof(int) * 10);
  printf("b addr: %llu\n", b);

  return 0;
}
