#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random number task
 *
 * Return: always zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n");
	if (n == 0)
		printf("%d is zero\n");
	if (n < 0)
		printf("%d is negative\n");
	return (0);
}
