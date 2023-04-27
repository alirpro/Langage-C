#include <stdio.h>
#include <stdlib.h>

#define LONGUEUR 10

void affiche_decimal_tab(int t[], size_t nbr);

void initialisation_tab_decimaux(int t[]);

int main(void){
  printf("Entrez jusqu'a 10 entier : \n");
  int t[LONGUEUR]={0};
  initialisation_tab_decimaux(t);
  affiche_decimal_tab(t,LONGUEUR);
  return EXIT_SUCCESS;
}

void affiche_decimal_tab(int t[], size_t nbr){
  for(size_t k=0; k<nbr; ++k){
    if(t[k]>0){
      printf("%d nombre se terminant par %zu\n",t[k],k);
    }
  }
}

void initialisation_tab_decimaux(int t[]){
  int valeur;
  int valeur_decimal;
  while(scanf("%d",&valeur)==1){
    valeur_decimal = valeur%10;
    t[valeur_decimal]++;
  }
}
