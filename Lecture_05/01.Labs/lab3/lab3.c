#include <stdio.h>

/*
	Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
	The code then apply the bubble sorting algorithm and then print the values after sorting.
*/

void main (void)
{
	int i , j ,arr[10] , temp;
	for(i=0;i<10;i++)
	{
		printf("enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if ( arr[j] > arr[j+1] )
            {
               temp= arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
            }
        }
    }
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}