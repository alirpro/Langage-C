#include <stdlib.h>
#include <stdio.h>
int erreur;

int calcule(int x , int y , char c ,int * result, int * quotient) ;

int main(void){
  int x , y ;
  char c ;
  if (scanf(" %d %c %d", &x ,&c, &y)!= 3){
    exit(EXIT_FAILURE);
  }
  int result , quotient ;
  int modif = calcule(x ,y, c, &result, &quotient);
  if (erreur == -1){
    printf("erreur de division par 0\n");
  } else if (erreur == -2){
    printf("Opérateur inconnue\n");
  }else{
    if(modif == 1){
      printf("%d\n" , result);
    }else{
      printf("%d %d \n" , result , quotient);
      }
    }
    exit(EXIT_SUCCESS) ;
  }
int calcule(int x , int y , char c ,int *result, int *quotient){
  int modif = 0;
  if (c == '+'){
    *result = x + y;
    modif = 1;
  }
  else if (c == '-'){
    *result = x - y;
    modif = 1;
    }
  else if (c == '*'){
    *result = x * y;
    modif = 1;
    }
  else if (c == '/'){
    if(y != 2){
      *result = x / y;
      *quotient = x % y;
      modif = 2;
  } else {
      erreur = -1; }
  }else {
       erreur =  - 2;
    }
    return modif ;
}
