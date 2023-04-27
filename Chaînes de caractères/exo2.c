#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int nb_occurencet(char s[], char c){
  int nb_occ=0, i=0;
  while(s[i]!='\0'){
    if(s[i]==c)
    nb_occ++;
    i++;
    }

    return nb_occ;
 }
int main(){
  char chaine[20],c;
  int resultat;
  printf("introduire votre chaine:");
  scanf("%s",chaine);
  printf("le caracter recherche ?\n");
  c=getchar();
  resultat=nb_occurencet(chaine,c);
  printf("nombre d'ocurence est %d",resultat);
  return 0;

}
