#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _puts - print a string
 * @s: input string.
 *
 * Return: no return.
 */

void _puts(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
}

/**
 * _atoi - convert arguments strings to integers.
 * @s: input string.
 *
 * Return: return the integer.
 */

int _atoi(const char *s)
{
int sign = 1;
unsigned long int i, res = 0, fn;
for (fn = 0; (s[fn] < 48 || s[fn] > 57); fn++)
{
if (s[fn] == '-')
{
sign = -1;
}
}
for (i = fn; s[i] >= 48 && s[i] <= 57; i++)
{
res *= 10;
res += (s[i] - 48);
}
return (sign *res);
}

/**
 * print_num - print an integer
 * @n: input of number.
 *
 * Return: no return.
 */

void print_num(unsigned long int n)
{
unsigned long int i = 0, res, div = 1;
while ((n / div) > 9)
{
div *= 10;
i++;
}
for (; div >= 1; n %= div, div /= 10)
{
res = n / div;
_putchar(res + '0');
}
}

/**
 * main - prints the result of the multiplication, follow by new line.
 * @argc: inpût number of arguments
 * @argv: input of arguments vectors.
 *
 * Return: no return.
 */

int main(int argc, char const *argv[])
{
(void)argc;
if (argc != 3)
{
_puts("Error\n");
exit(98);
}
print_num(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\0');

return (0);
}

