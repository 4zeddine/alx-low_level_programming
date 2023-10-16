#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: input as a string
 * Return: Always 0.
 */

void puts_half(char *str)
{
int i = 0, size = 0;
while (str[i] != '\0')
{
size++;
i++;
}
if (size % 2 == 0)
{
for (i = size/2 ; i < size ; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (size-1) /2 ; i < size ; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
