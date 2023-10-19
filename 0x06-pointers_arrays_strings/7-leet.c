#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: the encoded string.
 */

char *leet(char *str)
{
int i = 0, j;
int letters[] = {'a', 'e', 'o', 't', 'l'};
int nums[] = {4, 3, 0, 7, 1};
while (*(str + i) != '\0')
{
for (j = 0 ; j < 5 ; j++)
{
if (*(str + i) == letters[j] || *(str + i) == letters[j] - 32)
{
*(str + i) = nums[j] + 48;
}
}
i++;
}
return (str);
}
