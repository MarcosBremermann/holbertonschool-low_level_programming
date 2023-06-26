#include "main.h"
/**
 * puts2 - print odd characters in string
 *
 * @str: string
 *
 */
void puts2(char *str)
{
	int length = 0, a = *str;

	while (str[length] != '\0')
	{
		_putchar(a + 2);
	}
	_putchar('\n');
}
