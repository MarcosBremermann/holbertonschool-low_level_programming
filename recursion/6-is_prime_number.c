#include "main.h"
/**
 * is_prime_number - function that identifies prime numbers
 *
 * @n: number
 *
 * Return: 1 if n is prime number, 0 if not
 *
 */
int is_prime_number(int n)
{
	int divisor = 5;

	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	while (divisor * divisor <= n)
	{
		if (n % divisor == 0 || n % (divisor + 2) == 0)
		{
			return (0);
		}

		divisor += 6;
	}

	return (1);
}
