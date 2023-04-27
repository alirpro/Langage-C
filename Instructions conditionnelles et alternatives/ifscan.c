#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Entrez un nombre:\n");

  int a;
  if (scanf("%d", &a) != 1){
  printf("Erruer \n") ;
  }

  printf("le double de %d est %d\n", a, 2 * a);

  return EXIT_SUCCESS;
}
