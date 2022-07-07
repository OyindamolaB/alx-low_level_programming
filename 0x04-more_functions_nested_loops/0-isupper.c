#include "main.h"

/**
* _isupper - checks for uppercase characters
* @c: character to check
* Return: returns 1 if it is uppercase, 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
