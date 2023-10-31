#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: input of argument count.
 * @av: input of argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
int i, j, count = 0, cn = 0;
char *p;
if (ac == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);
for (j = 0; av[i][j] != '\0'; j++)
count++;
count++;
}
p = malloc(sizeof(char) * (count + 1));
if (p == NULL)
return (NULL);
for (i = 0; i < ac ; i++)
{
for (j = 0; av[j] != '\0'; j++, cn++)
p[cn] = av[i][j];
p[cn] = '\n';
cn++;
}
p[cn] = '\0';
return (p);
}
