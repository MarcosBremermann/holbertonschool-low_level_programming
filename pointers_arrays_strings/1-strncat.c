#include "main.h"
/**
 * _strncat - function concatenating two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: maximum number of bytes to be copied from src
 *
 * Return: may vary
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
