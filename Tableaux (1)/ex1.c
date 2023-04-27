# include <stdlib.h>
# include <stdio.h>
# define table 5

int main(void){
  size_t t[table] = { 0 } ;

  for (size_t k = 0 ; k < table ; ++k){
    if(scanf("%lu" , &t[k]) != 1){
      printf("erreur de la saisie\n") ;
      exit (EXIT_FAILURE) ;
    }
    for (size_t l = 0 ; l < table ; ++l){
      printf(" %lu\n" , t[l]) ;
    }
    }
      exit (EXIT_SUCCESS) ;
  }

