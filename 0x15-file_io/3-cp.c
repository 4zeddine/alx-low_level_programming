#include "main.h"
#include <stdio.h>

/**
 * error_handling - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_handling(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, close_error;
ssize_t num_chars, wrcount;
char buffer[1024];

if (argc != 3)
{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_handling(file_from, file_to, argv);

num_chars = 1024;
while (num_chars == 1024)
{
	num_chars = read(file_from, buffer, 1024);
	if (num_chars == -1)
		error_handling(-1, 0, argv);
	wrcount = write(file_to, buffer, num_chars);
	if (wrcount == -1)
		error_handling(0, -1, argv);
}

close_error = close(file_from);
if (close_error == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
}

close_error = close(file_to);
if (close_error == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
}
return (0);
}
