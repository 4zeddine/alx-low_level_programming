#include "main.h"

/**
 * _strncat - concatenates two strings with second use\
 * most n bytes
 * @dest: input of first string
 * @src: input of second string
 * @n: input of bytes
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, k = 0, size1 = 0;
while (*(dest + i) != '\0')
{
size1++;
i++;
}
for (k = 0;  k < n && *(src + k) != '\0' ; k++)
{
*(dest + size1 + k) = *(src + k);
}
return (dest);
}
