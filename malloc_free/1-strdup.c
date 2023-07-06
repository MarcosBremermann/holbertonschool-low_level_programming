#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns pointer newly allocated
 *
 * @str: string
 *
 * Return: either NULL or duplicate
 *
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
