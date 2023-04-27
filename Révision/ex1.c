# include <stdio.h>
# include <stdlib.h>

int main(void){
  int f ;
  if(scanf("%d", &f) != 1){
    printf("erreur\n");
    exit (EXIT_FAILURE);
  }
  int c = (5*f-160)/9 ;
  printf("%d\n" , c) ;
}
