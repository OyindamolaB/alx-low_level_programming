#include "main.h"
/**
* _strlen_recursion - returns the length of a string
* @s: character to print
* Return: length of a string
*/
int _strlen_recursion(char *s)
{
int len = 0;
if (*s != '\0')
{
len++;
len += _strlen_recurion(s + 1);
}
return (len);
}
