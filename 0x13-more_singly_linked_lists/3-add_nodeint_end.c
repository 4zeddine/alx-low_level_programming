#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *p;
(void)p;

node = malloc(sizeof(listint_t));
if (!node)
	return (NULL);
node->n = n;
node->next = NULL;
p = *head;
if (*head == NULL)
	*head = node;
else
{
	while (p->next)
	{
	p = p->next;
	}
p->next = node;
}

return (*head);
}
