#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *node, *p;

node = NULL;
p = NULL;
	while (*head != NULL)
	{
	node = (*head)->next;
	(*head)->next = p;
	p = *head;
	*head = node;
	}
*head = p;

return (*head);
}
