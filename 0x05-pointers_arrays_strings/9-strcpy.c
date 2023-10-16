#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: input of destination.
 * @src: input of source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0,size = 0;
while (src[i] != '\0')
{
size++;
i++;
}
for (i = 0; i <= size ; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
