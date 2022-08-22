#include <stdio.h>

/*
	Write a c code that defines a structure for employees that contains his salary, 
	bonus and deductions. The program shall ask the user to enter these information 
	for three employees ( Ahmed, Waleed and Amr). Then the program will print the 
	total value shall be supplied by finance team.
*/
typedef unsigned char u8 ; 
typedef short int u16 ; 

struct Employee
{
	u16 salary ;
	u16 bonus ;
	u16 deduction; ;
}Ahmed,Waleed,Amr;

void main(void)
{
	int total;
	printf("enter Ahmed salary: ");
	scanf("%d",&Ahmed.salary);
	printf("enter Ahmed Bonus");
	scanf("%d",&Ahmed.bonus);
	printf("enter Ahmed deduction: ");
	scanf("%d",&Ahmed.deduction);

	printf("enter Amr salary: ");
	scanf("%d",&Amr.salary);
	printf("enter Amr Bonus: ");
	scanf("%d",&Amr.bonus);
	printf("enter Amr deduction: ");
	scanf("%d",&Amr.deduction);

	printf("enter Waleed salary: ");
	scanf("%d",&Waleed.salary);
	printf("enter Waleed Bonus: ");
	scanf("%d",&Waleed.bonus);
	printf("enter Waleed deduction: ");
	scanf("%d",&Waleed.deduction);

	total = Ahmed.salary + Ahmed.bonus - Ahmed.deduction +	Amr.salary + Amr.bonus - Amr.deduction +	Waleed.salary + Waleed.bonus - Waleed.deduction ;
			
	printf("total value needed is: %d",total);
}