#include "main.h"
/**
 * puts_half - print half of string
 *
 * @str: string
 *
 */
void puts_half(char *str)
{
	int length;
	int half_length;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	half_length = (length - 1) / 2;

	for (i = half_length + 1; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\0');
}
