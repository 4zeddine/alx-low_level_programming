#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *node, *p;

node = malloc(sizeof(listint_t));
if (node == NULL)
	return (NULL);

node->n = n;
p = *head;

if (idx != 0)
{
	while (p != NULL && i < idx - 1)
	{
	p = p->next;
	i++;
	}
}
if (idx == 0)
{
node->next = *head;
*head = node;
}
else
{
node->next = p->next;
p->next = node;
}

return (node);
}
