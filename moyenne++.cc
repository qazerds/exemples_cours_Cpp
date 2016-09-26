// copyright bertrand.simon@uha.fr
#include <iostream>

long double x, y;
int main(int argc, char *argv[]) {
  std::cout << "Calcul de moyenne\n";
  std::cout << " entrez le premier nombre : ";
  std::cin >> x;
  /* on rentre une chaine de caractères
     qui est convertie en long double dans x...*/ 
  std::cout << "\n entrez le deuxième nombre : ";
  std::cin >> y;
  std::cout << "\n la valeur moyenne de "
           <<x
           << " et de "
           << y
           << " est : "
           <<(x+y)/2.0
           <<"\n";
return 0;
}

