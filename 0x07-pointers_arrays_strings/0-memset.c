#include "main.h"

/**
* _memset - function that fills memory with a constant byte
*
* @n: bytes of the memory area pointed to ny @s
*
* @s: with the constant byte @b
*
* @b: memory area pointer
*
* Return: a pointer to the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsignrd int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
