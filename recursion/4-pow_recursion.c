#include "main.h"
/**
 * _pow_recursion - function that powers x to y
 *
 * @x: base number
 *
 * @y: exponent number
 *
 * Return: when y < 0 is -1 in any other case is x^y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
