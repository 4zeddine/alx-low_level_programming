#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input of first string.
 * @accept: input of second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accep[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return ('\0');
}
