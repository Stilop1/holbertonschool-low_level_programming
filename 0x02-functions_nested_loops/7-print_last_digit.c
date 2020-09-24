#include "holberton.h"

/**
 * print_last_digit - that computes the absolute value of an integer
 * @x: is number
 *
 * Return: Always 0.
 */
int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
		x = -x;
	_putchar(x + 48);
	return (x);
}
