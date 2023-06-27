#include "main.h"
/**
 * _atoi - function converting a string to integer
 *
 * @s: integer
 *
 * Return: may vary
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}

		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		if (result > 0 && result * sign < 0)
		{
			return (0);
		}

		i++;
	}

	return (result * sign);
}
