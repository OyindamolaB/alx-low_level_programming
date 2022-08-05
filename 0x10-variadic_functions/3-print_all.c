#include <stdarg.h>

#include <stdio.h>

#include "variadic_functions.h"

/**
* print_c - print a char
* @c: char to print
* Return: void
*/

void print_c(va_list c)
{
printf("%c", va_arg(c, int));
}
