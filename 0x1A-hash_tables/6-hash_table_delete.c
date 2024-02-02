#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *tmp;
hash_table_t *head;

head = ht;

for (i = 0; i < ht->size; i++)
{
	if (ht->array[i])
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
}
free(head->array);
free(head);
}
