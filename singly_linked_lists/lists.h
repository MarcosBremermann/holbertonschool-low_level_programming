#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 *struct list_s - define list_t
 *
 * @str: string
 *
 * @len: length of string
 *
 * @next: points to next node
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

int _putchar(char c);
char *strdup(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
