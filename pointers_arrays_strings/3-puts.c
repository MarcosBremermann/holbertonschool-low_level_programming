#include "main.h"

/**
 * _puts - function print a string
 *
 * @str: string
 *
 */
void _puts(char *str)
{
	char a = *str;

	while (a != '\0')
	{
		_putchar(a);
		str++;
		a = *str;
	}
	_putchar('\n');
}
