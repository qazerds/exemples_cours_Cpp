// programme exemple fonction recursive
// Bertrand SIMON 18 octobre 2016

#include <iostream>

int somme(int n) {
  int i, sum=0;
  std::cout << "\n";
  for (i=1; i<n+1; i++) {
    sum=sum+i;
    std::cout << "la somme de 1 à "
              << i
              << " vaut "
              << sum
              << std::endl;
  }
  return 0;
}
int rsomme (int i, int n){
  static int sum=0;
  if (i<n+1) {
    sum=sum+i;
    std::cout << "la somme de 1 à "
              << i
              << " vaut "
              << sum
              << std::endl;
    rsomme(i+1,n);
      }
  else std::cout << "sortie\n";
  return 0;
}
int main(int argc, char *argv[])
{
  int limite;
  std::cout <<"jusqu'à quel nombre entier voulez-vous calculer la somme ?"  << "\n";
  std::cin >> limite;
  std::cout << "version non recursive\n";
  somme(limite); 
  std::cout << "version recursive\n";
  rsomme(1, limite);
  return 0;
}
