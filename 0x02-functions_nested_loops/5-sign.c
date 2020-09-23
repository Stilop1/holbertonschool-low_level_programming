#include "holberton.h"

/**
 * print_sign - Write a function that checks for alphabetic character.
 * @n: The number to print
 *
 * Return: Always 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar(43);
		return (1);
	}
	else if (n < '0')
	{
		_putchar(45);
		return (-1);
	}
	else if (n == '0')
		_putchar('0');
		return (0);
}
