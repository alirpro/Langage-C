#include <stdlib.h>
#include <stdio.h>

int main(void){
  int nbr ;

  printf("Entrez un entier pour calculer sa factorielle\n");
  if (scanf("%d", &nbr) != 1){
    printf("erreur de saisie\n") ;
    return EXIT_FAILURE ;
  }

    int f = 1 ;
  for (int i = 1; i <= nbr; i++){
    f = f * i;
    printf("Factorielle de %d = %d\n", nbr, f);
}

  return EXIT_SUCCESS ;
}

