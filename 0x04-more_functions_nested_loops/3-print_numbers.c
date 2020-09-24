#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}	
	_putchar('\n');
}

