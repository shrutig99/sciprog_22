
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n);

int main(void) {

    int i, order;
    double e, *terms;

    // Input the polynomial
    printf("Please enter the required polynomial order\n");
    if(scanf("%d",&order)!=1){
        printf("Entered more than one number!");
        return 1;
    }

    //Allocate space for terms array
    terms = malloc(order*sizeof(double)); // malloc for dynamic memory allocation
    for (i = 0; i < order; i++)
    {
        terms[i]=1.0/(double)factorial(i+1);
        printf("e term for order %d is %1.14lf\n", order, terms[i]);
    }

    e=1.0;
    for (i = 0; i < order; i++)
    {
        e=e+terms[i];
    }

    free(terms);

    printf("\ne is estimated as %.14lf, with difference %.14lf", e, e-exp(1.0));

    return 0;
}

// To find factorial of a number
int factorial(int n){
    if (n<0){
        printf("Error: Number should be positive\n");
        return(-1);
    }
    else if(n==0){
        return(1);
    }
    else{
        return (n*factorial(n-1));
    }
}
