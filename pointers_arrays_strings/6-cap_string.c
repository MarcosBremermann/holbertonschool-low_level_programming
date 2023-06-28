#include "main.h"
/**
 * cap_string - function capitalizing words
 *
 * @str: string
 *
 * Return: string capitalized
 *
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
			*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
			*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
			*ptr == '}')
		{
			capitalize_next = 1;
		}
		else if (*ptr >= 'a' && *ptr <= 'z' && capitalize_next)
		{
			*ptr = *ptr - 32;
			capitalize_next = 0;
		}
		ptr++;
	}
	return (str);
}
