#include "main.h"
/**
 * puts2 - print odd characters in string
 *
 * @str: string
 *
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(*str + 2);
	}
	_putchar('\n');
}
