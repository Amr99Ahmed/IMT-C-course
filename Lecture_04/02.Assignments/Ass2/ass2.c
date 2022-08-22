#include <stdio.h>

/*
	Write a C program to act as simple calculator, 
	first it will ask the user to enter the operation ID, 
	depending on the operation, 
	the program will ask the user either to enter 1 operand or 2 operands 
	and the program will execute the operation and print the result. 
	Each operation should be implemented in a stand a long function.
*/

int add(int n1 , int n2 )
{
    return n1 + n2 ;
}
int sub(int n1 , int n2 )
{
    return n1-n2;
}
int mult(int n1 , int n2 )
{
    return n1*n2;
}
int dv(int n1 , int n2 )
{
    return n1 / n2 ;
}
int And (int n1 , int n2 )
{
    return n1 & n2 ;
}
int or (int n1 , int n2 )
{
    return n1 | n2 ;
}
int not (int n)
{
    return !n;
}
int xor (int n1 , int n2 )
{
    return n1^n2;
}
int reminder (int n1 , int n2)
{
    return n1%n2;
}
int increment(int n)
{
    return n++;
}
int decrement(int n)
{
    return n--;
}
int main ()
{
    int x, y , n , res ;
    printf("enter the value of x: ");
    scanf("%d",&x);
    printf("enter the value of y: ");
    scanf("%d",&y);
    printf("enter the operation code: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:    res=add(x,y);  break;
        case 2:    res=sub(x,y);  break;
        case 3:    res=mult(x,y); break;
        case 4:    res=dv(x,y);  break;
        case 5:    res=And(x,y);  break;
        case 6:    res=or(x,y);   break;
        case 7:    not(x);not(y); break;
        case 8:    xor(x,y);      break;
        case 9:    reminder(x,y); break;
        case 10:   increment(x); increment(y); break;
        case 11:   decrement(x); decrement(y); break;
    }
    printf("result= %d",res);
    return 0;
}