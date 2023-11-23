#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary number.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int len = 0, basetwo;

if (!b)
	return (0);

while (b[len] != '\0')
	len++;

for (len--, basetwo = 1; len >= 0; len--, basetwo *= 2)
{
	if (b[len] != '0' && b[len] != '1')
		return (0);

	if (b[len] == '1')
		num += basetwo;
}
return (num);
}
