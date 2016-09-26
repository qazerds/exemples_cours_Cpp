// copyright mes étudiants

#include <iostream>

int main(int argc, char *argv[])
{
  int a = 0, b = 1, c;
  std::cout << "terme 1 : " << a << "\n";
  std::cout << "terme 2 : " << b << "\n";
  for (int i = 1; i < 9; i++) {
    c = a+b;
    a = b;
    b = c;
    std::cout <<"terme "
              << i+2
              <<" : "
              << c
              << "\n";
  }
  return 0;
}
