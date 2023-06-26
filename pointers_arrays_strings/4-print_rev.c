#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: string
 *
 */
void print_rev(char *s)
{
	int length;

	{
		length = 0;
		while (s[length] != '\0')
		{
			length++;
		}
	}

	if (length <= '\0')
	{
		_putchar (s[--length]);
	}
	_putchar ('\n');
}

