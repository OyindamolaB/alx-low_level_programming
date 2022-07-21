#include "main.h"
/**
* _pow_recursion - returns the value of x raise to power y
* @x: the base
* @y: the exponent
* Return: the value of x raise to power of y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
return (_pow_recursion(x, y - 1) * x);
}
