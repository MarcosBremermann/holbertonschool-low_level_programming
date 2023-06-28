#include "main.h"
/**
 * factorial - function that returns factorial of number
 *
 * @n: factorial
 *
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
