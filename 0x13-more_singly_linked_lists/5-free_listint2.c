#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a pointer of pointer to the struct listint_t
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			(*head) = (*head)->next;
			free(current);
		}
	}
}
