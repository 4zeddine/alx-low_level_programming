#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */

void times_table(void)
{
int i, j, n;
for (i = 0; i < 10; i++)
{
_putchar(48);
for (j = 1; j < 10; j++)
{
n = i * j;
_putchar(44);
_putchar(32);
if (n < 10)
{
_putchar(32);
_putchar(n + 48);
}
else
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
}
_putchar('\n');
}
}
