#include "lists.h"

/**
 * add_node - adds a node to the begginning of a list
 * @head: refrence to head in list
 * @str: input string
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *p;

p = (list_t *)malloc(sizeof(list_t));
if (!p)
return (NULL);

p->str = strdup(str);
p->next = *head;
*head = p;

return (p);
}
