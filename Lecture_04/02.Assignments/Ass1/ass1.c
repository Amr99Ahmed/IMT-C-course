#include <stdio.h>

/*
	Write a C program the implement 2 function:
		1- Function to get the maximum of 4 values
		2- Function to get the minimum of 4 values
		The program will ask the user first to enter the 4 values, 
		then print the maximum number and minimum number of them.
*/
int GetMax(int,int,int,int);
int GetMin(int,int,int,int);

void main(void)
{
	int num1,num2,num3,num4,max,min;
	printf("enter number 1: ");
	scanf("%d",&num1);
	printf("enter number 2: ");
	scanf("%d",&num2);
	printf("enter number 3: ");
	scanf("%d",&num3);
	printf("enter number 4: ");
	scanf("%d",&num4);
	
	max = GetMax(num1,num2,num3,num4);
	min = GetMin(num1,num2,num3,num4);
	
	printf("maximum number is: %d\n",max);
	printf("minimum number is: %d",min);
}

int GetMax(int x,int y,int z,int f)
{
	if (x>y && x>z && x>f)
	{
		return x;
	}
	else if(y>x && y>z && y>f)
	{
		return y;
	}
	else if(z>x && z>y && z>f)
	{
		return z;
	}
	else if(f>x && f>y && f>z)
	{
		return f;
	}
}

int GetMin(int x,int y,int z,int f)
{
	if (x<y && x<z && x<f)
	{
		return x;
	}
	else if(y<x && y<z && y<f)
	{
		return y;
	}
	else if(z<x && z<y && z<f)
	{
		return z;
	}
	else if(f<x && f<y && f<z)
	{
		return f;
	}
}