#include <math.h>
#include "parameter.h"


float preComp[N];

float get_denominator(int i, int j) {
    /*
     *
     */ 
    return preComp[i-j-N*((int)2*(i-j)/N)];
    
}


int precompute_denom()   {
    /*
     *
     */ 
    int i = 0;
    for (i;i < N/2; i++) {
        preComp[i] = pow(i,SIGMA);
    }
    for (i; i <N; i++)  {
        preComp[i] = pow(N-i,SIGMA);
    }
}


double precompute_normalisation() {
    double c;
    for (int j = 1; j < N; j++) {
        //printf("comp %f\n",pow(j,-1*SIGMA));

        c = c  + pow(j,-1*SIGMA);
    }
    return 1/c;

}

