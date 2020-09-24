#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9 && y <= 14)
			{
				_putchar((y / 10) + 48);
			}
				_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
