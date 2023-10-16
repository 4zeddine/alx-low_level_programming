#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: input as a string
 * Return: Always 0.
 */

void print_rev(char *s)
{
int i = 0, size = 0;
while (*(s + i) != '\0')
{
size++;
i++;
}
for (i = size ; i >= 0 ; i--)
{
if (s[i] != '\0')
{
_putchar(s[i]);
}
}
_putchar('\n');
}
