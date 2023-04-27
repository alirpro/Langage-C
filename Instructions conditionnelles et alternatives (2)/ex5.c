#include <stdio.h>
#include <stdlib.h>

int main(void){
  printf("Entrer un caractère : \n" ) ;
  char c ;
  if (scanf("%c" , &c) != 1){
    printf("Erruer \n") ;
    exit(EXIT_FAILURE) ;
  }
   if (c >= 'A' && c <='Z') {
     printf("MAJUSCULE\n") ;

  }else if (c >= 'a' && c <= 'z'){
    printf("MINISCULE\n") ;
  } else if(c >= '1' && c <= '9') {
     printf("CHIFFRE\n") ;
  } else {
     printf("AUTRES\n") ;
  }
  exit(EXIT_SUCCESS) ;
}


