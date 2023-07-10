#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates array of integers
 *
 * @min: minimum value
 *
 * @max: maximum value
 *
 * Return: either NULL or arr
 *
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
