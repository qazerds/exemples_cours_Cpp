// copyright bertrand.simon@uha.fr
#include <iostream>

int main(int argc, char *argv[]) {
  int b, a = 0;
  int i = 0;
  int j = 1;
  std::cout << "\n" << i << "\n" << j << "\n";
  while (a++ <= 7) {
    b = j;
    j = i+j;
    std::cout << j << "\n";
    i = b;
  }
  return 0;
}
