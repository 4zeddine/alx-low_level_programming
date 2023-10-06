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
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
for (int i = 0 ; alphabet[i] != '\0' ; i++)
{
putchar(alphabet[i]);
}
/* your code goes there */
return (0);
}
