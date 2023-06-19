#include <stdio.h>
/**
 * main - print abc except e and q
 *
 *
 * Return: always zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	return (0);

}
