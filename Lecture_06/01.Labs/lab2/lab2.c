#include <stdio.h>

/*
	Write a C code that ask the user to enter 2 values and save them in two variables, 
	then the program sends these variables by address to a function that returns the summation of them. 
	The program then prints the result.
*/

int result(int *,int *);

void main(void)
{
	int x , y , res ;
	printf("please enter value 1: ");
	scanf("%d",&x);
	printf("please enter value 2: ");
	scanf("%d",&y);
	res = result(&x,&y);
	printf("the result is: %d",res);
}

int result(int *a,int*b)
{
	return *a + *b;
}