#include <stdio.h>

/*
	Login System: Write a C code that ask the user to enter his ID and then the program will print his name. 
	Available IDs are:
	1234-> Ahmed 
	5678 -> Youssef 
	1145 -> Mina 
	Any other number, the program will print Wrong ID
*/
void main(void)
{
	int ID;
	printf("Please enter your ID: ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Welcome Ahmed");   break;
		case 5678: printf("Welcome Youssef"); break;
		case 1145: printf("Welcome Mina");    break;
		default:   printf("Wrong ID"); 		  break;
	}
}