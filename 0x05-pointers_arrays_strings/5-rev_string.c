#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input of string
 * Return: Always 0.
 */

void rev_string(char *s)
{
int i = 0, size1 = 0, size2;
char tmp;
while (s[i] != '\0')
{
size1++;
i++;
}
size2 = size1 - 1;
for (i = 0 ; i < size1 / 2 ; i++)
{
tmp = s[i];
s[i] = s[size2];
s[size2] = tmp;
size2--;
}
}
