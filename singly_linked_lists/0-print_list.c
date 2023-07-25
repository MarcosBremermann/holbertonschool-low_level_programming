#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - function that prints element of list
 *
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes (node_count)
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}

	return (node_count);
}
