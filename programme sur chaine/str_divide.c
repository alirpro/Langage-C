#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 8

int main(void) {
  char chaine[MAX + 1];
  int compteur = 0;
  while (scanf("%8s", chaine) == 1) {
    ++compteur;
    printf("%d\t%s\n", compteur, chaine);
  }
  return EXIT_SUCCESS;
}
