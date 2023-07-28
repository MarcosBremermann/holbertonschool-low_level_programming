#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Add a new node at the end of link list
 *
 * @head: double pointer to head of linked list
 *
 * @str: string to be duplicated and add to node's value
 *
 * Return: address of the new element, NULL if it fails
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	new_node->len = length;
	new_node->str = strdup(str);

	if (*head != NULL)
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}

	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
