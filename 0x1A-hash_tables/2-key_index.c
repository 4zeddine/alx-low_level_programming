#include "hash_tables.h"

/**
 * key_index - gives the index of the key passed
 *
 * @key: key input
 * @size: size of the hash tables
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int id;

if (!key || !size)
	return (0);

id = hash_djb2(key) % size;

return (id);
}
