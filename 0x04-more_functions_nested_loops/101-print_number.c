#include "main.h"

/**
 * print_number - prints an integer
 *
 * Return: Always 0.
 */

void print_number(int n)
{
unsigned int num, d, count;
if (n < 0)
{
_putchar(45);
num = n * -1;
}
else
{
num = n;
}
d = num;
count = 1;
while (d > 9)
{
d /= 10;
count *= 10;
}
for (; count >= 1; count /= 10)
{
_putchar(((num / count) % 10) + 48);
}
}
