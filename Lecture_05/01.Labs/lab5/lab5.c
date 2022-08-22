#include <stdio.h>

/*
	Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
	Then ask the user to enter a value to search about, if the value existing in the 10 values, 
	the program will print “Value Found”. If the value is not exist, the program will print “Value Not Exist”.
	Use Binary Searching Algorithm.
*/
void main(void)
{
	int array[10];
	int size = 10;
	int i,j,z,search;
	int Left, Right, counter;
	int FoundFlag = 0;

	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}
	
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				/* Swap */
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
	
	printf("Please Enter number to search:  ");
	scanf ("%d",&search);
	
	Left  = 0;
	Right = size-1;
	
	while ( Left <= Right )
	{
		counter = Left + (Right-Left)/2;
		
		if ( search == array[counter] )
		{
			FoundFlag =1;
			break;
		}
		
		else if ( search > array[counter] )
			Left = counter + 1;
		
		else
			Right = counter - 1;
	}
	
	if (FoundFlag == 1)
		printf("Value is Found");
	else
		printf("Value Not Exist");
	
}