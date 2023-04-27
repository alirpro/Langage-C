#include <stdlib.h>
#include <stdio.h>

int main(void){
  printf("entrer une somme d'argent et la monnaie donner en piece : ");
  double euro, monnaie;
  scanf("%lf%lf", &euro ,&monnaie);
  printf("\nVous devez rendre %lf euros dont : ", monnaie-euro);
  
  int sCentime;
  sCentime = (int)((monnaie - euro) * 100);
  
  int Piece;
  Piece = sCentime / 200;
  printf("\n\t%d pieces de 2 euros", Piece);
  sCentime = sCentime % 200;
  
  Piece = sCentime / 100;
  printf("\n\t%d pieces de 1 euros", Piece);
  sCentime = sCentime % 100;
  
  Piece = sCentime / 50;
  printf("\n\t%d pieces de 50 centimes d'euros", Piece);
  sCentime = sCentime % 50;
  
  Piece = sCentime / 20;
  printf("\n\t%d pieces de 20 centimes d'euros", Piece);
  sCentime = sCentime % 20;
  
  Piece = sCentime / 10;
  printf("\n\t%d pieces de 10 centimes d'euros", Piece);
  sCentime = sCentime % 10;
  
  Piece = sCentime / 5;
  printf("\n\t%d pieces de 5 centimes d'euros", Piece);
  sCentime = sCentime % 5;

  Piece = sCentime / 2;
  printf("\n\t%d pieces de 2 centimes d'euros", Piece);
  sCentime = sCentime % 2;

  Piece = sCentime / 1;
  printf("\net %d pieces de 1 centimes d'euros", Piece);
  
  
  return EXIT_SUCCESS;
}
