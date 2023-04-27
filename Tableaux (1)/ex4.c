# include <stdlib.h>
# include <stdio.h>
# define table 5

int somme(int t[]) ;
int max(int t[]) ;
int min(int t[]) ;
int main(void){
  int t[table] = { 0 } ;

  for (size_t k = 0 ; k < table ; ++k){
    int compteur = compteur +1 ;
    if(scanf("%d" , &t[k]) != 1){
      printf("erreur de la saisie\n") ;
      exit (EXIT_FAILURE) ;
    }
    int a = somme(t) - max(t) - min(t) ;
    int moyenne = a / compteur ;
    printf("le resultat de est : %d\n" , moyenne) ;
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

int max(int t[]){
  for(size_t l = 0 ; l < table ; ++l){
    if(t[l] > t[l+1]){
      printf(t[l]) ;
    }
    printf(t[l+1)) ;
  }
}

int min(int t[]){
  for(size_t l = 0 ; l < table ; ++l){
    if(t[l] > t[l+1]){
      printf(t[l+1]) ;
    }
    printf(t[l)) ;
  }
}






moyenne = somme / compteur ;
printf(moyenne) ;
