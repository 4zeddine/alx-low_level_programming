#include "main.h"
#include <stdlib.h>

/**
 * wordcount - count the words in a string.
 * @s: string.
 *
 * Return: number of words
 */

int wordcount(char *s)
{
int i = 0, n = 0;
while (s[i])
{
if (s[i] == ' ')
{
if (s[i + 1] != ' ' && s[i + 1] != '\0')
n++;
}
else if (i == 0)
n++;
i++;
}
n++;
return (n);
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
int i, j, l, m, n = 0, c = 0;
char **p;
if (str == NULL || *str == '\0')
return (NULL);
n = wordcount(str);
if (n == 1)
return (NULL);
p = (char **)malloc(sizeof(char *) * n);
if (p == NULL)
return (NULL);
p[n - 1] = NULL;
i = 0;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
	;
j++;
p[c] = (char *)malloc(sizeof(char) * j);
j--;
if (p[c] == NULL)
{
for (l = 0; l < c; l++)
free(p[l]);
free(p[n - 1]);
free(p);
return (NULL);
}
for (m = 0; m < j; m++)
p[c][m] = str[i + m];
p[c][m] = '\0';
c++;
i += j;
}
else
i++;
}
return (p);
}
