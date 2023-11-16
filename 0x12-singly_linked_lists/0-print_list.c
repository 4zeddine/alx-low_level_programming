#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
int i = 0;

while (h != NULL)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[%u] %s\n", 0, "(nil)");
h = h->next;
i++;
}

return (i);
}
