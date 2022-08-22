#include <stdio.h>
#include <stdlib.h>

/*
	Write a C code that apply the bubble sorting algorithm on a set of numbers entered by the user. 
	The code shall ask the user to enter the number of values to be sorted, 
	then the code shall ask the user to enter the values then print them in ascending order.
*/

void main(void)
{
	char *p,n,i,c,temp;
	printf("enter the number of numbers: ");
	scanf("%d",&n);
	p = (char*) malloc(n*sizeof(char));
	for(i=0;i<n;i++)
	{
		printf("enter number %d: ",i+1);
		scanf("%d",&p[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(c=0;c<n-i-1;c++)
		{
			if(p[c]<p[c+1])
			{
				temp = p[c];
				p[c] = p[c+1];
				p[c+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",p[i]);
	}
}