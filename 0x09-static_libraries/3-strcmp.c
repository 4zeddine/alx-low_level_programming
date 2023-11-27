#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input of first string
 * @s2: input of second string
 * Return: result of the comparison as integer.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, comp = 0;
while (*(s1 + i) != '\0')
{
if (*(s1 + i) != *(s2 + i))
{
comp = ((int)*(s1 + i) - 48) - ((int)*(s2 + i) - 48);
break;
}
i++;
}
return (comp);
}
