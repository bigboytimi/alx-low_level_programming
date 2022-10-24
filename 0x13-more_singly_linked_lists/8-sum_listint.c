#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - return sum of all data
 *
 * @head: head node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

