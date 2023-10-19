#include "main.h"

/**
 * cap_string - capitilizes all words on a string
 * @str: input string
 * Return: the capitilized words string.
 */

char *cap_string(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if (*(str + i) == 32 || *(str + i) == 33 || *(str + i) == 34
|| *(str + i) == 40 || *(str + i) == '\n'
|| *(str + i) == 41 || *(str + i) == 44 || *(str + i) == 46
|| *(str + i) == 59 || *(str + i) == 9
|| *(str + i) == 63 || *(str + i) == 123 || *(str + i) == 125)
{
if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
{
*(str + i + 1) = *(str + i + 1) - 32;
}
}
i++;
}
return (str);
}
