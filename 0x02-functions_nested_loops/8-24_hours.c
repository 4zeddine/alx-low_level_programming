#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
int i, j, k, l;

for (i = 48; i < 51; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 54; k++)
{
for (l = 48; l < 58; l++)
{
if (i >= 50 && j >= 52)
break;
_putchar(i);
_putchar(j);
_putchar(58);
_putchar(k);
_putchar(l);
_putchar('\n');
}
}
}
}
}
