#include "main.h"
/**
 * _strcpy - function copying the string pointed by src
 *
 * @dest: buffer
 *
 * @src: string needing to be copied
 *
 * Return: always value start
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
