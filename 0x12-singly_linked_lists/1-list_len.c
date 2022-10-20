#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

