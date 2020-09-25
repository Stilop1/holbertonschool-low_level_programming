#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 1; x <= 100; x++)
	{
		y = x % 3;
		z = x % 5;
		if (y == 0 && z == 0)
			printf("FizzBuzz");
		else if (z == 0)
			printf("Buzz");
		else if (y == 0)
			printf("Fizz");
		else
			printf("%d", x);
		if (x < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
