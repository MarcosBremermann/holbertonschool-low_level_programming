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
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
