#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int n1, n2, fb;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 48; i++)
	{
		fb = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fb;
	}
	printf("\n");
	return (0);
}
