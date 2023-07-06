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
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
