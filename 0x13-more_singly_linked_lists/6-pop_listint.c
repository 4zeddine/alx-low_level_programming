#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
listint_t *node, *p;
int n;

if (*head == NULL)
	return (0);

p = *head;
n = p->n;
node = p->next;
free(p);
*head = node;

return (n);
}
