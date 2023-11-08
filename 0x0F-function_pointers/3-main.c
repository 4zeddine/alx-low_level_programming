#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int a, b, (*opp)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

opp = get_op_func(argv[2]);

a = atoi(argv[1]);
b = atoi(argv[3]);

if (!opp)
{
printf("Error\n");
exit(99);
}

if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}

printf("%d\n", opp(a, b));
return (0);
}
