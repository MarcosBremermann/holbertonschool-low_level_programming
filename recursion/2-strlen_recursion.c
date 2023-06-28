#include "main.h"
/**
 * _strlen_recursion - function returning length of string
 *
 * @s: string
 *
 * Return: either 0 or length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
