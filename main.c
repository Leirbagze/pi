#include "pi.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
  {
    int* n;
    n = malloc(sizeof(int));
    double eps = 0.1;
    for (float k=1;k<=5;k++){
      eps = eps/10;
    }
    printf("Leibniz :\npi : %lf\nn : %d\n\n",pi_leibniz(eps,n),*n);
    printf("Machin :\npi : %lf\nn : %d\n\n",pi_machin(eps,n),*n);
    //printf("Ramanujan :\npi : %lf\n",pi_ramanujan(2));
    free(n);
    return EXIT_SUCCESS ;
  }
