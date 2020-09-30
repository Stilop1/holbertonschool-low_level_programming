#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: is a string
 */
void puts2(char *str)
{
	int x;
	int y;

	x = 0;
	while (str[x] != '\0')
		x++;
	for (y = 0; y < x; y = y + 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}

