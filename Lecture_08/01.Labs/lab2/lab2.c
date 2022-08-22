#include <stdio.h>

//Repeat Lab1 using the typedef keyword when declaring the structure.

typedef struct mystruct
{
    int salary ;
    int bonus;
    int deduction;
}empolyee;

int main ()
{
    empolyee Ahmed , Amr , Waleed ;
    int total;
    printf("please Enter Ahmed Salary: ");
    scanf("%d",&Ahmed.salary);
    printf("Please Enter Ahmed Bonus: ");
    scanf("%d",&Ahmed.bonus);
    printf("please Enter Ahmed Deduction: ");
    scanf("%d",&Ahmed.deduction);
    printf("please Enter Amr Salary: ");
    scanf("%d",&Amr.salary);
    printf("Please Enter Amr Bonus: ");
    scanf("%d",&Amr.bonus);
    printf("please Enter Amr Deduction: ");
    scanf("%d",&Amr.deduction);
    printf("please Enter Waleed Salary: ");
    scanf("%d",&Waleed.salary);
     printf("Please Enter Waleed Bonus: ");
    scanf("%d",&Waleed.bonus);
    printf("please Enter Waleed Deduction: ");
    scanf("%d",&Waleed.deduction);
    total= Ahmed.salary + Ahmed.bonus - Ahmed.deduction + Amr.salary + Amr.bonus - Amr.deduction + Waleed.salary + Waleed.bonus - Waleed.deduction ;
    printf("Total Value Needed is : %d \n",total);
    return 0;
}