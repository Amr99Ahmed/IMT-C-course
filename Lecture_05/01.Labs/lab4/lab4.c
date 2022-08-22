#include <stdio.h>

/*
	Write a C code that ask the user to enter 10 values and save them in an array using a for loop. 
	Then ask the user to enter a value to search about, if the value existing in the 10 values, 
	the program will print “Value Exists x times” where x defines how many times the value exists. 
	If the value is not exist, the program will print “Value Not Exist”. Use Linear Searching Algorithm.
*/

void main (void)
{
	int i , arr[10] , x , c=0 ;
	for(i=0;i<10;i++)
	{
		printf("enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the number to search");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if ( arr[i] == x )
		{
			c++;
		}
	}
	if(c == 0 )
	{
		printf("the number does not exist");
	}
	else if(c!=0)
	{
		printf("the number exists %d times",c);
	}
}