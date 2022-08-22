#include <stdio.h>

/*
	Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
	Then print the values entered by the user in reverse order using another for loop.
*/

void main(void)
{
	int i,arr[10];
	for(i=0;i<10;i++)
	{
		printf("please enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}