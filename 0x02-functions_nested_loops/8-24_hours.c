#include "holberton.h"

/**
 * jack_bauer - that computes the absolute value of an integer
 * @x: is number
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (y = 0; y <= 23; y++)
	{
		for (x = 0; x <= 59; x++)
		{
			_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
			_putchar(58);
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			_putchar(10);
		}
	}
}
