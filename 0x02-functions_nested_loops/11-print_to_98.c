#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints to 98
* @n: Number to start from
* Return: returns 0
*/

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);

printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);

printf("%d\n", n);
}
}
