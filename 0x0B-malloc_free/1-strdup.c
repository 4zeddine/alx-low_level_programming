#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * , which contains a copy of the string given as a parameter.
 * @str: input string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
unsigned int i = 0, size = 0;
char *p;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
size++;
i++;
}
p = malloc(sizeof(char) * (size + 1));
if (p == NULL)
return (NULL);
for (i = 0; i < (size + 1); i++)
{
p[i] = str[i];
}
return (p);
}
