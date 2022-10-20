#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: pointer to the head node
 * @str: string member
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);


}

