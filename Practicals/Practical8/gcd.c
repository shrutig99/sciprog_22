/*
 * Iterative and Recursive versions of Euclid's algorithm.
 *
 */

 // Importing necessary libraries
#include<stdio.h>

// Declaring functions with their parameters
int iterative_GCD(int , int );
int recursive_GCD(int , int );

int main()
{

  // Declaring int type variables
  int a,b,ierror;

  printf("Please enter two positive numbers: \n");
  ierror=scanf("%d %d", &a, &b);
  if(ierror !=2)
    {
        printf("Please enter two numbers\n");
        return 1;
    }

  if(a<=0 || b<=0)
    {
        printf("These numbers are not positive!\n");
        return 1;
    }

  //Printing GCD through iterative and recursive functions
  printf("Iterative GCD of %d and %d is %d\n",a,b,iterative_GCD(a,b));
  printf("Recursive GCD of %d and %d is %d\n",a,b,recursive_GCD(a,b));

  return 0;
}

//Defining function to calculate GCD through iterative method
int iterative_GCD(int a, int b)
{
  int temp;
  while(b!=0){
     temp=b;
     b=a%b;
     a=temp;
  }
  return a;
}

//Defining function to calculate GCD through recursive method
int recursive_GCD(int a, int b)
{
   if(b==0)
   {
       return a;
   }


   else
   {
       return(recursive_GCD(b,a%b));
   }


}
