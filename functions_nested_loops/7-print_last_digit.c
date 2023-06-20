#include "main.h"
/**
 * print_last_digit - print the last digit of number
 *
 * @n: number
 *
 * Return: may vary
 *
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar ((n % 10) + 48);
		return (n % 10);
	}
	else
	{
		_putchar (-(n % 10) + 48);
		return (-(n % 10));
	}
}
