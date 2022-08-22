#include <stdio.h>

/*
	Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
	Then print the summation and the average of the values entered.
*/
void main(void)
{
	int i , sum = 0 , arr[10] ;
	float average;
	for(i=0;i<10;i++)
	{
	printf("please enter number %d: ",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum += arr[i];
	}
	average = sum / 10.0 ;
	printf("Sum of array elements = %d \n ",sum);
	printf("Average of array elements = %f",average);
}