#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes function on each element of array
 *
 * @array: array
 *
 * @size: size of array
 *
 * @action: Pointer to function to be executes on each element
 *
 * Return: always zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
