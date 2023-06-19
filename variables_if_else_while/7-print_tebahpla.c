#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 *
 * Return: always zero
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
