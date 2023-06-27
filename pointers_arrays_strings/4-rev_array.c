#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer to an integer array
 *
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
	}

	for (i = 0; i < n; i++)
	{
		int num = *(a + i);
		int divisor = 1;

		while (num / divisor > 9)
		{
			divisor *= 10;
		}

		while (divisor != 0)
		{
			_putchar('0' + num / divisor);
			num %= divisor;
			divisor /= 10;
		}

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
