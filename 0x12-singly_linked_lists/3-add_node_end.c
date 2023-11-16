#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: input string .
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *tmp;
	int i = 0;

	p = (list_t *)malloc(sizeof(list_t));
	if (!p)
	return (NULL);
	p->str = strdup(str);

	while (str[i])
	{
	i++;
	}
	p->len = i;
	p->next = NULL;

	tmp = *head;


	if (!tmp)
	{
	*head = p;
	}
	else
	{
		while (tmp->next)
		{
		tmp = tmp->next;
		}
	tmp->next = p;
	}

	return (*head);
}
