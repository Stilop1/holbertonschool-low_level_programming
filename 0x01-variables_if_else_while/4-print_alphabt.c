#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * betty style doc for function main goes there
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if (x != 'e' && x != 'q')
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
