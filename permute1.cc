// Copyright bertrand.simon@uha.fr

#include <iostream>

int main(int argc, char *argv[]) {
  int a = 1, b = 2, c = 3, x;
  std::cout <<"\n"
            << "a = " << a
            << ", b = " << b
            << ", c = " << c
            << "\n";
  x = a;
  a = c;
  c = b;
  b = x;
  std::cout << "\n"
            << "a = " << a
            << ", b = " << b
            << ", c = " << c
            << "\n\n";
  return 0;
}
