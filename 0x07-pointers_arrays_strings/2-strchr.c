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
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
else
{
return ('\0');
}
i++;
}
}
