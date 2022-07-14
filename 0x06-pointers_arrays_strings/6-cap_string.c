#include "main.h"
/**
* cap_string - capitalize first character of a word
* @str: string to capitalize
* Return: returns capitalized string
*/

char *cap_string(char *str)
{
int index = 0;
while (str[++index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;

if (str[index - 1] == ' ' ||

