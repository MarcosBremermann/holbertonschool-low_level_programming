#include <stdio.h>
/**
 * main - print 0 to 9 without printf
 *
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)

	{
		putchar(i + 10);
	}

	putchar ('\n');

	return (0);

}
