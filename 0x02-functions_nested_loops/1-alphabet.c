#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
*print_alphabet - Prints the alphabet in lowercase.
*
*Return: return 0
*/
void print_alphabet(void)
{
int i, size;
size = 26;

for (i = 97; i < 97 + size ; i++)
{
_putchar(i);
}
_putchar('\n');
}
