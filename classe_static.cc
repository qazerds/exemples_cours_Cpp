// copyright bertrand.simon@uha.fr
#include <iostream>
int appel(void) {
  static int n = 0;
  /* si on enlève static on ne compte plus le nombre d'appel*/
  return n = n+1;
}
int main(int argc, char *argv[]) {
  static int n = 0;
  for (int i = 0; i < 10; i++) {
    std::cout  << "\n appel numéro "
               << appel()
               << "et n vaut "
               <<n;
  }
  return 0;
}

