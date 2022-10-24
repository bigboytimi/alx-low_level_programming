#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - frees a lsit
 *
 * @head: head node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
