#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: is the number of times the character \.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, j;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			if (x == 0)
				_putchar(92);
			if (x > 0)
			{
				for (j = 0; j < x; j++)
					_putchar(' ');
				_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
