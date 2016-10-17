// Copyright bertrand.simon@uha.fr

#include <iostream>
int permute(int &a, int &b, int &c) {
  int x = a;
  a = c;
  c = b;
  b = x;
    std::cout <<"\n affichage dans la fonction : "
            << "a = " << a
            << ", b = " << b
            << ", c = " << c
            << "\n";
  return 0;
}
int main(int argc, char *argv[]) {
  int a = 1, b = 2, c = 3, x;
  std::cout <<"\n affichage avant fonction : "
            << "a = " << a
            << ", b = " << b
            << ", c = " << c
            << "\n";
  permute(a, b, c);
  std::cout << "\n affichage après fonction : "
            << "a = " << a
            << ", b = " << b
            << ", c = " << c
            << "\n\n";
  return 0;
}
