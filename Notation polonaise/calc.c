# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# define LONG_MAX 8
# define ADDITION "ADD"
# define MULTIPLICATION "MUL"
# define END "END"
# define SOUSTRACTION "SUB"
# define QUOTIENT "QUO"
# define RESTE "REM"


int main(void){
  long int stockage[8] ;
  char pile[LONG_MAX + 1] ;
  int h  = 0 ;
  char *p ;

  while (scanf("%8s" , pile) == 1) {
    long int val = strtol( pile ,&p , 10);
    if ( *p == '\0' && errno == 0) {
      printf("value = %ld\n" , val) ;
      stockage[h] = val ;
      ++h ;
    }
    else if(strcmp(pile , ADDITION) == 0 && h >= 2) {
     stockage[h-2] =  stockage[h-2] + stockage[h-1] ;
     stockage[h-1] = 0 ;
     --h ;
   }
     else if(strcmp(pile , SOUSTRACTION) == 0 && h >= 2) {
     stockage[h-2] =  stockage[h-2] - stockage[h-1] ;
     stockage[h-1] = 0 ;
     --h ;
   }
   else if(strcmp(pile , RESTE) == 0 && h >= 2) {
     stockage[h-2] =  stockage[h-2] % stockage[h-1] ;
     stockage[h-1] = 0 ;
     --h ;
   }
     else if(strcmp(pile , QUOTIENT) == 0 && h >= 2) {
     stockage[h-2] =  stockage[h-2] / stockage[h-1] ;
     stockage[h-1] = 0 ;
     --h ;
    }

    else if(strcmp(pile , MULTIPLICATION) == 0 && h >= 2) {
      stockage[h-2] =  stockage[h-2] * stockage[h-1] ;
      stockage[h-1] = 0 ;
      --h ;

    }
    else if(strcmp(pile , END) == 0 && h == 1) {
      printf("%ld\n" , stockage[h-1]) ;
    }
    else {
      return EXIT_FAILURE ;

  }
      }
  return EXIT_SUCCESS ;
}









