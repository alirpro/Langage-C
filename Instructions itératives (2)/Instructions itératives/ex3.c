# include <stdio.h>
# include <stdlib.h>

int somme_impair(int n) ;

int main(void){
  int n ;

  if (scanf("%d" , &n) != 1){
    printf("erreur de saisie\n") ;
    return EXIT_FAILURE ;
  }
  else {
    int r = somme_impair(n) ;
      printf("\nLe resultat est %d\n" , r) ;

  }
  return EXIT_SUCCESS ;
}


int somme_impair(int n){
  int s = 0 ;
  for (int k = 0 ; k < n ; ++ k){
    if(k%2 != 0) {
    s +=  k ;
  }
  }
   return s ;
}

