#include <stdlib.h>
#include <stdio.h>

int main(void){
  printf(" Entrer une valeur en seconde(s) : ") ;

  int valeur_en_seconde ;
  scanf( "%d" , &valeur_en_seconde) ;

  int heures, minutes, secondes ;

  heures= valeur_en_seconde / 3600 ;
  minutes = (valeur_en_seconde % 3600) / 60 ;
  secondes = (valeur_en_seconde % 3600) % 60 ;

  printf(" la valeur en heure(s) minute(s) seconde(s) est : %d\t%d\t%d" , heures , minutes , secondes) ;


  return EXIT_SUCCESS ;
}
