// copyright bertrand.simon@uha.fr
#include <stdio.h>
#include <math.h>

long double x, y;
int main(int argc, char *argv[]) {
  printf("Calcul de moyenne\n");
  printf(" entrez le premier nombre : ");
  scanf("%Lf", &x);
  /* on rentre une chaine de caractères
     qui est convertie en long double dans x...*/
  printf("\n entrez le deuxième nombre : ");
  scanf("%Lf", &y);
  printf("\n la valeur moyenne de %Lf et de %Lf est : %Lf.\n",
         x,
         y,
         (x+y)/2.0);
  return 0;
}

