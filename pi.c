#include "pi.h"
#include <math.h>
#include <stdio.h>

int factorielle(int n){
  return f(n,1);
}

int f(int n, int acc){
  if (n <= 1){
    return acc;
  }
  else {
    return f(n-1,n*acc);
  }
}

double pi_leibniz(double eps, int* n){
    double pi = 0 ; *n = 0 ;
    do {
      pi += 4.*(pow(-1.,*n))/(2*(*n)+1);
      (*n)++;
    }
    while (fabs(M_PI - pi) > eps);
    return pi;
  }

double pi_machin(double eps, int* n){
    double pi = 0 ; *n = 0 ;
    while (fabs(M_PI - pi) > eps){
      pi += 4.*((pow(-1.,*n))/(2*(*n)+1))*(4.*pow(1./5.,2*(*n)+1)-pow(1./239.,2*(*n)+1));
      (*n)++;
    }
    return pi ;
}

// FACULTATIF
double pi_ramanujan(int n){
    double pi = 0 ;
    for (int i=0;i<n;i++) {
      pi += (2*sqrt(2)/pow(99.,2))*(factorielle(4*i)/pow(factorielle(i),4))*((1103. + 26390.*i)/(pow(396.,4*i)));
    }
    return 1./pi ;
}
