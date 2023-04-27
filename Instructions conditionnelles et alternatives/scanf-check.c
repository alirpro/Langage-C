#include <stdlib.h>
#include <stdio.h>

int main(void){
  printf("Saisissez deux entiers pour effectuer la division\n") ;

  int a = 0 ;
  int b = 0 ;
  if (scanf("%d%d" , &a , &b) != 2 || b == 0){
    printf("Erreur \n") ;
    exit(EXIT_FAILURE) ;
  } else {


  printf("%d / %d =\n" , a , b) ;
  printf("%d\n" , a/b) ;

  }

  return EXIT_SUCCESS ;
}
