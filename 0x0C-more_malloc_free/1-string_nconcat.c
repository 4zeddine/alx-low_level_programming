#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: input of first string.
 * @s2: input of second string.
 * @n: input of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i = 0, j = 0, m, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (n >= j)
m = i + j;
else
m = i + n;
p = malloc(m + 1);
if (p == NULL)
return (NULL);
for (k = 0; k < (m + 1); k++)
{
if (k <= i)
p[k] = s1[i];
else
p[k] = s2[k - i];
}
p[k] = '\0';
return (p);
}
