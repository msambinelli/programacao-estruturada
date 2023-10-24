void soma_um(int *x) {
  *x = *x + 1;
}

int main() {
  int y = 10;
  soma_um(&y);
  printf("%d\n", y);
  return 0;
}


int soma_um(int x) {
  return x + 1;
}

int main() {
  int y = 10;
  y = soma_um(y);
  printf("%d\n", y);
  return 0;
}
