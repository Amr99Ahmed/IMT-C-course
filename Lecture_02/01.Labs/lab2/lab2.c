#include <stdio.h>

/*
	Write a C code to calculate employee salary in a week based on the his working hours, 
	hour rate is 50. The program will ask the user to enter the working hours, 
	then it will print his salary. But if the working hours are less than 40 hours, 
	a 10% deduction will be applied.
*/
void main(void)
{
	int Whours ;
	printf("please enter your working hours: ");
	scanf("%d",&Whours);
	if (Whours >= 50)
	{
		printf("your salary is %d", Whours*50);
	}
	else
	{
		printf("your salary is %d", Whours*45);
	}
}