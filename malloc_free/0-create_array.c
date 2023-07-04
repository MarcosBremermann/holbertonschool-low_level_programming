#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates array of chars
 *
 * @size: size of char
 *
 * @c: char
 *
 * Return: NULL if size = 0, NULL if it fails or array
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	unsigned short i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
