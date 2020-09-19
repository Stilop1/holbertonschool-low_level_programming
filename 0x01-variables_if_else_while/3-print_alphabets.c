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
	char y;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
