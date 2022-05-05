#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list
 * @head: a pointer of pointer to the struct listint_t
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int number;

	if (head == NULL)
		return (0);

	if (head != NULL)
	{
		current = *head;
		(*head) = (*head)->next;
		number = current->n;
		free(current);
	}
	return (number);
}
