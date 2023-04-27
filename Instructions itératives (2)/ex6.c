#include <stdio.h>
#include <stdlib.h>

double max(double x, double y) ;

int main(void){
  double x ;
  double y ;
  double z ;
  if (scanf("%lf%lf%lf" , &x , &y , &z) != 3){
    printf("Erreur : échec lors de la lecture des deux entiers\n") ;
    exit(EXIT_FAILURE) ;
  }

  double m = max(max(x, y) , max(y, z)) ;
  printf("%lf\n" , m) ;

  return EXIT_SUCCESS ;

}

double max(double x, double y){
  double m = y ;
  if (x > y) {
    m = x ;
  }
    return m ;
}
