#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 */
void rev_string(char *s)
{
	int length = 0, t = *s;

     while (length)
     {
         _putchar(s[--length]);
     }
     _putchar('\n');

     while (s[length] != '\0')
     {
         length++;
     }

     while (s[length] <= '\0')
     {
         _putchar(t);
         _putchar('\n');
     }

}
