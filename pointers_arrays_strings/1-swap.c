#include "main.h"
/**
 * swap_int - change values
 *
 * @a: equals it's value
 *
 * @b: equals it's value
 *
 */
void swap_int(int *a, int *b)
{
	int changea, changeb;

	changea = *a;
	changeb = *b;
	*a = changeb;
	*b = changea;
}
