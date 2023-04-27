#include <stdlib.h>
#include <stdio.h>

int main(void){

  printf( " Penser très fort à deux nombre x et y") ;
  printf(" calculer la somme s et la différence d de ces deux nombres ") ;

  int s , d ;
  scanf("%d%d" , &s , &d) ;

  int x , y ;

  y = (s - d) / 2 ;
  x = s - y ;

  printf("les valeurs de x et y sont : %d %d" , x , y ) ;




  return EXIT_SUCCESS ;
}

