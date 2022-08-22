#include <stdio.h>

/*
	Write a C code to ask the user to enter his grade and the program will print his rating.
		0 <= grade < 50 ------> Failed
		50 <= grade < 65 ------> Normal
		65 <= grade < 75 ------> Good
		75 <= grade < 85 ------> Very Good
		85 <= grade ------> Excellent
*/
void main(void)
{
	int grade;
	printf("please enter your grade: ");
	scanf("%d",&grade);
	
	if (grade >= 0 && grade < 50)
	{
		printf("you have Failed");
	}
	else if (grade >= 50 && grade < 65)
	{
		printf("your rating is Normal");
	}
	else if (grade >= 65 && grade < 75)
	{
		printf("your rating is Good");
	}
	else if (grade >= 75 && grade < 85)
	{
		printf("your rating is Very Good");
	}
	else if (grade >= 85 && grade <= 100)
	{
		printf("your rating is Excellent");
	}
	else
	{
		printf("Invalid grade");
	}
}