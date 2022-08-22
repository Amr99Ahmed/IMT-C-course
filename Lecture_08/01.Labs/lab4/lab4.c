#include <stdio.h>

/*
	Could you expect the size of this struct … ?
	Write a C code to print the size of this structure and verify that it meets your expectations.
	After that modify the structure to achieve the a minimum size. Can you see the difference … ?
	Note that:
	Your tool chain consider that the memory width is 4 byte.
*/

typedef short unsigned int u16;
typedef long unsigned int u32;

typedef struct 
{
	u16 x;
	u32 y;
	u16 z;
	u32 k;
}mystruct;

typedef struct 
{
	u16 x;
	u16 z;
	u32 y;
	u32 k;
}diffstruct;
void main(void)
{
	mystruct x;
	diffstruct y;
	printf("%d\n",sizeof(x));
	printf("%d",sizeof(y));
}