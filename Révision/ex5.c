# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# define MAX 10

bool est_parfait(int nb) ;

int main(void){
    size_t n = MAX ;
    size_t t[n] ;


  for (size_t k = 0 ; k < n ; ++k){
    if(scanf("%lu" , &t[k]) != 1){
      printf("erreur de la saisie\n") ;
      exit (EXIT_FAILURE) ;
    }
    }
  int a = est_parfait(t) ;
  for (size_t l = 0 ; l < n ; ++l){
      printf(" %lu\n" , t[a]) ;
  printf("%d",a) ;
  return EXIT_SUCCESS ;
}

int est_parfait(int n){
  int b = 0 ;
  int
  for (int k = 0 ; k < n ; ++k){
    if (n % k == 0) {
      b = b + k ;
      ++k ;
    }
  }
  if (b == n) {
    return n;
    }
}

