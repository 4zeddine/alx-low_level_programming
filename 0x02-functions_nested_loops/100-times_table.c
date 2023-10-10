#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
int i, j, m;
if (n <= 15 && n >= 0)
{
for (i = 0 ; i <= n ; i++)
{
_putchar(48);
for (j = 1 ; j <= n ; j++)
{
m = j * i;
_putchar(44);
_putchar(32);
if (m / 10 == 0)
{
_putchar(32);
_putchar(32);
_putchar(m + 48);
}
else if ((m / 10) / 10 == 0)
{
_putchar(32);
_putchar((m / 10) + 48);
_putchar((m % 10) + 48);
}
else
{
_putchar(((m / 100) % 10) + 48);
_putchar(((m / 10) % 10) + 48);
_putchar((m % 10) + 48);
}
}
_putchar('\n');
}
}

}
