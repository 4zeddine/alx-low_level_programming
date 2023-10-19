#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
int count = 1, m, l;
m = n;
if (n < 0)
{
_putchar('-');
m = -n;
}

while (m / 10 != 0)
{
m /= 10;
count *= 10;
}
for (; count <= 1 ; count /= 10)
{
_putchar(((m / count) % 10) + 48);
}
}
