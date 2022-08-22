#include <stdio.h>

//Write a C code to print the false value and the true value on GCC.

void main(void)
{
	printf("False value in GCC = %d\n", 3&&0);
	printf("True value in GCC = %d"   , 3||0);
}