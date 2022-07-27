#include "main.h"

/**
* argstostr - cocantenates all the arguments
* @ac: grid to free the previous
* @av: height of grid
* Return: pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, int **av)
{
int i, j, k = 0, n = 0;
char *s;
if (ac <= 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
n++;
}
n++;
s = malloc(n *sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\0';
return (s);
}
