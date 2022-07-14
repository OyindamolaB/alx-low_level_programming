#include "main.h"

/**
* string_toupper - changes lowercase letters to uppercase
* @str: string to modify
* Return: returns a character
*/

char *string_toupper(char *str)
{
int index = 0;
while (str[index++])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
}

return (str);
}
