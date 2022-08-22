#include <stdio.h>
 
/*
	Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
	Then print the minimum and the maximum of the values.
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
	printf("the maximum value is: %d \n",arr[9]);
	printf("the minimum value is: %d",arr[0]);
}