// Importing required libraries
#include <stdio.h>
#include <stdlib.h>

// Function for tower of hanoi
void hanoi(int n, int source, int destination, int inter){

    // Base case when n = 1
    if(n==1){
        printf("Move disc from %d to %d\n", source, destination);
    }
    // When n not equal to 1, function is recursively called
    else{
        hanoi(n-1, source,inter, destination);
        printf("Move disc from %d to %d\n", source, destination);
        hanoi(n-1, inter, destination,source);
    }
}

int main(void){

    int h=3;

    printf("Please input the number of discs: ");
    scanf("%d", &h);

    printf("Solution for %d discs: \n",h);
    hanoi(h,1,3,2);
    return 0;
}
