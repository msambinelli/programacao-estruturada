#include <stdio.h>
#define MAX 100

void le_vetor(int *v, int n) {

}

void min_max(int *v, int n, int *p_min, int *p_max) {
  int i;
  *p_max = *p_min = v[0];
  for (i = 1; i < n; i++) {
    if (*p_max < v[i])
      *p_max = v[i];
    if (*p_min > v[i])
      *p_min = v[i];
  }
}

int main() {
  int v[MAX], n, min, max;
  scanf("%d", &n);
  le_vetor(v, n);
  min_max(v, n, &min, &max);
  printf("Min: %d, Max: %d\n", min, max);
  return 0;
}
