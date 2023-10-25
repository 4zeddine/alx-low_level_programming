#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @b: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(int n, int b)
{
	if (n == b && n > 1)
	return (1);
	else if (n % b == 0 || n <= 1)
	return (0);
	else
	return (is_prime(n, b + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
