B#include "holberton.h"

/**
 * _islower - writes the character c to stdout
 *@c: The character to print
 *
 * Return: Always 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
