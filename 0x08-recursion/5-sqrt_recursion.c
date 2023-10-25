#include "main.h"

/**
 * square - returns the natural square root of a number.
 * @n: input number.
 * @b: square root.
 * Return: square root or -1.
 */
int square(int n, int b)
{
if (b * b == n)
return (b);
else if (b * b < n)
return (square(n, b + 1));
else
return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
