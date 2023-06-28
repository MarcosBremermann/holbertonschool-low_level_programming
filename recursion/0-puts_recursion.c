#include "main.h"
/**
 * _puts_recursion - print string followed by new line
 *
 * @s: string
 *
 */
void _puts_recursion(char *s)
{
	char a = *s;

	while (a != '\0')
	{
		_putchar(a);
		s++;
		a = *s;
	}

	_putchar('\n');
}
