#include "main.h"

/**
* _memset - fuction fills the first @n bytes of the memory
* @n: bytes of the memory area pointed to
*
* @s: with the constant byte @b
*
* @b: memory area pointer
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
