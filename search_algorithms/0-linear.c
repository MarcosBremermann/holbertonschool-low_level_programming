#include "search_algos.h"
/**
 * linear_search - function that searches for a value using linear search
 * @array: array to be searched in
 * @size: size of the array
 * @value: value to be searched
 * Return: index where value is found, NULL if array == NULL, -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
