#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */

int factorial(int n)
{
int f ;
if (n > 0)
{
f = n * factorial(n - 1);
return (f);
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
