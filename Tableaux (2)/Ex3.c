#include <stdio.h>
#include <stdlib.h>

#define LONGUEUR 10

void affiche_decimal_tab_decroissant(int t[], size_t nbr);

void initialisation_tab_decimaux(int t[]);

int main(void){
  printf("Entrez jusqu'a 10 entier : \n");
  int t[LONGUEUR] = {0};
  initialisation_tab_decimaux(t);
  affiche_decimal_tab_decroissant(t,LONGUEUR);
  return EXIT_SUCCESS;
}

void affiche_decimal_tab_decroissant(int t[], size_t nbr){
  size_t boucle =0;
  size_t i_max =0;
  while(boucle<nbr){
    i_max = 0;
    for(size_t k=0; k<nbr;++k){
      if((size_t)t[k]>i_max){
        i_max=k;
      }
    }
    if(t[i_max]>0){
      printf("%d se terminant par %zu\n",t[i_max],i_max);
      t[i_max]=0;
    }
    ++boucle;
  }
}

void initialisation_tab_decimaux(int t[]){
  int valeur;
  int valeur_decimal;
  while(scanf("%d",&valeur)==1){
    valeur_decimal=valeur%10;
    t[valeur_decimal]++;
  }
}

