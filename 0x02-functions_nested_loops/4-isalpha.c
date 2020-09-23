#include "holberton.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: The character to print
 *
 * Return: Always 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
