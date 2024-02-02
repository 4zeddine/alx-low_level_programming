#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: key of the hash
 * Return: value of the hash.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *node;

if (!ht || key == NULL || *key == '\0')
	return (NULL);
idx = key_index((const unsigned char *)key,  ht->size);

if (idx >= ht->size)
	return (NULL);

node = ht->array[idx];

while (node && strcmp(node->key, key) != 0)
	node = node->next;

if (node == NULL)
	return (NULL);
else
	return (node->value);
}
