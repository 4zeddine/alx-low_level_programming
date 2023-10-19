#include "main.h"

/**
 * rot13- encodes a string using rot13
 * @str: input string
 * Return: the encoded string.
 */

char *rot13(char *str)
{
int i = 0, j;
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (*(str + i) != '\0')
{
for (j = 0 ; j < 52 ; j++)
{
if (*(str + i) == *(input + j))
{
*(str + i) = *(output + j);
break;
}
}
i++;
}
return (str);
}
