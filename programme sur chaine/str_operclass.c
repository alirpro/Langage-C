# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# define ADDITION "ADD"
# define MULTIPLICATION "MUL"
# define END "END"

# define LONG_MAX  32

int main(void){
  char chaine[LONG_MAX + 1] ;
  int cpt = 0 ;
  char *p ;
  while (scanf("%32s" , chaine) == 1) {
    ++cpt ;
    printf("%d\t%s\t" , cpt ,chaine) ;
    long int val = strtol( chaine ,&p , 10);

    if ( *p == '\0' && errno == 0) {
      printf("operand = %ld\n" , val) ;
    }
    if (strcmp(ADDITION, chaine) == 0 ) {
      printf("operator \n") ;
    }
    else {
      printf("rejected form\n") ;
      }
       }
    return EXIT_SUCCESS;

}
