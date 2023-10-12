#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: input to check
 * Return: 1 if it's a digit otherwise 0.
 */

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
