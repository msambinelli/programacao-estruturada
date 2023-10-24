double * aloca_e_zera(int n) {
  int i;
  double *v = malloc(n * sizeof(double));
  for (i = 0; i < n; i++)
    v[i] = 0.0;
  return v;
}

void imprime(double *v, int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("%lf", v[i]);
  printf("\n");
}

v = malloc(n * sizeof(double));
...
imprime(v, n);

double w[100];
...
imprime(w, 100);
