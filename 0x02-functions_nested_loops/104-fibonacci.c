#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int fb1 = 0, nb1 = 1, fb2 = 0, nb2 = 2, max = 10000000000;
unsigned long int part1, part2, part3;
int i;

printf("%lu, %lu, ", nb1, nb2);
for (i = 2; i < 98; i++)
{
if ((nb1 + nb2) > max || fb2 > 0 || fb1 > 0)
{
part1 = (nb1 + nb2) / max;
part2 = (nb1 + nb2) % max;
part3 = fb1 + fb2 + part1;
fb1 = fb2;
fb2 = part3;
nb1 = nb2;
nb2 = part2;
printf("%lu%010lu", fb2, nb2);
}
else
{
part2 = nb1 + nb2;
nb1 = nb2;
nb2 = part2;
printf("%lu", nb2);
}
if (i != 97)
printf(", ");
}
printf("\n");
return (0);
}
