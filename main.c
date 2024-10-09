#include "pi.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int k;
    int r;
    printf("k : ");
    r = scanf("%d",&k);
    if (!r || k<1 || k>15){
        printf("entier naturel € [[1;15]] attendu\n");
    }
    else {
        int* n;
        n = malloc(sizeof(int));
        double eps = 0.1;
        for (int i=0;i<k;i++){
            eps = eps/10;
        }
        printf("\nπ : %16.15f\n",M_PI);
        printf("\nLeibniz :\nApproximation : %16.15f\n",pi_leibniz(eps,n));
        printf("n : %d\n",*n-1);
        printf("\nMachin :\nApproximation : %16.15f\n",pi_machin(eps,n));
        printf("n : %d\n",*n-1);
        printf("\nRamanujan (pour n=2) :\nApproximation : %16.15f\n",pi_ramanujan(2));
        free(n);
    }
    return EXIT_SUCCESS ;
}