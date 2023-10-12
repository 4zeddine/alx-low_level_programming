#include "main.h"

/**
 * _isupper - check for uppercase characters
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
if(c > 64 && c < 91)
{
return (1);
}
else if (c > 96 && c < 123)
{
return (0);
}
}
