# include <stdlib.h>
# include <stdio.h>

int main(void){
  int n ;

  printf("entrer une nombre");
  if(scanf("%d" ,&n) != 1){
    printf ("erreur de saisie\n") ;
    return EXIT_FAILURE ;
  }
  int z = 0 ;
  while(n >= 1){
    z = z * 10 + n % 10 ;
    n = n/10 ;
    }
  printf("%d" , z) ;
  return EXIT_SUCCESS ;
}

