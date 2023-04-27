#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x;
  if (scanf("%d", &x) != 1) {
    printf("Erreur de saisie\n");
    return EXIT_FAILURE;
  }

  int v = 1;
  for (int k = 1; k <= x; ++k) {
    v = 2 * v;
    if (k % 1000000 == 0){
      printf("%d\r" , k) ;
    }
  }
  printf("\nLe resultat du calcul est %d\n", v);

  return EXIT_SUCCESS;

}
