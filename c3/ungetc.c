#include <stdio.h>

// tente a frase: gandalf171
int main(int argc, char *argv[]) {
  int c, i = 0; char word[100];
  while (1) {
    c  = getchar();
    if (c >= 'a' && c <= 'z') 
      word[i++] = c;
    else {
      word[i] = '\0';
      printf("username: %s\n", word);
      ungetc(c, stdin);
      scanf("%d", &c);
      printf("sufix: %d", c);
      break;
    }
  }
  return 0;
}
