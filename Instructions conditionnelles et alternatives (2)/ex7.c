#include <stdio.h>
#include <stdlib.h>



void echange(int *x, int *y) ;

void trie( int *x, int *y, int *z) ;

int main(void){
  int x;
  int y;
  int z;
  if(scanf("%d%d%d" , &x , &y , &z) != 3) {
    printf("erreur de saisie\n");
    exit (EXIT_FAILURE);
  } else {
    trie( &x , &y , &z);
      printf("x=%d, y=%d, z=%d\n" , x,y,z);
    }
  exit (EXIT_SUCCESS);
}

void echange(int *x, int *y){
  int t = *x;
  *x = *y;
  *y = t;
}


void trie(int *x, int *y, int *z){
  if (*x > *y){
    echange(x , y) ;
  }
  if ( *y > *z) {
    echange(y , z);
  }
}
