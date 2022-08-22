#include <stdio.h>

//Write C code that calculates the factorial of a number entered by the user using recursive function

int GetFactorial(int);

void main(void)
{
	int x , res ;
	printf("enter the number: ");
	scanf("%d",&x);
	res = GetFactorial(x);
	printf("factorial = %d",res);
}

int GetFactorial(int num)
{
	if (x>=1)
    {
        return x*GetFactorial(num-1);
    }
    else 
    {
        return 1;
    }
}
