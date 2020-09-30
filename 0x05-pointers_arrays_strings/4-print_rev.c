#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: is a string
 */
void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (y = x; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
