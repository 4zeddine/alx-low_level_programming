#include "main.h"

/**
 * _isupper - check for uppercase characters
 *
 * @c: the letter to be checked
 *
 * Return: 1 if c is uppercase or 0 otherwise.
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
