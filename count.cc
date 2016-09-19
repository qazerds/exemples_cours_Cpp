//copyright bertrand.simon
#include <iostream>

int main(int argc, char *argv[])
{
  int a=0;
  std::cout <<"jusqu'a combien voulez vous que je compte ?"
            << "\n";
  std::cin >>  a;
  for (int i = 0;  i<a+1;  i++) {
    std::cout << i << "\n";
  }
  std::cout <<"et voilà !" << "\n";
  return 0;
}

