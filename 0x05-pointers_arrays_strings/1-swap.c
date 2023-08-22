#include "main.h"
/**
 * swap_int -function swaping values of two integers
 * @a: integer swaps
 * @b: integer swaps
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
