#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - delete head node
 *
 * @head: head node
 *
 * Return: if empty list, 0. if not, value in the deleted node
 */

int pop_listint(listint_t **head)
{
	/* declare a pointer to hold the place of head */
	listint_t *temp = *head;
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	
	return (n);
}

