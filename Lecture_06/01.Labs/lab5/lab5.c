#include <stdio.h>

/*
	Write a C code that define 2 arrays, and send them to a function 
	that apply scalar multiplication between the two arrays and return the result, 
	the main function then will print the result.
*/

int mult(int *,int *);

int main ()
{
    int a[5] , b[5] , i , res[5] ;
    for (i=0;i<=4;i++)
    {
        printf("enter the value of number %d of the first array: ",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<=4;i++)
    {
        printf("enter the value of number %d of the second array: ",i);
        scanf("%d",&b[i]);
    }
    for (i=0;i<=4;i++)
    {
        res[i]=mult(&a[i],&b[i]);
    }
    for (i=0;i<=4;i++)
    {
        printf("the result value of number %d is: ",i);
        printf("%d \n",res[i]);
    }
    return 0;
}

int mult (int *p , int *d)
{
   return *p * *d ;
}