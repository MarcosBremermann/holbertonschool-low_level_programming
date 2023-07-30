#include "lists.h"
/**
 * print_dlistint - function that prints all elements of list
 *
 * @h: pointer to head of list
 *
 * Return: Number of nodes in list (count)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
