#include "main.h"
/**
 * _isalpha - check if character is alphabetic
 *
 * @c: character
 *
 * Return: 1 if yes 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
