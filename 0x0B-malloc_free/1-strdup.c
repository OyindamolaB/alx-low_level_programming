#include "main.h"

/**
* _strdup - pointer to a newly allocated space
* @str: string to be copied
* Return: a pointer to an array, or NULL if it fails
*/

char *_strdup(char *str)
{
unsigned int i, j;
char *s;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
i++;
s = malloc(i *sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
return (s);
}
