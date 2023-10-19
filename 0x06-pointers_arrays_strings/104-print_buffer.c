#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer
 * @b: input as a string
 * @size: size of the buffer
 * Return: Always 0.
 */

void print_buffer(char *b, int size)
{
int i, j, l;

if (size <= 0)
printf("\n");
else
{
for (i = 0; i < size; i += 10)
{
printf("%.8x:", i);
for (j = i; j < i + 10; j++)
{
if (j % 2 == 0)
printf(" ");
if (j < size)
printf("%.2x", *(b + j));
else
printf("  ");
}
printf(" ");
for (l = i; l < i + 10; l++)
{
if (l >= size)
break;
if (*(b + l) < 32 || *(b + l) > 126)
printf("%c", '.');
else
printf("%c", *(b + l));
}
printf("\n");
}
}
