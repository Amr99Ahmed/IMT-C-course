#include <stdio.h>

/*
	Write C code that will ask the user to enter 2 numbers, 
	then the main function will call a function named Get_Max 
	that takes the 2 values entered by the user then return the maximum of them.

	The main function then will print the returned value
*/

int GetMax(int,int);

void main(void)
{
	int x,y,max;
	printf("please enter value 1: ");
	scanf("%d",&x);	
	printf("please enter value 2: ");
	scanf("%d",&y);
	max = GetMax(x,y);
	printf("the maximum value is %d",max);
}

int GetMax(int num1,int num2)
{
	int res;
	res = (num1 > num2) ? num1 : num2;
	return res;
}