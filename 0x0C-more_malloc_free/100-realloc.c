#include "main.h"

/**
* _realloc - reallocates memory using malloc and free
* @ptr: pointer to previously allocated memory
* @old_size: size of allocated space for ptr in bytes
* @new_size: new size of the memory block in bytes
* Return: pointer allocate new size memory, or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, n = new_size;
char *oldp = ptr;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (i = 0; i < n; i++)
p[i] = oldp[i];
free(ptr);
return (p);
}
