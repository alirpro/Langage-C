# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool est_premier(int nb) ;

int main(void){
  int nb ;
  if(scanf( "%d" , &nb) != 1){
    printf("erreur de saisie\n") ;
    exit (EXIT_FAILURE) ;
  }
  int a = est_premier(nb) ;
  printf("%d" , a) ;
  return EXIT_SUCCESS ;
}

bool est_premier(int nb){
  for (int k = 2 ; k < nb ; ++k){
    if (nb % k == 0) {
      printf("false\n") ;
      return false;
    }
  }
  printf("true\n") ;
  return true ;
}

