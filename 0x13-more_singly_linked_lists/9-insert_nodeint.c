#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at given position
 *
 * @head: head node
 *
 * @idx: index where the new node should be added
 *
 * @n: value for new node
 *
 * Return: NULL, if fail. Address of new node, on success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* declare a new node and a temp file equal to head for traversal */
	listint_t *newnode, *temp = *head;
	/* an unsigned to loop through each node */
	unsigned int i;

	/* allocate some memory space to newnode and set it's value */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	/*
	 * if index is 0, fix newnode on the first node
	 * make its pointer point to the previous head node
	 */
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}

	/**
	 * traverse until the loop gets to the
	 * index of the node before newnode inde
	 */
	for (i = 0; i < (idx - 1); i++)
	{
		/* if the current node traversed to is empty, return NULL */
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		/* if not empty and not at the desired position, continue traversal */
		temp = temp->next;

	}
	newnode->next = temp->next;

	temp->next = newnode;
	return (newnode);
}
