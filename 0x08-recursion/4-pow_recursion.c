#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: input of base.
 * @y: input of exponent.
 * Return: value of the exponentiation.
 */

int _pow_recursion(int x, int y)
{
int p;
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
p = x * _pow_recursion(x, y - 1);
return (p);
}
}
