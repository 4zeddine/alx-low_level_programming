#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
int s = 0;

while (head)
{
s += head->n;
head = head->next;
}
if (head == NULL)
	return (0);
return (s);
}
