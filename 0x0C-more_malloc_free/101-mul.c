#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * checkIfZero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */

void checkIfZero(char *argv[])
{
int i;
int isNum1 = 1;
int isNum2 = 1;

for (i = 0; argv[1][i]; i++)
{
if (argv[1][i] != '0')
{
isNum1 = 0;
break;
}
}

for (i = 0; argv[2][i]; i++)
{
if (argv[2][i] != '0')
{
isNum2 = 0;
break;
}
}

if (isNum1 == 1 || isNum2 == 1)
{
printf("0\n");
exit(0);
}
}

/**
 * *initializeArray- set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */

char *initializeArray(char *ar, int lar)
{
int i;

for (i = 0; i < lar; i++)
{
ar[i] = '0';
}
ar[lar] = '\0';
return (ar);
}

/**
 * lengthNumber - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */

int lengthNumber(char *argv[], int n)
{
int length;

for (length = 0; argv[n][length]; length++)
{
if (!isdigit(argv[n][length]))
{
printf("Error\n");
exit(98);
}
}

return (length);
}

/**
 * main - prints multiplication of two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
int length1, length2, resultLength, add, carry, i, j, k, shift;
char *result;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
length1 = lengthNumber(argv, 1);
length2 = lengthNumber(argv, 2);
checkIfZero(argv);
resultLength = length1 + length2;
result = malloc(resultLength + 1);
if (result == NULL)
{
printf("Error\n");
exit(98);
}
result = initializeArray(result, resultLength);
k = resultLength - 1;
i = length1 - 1;
j = length2 - 1;
carry = shift = 0;
for (; k >= 0; k--, i--)
{
if (i < 0)
{
if (carry > 0)
{
add = (result[k] - '0') + carry;
if (add > 9)
{
result[k - 1] = (add / 10) + '0';
}
result[k] = (add % 10) + '0';
}
i = length1 - 1;
j--;
carry = 0;
shift++;
k = resultLength - (1 + shift);
}
if (j < 0)
{
if (result[0] != '0')
{
break;
}
resultLength--;
free(result);
result = malloc(resultLength + 1);
result = initializeArray(result, resultLength);
k = resultLength - 1;
i = length1 - 1;
j = length2 - 1;
carry = shift = 0;
}
if (j >= 0)
{
add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (result[k] - '0') + carry;
carry = add / 10;
result[k] = (add % 10) + '0';
}
}
printf("%s\n", result);
return (0);
}
