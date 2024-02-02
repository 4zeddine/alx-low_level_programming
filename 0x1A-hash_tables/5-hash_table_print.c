#include "hash_tables.h"

/**
 * hash_table_print - prints keys and values of the hash table
 *
 * @ht: the hash table
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
unsigned char comma;
hash_node_t *node;

if (!ht)
	return;

comma = 0;
printf("{");
for (i = 0; i < ht->size; i++)
{
	if (ht->array[i])
	{
		if (comma == 1)
			printf(", ");

		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node)
				printf(", ");
		}
		comma = 1;
	}
}
printf("}\n");
}
