#ifndef MACROS_H
#define MACROS_H

//Write a header file that provides the following functions like macros:

#define SET_BIT(var,bit)	var |= (1<<bit)
#define CLR_BIT(var,bit)	var &= ~(1<<bit)
#define TGL_BIT(var,bit)    var ^= (1<<bit)

#endif