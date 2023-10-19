#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int size1 = 0, size2 = 0, i, b = 0, f, s, d = 0;
while (n1[size] != '\0')
size1++;
while (n2[size] != '\0')
size2++;
if (size1 > size2)
b = size1;
else
b = size2;
if (b + 1 > size_r)
return (0);
r[b] = '\0';
for (i = b - 1 ; i >= 0 ; i--)
{
size1--;
size2--;
if (size1 >= 0)
f = n1[size1] - 48;
else
f = 0;
if (size2 >= 0)
s = n2[size2] - 48;
else
s = 0;
r[i] = (f + s + d) % 10 + 48;
d = (f + s + d) / 10;
}
if (d == 1)
{
r[b + 1] = '\0';
if (b + 2 > size_r)
return (0);
while (b-- >= 0)
r[b + 1] = r[b];
r[0] = d + 48;
}
return (r);
}
