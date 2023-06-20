#include "main.h"
/**
 * times_table - 9 tables
 *
 *
 * Return: always zero
 *
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int res = row * col;

			_putchar('0' + (res));
		}
		col = 0;
		_putchar('\n');
	}
}
