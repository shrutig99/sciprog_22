#include <stdio.h>
#include <stdlib.h>
#include "mat_mul.c"

int main(void)
{

    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];

    int i,j,k;

    // Initialize Matrix A
    for (i=0;i<n;i++){
        for(j=0;j<p;j++){
            A[i][j] = i + j;
        }
    }

    // Initialize Matrix B
    for (i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j] = i - j;
        }
    }

    // Initialize Matrix C
    for (i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j] = 0.0;
        }
    }
    // Function calling
    matmul(n,p,q,A,B,C);

    // Printing the matrices
    printf("\nThis is Matrix A:\n");
    for (i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is Matrix B:\n");
    for (i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%3.0f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is Matrix C:\n");
    for (i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%3.0f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
