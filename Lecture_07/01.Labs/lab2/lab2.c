#include <stdio.h>

//Write a C code to print the size of all basic data types; char, int, float and double.

void main(void)
{
	printf("size of char is %d bytes\n",sizeof(char));
	printf("size of int is %d bytes\n",sizeof(int));
	printf("size of float is %d bytes\n",sizeof(float));
	printf("size of double is %d bytes\n",sizeof(double));
}