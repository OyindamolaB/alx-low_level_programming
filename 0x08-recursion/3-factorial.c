#include "main.h"
/**
* factorial - returns factorial of a given number
* @n: character to print
*
* Return: factorial of the number
*/
int factorial(int n)
{
int next;
if (n == 0)
return (1);
else if (n < 0)
return (-1);
next = factorial(n - 1);
return (n * next);
}
