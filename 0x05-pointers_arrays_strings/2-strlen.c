#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: input of a string
 *
 * Return: lenght of the string.
 */

int _strlen(char *s)
{
int i = 0, sum = 0;
while (s[i] != '\0')
{
sum++;
i++;
}
return (sum);
}
