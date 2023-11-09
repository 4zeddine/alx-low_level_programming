#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str;

va_start(args, format);

while (foramt && format[i])
{
switch (format[i++])
{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%i", va-arg(args, int));
		break;
	case 'f':
		printf("%f", va-arg(args, float));
		break;
	case 's':
		str = va_arg(args, char *);
		if (!str)
			s = "(nil)";
		printf("%s", str);
		break;
	default:
		continue;
}
if (format[i])
printf(", ");
}
printf("\n");
}
