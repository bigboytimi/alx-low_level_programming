#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - reverse a listint_t
 *
 * @head: head node
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		/* next should point to next node */
		next = (*head)->next;
		/* reversal starts. make the first node point to null */
		(*head)->next = prev;
		/* move forward */
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;
	return (*head);
}
