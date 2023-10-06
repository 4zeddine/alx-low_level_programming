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
int i, j;
for (i = 48 ; i < 58 ; i++)
{
for (j = 49 ; j < 58 ; j++)
{
if (i != j && i < j)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
/* your code goes there */
return (0);
}
