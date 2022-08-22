#include <stdio.h>

//Write C code implement a function to swap 2 global variables.

int x = 10 , y = 20 ;

void swap(void);

void main(void)
{
	printf("x before swap: %d\n",x);
	printf("y before swap: %d\n",y);
	
	swap();
	
	printf("x after swap: %d\n",x);
	printf("y after swap: %d\n",y);
}

void swap (void)
{
	int temp;
    temp = x ;
	x = y;
	y = temp;
}