#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns number of elements in a linked
 *
 * @h: pointer to the head of the linked
 *
 * Return: number of elements (node_count)
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
