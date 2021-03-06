#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
