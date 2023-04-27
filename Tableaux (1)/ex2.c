# include <stdlib.h>
# include <stdio.h>
# define table 5

int max(int t[]){
  for(size_t l = 0 ; l < table ; ++l){
    if(t[l] > t[l+1]){
      printf(t[l]) ;
    }
    printf(t[l+1)) ;
  }
}

