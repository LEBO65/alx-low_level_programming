#include "main.h"

/**
 * swap_int -> swap the values of the two intergers
 * @a: boss 1
 * @b: boss 2
 */
void  swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
