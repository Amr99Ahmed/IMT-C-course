#include <stdio.h>

//Write a C code that calculates the summation of an array using a pointer on its first element.

void main(void)
{
	int i , arr[10] , sum=0 , *p ;
	for(i=0;i<10;i++)
	{
		printf("enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	p = arr;
	for(i=0;i<10;i++)
	{
		sum += *(p+i);
	}
	printf("sum= %d",sum);
}