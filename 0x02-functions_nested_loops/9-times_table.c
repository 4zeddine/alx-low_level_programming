#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */

void times_table(void)
{
int i, j, n;
for (i = 0 ; i < 10 ; i++)
{
for(j = 0 ; j < 10 ; j++)
{
n = i * j;
if (n / 10 == 0)
{
_putchar(n + 48);
}
else
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
if (j != 9)
{
_putchar(44);
_putchar(' ');
}
}
_putchar('\n');
}
}
