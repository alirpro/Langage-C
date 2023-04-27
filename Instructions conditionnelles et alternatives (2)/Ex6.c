#include <stdio.h>
#include <stdlib.h>

int main(void){
  printf("Entrer 4 entiers prix 1, prix 2, nombres de kms et nombre de jours\n") ;
  int p1, p2 , km , jrs ;
  if (scanf("%d%d%d%d" , &p1 , &p2, &km , &jrs) != 4){
    printf("Erruer \n") ;
    exit(EXIT_FAILURE) ;
  }



  exit(EXIT_SUCCESS) ;
}


cas 1 forfaitaire :

1 jours = 500 kms
1 jours = 80 euros
si client depasse 500km dans 1 jours
le reste de kms * p1

cas 2 :

2000 kms  * prix p2
si le km > 2000
apres les 2k km = km * p2 - 11.5%
