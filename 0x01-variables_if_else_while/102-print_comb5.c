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
int i, j, k, l, num1, num2;
for (i = 48 ; i < 58 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
for (k = 48 ; k < 58 ; k++)
{
for (l = 49 ; l < 58 ; l++)
{
num1 = (i * 10) + j;
num2 = (k * 10) + l;
if (num1 < num2)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i == 57 && j == 56 && k == 57 && l == 57)
{
break;
}
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
