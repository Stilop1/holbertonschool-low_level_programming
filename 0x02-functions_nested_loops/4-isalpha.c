#include "holberton.h"

/**
 * _islower - Write a function that checks for alphabetic character.
 * @c: The character to print
 *
 * Return: Always 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if else(c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
