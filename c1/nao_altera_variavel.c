#include <stdio.h>

void soma_um(int x) {
  x = x + 1;
}

int main() {
  int x = 1;
  soma_um(x);
  printf("%d ", x);
  return 0;
}
