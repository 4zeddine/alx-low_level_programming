#include "main.h"

/**
 * _strchr - locates a carachter in astring
 * @s: input of a string
 * @c: character to look for
 *
 * Return: a pointer to the first occurence of\
 * the character c in string s.
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0 ; s[i] >= '\0' ; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
