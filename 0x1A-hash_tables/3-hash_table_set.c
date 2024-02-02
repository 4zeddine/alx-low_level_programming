#include "hash_tables.h"

/**
 * hash_table_set - adds a value to a given key in a hash table
 *
 * @ht: hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if value added, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx, i;
hash_node_t *node;
char *value_copy;

if (!ht || !key || *key == '\0' || value == NULL)
	return (0);

idx = key_index((const unsigned char *)key, ht->size);

value_copy = strdup(value);
if (value_copy == NULL)
	return (0);

for (i = idx; ht->array[i]; i++)
{
	if (strcmp(ht->array[i]->key, key) == 0)
	{
		free(ht->array[i]->value);
		ht->array[i]->value = value_copy;
		return (1);
	}
}

node = malloc(sizeof(hash_node_t));
if (!node)
{
	free(value_copy);
	return (0);
}

node->key = strdup(key);
if (node->key == NULL)
{
	free(node);
	return (0);
}
node->value = value_copy;
node->next = ht->array[idx];
ht->array[idx] = node;
return (1);
}
