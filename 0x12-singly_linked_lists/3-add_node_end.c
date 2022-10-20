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
	size_t l = 0;

	list_t *end_node;

	list_t *last = *head;

	end_node = malloc(sizeof(list_t));

	end_node->str = strdup(str);
	end_node->len = l;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (last->next)
		last = last->next;
	last->next = end_node;

	return (end_node);
}

