#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
int m, l, count;
if (n < 0)
{
_putchar('-');
m = -n ;
}
else
{
m = n;
}
l = m;
count = 1;
while ( l > 9)
{
l /= 10;
count *= 10;
}
for (; count >= 1; count /= 10)
{
_putchar(((m / count) % 10) + 48);
}
}
