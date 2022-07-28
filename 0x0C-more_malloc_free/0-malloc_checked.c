#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: size of the memory to be allocated
* Return: pointer to the address of the memory block
*/
void *malloc_checked(unsigned int b)
{
void *j;
j = malloc(b);
if (j == NULL)
exit(98);
return (j);
}
