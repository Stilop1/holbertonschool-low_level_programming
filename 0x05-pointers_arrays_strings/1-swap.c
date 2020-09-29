#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: is number
 * @b: is number
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
