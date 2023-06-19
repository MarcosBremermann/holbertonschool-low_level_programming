#include <stdio.h>
/**
 * main - print all possible combinations
 *
 * Return: always zero
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
