// copyright bertrand.simon
#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
  int i=0;
  int j=0;
  string buffer;
  char * prenom;
  cout << "\nbonjour quel est ton prénom ?\n";
          cin >> buffer;
  while(buffer[i++]!='\0');
  cout << "\n ton prénom comporte " << i <<" lettres !\n";
  prenom = new char[i];
  while (j<i+1) {
    prenom[j]=buffer[j];
    cout << "\n"<<buffer[j++] <<"\n";
  }
  cout <<"\n et tu t'appelles : " << prenom << " ;o) \n";
  return 0;
}
