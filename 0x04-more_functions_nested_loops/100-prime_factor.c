#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
long int i, num = 612852475143;
for (i = 2; i <= num; i++)
{
if (num % i == 0)
{
num /= i;
i--;
}
}
printf("%ld\n", i);
return (0);
}
