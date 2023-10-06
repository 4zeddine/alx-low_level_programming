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
int number = n % 10;
if (number > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, number);
}
else if (number == 0)
{
printf("Last digit of %d is %d  and is 0\n", n, number);
}
else
{
printf("Last digit of %d is %d and is less than 6\n", n, number);
}
/* your code goes there */
return (0);
}
