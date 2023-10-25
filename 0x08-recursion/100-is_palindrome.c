#include "main.h"

/**
 * _last_string - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _last_string(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _last_string(s + 1));
}

/**
 * check - compares each character of the string.
 * @s: string
 * @f: smallest iterator.
 * @l: biggest iterator.
 * Return: .
 */
int check(char *s, int f, int l)
{
if (*(s + f) == *(s + l))
{
if (f == l || f == l + 1)
return (1);
return (0 + check(s, f + 1, l - 1));
}
return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (check(s, 0, _last_string(s) - 1));
}
