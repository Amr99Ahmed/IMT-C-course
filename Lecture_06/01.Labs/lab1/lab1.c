#include <stdio.h>

/*
	Write a C code defines an int initialized with 10, then print it, 
	then define a pointer that points to that int and change the value of the int through the pointer to be 20, 
	then print it again.
*/
void main(void)
{
	int x = 10 , *ptr ;
	printf("X before change is: %d\n",x);
	ptr = &x;
	*ptr = 20 ;
	printf("X after change is: %d\n",x);
}