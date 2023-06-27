#include "main.h"
/**
 * _strcmp - Function that compares strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: returns substraction between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
