#include "main.h"

/**
 * _puts - function print a string
 *
 * @str: string
 *
 */
void _puts(char *str)
{
	int a = *str;

	_putchar('0' + a);
	_putchar('\n');
}
