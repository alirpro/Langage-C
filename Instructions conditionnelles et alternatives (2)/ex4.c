#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) ;

int main(void){
  int x ;
  int y ;
  int z ;
  if (scanf("%d%d%d" , &x , &y , &z) != 3){
    printf("Erreur : échec lors de la lecture des deux entiers\n") ;
    exit(EXIT_FAILURE) ;
  }

  int m = max(max(x, y) , max(y, z)) ;
  printf("%d\n" , m) ;

  return EXIT_SUCCESS ;

}



int max(int x, int y){
  int m = y ;
  if (x > y) {
    m = x ;
  }
    return m ;
}
