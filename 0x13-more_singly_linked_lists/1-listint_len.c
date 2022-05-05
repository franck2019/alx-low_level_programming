#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked list_t list
 * @h: a pointer to the struct list_t
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
