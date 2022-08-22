#include <stdio.h>

//Write a C code that ask the user to enter a number and check if it is Even or Odd number

void main(void)
{
	int num ;
	printf("please enter number: ");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("Number is Even");
	}
	else if(num % 2 != 0)
	{
		printf("Number is odd");
	}
}