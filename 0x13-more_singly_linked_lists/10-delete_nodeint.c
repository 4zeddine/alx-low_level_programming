#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *node, *p;

node = *head;

if (index != 0)
{
	while (node != NULL && i < index - 1)
	{
	node = node->next;
	i++;
	}
}

if (node == NULL || (node->next == NULL && index != 0))
	return (-1);

p = node->next;
if (index != 0)
{
node->next = p->next;
free(p);
}
else
{
free(node);
*head = p;
}

return (1);
}
