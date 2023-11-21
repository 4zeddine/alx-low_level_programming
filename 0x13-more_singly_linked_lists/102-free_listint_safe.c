#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodenum = 0;
	listp_t *p, *node, *add;
	listint_t *curr;

	p = NULL;
	while (*h != NULL)
	{
		node = malloc(sizeof(listp_t));

		if (node == NULL)
			exit(98);

		node->p = (void *)*h;
		node->next = p;
		p = node;

		add = p;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&p);
				return (nodenum);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodenum++;
	}

	*h = NULL;
	free_listp2(&p);
	return (nodenum);
}
