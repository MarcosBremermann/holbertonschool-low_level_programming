#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 *
 * @str: string
 *
 * Return: returns string
 *
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}
