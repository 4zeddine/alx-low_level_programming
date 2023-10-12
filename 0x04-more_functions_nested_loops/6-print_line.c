#include "main.h"

/**
 * print_line - print a stright line
 * @n: input of line size
 *
 * Return: Always 0.
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
_putchar(95);
}
}
_putchar('\n');
}
