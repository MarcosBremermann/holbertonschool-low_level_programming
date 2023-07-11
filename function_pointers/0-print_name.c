#include "main.h"
#include <stdlib.h>
/**
 * print_name - function that prints name
 *
 * @name: name to be printed
 *
 * @f: function pointer for printing a single character
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		while (*name != '\0')
		{
			f(&(*name));
			name++;
		}
	}
}
