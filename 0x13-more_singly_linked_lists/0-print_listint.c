#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: a pointer to the struct list_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
