#include <stdio.h>

int main(void)
{
  int i = 2, j = 3;
  printf("La valeur de i vaut : %d.\n", i);
  fprintf(stdout, "la valeur de j vaut: %d.\n.", j);
  fprintf(stderr, "pas d'erreur jusqu'ici...\n");
  return 0;
}
