#include "main.h"
/**
 * _islower - check if c is lowercase
 * @c: character
 * Return: 1 if lowercase 0 else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
