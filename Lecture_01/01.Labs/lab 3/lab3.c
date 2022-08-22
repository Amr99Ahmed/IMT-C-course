#include <stdio.h>

// Write a C code that will ask the user to enter two values and print their summation and multiplication.

void main(void)
{
	int num1,num2,sum,mul;
	printf("please enter number1: ");
	scanf("%d",&num1);
	printf("please enter number2: ");
	scanf("%d",&num2);
	sum = num1 + num2 ;
	mul = num1 * num2 ;
	printf("a+b= %d\n",sum);
	printf("a*b= %d",mul);
}