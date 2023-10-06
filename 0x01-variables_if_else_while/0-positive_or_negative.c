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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("%d is zero", n);
}
/* your code goes there */
return (0);
}
