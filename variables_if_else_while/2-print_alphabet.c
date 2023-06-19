#include <stdio.h>
/**
 * main - print lowercase characters
 *
 * Return: always zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}


	putchar('\n');

	return (0);

}
