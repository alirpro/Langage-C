# include <stdlib.h>
# include <stdio.h>
# define table 5

int somme(int t[]) ;
int main(void){
int t[table] = { 0 } ;

  for (size_t k = 0 ; k < table ; ++k){
    if(scanf("%d" , &t[k]) != 1){
      printf("erreur de la saisie\n") ;
      exit (EXIT_FAILURE) ;
    }
    int a = somme(t) ;
    printf("le resultat de somme est : %d\n" , a) ;
  }
  return EXIT_SUCCESS ;
}

int somme(int t[]){
  int resultat = 0 ;
  for (size_t l = 0 ; l < table ; l++) {
    resultat =  resultat + t[l] ;
  }
  return resultat ;
}
