#include "holberton.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: is string.
 * @src: is string.
 * Return: a pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{

	int canti;
	int charter;

	for (canti = 0; dest[canti] != '\0'; canti++)
	{
	}
	for (charter = 0; src[charter] != '\0'; charter++)
	{
		dest[canti] = src[charter];
		canti++;
	}
	return (dest);
}
