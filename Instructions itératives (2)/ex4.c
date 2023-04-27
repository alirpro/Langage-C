# include <stdlib.h>
# include <stdio.h>

int main(void){
  int n ;

  printf("entrer une nombre");
  if(scanf("%d" ,&n) != 1){
    printf ("erreur de saisie\n") ;
    return EXIT_FAILURE ;
  }
  int compteur = 0 ;
  for (int k = 1; k <= n ; ++k){
    compteur +=1 ;
    if(k % 3 == 0){
      printf("%d est un multiple de 3 \n" ,k) ;
    } else {
      printf("%d n'est pas un multiple de 3\n" ,k) ;
    }
  }
  printf("le nombre de iteration est : %d" , compteur) ;

  return EXIT_SUCCESS ;
}


