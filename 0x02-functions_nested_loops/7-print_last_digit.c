#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @i: input number as an integer.
 *
 * Return: last digit.
 */

int print_last_digit(int i)
{
int m;
m = i % 10;
if (i >= 0)
{
_putchar (m + 48);
return (m);
}
else
{
_putchar (-m + 48);
return (-m);
}
}
