#include "main.h"
/**
* is_palindrome - returns true if string is a palindrome
* @s: character to check
* Return: returns true
*/

int is_palindrome(char *s)
{
int index = 0;
int len = find_strlen(s);
if (!(*s))
return (1);
return (check_palindrome(s, len, index));
}

/**
* find_strlen - returns length of a string
* @s: character to check
*
* Return: length of the string
*/
int find_strlen(char *s)
{
int len = 0;
if (*(s + len))
{
len++;
len += find_strlen(s + len);
}

/**
* check_palindrome - checks if a string is a palindrome
* @s: string to check
* @len: length of s
* @index: index of the string to be checked
*
* Return: if the string is a palindrome -1
* if the string is not a palindrome - 0.
*/
int check_palindrome(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);
if (s[index] == s[len - index - 1])
return (check_palindrome(s, len, index + 1));
return (0);
}
