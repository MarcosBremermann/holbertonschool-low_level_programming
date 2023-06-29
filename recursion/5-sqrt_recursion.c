#include "main.h"
/**
 * _sqrt_recursion - function that returns natural square root
 *
 * @n: number
 *
 * Return: square root of n
 *
 */
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}

	i++;
	return (_sqrt_recursion(n));
}
