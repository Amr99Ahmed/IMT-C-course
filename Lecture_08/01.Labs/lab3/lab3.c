#include <stdio.h>

/*
	Write a C code to manage a class of 10 students. Each student studies 4 subjects Math, Language, Physics and Chemistry.
	First define an array of 10 elements and assign random grades for students. 
	The system will ask the user to enter the student ID then the system will show its grades. 
	The software shall manage wrong IDs.
*/

typedef unsigned char u8;
typedef struct
{
    u8 math ;
    u8 language;
    u8 physics;
    u8 chemistry;
}student;
int main ()
{
    u8 i;
    student arr[10] =
    {
    {60,80,70,90},
    {65,75,80,60},
    {30,40,90,30},
    {70,60,40,80},
    {90,40,60,80},
    {40,80,60,40},
    {80,60,80,90},
    {80,60,90,40},
    {60,80,90,40},
    {50,90,80,50}
    };
    printf("please,enter the student ID: ");
    scanf("%d",&i);
    if (i<10)
    {
    printf("math degree: %d\n",arr[i].math);
    printf("language degree: %d\n",arr[i].language);
    printf("chemistry degree: %d\n",arr[i].chemistry);
    printf("physics degree: %d\n",arr[i].physics);
    }
    if (i>=10)
    {
        printf("Wrong ID\n");
    }
    return 0;
} 