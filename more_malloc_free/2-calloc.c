#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for array
 *
 * @nmemb: array
 *
 * @size: size of bytes
 *
 * Return: either NULL or ptr
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int totalsize;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	totalsize = nmemb * size;

	ptr = malloc(totalsize);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < totalsize; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
