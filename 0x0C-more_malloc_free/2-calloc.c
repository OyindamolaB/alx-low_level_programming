#include "main.h"

/**
* _calloc - allocates memory for an array
* @size: allocates element of size to bytes
* @nmemb: allocate memory for array
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int b;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (b = 0; b < (nmemb * size); b++)
a[b] = 0;
return (a);
}
