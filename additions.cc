// copyright bertrand.simon@uha.fr
/* je peux écrire
   ici plusieurs
   lignes de commentaires*/
   #include <iostream>

int ajoute(int a, int b)  {
     return a+b;
   }
int main(int argc, char *argv[])
{
int x,y;
std::cout << "nous allons faire la somme de deux entiers \n entrez le premier entier \n";
std::cin >> x;
std::cout <<"\n entrez le deuxième entier :\n";
std::cin >> y;
std::cout <<"le résultat de l'addition vaut : "<<ajoute(x,y)<< "\n";
std::cout << "je peux également additionner 5 et 6... 5+6="<<ajoute(5,6)<<"\n Au revoir !\n";
  return 0;
}

