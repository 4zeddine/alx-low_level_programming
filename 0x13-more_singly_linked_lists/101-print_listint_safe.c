#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodenum = 0;
	listp_t *p, *node, *add;

	p = NULL;
	while (head != NULL)
	{
		node = malloc(sizeof(listp_t));

		if (node == NULL)
			exit(98);

		node->p = (void *)head;
		node->next = p;
		p = node;

		add = p;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&p);
				return (nodenum);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodenum++;
	}

	free_listp(&p);
	return (nodenum);
}
