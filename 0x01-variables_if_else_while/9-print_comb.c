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
int a = 48;
while (a < 58)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
/* your code goes there */
return (0);
}