#include <stdio.h>

/*
Write a C code that ask the user to enter 2 values and save them in two variables, 
then the program sends these variables to function that calculates the summation and subtraction of them, 
the function returns the 2 results and return them in two pointers received as input arguments . 
The program then print the 2 results.
*/

void ADDSUB(int *a, int *b);

void main (void)
{
	int w, z ;
	printf("Please enter the first number :");
	scanf("%d",&w);
	printf("Please enter the second number :");
	scanf("%d",&z);
	ADDSUB(&w,&z);
	printf("Summation = %d \n",w);
	printf("subtraction = %d \n",z);
	
	return ;
}

void ADDSUB(int *a, int *b)
{
    int temp = *a + *b;
    *b = *a - *b;
    *a = temp;
}

