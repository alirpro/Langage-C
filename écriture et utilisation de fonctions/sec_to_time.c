#include <stdlib.h>
#include <stdio.h>

int sec_to_time (int *h, int *m, int *s) ;

int main(void){
  printf(" Entrer une valeur en seconde(s) : ") ;

  int s ;
  scanf( "%d" , &s) ;

  int h , m ;

  int valeur_en_h = sec_to_time(&h , &m , &s) ;
  printf ("%d" , valeur_en_h) ;

  return EXIT_SUCCESS ;
}

int sec_to_time (int *h, int *m, int *s) {

  *h = *s / 3600 ;
  *m = (*s % 3600) / 60 ;
  *s = (*s % 3600) % 60 ;

  printf(" la valeur en heure(s) minute(s) seconde(s) est : %d\t%d\t%d" , *h , *m , *s) ;


  return EXIT_SUCCESS ;
}
