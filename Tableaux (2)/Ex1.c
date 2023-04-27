#include <stdlib.h>
#include <stdio.h>

#define MAXIMUM 46

void initialisation_fibo(int t[], size_t nbr);

void affiche_val_entier_tab(int t[], size_t longueur);

int main(void){
  size_t longueur = MAXIMUM + 1;
  int t[longueur];
  initialisation_fibo(t, longueur);
  printf("Entrer les valeurs de la suite de Fibonacci que vous voulez ");
  printf("affichez , situe entre 0 et 46 : \n");
  affiche_val_entier_tab(t,longueur);
  return EXIT_SUCCESS;
}

void initialisation_fibo(int t[], size_t nbr){
  t[0] = 0;
  t[1] = 1;
  for(size_t k=2; k<nbr; ++k){
    t[k]=t[k-1] +t[k-2];
  }
}

void affiche_val_entier_tab(int t[], size_t longueur){
  int val;
  while(scanf("%d", &val) == 1){
    if(val < 0 || (size_t)val >= longueur){
      printf("Erreur\n");
    } else{
      printf("La valeur %d=%d\n", val, t[val]);
    }
  }
}
