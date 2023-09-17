#include "search_algos.h"
/**
* binary_search - function that searches through an array with binary search
* @array: first element of array
* @size: size of array
* @value: value to search
* Return: index where value is located, else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
		{
			printf("%d, ", array[mid]);
		}
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
