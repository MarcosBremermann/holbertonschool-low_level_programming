#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: either the concatenation of both string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j <= len2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[i + j] = '\0';

	return (concatenated);
}
