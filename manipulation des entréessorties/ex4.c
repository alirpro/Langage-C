#include <stdio.h>
#include <stdlib.h>

int main(void){
  printf("Entrer 3 valeurs en ordre heure(s) , minute(s) et seconde(s) ") ;

  int heure, minute, seconde ;
  scanf( "%d%d%d" , &heure , &minute, &seconde) ;

  int ajouter_une_seconde ;

  ajouter_une_seconde = (heure * 3600) + (minute * 60) + seconde + 1 ;
  heure = (heure / 3600) % 24 ;
  minute = (ajouter_une_seconde % 3600) / 60 ;
  seconde = (ajouter_une_seconde % 3600) % 60 ;

  printf( " après une seconde le temps seras : %d\t%d\t%d\t " , heure ,  minute , seconde) ;

  return EXIT_SUCCESS ;
}


