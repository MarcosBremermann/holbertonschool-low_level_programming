#include "main.h"
/**
 * _strlen - get the length of *s
 *
 * @s: string
 *
 * Return: always length
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
