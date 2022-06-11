#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * size_dlistint_t - returns the number of elements in the dlistint_t list
 * @h: pointer to pointer to head of list
 *
 * Return: 0 if the list is empty or a number if the list has elements
 */
unsigned int size_dlistint_t(dlistint_t **h)
{
	dlistint_t *current = NULL;
	unsigned int size = 0;

	if (*h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}

	return (size);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to head of list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the integer of the new element to insert
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *prev = NULL, *new = NULL;
	unsigned int i = 0, size = 0; /* the size of the dlistint_t */

	if (*h == NULL && idx != 0)
		return (NULL);

	size = size_dlistint_t(h);

	if (idx > size)
		return (NULL);
	else if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == size - 1)
		add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}

		new->n = n;
		current = *h;
		while (current->next != NULL && i != idx)
		{
			prev = current;
			current = current->next;
			i++;
		}
		new->next = current;
		new->prev = prev;
		prev->next = new;
		current->prev = new;
	}

	return (new);
}
