#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool est_parfait(int nb);

int main(void){
  int nb;
  if(scanf( "%d" , &nb) != 1){
    printf("erreur de saisie\n") ;
    exit (EXIT_FAILURE) ;
  }
  bool a = est_parfait(nb);
  printf("%d\n", a);
  return EXIT_SUCCESS ;
}

bool est_parfait(int nb){
  int b = 0 ;
  for (int k = 0 ; k < nb ; ++k){
    if (nb % k == 0) {
      b = b + k ;
    }
  }
  if (b == nb) {
    return 1 ;
    } else {
      return 0 ;
    }
}
