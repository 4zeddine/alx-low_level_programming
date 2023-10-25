#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
int l = 0;
if (*s != '\0')
{
l = 1 + _strlen_recursion(s + 1);
}
return (l);
}
