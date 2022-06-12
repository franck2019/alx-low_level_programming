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
 * delete_dnodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to head of list
 * @index: the index of the node in the list that should be deleted
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *prev = NULL;
	unsigned int i = 0, size = 0; /* the size of the dlistint_t */

	size = size_dlistint_t(head);

	if (*head == NULL || index >= size)
		return (-1);
	else if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		(current->next)->prev = NULL;
		free(current);
	}
	else
	{
		current = *head;
		while (i < index)
		{
			prev = current;
			current = current->next;
			i++;
		}

		prev->next = current->next;
		if (current->next != NULL)
			(current->next)->prev = prev;
		free(current);
	}

	return (1);
}
