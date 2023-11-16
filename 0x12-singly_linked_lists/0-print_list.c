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
char s;

while (h != NULL)
{
if (h->str)
s = h->str;
else
s = "(nil)";
printf("[%lu] %s\n", h->len, s);
h = h->next;
i++;
}

return (i);
}
