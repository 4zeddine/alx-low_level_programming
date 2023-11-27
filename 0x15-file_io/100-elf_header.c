#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_address - prints an address
 * @ptr: magic.
 * Return: no return.
 */

void print_address(char *ptr)
{
int i, start;
char sys;

printf("  Entry point address:               0x");

sys = ptr[4] + '0';

if (sys == '1')
{
	start = 26;
	printf("80");
	for (i = start; i >= 22; i--)
	{
		if (ptr[i] > 0)
			printf("%x", ptr[i]);
		else if (ptr[i] < 0)
			printf("%x", 256 + ptr[i]);
	}
	if (ptr[7] == 6)
		printf("00");
}

if (sys == '2')
{
	start = 26;
	for (i = start; i > 23; i--)
	{
		if (ptr[i] >= 0)
			printf("%02x", ptr[i]);

		else if (ptr[i] < 0)
			printf("%02x", 256 + ptr[i]);

	}
}
printf("\n");
}

/**
 * print_type - prints type
 * @ptr: magic.
 * Return: no return.
 */

void print_type(char *ptr)
{
char type = ptr[16];

if (ptr[5] == 1)
	type = ptr[16];
else
	type = ptr[17];

printf("  Type:                              ");
if (type == 0)
	printf("NONE (No file type)\n");
else if (type == 1)
	printf("REL (Relocatable file)\n");
else if (type == 2)
	printf("EXEC (Executable file)\n");
else if (type == 3)
	printf("DYN (Shared object file)\n");
else if (type == 4)
	printf("CORE (Core file)\n");
else
	printf("<unknown: %x>\n", type);
}

/**
 * print_osabi - prints osabi
 * @ptr: magic.
 * Return: no return.
 */

void print_osabi(char *ptr)
{
char osabi = ptr[7];

printf("  OS/ABI:                            ");
switch (osabi)
{
case 0: 
	printf("UNIX - System V\n");
	break;
case 1:
	printf("UNIX - HP-UX\n");
	break;
case 2:
	printf("UNIX - NetBSD\n");
	break;
case 3:
	printf("UNIX - Linux\n");
	break;
case 4:
	printf("UNIX - Solaris\n");
	break;
case 5:
	printf("UNIX - IRIX\n");
	break;
case 6:
	printf("UNIX - FreeBSD\n");
	break;
case 7:
	printf("UNIX - TRU64\n");
	break;
case 8:
	printf("ARM\n");
	break;
case 9:
	printf("Stand-alone (embedded)\n");
	break;
default:
	printf("<unknown: %x>\n", osabi);
}

printf("  ABI Version:                       %d\n", ptr[8]);
}

/**
 * print_version - prints version
 * @ptr: magic.
 * Return: no return.
 */

void print_version(char *ptr)
{
int version = ptr[6];

printf("  Version:                           %d", version);

if (version == EV_CURRENT)
	printf(" (current)");

printf("\n");
}

/**
 * print_data - prints data
 * @ptr: magic.
 * Return: no return.
 */

void print_data(char *ptr)
{
char data = ptr[5];

printf("  Data:                              2's complement");
if (data == 1)
	printf(", little endian\n");

if (data == 2)
	printf(", big endian\n");
}

/**
 * print_magic - prints magic info.
 * @ptr: magic.
 * Return: no return.
 */

void print_magic(char *ptr)
{
int bytes;

printf("  Magic:  ");

for (bytes = 0; bytes < 16; bytes++)
	printf(" %02x", ptr[bytes]);

printf("\n");

}

/**
 * check_system - check the version system.
 * @ptr: magic.
 * Return: no return.
 */

void check_system(char *ptr)
{
char sys = ptr[4] + '0';

if (sys == '0')
	exit(98);

printf("ELF Header:\n");
print_magic(ptr);

if (sys == '1')
	printf("  Class:                             ELF32\n");

if (sys == '2')
	printf("  Class:                             ELF64\n");

print_data(ptr);
print_version(ptr);
print_osabi(ptr);
print_type(ptr);
print_address(ptr);
}

/**
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */

int check_elf(char *ptr)
{
int address = (int)ptr[0];
char E = ptr[1], L = ptr[2], F = ptr[3];

if (address == 127 && E == 'E' && L == 'L' && F == 'F')
	return (1);

return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int fd, rd_ret;
char ptr[27];

if (argc != 2)
{
	dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
	exit(98);
}

fd = open(argv[1], O_RDONLY);

if (fd < 0)
{
	dprintf(STDERR_FILENO, "Err: file can not be open\n");
	exit(98);
}

lseek(fd, 0, SEEK_SET);
rd_ret = read(fd, ptr, 27);

if (rd_ret == -1)
{
	dprintf(STDERR_FILENO, "Err: The file can not be read\n");
	exit(98);
}

if (!check_elf(ptr))
{
	dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
	exit(98);
}

check_system(ptr);
close(fd);

return (0);
}
