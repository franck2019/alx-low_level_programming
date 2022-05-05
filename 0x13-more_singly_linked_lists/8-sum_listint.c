#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: a pointer to the struct listint_t
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
