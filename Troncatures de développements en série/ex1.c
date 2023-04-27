#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define PRI_FLT "13.10lf"
#define N_MAX 9

//  tronctature_deuxn_plusun: renvoie une valeur approximative de cos
//  AE : n>=0
//  AS : tronctature_deuxn_plusun(x, n) == somme((-1)^(j) * xç2j / 2^(j+1) ; j == 0 ... n)


double troncature_deuxn_plusun(int n, double x);

int main(void) {
  double x;
  while (scanf("%lf\n", &x) == 1) {
    //  IB : 0 <= k && k <= N_MAX + 1
    //    && les lignes avec les troncatures en x de 0 à k - 1 ont été affichées
    //        conformément à la spécification
    //  QC : k
    for (int k = 0; k <= N_MAX; ++k) {
      printf("%" PRI_FLT "\t%d\n", troncature_deuxn_plusun(k, x), k);
    }
  printf("%lf\n" , sinh(x) );
  }
}

double troncature_deuxn_plusun(int n, double x) {
  int k = 0;
  double t = x;
  double s = x;
  //  IB : 1 <= k && k <= n
  //    && t == (-1)^k) (x^2k)/(2k)!
  //    && s == somme((-1)^(j) * x^2j / 2(j+1) ; j == 0 ... k)
  //  QC : k
  if (n == 0) {
    return x;
  }
  while (k < n) {
    k++;
    t = t * (x * x) / ((k * 2) * (k * 2 + 1));
    s += t;
  }
  return s;
}
