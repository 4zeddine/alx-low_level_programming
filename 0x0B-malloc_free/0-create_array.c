#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: specified char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
int i;
char *p;
if (size == 0)
return (NULL);
p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
*(p + i) = c;
}
return (p);
}
