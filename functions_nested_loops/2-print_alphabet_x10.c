#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	int num = 0;
	int letter;

	while (num++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar(10);
	}
}
