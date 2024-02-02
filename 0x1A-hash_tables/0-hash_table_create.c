#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: the input size of the hash table
 * Return: the hash table created, or NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *hs;

hs = malloc(sizeof(hash_table_t));
if (!hs)
	return (NULL);

hs->size = size;
hs->array = malloc(sizeof(hash_node_t *) * size);
if (!hs->array)
	return (NULL);
for (i = 0; i < size; i++)
	hs->array[i] = NULL;

return (hs);
}
