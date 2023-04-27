# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>

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
      printf("value = %ld\n" , val) ;
    }
    else {
      printf("illegal value\n") ;
    }
    }
    return EXIT_SUCCESS;

}
