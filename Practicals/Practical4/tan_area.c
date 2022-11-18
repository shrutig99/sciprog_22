// Importing required libraries
#include <stdio.h>
#include <math.h>

//Declaring global variable
float tanarr[12];

//Function declaration
float degtorad(int );
float traprule(int );

int main(){

    //Variable declaration and initialization
    int N=12, i;
    float area,deg,rad;

    //Calculate the value for tan(x) for each step of 5
    for (i = 0; i <= N; i++)
    {
        deg = i * 5.0;
        tanarr[i]=tan(degtorad(deg));
        printf("tanarr[%d] = %f\n",i,tanarr[i]);
    }

    area = traprule(N);

    printf("\nTrapezoidal result = %f, Exact value = %f\n",area,log(2.0));

    return(0);
}

float degtorad(int deg){
    return (M_PI * deg)/180.0; //converting degree to radian
}

float traprule(int N){
    float area;
    int i;
    //Calculate area by trapezoidal rule
    area=tanarr[0]+tanarr[N];

    //Calculate the area at points x1,x2...,x11 and add up
    for ( i = 1; i < N; i++)
    {
        area = area + 2*tanarr[i];
    }

    //Multiply area in radians by (pi/3)/(2*12)
    area= area * degtorad(60.0-0.0)/(2*N);
    return area;
}
