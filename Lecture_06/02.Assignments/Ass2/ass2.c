#include <stdio.h>

/*
	Write a C code that define 3 int variables x, y and z and 3 pointers to int p, q and r. Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z respectively.
		a- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
		b- Print the message: Swapping pointers.
		c- Execute the swap code: r = p; p = q; q = r;
		d- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
*/

void main(void)
{
	int x,y,z;
	int *p,*q,*r;
	x=1;
	y=2;
	z=3;
	p=&x;
	q=&y;
	r=&z;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%x\n",p);
	printf("%x\n",q);
	printf("%x\n",r);
	printf("%d\n",*p);
	printf("%d\n",*q);
	printf("%d\n",*r);	
	
	printf("Swapping pointers\n");
	
	r=p;
	p=q;
	q=r;
	
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%x\n",p);
	printf("%x\n",q);
	printf("%x\n",r);
	printf("%d\n",*p);
	printf("%d\n",*q);
	printf("%d\n",*r);	
	
}