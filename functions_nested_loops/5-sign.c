#include "main.h"
/**
 * print_sign - print sign of numbers
 *
 * @n: number
 *
 * Return: may vary on the sign of n
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	else 
	{
		_putchar('0');

		return (0);
	}
}
