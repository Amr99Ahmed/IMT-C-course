#include <stdio.h>

/*
	Write a C code that ask the user to enter his ID, 
	if the ID is valid it will ask the user to enter his password, 
	if the password is correct the program will print the user name, 
	if the password is incorrect the program will print Incorrect Password. 
	In case of not existing ID, the program will print Incorrect ID
*/
void main (void)
{
	int ID , Password ;
	printf ("Please enter Your ID : ");
	scanf ("%d",&ID);
	
	if ( ID == 1234 )
	{
		printf("Please enter your Password :");
		scanf("%d",&Password);
		if (Password == 5678)
		{
			printf("Welcome Amr");
		}
		else 
		{
			printf("Incorrect Password ");
		}
	}
	else 
	{
		printf("Incorrect ID");
	}
}