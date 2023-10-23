#include "main.h"

/**
 * _memcpy - copies the first n bytes of the memory area\
 * from src to the memory area dest
 * @dest: input of pointer to memory area
 * @src: input of pointer to memory area
 * @n: input of number of bytes
 *
 * Return: a pointer to memory area dest.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
