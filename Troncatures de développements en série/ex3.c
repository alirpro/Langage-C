#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define PRI_FLT "13.10lf"
#define N_MAX 9

//  tronctature_deuxn: renvoie une valeur approximative de cos
//  AE : n>=0
//  AS : tronctature_deuxn(x, n) == somme((-1)^(j) * x^2j / 2^(j+1) ; j == 0 ... n)

double troncature_deuxn(int n, double x);

int main(void) {
  double x;
  while (scanf("%lf\n", &x) == 1) {
   //  IB : 0 <= k && k <= N_MAX + 1
    //    && les lignes avec les troncatures en x de 0 à k - 1 ont été affichées
    //        conformément à la spécification
    //  QC : k
    for (int k = 0; k <= N_MAX; ++k) {
      printf("%" PRI_FLT "\t%d\n", troncature_deuxn(k, x), k);
    }
   printf("%lf\n" , cos(x) );
  }
}

double troncature_deuxn(int n, double x) {
  int k = 0;
  double t = 1;
  double s = 1;
  //  IB : 1 <= k && k <= n
  //    && t == (-1)^k) (x^2k)/(2k)!
  //    && s == somme((-1)^(j) * x^2j / 2(j+1) ; j == 0 ... k)
  //  QC : k
  if (n == 0) {
    return x;
  }
  while (k < n) {
    k++;
    t = t * (-1) * (x * x) / ((2 * k - 1) * (2 * k));
    s += t;
  }
  return s;
}

