#include <stdio.h>
#include <stdlib.h>

// Function for array allocation
int *allocatearray(int n){
    int *p;
    p=(int *) malloc((n)*sizeof(int));

    // To find and deal with any errors
    if(p==NULL) {printf("Error in allocating the memory\n");}
    return p;
}

// function to fill with ones
void fillwithones(int *array, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        array[i]=1;
    }
}

// Print the array
void printarray(int *array, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, array[i]);
    }
}

// Free allocated space in array
void freearray(int *array){
    free(array);
}

int main(void){
    
    int length, *a;
    
    printf("Please enter the size of the array:\n");
    scanf("%d", &length);

    a=allocatearray(length);
    fillwithones(a, length);
    printarray(a,length);
    freearray(a);

    // allocating NULL value to array
    a=NULL;
    return 0;
}
