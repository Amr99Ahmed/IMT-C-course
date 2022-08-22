#include <stdio.h>

// Write a code that takes 2 numbers and print their summation, subtraction, anding, oring, and Xoring

void main(void)
{
	int a,b;
	printf("please enter number a: ");
	scanf("%d",&a);
	printf("please enter number b: ");
	scanf("%d",&b);
	printf("a + b = %d\n",a+b);
	printf("a - b = %d\n",a-b);
	printf("a & b = %d\n",a&b);
	printf("a | b = %d\n",a|b);
	printf("a ^ b = %d\n",a^b);
}