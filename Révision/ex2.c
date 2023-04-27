# include <stdio.h>
# include <stdlib.h>

int caractere(char c) ;

int main(void){
  char c ;
  if(scanf( "%c" , &c) != 1){
    printf("erreur de saisie\n") ;
    exit (EXIT_FAILURE) ;
  }
  int a = caractere(c) ;
  printf("%d" , a) ;
  return EXIT_SUCCESS ;
}



 int caractere(char c){
   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' )) {
     return +1 ;
   }
    else if (c>='0' && c<='9'){
      return 0 ;
   }
    else {
    return -1 ;
  }
}
