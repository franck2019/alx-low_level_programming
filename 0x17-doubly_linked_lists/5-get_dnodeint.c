#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int size = 0;
	unsigned int i = 0;

	current = head;
	while (current != NULL)
	{
		current = current->next;
		size++;
	}

	if (head == NULL || index >= size)
		return (NULL);

	current = head;
	while (current->next != NULL && i != index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
