#include "main.h"

/**
 * rev_string - reverse a string
 *
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
size2 = size - 1;
for (i = 0 ; i < size1 ; i++)
{
tmp = s[i];
s[i] = s[size2 -1];
s[size2] = tmp;
size2--;
}
}
