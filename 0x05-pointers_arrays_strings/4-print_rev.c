#include "main.h"
#include <string.h>

/**
 * print_rev -> printing reverse strings
 * @s: print string in reverse
 */

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; 1 >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
