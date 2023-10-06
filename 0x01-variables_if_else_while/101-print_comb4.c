#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
*main - the main function in our program
*Return: return 0
*/
/* betty style doc for function main goes there */
int main(void)
{
int i, j, k;
for (i = 48 ; i < 58 ; i++)
{
for (j = 49 ; j < 58 ; j++)
{
for (k = 50 ; k < 58 ; k++)
{
if (i != j && j != k && i < j && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
/* your code goes there */
return (0);
}
