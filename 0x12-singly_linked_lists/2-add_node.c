#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

/**
 * add_node - add a new node at the beginning of a list_t list
 *
 * @head: head node
 *
 * @str: string in the head node
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t l;

	l = 0;

	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (str[l])
	{
		l++;
		new_node->str = strdup(str);
		new_node->len = l;
		new_node->next = (*head);

		*head = new_node;

	}
	return (*head);
}
