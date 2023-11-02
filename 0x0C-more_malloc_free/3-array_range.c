#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: input of minimum value.
 * @max: input of maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
int i;
int *p;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
p[i] = min;
return (p);
}
