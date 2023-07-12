#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 *
 * @array: array
 *
 * @size: number of elements int the array
 *
 * @cmp: pointer to the function to be used in comparative values
 *
 * Return: if no element matches or if size <= 0, -1. Else i
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
