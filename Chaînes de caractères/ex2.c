#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


size_t nb_occurences(const char s[], char c) ;

int main(void) {
  char s;
  char chaine[MAX] ;

  if (scanf("%c%s", s , chaine) != 2) {
  printf("Erreur de saisie\n");
  exit(EXIT_FAILURE);
  }

  size_t a = nb_occurences(s,*c);
  printf("nombre de occurence est : %zu\n", a);

  return EXIT_SUCCESS;
}

size_t nb_occurences(const char s[], char c){
  char chaine[11] ;
  size_t n = 0 ;
  int b = 0;
  while ( chaine[n] != '0\ ' ) {
    ++n ;
    if s[] == 'c' ;
     compteur = ++b
  }
}
