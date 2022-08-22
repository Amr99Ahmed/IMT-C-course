#include <stdio.h>
/*
	Write a C code that ask the user to enter 10 numbers, 
	then ask him to enter another number to search on it in the 10 numbers 
	and print its location in case it is found. In case the number is not found, 
	it will print number no exist
*/
void main(void)
{
	int x,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	printf("Enter Number 3: ");
	scanf("%d",&num3);
	printf("Enter Number 4: ");
	scanf("%d",&num4);
	printf("Enter Number 5: ");
	scanf("%d",&num5);
	printf("Enter Number 6: ");
	scanf("%d",&num6);
	printf("Enter Number 7: ");
	scanf("%d",&num7);
	printf("Enter Number 8: ");
	scanf("%d",&num8);
	printf("Enter Number 9: ");
	scanf("%d",&num9);
	printf("Enter Number 10: ");
	scanf("%d",&num10);
	
	printf("enter the value to search: ");
	scanf("%d",&x);
	
	if (x==num1)
		printf("value exist at element number1");  
	else if (x==num2)
		printf("value exist at element number2");  
	else if (x==num3)
		printf("value exist at element number3");  
	else if (x==num4)
		printf("value exist at element number4");  
	else if (x==num5)
		printf("value exist at element number5");  
	else if (x==num6)
		printf("value exist at element number6");  
	else if (x==num7)
		printf("value exist at element number7");  
	else if (x==num8)
		printf("value exist at element number8");  
	else if (x==num9)
		printf("value exist at element number9");  
	else if (x==num10)
		printf("value exist at element number10"); 
	else 
		printf("number does not exist");		   
	
}