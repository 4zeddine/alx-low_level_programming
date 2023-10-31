#include  "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: input of the width of the array.
 * @height: input of the height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
unsigned int i, j;
int **p;
if (width < 1 || height < 1)
return (NULL);
p = malloc(sizeof(int *) * height);
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width)
if (p[i] == NULL)
{
while (i--)
free(p[i]);
free(p);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
p[i][j] = 0;
return (p);
}
