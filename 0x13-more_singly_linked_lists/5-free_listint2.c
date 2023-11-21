#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
listint_t *node, *p;
if (head != NULL)
{
p = *head;
	while ((node = p) != NULL)
	{
	p = p->next;
	free(node);
	}
	*head = NULL;
}
}
