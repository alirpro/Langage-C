#include <stdio.h>
#include <stdlib.h>

int time_to_sec(int h,int m, int s);

int main(void){
  int h , m ,s;
  scanf("%d%d%d", &h, &m, &s);

  int valeur_en_sec = time_to_sec(h, m, s);
  printf("%d", valeur_en_sec);

  return EXIT_SUCCESS;
}

int time_to_sec(int h,int m, int s) {
  int valeur_en_sec;
  valeur_en_sec = (h * 3600) + (m * 60) + s;
  return valeur_en_sec ;
}
