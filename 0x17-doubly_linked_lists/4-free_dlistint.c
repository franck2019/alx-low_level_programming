#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
