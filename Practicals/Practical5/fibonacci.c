#include <stdio.h>
#include <stdlib.h>

//Input arguments: f(n-1) and f(n-2)
//On exit, they will have values f(n) and f(n-1)
void fibonacci(long *a, long *b);

int main() {

    //Variable declaration and initialisation
    int n,i;
    long f0=0, f1=1;

    printf("Enter a positive integer n:\n");
    scanf("%d",&n);

    //Condition to check if the input is negative, if negative then exit
    if (n<1){
        printf("Number is not postive\n");
        exit(1);
    }

    printf("The fibonacci sequence is: \n");
    printf("%ld, %ld, ", f0, f1);

    //loop for calculating the fibonacci series
    for (i = 2; i <= n; i++)
    {
        fibonacci(&f1,&f0);
        printf("%ld, ",f1);
    }

    return 0;
}

//To find the next number in the series
void fibonacci(long *a, long *b){
    long next;
    //*a=f(n-1), *b=f(n-2) and next = f(n)
    next=*a + *b;

    //*a=f(n), *b=f(n-1)
    *b=*a;
    *a=next;
}
