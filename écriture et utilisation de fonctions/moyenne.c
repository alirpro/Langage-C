#include <stdio.h>
#include <stdlib.h>

double moyenne(double x , double y) ;

int main(void){
  printf(" Entrer quatre10 valeur pour faire leurs moyenne :") ;
  double a , b , c , d;
  scanf("%lf%lf%lf%lf" , &a , &b , &c , &d) ;

  double e = moyenne(moyenne(a , b) , moyenne(c , d));





  printf("la moyenne est %lf.\n" , e);



  return EXIT_SUCCESS ;
}



double moyenne( double x , double y){

  double resultat = (x+y)/2 ;

  return resultat ;

}
