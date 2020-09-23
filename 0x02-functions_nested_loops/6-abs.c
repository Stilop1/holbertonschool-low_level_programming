#include "holberton.h"

/**
 * _abs - that computes the absolute value of an integer
 * @x: is number
 *
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x < 0)
		x = -x;
	else if (x > 0)
		x = x;
			return (x);
}
