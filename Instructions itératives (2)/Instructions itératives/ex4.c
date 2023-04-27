# include <stdio.h>
# include <stdlib.h>

int somme_pair(int n) ;

int main(void){
  int n ;

  if (scanf("%d" , &n) != 1){
    printf("erreur de saisie\n") ;
    return EXIT_FAILURE ;
  }
  else {
    int r = somme_pair(n) ;
      printf("\nLe resultat est %d\n" , r) ;

  }
  return EXIT_SUCCESS ;
}


int somme_pair(int n){
  int s = 0 ;
  int p = 0 ;
  for (int k = 0 ; p < n ; ++ k){
    if(k%2 != 0) {
    s +=  k + 1;
    p += 1;
  }
  }
   return s ;
}

