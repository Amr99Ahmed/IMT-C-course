#include <stdio.h>

/*
	Write C code to print your name, generate the following files:
	1- The intermediate file	gcc -E file.c -o out.i
	2- The assembly file		gcc -S file.c -o out.asm
	3- The object file			gcc -c file.c -o out.o
	4- The executable file		gcc file.c -o out.exe
*/

void main(void)
{
	printf("Amr Ahmed Abdelghany\n");
}