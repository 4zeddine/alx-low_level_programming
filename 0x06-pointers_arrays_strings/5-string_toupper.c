#include "main.h"

/**
 * string_toupper - turn lowercase into uppercase
 * @str: input string
 * Return: the new string.
 */

char *string_toupper(char *str)
{
int i;
while (*(str + i) != '\0')
{
if (*(str + i) >= 97 && *(str + i) <= 122)
*(str + i) = *(str + i) - 32;
i++;
}
return (str);
}
