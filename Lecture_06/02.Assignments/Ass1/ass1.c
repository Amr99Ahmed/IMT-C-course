#include <stdio.h>

/*
	Write a C code that defines a function which takes an array as input argument 
	and apply the bubble sorting algorithm on it, then print the result
*/

void main(void)
{
	int i , j , arr[10] , temp;
	for(i=0;i<10;i++)
	{
		printf("enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	int *p = arr ;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if ( *(p+j) < *(p+i) )
			{
				temp = *(p+j);
				*(p+j) = *(p+i);
				*(p+i) = temp;
			}
		}
	}
	for (i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}