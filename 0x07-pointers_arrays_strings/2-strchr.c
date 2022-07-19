#include "main.h"
/**
* _strchr - returns a pointer to the first occurence
*
* @s: string to target
* @c: character to target
*
* Return: returns pointer to first occurence of c
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
;
if (s[i] == c)
return (s + i);
else
return (NULL);
}
