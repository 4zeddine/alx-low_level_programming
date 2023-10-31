#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: input of first string.
 * @s2: input of second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, size1 = 0, size2 = 0;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
size1++;
i++;
}
i = 0;
while (s2[i] != '\0')
{
size2++;
i++;
}
p = malloc(sizeof(char) * (size1 + size2 + 1));
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < (size1 + size2 + 1); i++)
{
if (i < size1)
p[i] = s1[i];
else
p[i] = s2[i - size1];
}
return (p);
}
