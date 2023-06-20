#include "main.h"
/**
 *
 *
 *
 */
void jack_bauer(void h, m)
{
	for (h = 0; h < 24; h++)
	{
		_putchar("%02d:%02d", h, m);
		
		usleep(1000000);
	}

	return (0);
}
