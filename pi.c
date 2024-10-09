#include "pi.h"
#include <math.h>

double pi_leibniz(double eps, int* n){
    double pi = 0 ; *n = 0 ;
    while (fabs(M_PI - pi) > eps){
      pi += 4.*(pow(-1.,*n))/(2*(*n)+1);
      (*n)++;
    }
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
    for (n=0;n<2;n++) {
      pi += 4.*((pow(-1.,n))/(2*(n)+1))*(4.*pow(1./5.,2*(n)+1)-pow(1./239.,2*(n)+1));
      (n)++;
    }
    return 1./pi ;
  }
