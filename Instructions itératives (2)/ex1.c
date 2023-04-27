# include <stdlib.h>
# include <stdio.h>


int somme(int n, int m) ;

int main(void){
  int n , m ;
  if(scanf("%d%d" ,&n ,&m) != 2){
    printf ("erreur de saisie\n") ;
    return EXIT_FAILURE ;
  }
  else {
    int r = somme(n,m) ;
    printf("%d\n", r) ;
  }
  return EXIT_SUCCESS;
}

int somme(int n, int m){
  int somme = 0;
  while(m <= n){
    somme = somme + m;
    ++m;
  }
  return somme;
}

