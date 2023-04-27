#include <stdlib.h>
#include <stdio.h>

int main(void){
  printf("Entrer 3 variable dans l'ordre : heure(s), minute(s) et seconde(s) : ");

  int heure,minute,seconde;
  scanf("%d%d%d", &heure , &minute , &seconde);

  int resultat_en_secondes;
  resultat_en_secondes = (heure*3600) + (minute*60) + seconde;

  printf("le total de seconde est : %d",resultat_en_secondes);

  return EXIT_SUCCESS;
}
