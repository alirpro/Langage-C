# include <stdlib.h>
# include <stdio.h>


int somme(int n, int m) ;

int main(void){
  double n , m ;
  if(scanf("%lf%lf" ,&n ,&m) != 2){
    printf ("erreur de saisie\n") ;
    return EXIT_FAILURE ;
  }
  else {
    double r = n + m ;
    printf("%lf\n", r) ;
  }
  return EXIT_SUCCESS;
}





