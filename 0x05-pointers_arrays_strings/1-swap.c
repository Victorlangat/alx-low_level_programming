#include "main.h"
/**
 * swap_int: swaps two integers
 * @b - integer to swap
 * @a - integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
