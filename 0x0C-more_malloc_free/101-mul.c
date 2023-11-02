#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 if not 
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: input of the string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the result of the multiplication
 */
char *big_multiply(char *s1, char *s2)
{
char *p;
int l1, l2, a, b, c, x;

l1 = _strlen(s1);
l2 = _strlen(s2);
p = malloc(a = x = l1 + l2);
if (!p)
printf("Error\n"), exit(98);
while (a--)
p[a] = 0;

for (l1--; l1 >= 0; l1--)
{
if (!_isdigit(s1[l1]))
{
free(p);
printf("Error\n"), exit(98);
}
a = s1[l1] - '0';
c = 0;

for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
{
if (!_isdigit(s2[l2]))
{
free(p);
printf("Error\n"), exit(98);
}
b = s2[l2] - '0';

c += p[l1 + l2 + 1] + (a * b);
p[l1 + l2 + 1] = c % 10;

c /= 10;
}
if (c)
p[l1 + l2 + 1] += c;
}
return (p);
}


/**
 * main - prints the multiplication of two integers
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
char *p;
int a, c, l;

if (argc != 3)
printf("Error\n"), exit(98);

l = _strlen(argv[1]) + _strlen(argv[2]);
p = big_multiply(argv[1], argv[2]);
c = 0;
a = 0;
while (c < l)
{
if (p[c])
a = 1;
if (a)
_putchar(r[c] + '0');
c++;
}
if (!a)
_putchar('0');
_putchar('\n');
free(p);
return (0);
}
