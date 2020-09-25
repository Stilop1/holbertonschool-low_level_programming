#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: a straight line in the terminal.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
