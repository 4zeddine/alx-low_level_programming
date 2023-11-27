#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input of first string
 * @src: input of second string
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0, k = 0, size1 = 0, size2 = 0;
while (*(dest + i) != '\0')
{
size1++;
i++;
}
while (*(src + j) != '\0')
{
size2++;
j++;
}
for (k = size1 ;  k <= (size1 + size2 + 1) ; k++)
{
*(dest + k) = *(src + k - size1);
}
return (dest);
}
