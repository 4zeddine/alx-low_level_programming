#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: input of the triangle size
 * Return: Always 0.
 */

void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (i = 0 ; i < size ; i++)
{
for (j = size - 1 ; j > i ; j--)
{
_putchar(32);
}
for (k = 0 ; k < i + 1 ; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar(35);
_putchar('\n');
}
}
