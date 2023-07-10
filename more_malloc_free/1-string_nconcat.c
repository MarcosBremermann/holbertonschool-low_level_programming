#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: number of bytes
 *
 * Return: Either NULL or the concatenation of two strings via concatenated
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int totalLen, i;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	totalLen = len1 + n;
	concatenated = malloc(sizeof(char) * (totalLen + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (; i < totalLen; i++)
	{
		concatenated[i] = s2[i - len1];
	}
	concatenated[totalLen] = '\0';
	return (concatenated);
}
