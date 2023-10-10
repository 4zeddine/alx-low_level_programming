#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */

int print_last_digit(int i)
{
if (i >= 0)
{
return (i % 10);
}
else
{
return (-i % 10);
}
}
