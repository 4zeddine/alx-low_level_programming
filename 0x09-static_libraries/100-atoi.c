#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string input
 * Return: number.
 */

int _atoi(char *s)
{
unsigned int  num = 0;
int count = 0, size = 0, sign = 1, m = 1, i;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;
if (*(s + count) == '-')
sign *= -1;

if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
num = num + ((*(s + i) - 48) * m);
m /= 10;
}
return (num *sign);
}
