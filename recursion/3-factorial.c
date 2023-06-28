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
	int result;
	int i;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	for (i = 1; i <= n; i++)
	{
		result *= i;
	}

	return (result);
}
